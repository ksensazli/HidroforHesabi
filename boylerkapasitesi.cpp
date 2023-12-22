#include "boylerkapasitesi.h"

boylerKapasitesi::boylerKapasitesi(QObject *parent) : QObject{parent}
{

}

void boylerKapasitesi::getIndex()
{
    //qDebug() << "index is:" << index;

    if(index == "Apartman Dairesi")
    {
        ozelLavaboKatSayisi = 7.5;
        genelLavaboKatSayisi = 10;
        banyoKatSayisi = 200;
        dusKatSayisi = 250;
        eviyeKatSayisi = 35;
        camasirMakinasiKatSayisi = 70;
        bulasikMakinasiKatSayisi = 40;
        kullanmaKatSayisi = 0.30;
        depolamaKatSayisi = 1.25;
    }

    else if(index == "Hastane")
    {
        ozelLavaboKatSayisi = 7.5;
        genelLavaboKatSayisi = 20;
        banyoKatSayisi = 250;
        dusKatSayisi = 250;
        eviyeKatSayisi = 70;
        camasirMakinasiKatSayisi = 75;
        bulasikMakinasiKatSayisi = 300;
        kullanmaKatSayisi = 0.25;
        depolamaKatSayisi = 0.6;
    }

    else if(index == "Otel")
    {
        ozelLavaboKatSayisi = 7.5;
        genelLavaboKatSayisi = 30;
        banyoKatSayisi = 250;
        dusKatSayisi = 250;
        eviyeKatSayisi = 70;
        camasirMakinasiKatSayisi = 75;
        bulasikMakinasiKatSayisi = 400;
        kullanmaKatSayisi = 0.25;
        depolamaKatSayisi = 0.80;
    }

    else if(index == "Fabrika")
    {
        ozelLavaboKatSayisi = 7.5;
        genelLavaboKatSayisi = 40;
        banyoKatSayisi = 0;
        dusKatSayisi = 750;
        eviyeKatSayisi = 70;
        camasirMakinasiKatSayisi = 0;
        bulasikMakinasiKatSayisi = 200;
        kullanmaKatSayisi = 0.40;
        depolamaKatSayisi = 1;
    }

    else if(index == "Konut(Özel)")
    {
        ozelLavaboKatSayisi = 7.5;
        genelLavaboKatSayisi = 0;
        banyoKatSayisi = 250;
        dusKatSayisi = 250;
        eviyeKatSayisi = 35;
        camasirMakinasiKatSayisi = 70;
        bulasikMakinasiKatSayisi = 40;
        kullanmaKatSayisi = 0.30;
        depolamaKatSayisi = 0.70;
    }

    else if(index == "Okul(Yatılı)")
    {
        ozelLavaboKatSayisi = 7.5;
        genelLavaboKatSayisi = 50;
        banyoKatSayisi = 0;
        dusKatSayisi = 250;
        eviyeKatSayisi = 35;
        camasirMakinasiKatSayisi = 0;
        bulasikMakinasiKatSayisi = 200;
        kullanmaKatSayisi = 0.40;
        depolamaKatSayisi = 1;
    }

    //qDebug() << "Kat Sayılar Sırasıyla:" << ozelLavaboKatSayisi << genelLavaboKatSayisi << banyoKatSayisi << dusKatSayisi << eviyeKatSayisi << camasirMakinasiKatSayisi << bulasikMakinasiKatSayisi << kullanmaKatSayisi << depolamaKatSayisi;

}

void boylerKapasitesi::boylerHesap()
{
    ozelLavaboSayisi = ozelLavaboKatSayisi * ozelLavaboSayisi;
    genelLavaboSayisi = genelLavaboKatSayisi * genelLavaboSayisi;
    banyoSayisi = banyoKatSayisi * banyoSayisi;
    dusSayisi = dusKatSayisi * dusSayisi;
    eviyeSayisi = eviyeKatSayisi * eviyeSayisi;
    camasirMakinasiSayisi = camasirMakinasiKatSayisi * camasirMakinasiSayisi;
    bulasikMakinasiSayisi = bulasikMakinasiKatSayisi * bulasikMakinasiSayisi;

    kullanmaFaktoru = ((ozelLavaboSayisi + genelLavaboSayisi + banyoSayisi + dusSayisi + eviyeSayisi + camasirMakinasiSayisi + bulasikMakinasiSayisi) * kullanmaKatSayisi);
    kullanmaFaktoruInt = (int)(kullanmaFaktoru + 0.5);

    isitmaYuku = (kullanmaFaktoru * (60-10));
    isitmaYukuInt = (int)(isitmaYuku + 0.5);

    depolamaFaktoru = (depolamaKatSayisi * kullanmaFaktoru);
    depolamaFaktoruInt = (int)(depolamaFaktoru + 0.5);

    boylerIsitmaYuku = (isitmaYuku / 860);
    boylerIsitmaYukuInt = (int)(boylerIsitmaYuku + 0.5);

    //qDebug() << "Kullanma Faktörü:" << (int)(kullanmaFaktoru + 0.5);
    //qDebug() << "Isıtma Yükü:" << (int)(isitmaYuku + 0.5);
    //qDebug() << "Depolama Faktörü:" << (int)(depolamaFaktoru + 0.5);
    //qDebug() << "Boyler Isıtma Yükü:" << (int)(boylerIsitmaYuku + 0.5);
}


