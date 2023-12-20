#ifndef GENLESMETANKI_H
#define GENLESMETANKI_H

#include <QDebug>
#include <QObject>

class genlesmeTanki : public QObject
{
    Q_OBJECT
    Q_PROPERTY(double debiDegeri READ debiDegeriText WRITE debiDegeriSet NOTIFY debiDegeriChanged)
    Q_PROPERTY(double ustBasincDegeri READ ustBasincDegeriText WRITE ustBasincDegeriSet NOTIFY ustBasincDegeriChanged)
    Q_PROPERTY(double altBasincDegeri READ altBasincDegeriText WRITE altBasincDegeriSet NOTIFY altBasincDegeriChanged)
    Q_PROPERTY(double saltDegeri READ saltDegeriText WRITE saltDegeriSet NOTIFY saltDegeriChanged)
    Q_PROPERTY(QString konvertorluSonucDegeriText READ konvertorluSonucDegeriText WRITE konvertorluSonucDegeriSet NOTIFY konvertorluSonucDegeriChanged)
    Q_PROPERTY(QString konvertorsuzSonucDegeriText READ konvertorsuzSonucDegeriText WRITE konvertorsuzSonucDegeriSet NOTIFY konvertorsuzSonucDegeriChanged)

public:
    explicit genlesmeTanki(QObject *parent = nullptr);

    double debiDegeriText() const{
        return debiDegeri;
    }

    double ustBasincDegeriText() const{
        return ustBasincDegeri;
    }

    double altBasincDegeriText() const{
        return altBasincDegeri;
    }

    double saltDegeriText() const{
        return saltDegeri;
    }

    QString konvertorluSonucDegeriText() const {
        return QString::number(konvertorluSonucDegeri);
    }

    QString konvertorsuzSonucDegeriText() const {
        return QString::number(konvertorsuzSonucDegeri);
    }

    void debiDegeriSet(const double &debiDegeriText){
        if(debiDegeriText == debiDegeri)
            return;
        debiDegeri = debiDegeriText;
        emit debiDegeriChanged(debiDegeri);
        qDebug() << "Debi Değeri:" << debiDegeri;
    }

    void ustBasincDegeriSet(const double &ustBasincDegeriText){
        if(ustBasincDegeriText == ustBasincDegeri)
            return;
        ustBasincDegeri = ustBasincDegeriText;
        emit ustBasincDegeriChanged(ustBasincDegeri);
        qDebug() << "Üst Basınç Değeri:" << ustBasincDegeri;
    }

    void altBasincDegeriSet(const double &altBasincDegeriText){
        if(altBasincDegeriText == altBasincDegeri)
            return;
        altBasincDegeri = altBasincDegeriText;
        emit altBasincDegeriChanged(altBasincDegeri);
        qDebug() << "Alt Basınç Değeri:" << altBasincDegeri;
    }

    void saltDegeriSet(const double &saltDegeriText){
        if(saltDegeriText == saltDegeri)
            return;
        saltDegeri = saltDegeriText;
        emit saltDegeriChanged(saltDegeri);
        qDebug() << "Şalt Sayısı:" << saltDegeri;
    }

    void konvertorluSonucDegeriSet(const QString &konvertorluSonucDegeriText){
        if(konvertorluSonucDegeriText == QString::number(konvertorluSonucDegeri))
            return;
        QString::number(konvertorluSonucDegeri) = konvertorluSonucDegeriText;
        emit konvertorluSonucDegeriChanged(QString::number(konvertorluSonucDegeri));
        qDebug() << "Konvertörlü Sonuç Değeri:" << QString::number(konvertorluSonucDegeri);
    }

    void konvertorsuzSonucDegeriSet(const QString &konvertorsuzSonucDegeriText){
        if(konvertorsuzSonucDegeriText == QString::number(konvertorsuzSonucDegeri))
            return;
        QString::number(konvertorsuzSonucDegeri) = konvertorsuzSonucDegeriText;
        emit konvertorsuzSonucDegeriChanged(QString::number(konvertorsuzSonucDegeri));
        qDebug() << "Konvertörsüz Sonuç Değeri:" << QString::number(konvertorsuzSonucDegeri);
    }

signals:
    void debiDegeriChanged(const double & debiDegeri);
    void ustBasincDegeriChanged(const double & ustBasincDegeri);
    void altBasincDegeriChanged(const double & altBasincDegeri);
    void saltDegeriChanged(const double & saltDegeri);
    void konvertorluSonucDegeriChanged(const QString & konvertorluSonucDegeriText);
    void konvertorsuzSonucDegeriChanged(const QString & konvertorsuzSonucDegeriText);

public slots:
    void genlesmeTankiHesap();

private:
    double debiDegeri, ustBasincDegeri, altBasincDegeri, saltDegeri, konvertorluSonucDegeri, konvertorsuzSonucDegeri;
};

#endif // GENLESMETANKI_H
