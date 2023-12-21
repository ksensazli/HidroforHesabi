#ifndef BOYLERKAPASITESI_H
#define BOYLERKAPASITESI_H

#include <QDebug>
#include <QObject>

class boylerKapasitesi : public QObject
{
    Q_OBJECT
public:
    explicit boylerKapasitesi(QObject *parent = nullptr);

signals:
};

#endif // BOYLERKAPASITESI_H
