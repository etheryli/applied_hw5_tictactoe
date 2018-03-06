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
 * File: Source file for record class holding hash and color
 *        Along with custom stream operator overloadings
 */

#include "record.h"

QDataStream &operator>>(QDataStream &string, Record &record) {
  string >> record.color >> record.hashedPassword;
  return string;
}

QDataStream &operator<<(QDataStream &string, const Record &record) {
  string << record.color << record.hashedPassword;
  return string;
}
Record::Record() : color(QString()), hashedPassword(QByteArray()) {}

Record::Record(QString color, QByteArray passwordHashed)
    : color(color), hashedPassword(passwordHashed) {}

Record::~Record() {}

QString Record::getColor() const { return color; }

QByteArray Record::getHash() const { return hashedPassword; }
