#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "record.h"
#include <QApplication>
#include <QByteArray>
#include <QCryptographicHash>
#include <QDataStream>
#include <QDir>
#include <QDirIterator>
#include <QFile>
#include <QHash>
#include <QIcon>
#include <QMainWindow>
#include <QMessageBox>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

private slots:
  void on_actionLog_out_user_triggered();

  void on_actionExit_triggered();

  void on_actionStart_Game_triggered();

  void on_actionEnd_Game_triggered();

  void on_actionRegister_user_triggered();

  void on_loginButton_clicked();

  void on_exitButton_clicked();

  void on_cancelRegisterButton_clicked();

  void on_okRegisterButton_clicked();

  void on_exitWelcomeButton_clicked();

  void on_startGameWelcomeButton_clicked();

  void on_endGameButton_clicked();

  void on_tile1_clicked();

  void on_tile2_clicked();

  void on_tile3_clicked();

  void on_tile4_clicked();

  void on_tile5_clicked();

  void on_tile6_clicked();

  void on_tile7_clicked();

  void on_tile8_clicked();

  void on_tile9_clicked();

private:
  Ui::MainWindow *ui;
  QHash<QString, Record> m_record;
  QString usernameToDisplay;

  // Icons
  QIcon blank;
  QIcon playerIcon;
  QIcon computerIcon;

  // Board array of 0 to 9 for each tile
  // int 0 = blank, 1 = player, 2 = computer
  int m_board[9];

  // Keep track of game scores
  int computerScore;
  int playerScore;
  int drawScore;

  // Number of moves left
  int free;

  // Variables for Game Logic
  void setUpNewGame();
  bool checkScore(int playerIndex);
  void checkPlayerWin();
  void makeComputerMove();
};

#endif // MAINWINDOW_H
