/*
 * Author: Hung Duc Nguyen
 * Student ID#: 905925175
 * Email: dnhung7@vt.edu
 * Class: ECE 3574
 * Assignment: Homework 5
 *
 * Honor Code: As stated in the syllabus, in working on
 * homework, discussion and cooperative learning are allowed.
 * However, copying or otherwise using another person’s
 * detailed solutions to homework problems is an honor code
 * violation. See syllabus for details. Include the
 * Undergraduate Honor Code pledge in each of your source
 * files as part of the header: “As a Hokie, I will conduct
 * myself with honor and integrity at all times. I will not
 * lie, cheat, or steal, nor will I accept the actions of
 * those who do.”
 *
 * File: Main source file for the GUI program along with logics
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  this->setWindowTitle("Tic-Tac-Toe");

  // Show Login Panel on startup
  ui->pages->setCurrentIndex(0);

  // Disable Logout, Start, and End Menu items
  ui->actionLog_out_user->setEnabled(false);
  ui->actionStart_Game->setEnabled(false);
  ui->actionEnd_Game->setEnabled(false);

  // Read in password database
  QFile passWordFile("passwords.dat");

  // Error if file doesn't exist
  if (!passWordFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
    throw QString("File cannot be opened\n");
  }

  QDataStream instream(&passWordFile);

  // Read into our record QHash
  instream >> m_record;

  // Images
  QDirIterator it(":/images/");
  while (it.hasNext()) {
    // images << QPixmap((((((((((((((((((((it.))))))))))))))))))))
  }
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_actionRegister_user_triggered() {
  // Register User Menu to Panel
  ui->pages->setCurrentIndex(2);

  // Disable Register, Logout, Start, and End Menu items
  ui->actionRegister_user->setEnabled(false);
  ui->actionLog_out_user->setEnabled(false);
  ui->actionStart_Game->setEnabled(false);
  ui->actionEnd_Game->setEnabled(false);
}

void MainWindow::on_actionLog_out_user_triggered() {
  // Logout User Menu to Login Panel
  ui->pages->setCurrentIndex(0);

  // Disable Logout, Start, and End Menu items, Enable Register
  ui->actionRegister_user->setEnabled(true);
  ui->actionLog_out_user->setEnabled(false);
  ui->actionStart_Game->setEnabled(false);
  ui->actionEnd_Game->setEnabled(false);
}

void MainWindow::on_actionExit_triggered() { QApplication::quit(); }

void MainWindow::on_actionStart_Game_triggered() {
  // Start Game Menu to Panel
  ui->pages->setCurrentIndex(3);
  // Enable Logout, End Menu items, and disable Register and Start Menu items
  ui->actionRegister_user->setEnabled(false);
  ui->actionLog_out_user->setEnabled(true);
  ui->actionStart_Game->setEnabled(false);
  ui->actionEnd_Game->setEnabled(true);

  // Reset scores in case of new game
  playerScore = 0;
  computerScore = 0;
  drawScore = 0;
  setUpNewGame();
}

void MainWindow::on_actionEnd_Game_triggered() {
  // End Game Menu to Welcome Panel
  ui->pages->setCurrentIndex(1);

  // Enable Logout, Start Menu, and disable Register and End Menu items
  ui->actionRegister_user->setEnabled(false);
  ui->actionLog_out_user->setEnabled(true);
  ui->actionStart_Game->setEnabled(true);
  ui->actionEnd_Game->setEnabled(false);
}

void MainWindow::on_loginButton_clicked() {
  // Get username and password from fields
  QString username = ui->usernameLoginLineEdit->text();
  QString password = ui->passwordLoginLineEdit->text();

  // Make SHA-1 Hash of password
  QByteArray passwordHash =
      QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha1);

  // Check if username already exist within records
  if (m_record.contains(username)) {
    // Check if hash matches the recorded hash for that user
    if (passwordHash == m_record.value(username).getHash()) {
      // Show Welcome Panel
      ui->pages->setCurrentIndex(1);

      // Enable Logout, Start, and End Menu items, and disable Register
      ui->actionRegister_user->setEnabled(false);
      ui->actionLog_out_user->setEnabled(true);
      ui->actionStart_Game->setEnabled(true);
      ui->actionEnd_Game->setEnabled(false);

      // Clear the text
      ui->usernameLoginLineEdit->clear();
      ui->passwordLoginLineEdit->clear();

      // Set user for Welcome Panel
      usernameToDisplay = username;

      ui->welcomeLabel->setText("Welcome, " + usernameToDisplay);
      return;
    }
  }
  // Else display an error message box
  QMessageBox::critical(this, "Invalid Login",
                        "The user/password combination does not match an "
                        "existing user/password combination.");
}

void MainWindow::on_exitButton_clicked() { QApplication::quit(); }

void MainWindow::on_cancelRegisterButton_clicked() {
  // Register Panel Cancel Button to Login
  ui->pages->setCurrentIndex(0);

  // Disable Logout, Start, and End Menu items, and enable Register
  ui->actionRegister_user->setEnabled(true);
  ui->actionLog_out_user->setEnabled(false);
  ui->actionStart_Game->setEnabled(false);
  ui->actionEnd_Game->setEnabled(false);

  // Clear the text from the fields
  ui->usernameRegisterLineEdit->clear();
  ui->passwordRegisterLineEdit->clear();
  ui->passwordSecondaryRegisterLineEdit->clear();
}

void MainWindow::on_okRegisterButton_clicked() {
  // Get text from each user input field and color index
  QString username = ui->usernameRegisterLineEdit->text();
  QString password = ui->passwordRegisterLineEdit->text();
  QString passwordSecondary = ui->passwordSecondaryRegisterLineEdit->text();
  int colorIndex = ui->playerColorRegisterComboBox->currentIndex();

  // Check if password and secondary password match each other
  if (password != passwordSecondary) {
    QMessageBox::critical(this, "Passwords Do Not Match",
                          "The password fields do not match each other.");
    return;
  }

  // Check if user already exists within database
  if (m_record.contains(username)) {
    QMessageBox::critical(this, "username Already Exists",
                          "A user with that name already exists.");
    return;
  }

  // Insert into record QHash with appropriate strings
  QString tempColor =
      colorIndex == 0
          ? "red"
          : colorIndex == 1 ? "blue" : colorIndex == 2 ? "green" : QString();

  QByteArray tempHash =
      QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha1);

  Record tempRecord(tempColor, tempHash);
  m_record.insert(username, tempRecord);

  // Write updated record QHash to data file
  QFile passwordFile("passwords.dat");

  // Handling for nonexistent file
  if (!passwordFile.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
    throw QString("Can't open file to write\n");
  }

  QDataStream outstream(&passwordFile);
  outstream << m_record;

  // Show login screen
  ui->pages->setCurrentIndex(0);

  // Disable Logout, Start, and End Menu items and enable Register menu item
  ui->actionRegister_user->setEnabled(true);
  ui->actionLog_out_user->setEnabled(false);
  ui->actionStart_Game->setEnabled(false);
  ui->actionEnd_Game->setEnabled(false);

  // Clear the texts from the fields
  ui->usernameRegisterLineEdit->clear();
  ui->passwordRegisterLineEdit->clear();
  ui->passwordSecondaryRegisterLineEdit->clear();
  ui->playerColorRegisterComboBox->setCurrentIndex(0);
}

void MainWindow::on_exitWelcomeButton_clicked() { QApplication::quit(); }

void MainWindow::on_startGameWelcomeButton_clicked() {
  // Start Game Menu to Panel
  ui->pages->setCurrentIndex(3);

  // Enable Logout, End Menu items, and disable Register and Start Menu items
  ui->actionRegister_user->setEnabled(false);
  ui->actionLog_out_user->setEnabled(true);
  ui->actionStart_Game->setEnabled(false);
  ui->actionEnd_Game->setEnabled(true);
  // Reset scores in case of new game
  playerScore = 0;
  computerScore = 0;
  drawScore = 0;

  setUpNewGame();
}

void MainWindow::on_endGameButton_clicked() {
  // Show Welcome Panel
  ui->pages->setCurrentIndex(1);

  // Enable Logout, Start, and End Menu items, and disable Register
  ui->actionRegister_user->setEnabled(false);
  ui->actionLog_out_user->setEnabled(true);
  ui->actionStart_Game->setEnabled(true);
  ui->actionEnd_Game->setEnabled(false);

  ui->welcomeLabel->setText("Welcome, " + usernameToDisplay);
}

void MainWindow::on_tile1_clicked() {
  if (m_board[0] == 0) {
    m_board[0] = 1;
    ui->tile1->setIcon(playerIcon);
    free--;
    checkPlayerWin();
    makeComputerMove();
  }
}

void MainWindow::on_tile2_clicked() {
  if (m_board[1] == 0) {
    m_board[1] = 1;
    ui->tile2->setIcon(playerIcon);
    free--;
    checkPlayerWin();
    makeComputerMove();
  }
}

void MainWindow::on_tile3_clicked() {
  if (m_board[2] == 0) {
    m_board[2] = 1;
    ui->tile3->setIcon(playerIcon);
    free--;
    checkPlayerWin();
    makeComputerMove();
  }
}

void MainWindow::on_tile4_clicked() {
  if (m_board[3] == 0) {
    m_board[3] = 1;
    ui->tile4->setIcon(playerIcon);
    free--;
    checkPlayerWin();
    makeComputerMove();
  }
}

void MainWindow::on_tile5_clicked() {
  if (m_board[4] == 0) {
    m_board[4] = 1;
    ui->tile5->setIcon(playerIcon);
    free--;
    checkPlayerWin();
    makeComputerMove();
  }
}

void MainWindow::on_tile6_clicked() {
  if (m_board[5] == 0) {
    m_board[5] = 1;
    ui->tile6->setIcon(playerIcon);
    free--;
    checkPlayerWin();
    makeComputerMove();
  }
}

void MainWindow::on_tile7_clicked() {
  if (m_board[6] == 0) {
    m_board[6] = 1;
    free--;
    ui->tile7->setIcon(playerIcon);
    checkPlayerWin();
    makeComputerMove();
  }
}

void MainWindow::on_tile8_clicked() {
  if (m_board[7] == 0) {
    m_board[7] = 1;
    free--;
    ui->tile8->setIcon(playerIcon);
    checkPlayerWin();
    makeComputerMove();
  }
}

void MainWindow::on_tile9_clicked() {
  if (m_board[8] == 0) {
    m_board[8] = 1;
    free--;
    ui->tile9->setIcon(playerIcon);
    checkPlayerWin();
    makeComputerMove();
  }
}

void MainWindow::setUpNewGame() {
  QPixmap blankPixmap(":/img/blank.png");
  blank.addPixmap(blankPixmap);

  // Import image based on user's color
  QString userColor = m_record.value(usernameToDisplay).getColor();
  if (userColor == "red") {
    QPixmap playerPixmap(":/img/rx.png");
    QPixmap computerPixmap(":/img/ro.png");
    playerIcon.addPixmap(playerPixmap);
    computerIcon.addPixmap(computerPixmap);
  } else if (userColor == "green") {
    QPixmap playerPixmap(":/img/gx.png");
    QPixmap computerPixmap(":/img/go.png");
    playerIcon.addPixmap(playerPixmap);
    computerIcon.addPixmap(computerPixmap);
  } else if (userColor == "blue") {
    QPixmap playerPixmap(":/img/bx.png");
    QPixmap computerPixmap(":/img/bo.png");
    playerIcon.addPixmap(playerPixmap);
    computerIcon.addPixmap(computerPixmap);
  }

  // Set the tiles to blank for now
  ui->tile1->setIcon(blank);
  ui->tile2->setIcon(blank);
  ui->tile3->setIcon(blank);
  ui->tile4->setIcon(blank);
  ui->tile5->setIcon(blank);
  ui->tile6->setIcon(blank);
  ui->tile7->setIcon(blank);
  ui->tile8->setIcon(blank);
  ui->tile9->setIcon(blank);

  // Set the size to fit
  ui->tile1->setIconSize(blankPixmap.size());
  ui->tile2->setIconSize(blankPixmap.size());
  ui->tile3->setIconSize(blankPixmap.size());
  ui->tile4->setIconSize(blankPixmap.size());
  ui->tile5->setIconSize(blankPixmap.size());
  ui->tile6->setIconSize(blankPixmap.size());
  ui->tile7->setIconSize(blankPixmap.size());
  ui->tile8->setIconSize(blankPixmap.size());
  ui->tile9->setIconSize(blankPixmap.size());

  // Update the board list
  for (int i = 0; i < 9; i++) {
    m_board[i] = 0;
  }

  // Reset free moves
  free = 9;

  ui->computerScoreLabel->setText(QString::number(computerScore));
  ui->playerScoreLabel->setText(QString::number(playerScore));
  ui->drawScoreLabel->setText(QString::number(drawScore));
}

bool MainWindow::checkScore(int playerIndex) {
  int i = playerIndex;
  return (
      (m_board[0] == i && m_board[1] == i && m_board[2] == i) || // First row
      (m_board[3] == i && m_board[4] == i && m_board[5] == i) || // Second row
      (m_board[6] == i && m_board[7] == i && m_board[8] == i) || // Third row
      (m_board[0] == i && m_board[3] == i && m_board[6] == i) || // First col
      (m_board[1] == i && m_board[4] == i && m_board[7] == i) || // Second col
      (m_board[2] == i && m_board[5] == i && m_board[8] == i) || // Third col
      (m_board[0] == i && m_board[4] == i && m_board[8] == i) || // Diagonal 1
      (m_board[2] == i && m_board[4] == i && m_board[6] == i));  // Diagonal 2
}

void MainWindow::checkPlayerWin() {
  // Player win
  if (checkScore(1)) {
    QMessageBox::information(this, "Tic-Tac-Toe", "Congratulations, you win.");
    playerScore++;
    setUpNewGame();
  }
}

void MainWindow::makeComputerMove() {
  if (free > 0 && free < 9) {
    // Keep randomizing until an index that is blank is found
    bool found = false;
    while (!found) {
      int randomIndex = qrand() % 9;

      if (m_board[randomIndex] == 0) {
        m_board[randomIndex] = 2;

        if (randomIndex == 0) {
          ui->tile1->setIcon(computerIcon);
        } else if (randomIndex == 1) {
          ui->tile2->setIcon(computerIcon);
        } else if (randomIndex == 2) {
          ui->tile3->setIcon(computerIcon);
        } else if (randomIndex == 3) {
          ui->tile4->setIcon(computerIcon);
        } else if (randomIndex == 4) {
          ui->tile5->setIcon(computerIcon);
        } else if (randomIndex == 5) {
          ui->tile6->setIcon(computerIcon);
        } else if (randomIndex == 6) {
          ui->tile7->setIcon(computerIcon);
        } else if (randomIndex == 7) {
          ui->tile8->setIcon(computerIcon);
        } else if (randomIndex == 8) {
          ui->tile9->setIcon(computerIcon);
        }
        // Update score and check if computer wins
        free--;

        // Check if computer wins
        if (checkScore(2)) {
          QMessageBox::information(this, "Tic-Tac-Toe",
                                   "Sorry, you lost. Better luck next time");
          computerScore++;
          // Reset board
          setUpNewGame();
        }
        // Break infinite loop
        found = true;
      }
    }
  }
  // check if draw after last move
  if (free == 0) {
    drawScore++;
    QMessageBox::information(this, "Tic-Tac-Toe", "Game drawn.");
    setUpNewGame();
  }
}
