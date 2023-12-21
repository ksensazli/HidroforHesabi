#include "genlesmetanki.h"

extern double sonucDeger;

genlesmeTanki::genlesmeTanki(QObject *parent) : QObject{parent}
{

}

void genlesmeTanki::genlesmeTankiHesap()
{
    //qDebug() << "Çekilen veri:" << sonucDeger;

    konvertorluSonucDegeri = (int)(1 + 0.33 * debiDegeri * (ustBasincDegeri + 1) / (ustBasincDegeri - altBasincDegeri) / saltDegeri * 1000);
    konvertorsuzSonucDegeri = (int)(0.1 * debiDegeri * (ustBasincDegeri + 1) / (ustBasincDegeri - altBasincDegeri) / saltDegeri * 1000);
    //qDebug() << "Konvertörlü Sonuç Değeri:" << konvertorluSonucDegeri;
    //qDebug() << "Konvertörsüz Sonuç Değeri:" << konvertorsuzSonucDegeri;

    if(sonucDeger != 0)
        debiDegeri = sonucDeger;
}
