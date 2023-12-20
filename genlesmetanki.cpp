#include "genlesmetanki.h"

genlesmeTanki::genlesmeTanki(QObject *parent) : QObject{parent}
{

}

void genlesmeTanki::genlesmeTankiHesap()
{
    konvertorluSonucDegeri = (int)(1 + 0.33 * debiDegeri * (ustBasincDegeri + 1) / (ustBasincDegeri - altBasincDegeri) / saltDegeri * 1000);
    konvertorsuzSonucDegeri = (int)(0.1 * debiDegeri * (ustBasincDegeri + 1) / (ustBasincDegeri - altBasincDegeri) / saltDegeri * 1000);
    qDebug() << "Konvertörlü Sonuç Değeri:" << konvertorluSonucDegeri;
    qDebug() << "Konvertörsüz Sonuç Değeri:" << konvertorsuzSonucDegeri;
}
