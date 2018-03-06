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
 * File: Main file that runs the game program
 */

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  MainWindow w;
  w.show();

  return a.exec();
}
