import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Genleşme Tankı Seçimi")

    Label {
        id: debiLabel
        x: 50
        y: 120
        width: 270
        height: 30
        text: qsTr("Maksimum Debi")
        horizontalAlignment: Text.AlignLeft
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: ustBasincLabel
        x: 50
        y: 156
        width: 270
        height: 30
        text: qsTr("Çalışma Üst Basıncı")
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: altBasincLabel
        x: 50
        y: 192
        width: 270
        height: 30
        text: qsTr("Çalışma Alt Basıncı")
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: saltLabel
        x: 50
        y: 228
        width: 270
        height: 30
        text: qsTr("Şalt Sayısı")
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: baslikLabel
        x: 50
        y: 83
        width: 270
        height: 16
        text: qsTr("GENLEŞME TANKI HESAPLAMA")
    }

    TextField {
        id: debiDegeri
        x: 370
        y: 120
        width: 170
        height: 30
        horizontalAlignment: Text.AlignRight
        placeholderText: qsTr("Değer Giriniz")
    }

    TextField {
        id: ustBasincDegeri
        x: 370
        y: 156
        width: 170
        height: 30
        horizontalAlignment: Text.AlignRight
        placeholderText: qsTr("Değer Giriniz")
    }

    TextField {
        id: altBasincDegeri
        x: 370
        y: 192
        width: 170
        height: 30
        horizontalAlignment: Text.AlignRight
        placeholderText: qsTr("Değer Giriniz")
    }

    TextField {
        id: saltDegeri
        x: 370
        y: 228
        width: 170
        height: 30
        horizontalAlignment: Text.AlignRight
        placeholderText: qsTr("Değer Giriniz")
    }

    Button {
        id: hesaplaButon
        x: 370
        y: 288
        width: 170
        height: 30
        text: qsTr("Hesapla")
        onClicked: {
            genlesme.debiDegeri = debiDegeri.text
            genlesme.ustBasincDegeri = ustBasincDegeri.text
            genlesme.altBasincDegeri = altBasincDegeri.text
            genlesme.saltDegeri = saltDegeri.text
            genlesme.genlesmeTankiHesap()
            konvertorluSonucLabel.text = "Frekans Konvertörlü Hidrofor İçin = " + genlesme.konvertorluSonucDegeriText
            konvertorsuzSonucLabel.text = "Frekans Konvertörsüz Hidrofor İçin = " + genlesme.konvertorsuzSonucDegeriText
        }
    }

    Label {
        id: konvertorluSonucLabel
        x: 250
        y: 337
        width: 290
        height: 30
        text: qsTr("Frekans Konvertörlü Hidrofor İçin =")
        horizontalAlignment: Text.AlignRight
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: konvertorsuzSonucLabel
        x: 250
        y: 373
        width: 290
        height: 30
        text: qsTr("Frekans Konvertörsüz Hidrofor İçin =")
        horizontalAlignment: Text.AlignRight
        verticalAlignment: Text.AlignVCenter
    }
}
