/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRegister_user;
    QAction *actionLog_out_user;
    QAction *actionExit;
    QAction *actionStart_Game;
    QAction *actionEnd_Game;
    QWidget *centralWidget;
    QStackedWidget *pages;
    QWidget *loginPanel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *loginButton;
    QPushButton *exitButton;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QLabel *usernameLoginLabel;
    QLineEdit *usernameLoginLineEdit;
    QLabel *passwordLoginLabel;
    QLineEdit *passwordLoginLineEdit;
    QWidget *welcomePanel;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *startGameWelcomeButton;
    QPushButton *exitWelcomeButton;
    QLabel *welcomeLabel;
    QWidget *registerPanel;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *okRegisterButton;
    QPushButton *cancelRegisterButton;
    QWidget *layoutWidget4;
    QFormLayout *formLayout_2;
    QLabel *usernameRegisterLabel;
    QLineEdit *usernameRegisterLineEdit;
    QLabel *passwordRegisterLabel;
    QLineEdit *passwordRegisterLineEdit;
    QLabel *passwordSecondRegisterLabel;
    QLineEdit *passwordSecondaryRegisterLineEdit;
    QLabel *playerColorRegisterLabel;
    QComboBox *playerColorRegisterComboBox;
    QWidget *gamePanel;
    QPushButton *endGameButton;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout;
    QPushButton *tile4;
    QPushButton *tile6;
    QPushButton *tile3;
    QPushButton *tile8;
    QPushButton *tile5;
    QPushButton *tile2;
    QPushButton *tile1;
    QPushButton *tile9;
    QPushButton *tile7;
    QLabel *scoreLabel;
    QWidget *layoutWidget6;
    QFormLayout *scoresFormLayout;
    QLabel *computerLabel;
    QLabel *computerScoreLabel;
    QLabel *playerLabel;
    QLabel *playerScoreLabel;
    QLabel *drawLabel;
    QLabel *drawScoreLabel;
    QMenuBar *menuBar;
    QMenu *menuUser;
    QMenu *menuGame;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(319, 234);
        actionRegister_user = new QAction(MainWindow);
        actionRegister_user->setObjectName(QStringLiteral("actionRegister_user"));
        actionLog_out_user = new QAction(MainWindow);
        actionLog_out_user->setObjectName(QStringLiteral("actionLog_out_user"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionStart_Game = new QAction(MainWindow);
        actionStart_Game->setObjectName(QStringLiteral("actionStart_Game"));
        actionEnd_Game = new QAction(MainWindow);
        actionEnd_Game->setObjectName(QStringLiteral("actionEnd_Game"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pages = new QStackedWidget(centralWidget);
        pages->setObjectName(QStringLiteral("pages"));
        pages->setGeometry(QRect(10, 10, 301, 191));
        loginPanel = new QWidget();
        loginPanel->setObjectName(QStringLiteral("loginPanel"));
        layoutWidget = new QWidget(loginPanel);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 160, 168, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        loginButton = new QPushButton(layoutWidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));

        horizontalLayout->addWidget(loginButton);

        exitButton = new QPushButton(layoutWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));

        horizontalLayout->addWidget(exitButton);

        layoutWidget1 = new QWidget(loginPanel);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 50, 301, 58));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        usernameLoginLabel = new QLabel(layoutWidget1);
        usernameLoginLabel->setObjectName(QStringLiteral("usernameLoginLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, usernameLoginLabel);

        usernameLoginLineEdit = new QLineEdit(layoutWidget1);
        usernameLoginLineEdit->setObjectName(QStringLiteral("usernameLoginLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, usernameLoginLineEdit);

        passwordLoginLabel = new QLabel(layoutWidget1);
        passwordLoginLabel->setObjectName(QStringLiteral("passwordLoginLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passwordLoginLabel);

        passwordLoginLineEdit = new QLineEdit(layoutWidget1);
        passwordLoginLineEdit->setObjectName(QStringLiteral("passwordLoginLineEdit"));
        passwordLoginLineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordLoginLineEdit);

        pages->addWidget(loginPanel);
        welcomePanel = new QWidget();
        welcomePanel->setObjectName(QStringLiteral("welcomePanel"));
        layoutWidget2 = new QWidget(welcomePanel);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(120, 160, 173, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        startGameWelcomeButton = new QPushButton(layoutWidget2);
        startGameWelcomeButton->setObjectName(QStringLiteral("startGameWelcomeButton"));

        horizontalLayout_2->addWidget(startGameWelcomeButton);

        exitWelcomeButton = new QPushButton(layoutWidget2);
        exitWelcomeButton->setObjectName(QStringLiteral("exitWelcomeButton"));

        horizontalLayout_2->addWidget(exitWelcomeButton);

        welcomeLabel = new QLabel(welcomePanel);
        welcomeLabel->setObjectName(QStringLiteral("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(40, 40, 221, 71));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        welcomeLabel->setFont(font);
        welcomeLabel->setAlignment(Qt::AlignCenter);
        welcomeLabel->setWordWrap(true);
        pages->addWidget(welcomePanel);
        registerPanel = new QWidget();
        registerPanel->setObjectName(QStringLiteral("registerPanel"));
        layoutWidget3 = new QWidget(registerPanel);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(120, 160, 168, 27));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        okRegisterButton = new QPushButton(layoutWidget3);
        okRegisterButton->setObjectName(QStringLiteral("okRegisterButton"));

        horizontalLayout_3->addWidget(okRegisterButton);

        cancelRegisterButton = new QPushButton(layoutWidget3);
        cancelRegisterButton->setObjectName(QStringLiteral("cancelRegisterButton"));

        horizontalLayout_3->addWidget(cancelRegisterButton);

        layoutWidget4 = new QWidget(registerPanel);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 20, 301, 121));
        formLayout_2 = new QFormLayout(layoutWidget4);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        usernameRegisterLabel = new QLabel(layoutWidget4);
        usernameRegisterLabel->setObjectName(QStringLiteral("usernameRegisterLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, usernameRegisterLabel);

        usernameRegisterLineEdit = new QLineEdit(layoutWidget4);
        usernameRegisterLineEdit->setObjectName(QStringLiteral("usernameRegisterLineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, usernameRegisterLineEdit);

        passwordRegisterLabel = new QLabel(layoutWidget4);
        passwordRegisterLabel->setObjectName(QStringLiteral("passwordRegisterLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, passwordRegisterLabel);

        passwordRegisterLineEdit = new QLineEdit(layoutWidget4);
        passwordRegisterLineEdit->setObjectName(QStringLiteral("passwordRegisterLineEdit"));
        passwordRegisterLineEdit->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, passwordRegisterLineEdit);

        passwordSecondRegisterLabel = new QLabel(layoutWidget4);
        passwordSecondRegisterLabel->setObjectName(QStringLiteral("passwordSecondRegisterLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, passwordSecondRegisterLabel);

        passwordSecondaryRegisterLineEdit = new QLineEdit(layoutWidget4);
        passwordSecondaryRegisterLineEdit->setObjectName(QStringLiteral("passwordSecondaryRegisterLineEdit"));
        passwordSecondaryRegisterLineEdit->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, passwordSecondaryRegisterLineEdit);

        playerColorRegisterLabel = new QLabel(layoutWidget4);
        playerColorRegisterLabel->setObjectName(QStringLiteral("playerColorRegisterLabel"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, playerColorRegisterLabel);

        playerColorRegisterComboBox = new QComboBox(layoutWidget4);
        playerColorRegisterComboBox->setObjectName(QStringLiteral("playerColorRegisterComboBox"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, playerColorRegisterComboBox);

        pages->addWidget(registerPanel);
        gamePanel = new QWidget();
        gamePanel->setObjectName(QStringLiteral("gamePanel"));
        endGameButton = new QPushButton(gamePanel);
        endGameButton->setObjectName(QStringLiteral("endGameButton"));
        endGameButton->setGeometry(QRect(200, 160, 89, 25));
        layoutWidget5 = new QWidget(gamePanel);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(0, 0, 171, 171));
        gridLayout = new QGridLayout(layoutWidget5);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tile4 = new QPushButton(layoutWidget5);
        tile4->setObjectName(QStringLiteral("tile4"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tile4->sizePolicy().hasHeightForWidth());
        tile4->setSizePolicy(sizePolicy);
        tile4->setMinimumSize(QSize(50, 50));
        tile4->setMaximumSize(QSize(200, 200));
        tile4->setFlat(true);

        gridLayout->addWidget(tile4, 1, 0, 1, 1);

        tile6 = new QPushButton(layoutWidget5);
        tile6->setObjectName(QStringLiteral("tile6"));
        sizePolicy.setHeightForWidth(tile6->sizePolicy().hasHeightForWidth());
        tile6->setSizePolicy(sizePolicy);
        tile6->setMinimumSize(QSize(50, 50));
        tile6->setMaximumSize(QSize(200, 200));
        tile6->setFlat(true);

        gridLayout->addWidget(tile6, 1, 2, 1, 1);

        tile3 = new QPushButton(layoutWidget5);
        tile3->setObjectName(QStringLiteral("tile3"));
        sizePolicy.setHeightForWidth(tile3->sizePolicy().hasHeightForWidth());
        tile3->setSizePolicy(sizePolicy);
        tile3->setMinimumSize(QSize(50, 50));
        tile3->setMaximumSize(QSize(200, 200));
        tile3->setFlat(true);

        gridLayout->addWidget(tile3, 0, 2, 1, 1);

        tile8 = new QPushButton(layoutWidget5);
        tile8->setObjectName(QStringLiteral("tile8"));
        sizePolicy.setHeightForWidth(tile8->sizePolicy().hasHeightForWidth());
        tile8->setSizePolicy(sizePolicy);
        tile8->setMinimumSize(QSize(50, 50));
        tile8->setMaximumSize(QSize(200, 200));
        tile8->setFlat(true);

        gridLayout->addWidget(tile8, 2, 1, 1, 1);

        tile5 = new QPushButton(layoutWidget5);
        tile5->setObjectName(QStringLiteral("tile5"));
        sizePolicy.setHeightForWidth(tile5->sizePolicy().hasHeightForWidth());
        tile5->setSizePolicy(sizePolicy);
        tile5->setMinimumSize(QSize(50, 50));
        tile5->setMaximumSize(QSize(200, 200));
        tile5->setFlat(true);

        gridLayout->addWidget(tile5, 1, 1, 1, 1);

        tile2 = new QPushButton(layoutWidget5);
        tile2->setObjectName(QStringLiteral("tile2"));
        sizePolicy.setHeightForWidth(tile2->sizePolicy().hasHeightForWidth());
        tile2->setSizePolicy(sizePolicy);
        tile2->setMinimumSize(QSize(50, 50));
        tile2->setMaximumSize(QSize(200, 200));
        tile2->setFlat(true);

        gridLayout->addWidget(tile2, 0, 1, 1, 1);

        tile1 = new QPushButton(layoutWidget5);
        tile1->setObjectName(QStringLiteral("tile1"));
        sizePolicy.setHeightForWidth(tile1->sizePolicy().hasHeightForWidth());
        tile1->setSizePolicy(sizePolicy);
        tile1->setMinimumSize(QSize(50, 50));
        tile1->setMaximumSize(QSize(200, 200));
        tile1->setFlat(true);

        gridLayout->addWidget(tile1, 0, 0, 1, 1);

        tile9 = new QPushButton(layoutWidget5);
        tile9->setObjectName(QStringLiteral("tile9"));
        sizePolicy.setHeightForWidth(tile9->sizePolicy().hasHeightForWidth());
        tile9->setSizePolicy(sizePolicy);
        tile9->setMinimumSize(QSize(50, 50));
        tile9->setMaximumSize(QSize(200, 200));
        tile9->setFlat(true);

        gridLayout->addWidget(tile9, 2, 2, 1, 1);

        tile7 = new QPushButton(layoutWidget5);
        tile7->setObjectName(QStringLiteral("tile7"));
        sizePolicy.setHeightForWidth(tile7->sizePolicy().hasHeightForWidth());
        tile7->setSizePolicy(sizePolicy);
        tile7->setMinimumSize(QSize(50, 50));
        tile7->setMaximumSize(QSize(200, 200));
        tile7->setFlat(true);

        gridLayout->addWidget(tile7, 2, 0, 1, 1);

        scoreLabel = new QLabel(gamePanel);
        scoreLabel->setObjectName(QStringLiteral("scoreLabel"));
        scoreLabel->setGeometry(QRect(200, 20, 67, 17));
        scoreLabel->setAlignment(Qt::AlignCenter);
        layoutWidget6 = new QWidget(gamePanel);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(180, 50, 121, 65));
        scoresFormLayout = new QFormLayout(layoutWidget6);
        scoresFormLayout->setSpacing(6);
        scoresFormLayout->setContentsMargins(11, 11, 11, 11);
        scoresFormLayout->setObjectName(QStringLiteral("scoresFormLayout"));
        scoresFormLayout->setContentsMargins(0, 0, 0, 0);
        computerLabel = new QLabel(layoutWidget6);
        computerLabel->setObjectName(QStringLiteral("computerLabel"));

        scoresFormLayout->setWidget(0, QFormLayout::LabelRole, computerLabel);

        computerScoreLabel = new QLabel(layoutWidget6);
        computerScoreLabel->setObjectName(QStringLiteral("computerScoreLabel"));
        computerScoreLabel->setEnabled(true);
        computerScoreLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        computerScoreLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        scoresFormLayout->setWidget(0, QFormLayout::FieldRole, computerScoreLabel);

        playerLabel = new QLabel(layoutWidget6);
        playerLabel->setObjectName(QStringLiteral("playerLabel"));

        scoresFormLayout->setWidget(1, QFormLayout::LabelRole, playerLabel);

        playerScoreLabel = new QLabel(layoutWidget6);
        playerScoreLabel->setObjectName(QStringLiteral("playerScoreLabel"));
        playerScoreLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        playerScoreLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        scoresFormLayout->setWidget(1, QFormLayout::FieldRole, playerScoreLabel);

        drawLabel = new QLabel(layoutWidget6);
        drawLabel->setObjectName(QStringLiteral("drawLabel"));

        scoresFormLayout->setWidget(2, QFormLayout::LabelRole, drawLabel);

        drawScoreLabel = new QLabel(layoutWidget6);
        drawScoreLabel->setObjectName(QStringLiteral("drawScoreLabel"));
        drawScoreLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        scoresFormLayout->setWidget(2, QFormLayout::FieldRole, drawScoreLabel);

        pages->addWidget(gamePanel);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 319, 22));
        menuUser = new QMenu(menuBar);
        menuUser->setObjectName(QStringLiteral("menuUser"));
        menuGame = new QMenu(menuBar);
        menuGame->setObjectName(QStringLiteral("menuGame"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuUser->menuAction());
        menuBar->addAction(menuGame->menuAction());
        menuUser->addAction(actionRegister_user);
        menuUser->addAction(actionLog_out_user);
        menuUser->addAction(actionExit);
        menuGame->addAction(actionStart_Game);
        menuGame->addAction(actionEnd_Game);

        retranslateUi(MainWindow);

        pages->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionRegister_user->setText(QApplication::translate("MainWindow", "Register User", Q_NULLPTR));
        actionLog_out_user->setText(QApplication::translate("MainWindow", "Logout User", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        actionStart_Game->setText(QApplication::translate("MainWindow", "New Game", Q_NULLPTR));
        actionEnd_Game->setText(QApplication::translate("MainWindow", "End Game", Q_NULLPTR));
        loginButton->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        exitButton->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        usernameLoginLabel->setText(QApplication::translate("MainWindow", "Username", Q_NULLPTR));
        passwordLoginLabel->setText(QApplication::translate("MainWindow", "Password", Q_NULLPTR));
        startGameWelcomeButton->setText(QApplication::translate("MainWindow", "Start Game", Q_NULLPTR));
        exitWelcomeButton->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        welcomeLabel->setText(QString());
        okRegisterButton->setText(QApplication::translate("MainWindow", "Ok", Q_NULLPTR));
        cancelRegisterButton->setText(QApplication::translate("MainWindow", "Cancel", Q_NULLPTR));
        usernameRegisterLabel->setText(QApplication::translate("MainWindow", "Username", Q_NULLPTR));
        passwordRegisterLabel->setText(QApplication::translate("MainWindow", "Password", Q_NULLPTR));
        passwordSecondRegisterLabel->setText(QApplication::translate("MainWindow", "Password (again)", Q_NULLPTR));
        playerColorRegisterLabel->setText(QApplication::translate("MainWindow", "Player color", Q_NULLPTR));
        playerColorRegisterComboBox->clear();
        playerColorRegisterComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Red", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Blue", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Green", Q_NULLPTR)
        );
        endGameButton->setText(QApplication::translate("MainWindow", "End Game", Q_NULLPTR));
        tile4->setText(QString());
        tile6->setText(QString());
        tile3->setText(QString());
        tile8->setText(QString());
        tile5->setText(QString());
        tile2->setText(QString());
        tile1->setText(QString());
        tile9->setText(QString());
        tile7->setText(QString());
        scoreLabel->setText(QApplication::translate("MainWindow", "Score", Q_NULLPTR));
        computerLabel->setText(QApplication::translate("MainWindow", "Computer", Q_NULLPTR));
        computerScoreLabel->setText(QString());
        playerLabel->setText(QApplication::translate("MainWindow", "Player", Q_NULLPTR));
        playerScoreLabel->setText(QString());
        drawLabel->setText(QApplication::translate("MainWindow", "Draw", Q_NULLPTR));
        drawScoreLabel->setText(QString());
        menuUser->setTitle(QApplication::translate("MainWindow", "User", Q_NULLPTR));
        menuGame->setTitle(QApplication::translate("MainWindow", "Game", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
