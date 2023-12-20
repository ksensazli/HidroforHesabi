#ifndef HIDROFOR_H
#define HIDROFOR_H

#include <QDebug>
#include <QQuickItem>

class hidrofor : public QObject
{
    Q_OBJECT
    Q_PROPERTY(double aDegeri READ aDegeriText WRITE aDegeriSet NOTIFY aDegeriChanged)
    Q_PROPERTY(double bDegeri READ bDegeriText WRITE bDegeriSet NOTIFY bDegeriChanged)
    Q_PROPERTY(double tDegeri READ tDegeriText WRITE tDegeriSet NOTIFY tDegeriChanged)
    Q_PROPERTY(double fDegeri READ fDegeriText WRITE fDegeriSet NOTIFY fDegeriChanged)
    Q_PROPERTY(QString sonucDegeriText READ sonucDegeriText WRITE sonucDegeriSet NOTIFY sonucDegeriChanged)

public:
    explicit hidrofor(QObject *parent = nullptr);

    double aDegeriText() const{
        return aDegeri;
    }

    double bDegeriText() const{
        return bDegeri;
    }

    double tDegeriText() const{
        return tDegeri;
    }

    double fDegeriText() const{
        return fDegeri;
    }

    QString sonucDegeriText() const {
        return QString::number(sonucDegeri);
    }

    void aDegeriSet(const double &aDegeriText){
        if(aDegeriText == aDegeri)
            return;
        aDegeri = aDegeriText;
        emit aDegeriChanged(aDegeri);
        qDebug() << "A Değeri:" << aDegeri;
    }

    void bDegeriSet(const double &bDegeriText){
        if(bDegeriText == bDegeri)
            return;
        bDegeri = bDegeriText;
        emit bDegeriChanged(bDegeri);
        qDebug() << "B Değeri:" << bDegeri;
    }

    void tDegeriSet(const double &tDegeriText){
        if(tDegeriText == tDegeri)
            return;
        tDegeri = tDegeriText;
        emit tDegeriChanged(tDegeri);
        qDebug() << "T Değeri:" << tDegeri;
    }

    void fDegeriSet(const double &fDegeriText){
        if(fDegeriText == fDegeri)
            return;
        fDegeri = fDegeriText;
        emit fDegeriChanged(fDegeri);
        qDebug() << "f Değeri:" << fDegeri;
    }

    void sonucDegeriSet(const QString &sonucDegeriText){
        if(sonucDegeriText == QString::number(sonucDegeri))
            return;
        QString::number(sonucDegeri) = sonucDegeriText;
        emit sonucDegeriChanged(QString::number(sonucDegeri));
        qDebug() << "send resultText data is:" << QString::number(sonucDegeri);
    }

    double sonucDegeri;

signals:
    void aDegeriChanged(const double & aDegeri);
    void bDegeriChanged(const double & bDegeri);
    void tDegeriChanged(const double & tDegeri);
    void fDegeriChanged(const double & fDegeri);
    void sonucDegeriChanged(const QString & sonucDegeriText);

public slots:
    void hidroforHesap();

private:
    double aDegeri, bDegeri, tDegeri, fDegeri;

};

#endif // HIDROFOR_H
