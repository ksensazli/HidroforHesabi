#include "pissupompasi.h"

pisSuPompasi::pisSuPompasi(QObject *parent) : QObject{parent}
{

}

void pisSuPompasi::toplamaHesap()
{
    lavaboPisSu = lavaboBSEN * lavaboSayisi;
    bidePisSu = bideBSEN * bideSayisi;
    dusPisSu = dusBSEN * dusSayisi;
    pisuarPisSu = pisuarBSEN * pisuarSayisi;
    banyoPisSu = banyoBSEN * banyoSayisi;
    eviyePisSu = eviyeBSEN * eviyeSayisi;
    bulasikMakinasiPisSu = bulasikMakinasiBSEN * bulasikMakinasiSayisi;
    camasirMakinasiPisSu = camasirMakinasiBSEN * camasirMakinasiSayisi;
    wcPisSu = wcBSEN * wcSayisi;
    yerSuzgeci5070PisSu = yerSuzgeci5070BSEN * yerSuzgeci5070Sayisi;
    yerSuzgeci100PisSu = yerSuzgeci100BSEN * yerSuzgeci100Sayisi;

    toplam = (lavaboSayisi + bideSayisi + dusSayisi + pisuarSayisi + banyoSayisi + eviyeSayisi + bulasikMakinasiSayisi + camasirMakinasiSayisi + wcSayisi + yerSuzgeci5070Sayisi + yerSuzgeci100Sayisi);
    toplamPisSu = (lavaboPisSu + bidePisSu + dusPisSu + pisuarPisSu + banyoPisSu + eviyePisSu + bulasikMakinasiPisSu + camasirMakinasiPisSu + wcPisSu + yerSuzgeci5070PisSu + yerSuzgeci100PisSu);

    qDebug() << "toplam =" << toplam;
    qDebug() << "toplamPisSu =" << toplamPisSu;
}

void pisSuPompasi::setAralikliKullanim()
{
    katSayi = 0.5;
    qDebug() << "kat sayı =" << katSayi;
}

void pisSuPompasi::setSikKullanim()
{
    katSayi = 0.7;
    qDebug() << "kat sayı =" << katSayi;
}

void pisSuPompasi::setYogunKullanim()
{
    katSayi = 1.0;
    qDebug() << "kat sayı =" << katSayi;
}

void pisSuPompasi::setOzelKullanim()
{
    katSayi = 1.2;
    qDebug() << "kat sayı =" << katSayi;
}
