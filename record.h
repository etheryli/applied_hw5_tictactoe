#ifndef RECORD_H
#define RECORD_H

#include <QByteArray>
#include <QDataStream>

class Record {
public:
  friend QDataStream &operator>>(QDataStream &string, Record &record);
  friend QDataStream &operator<<(QDataStream &string, const Record &record);

  Record();
  Record(QString color, QByteArray hash);
  ~Record();

  // Setters and getters
  QString getColor() const;
  QByteArray getHash() const;

private:
  QString color;
  QByteArray hashedPassword;
};

#endif // RECORD_H
