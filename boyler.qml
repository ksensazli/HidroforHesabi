import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Window 2.15

Window {
    id:boylerScreen
    width: 640
    height: 640
    visible: true
    color: "#a7acfaff"
    title: qsTr("Boyler Kapasitesi Hesap")

    ComboBox {
        id: secimComboBox
        x: 50
        y: 40
        width: 250
        height: 40
        displayText: "Hesap Yapmak İstediğiniz Tür:"
        currentIndex: -1

        model: ListModel {
            id: model
            ListElement { text: "Apartman Dairesi" }
            ListElement { text: "Hastane" }
            ListElement { text: "Otel" }
            ListElement { text: "Fabrika" }
            ListElement { text: "Konut(Özel)" }
            ListElement { text: "Okul(Yatılı)" }
        }

        onCurrentIndexChanged: {
            secimComboBox.displayText = model.get(currentIndex).text
            boyler.index = model.get(currentIndex).text
            boyler.getIndex()
        }
    }

    Label {
        id: ozelLavaboLabel
        x: 50
        y: 127
        width: 150
        height: 30
        text: qsTr("Özel Lavabo")
        horizontalAlignment: Text.AlignLeft
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: genelLavaboLabel
        x: 50
        y: 163
        width: 150
        height: 30
        text: qsTr("Genel Lavabo")
        horizontalAlignment: Text.AlignLeft
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: banyoLabel
        x: 50
        y: 199
        width: 150
        height: 30
        text: qsTr("Banyo")
        horizontalAlignment: Text.AlignLeft
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: dusLabel
        x: 50
        y: 235
        width: 150
        height: 30
        text: qsTr("Duş")
        horizontalAlignment: Text.AlignLeft
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: mutfakEviyesiLabel
        x: 50
        y: 271
        width: 150
        height: 30
        text: qsTr("Mutfak Eviyesi")
        horizontalAlignment: Text.AlignLeft
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: camasirMakinasiLabel
        x: 50
        y: 307
        width: 150
        height: 30
        text: qsTr("Çamaşır Makinası")
        horizontalAlignment: Text.AlignLeft
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: bulasikMakinasiLabel
        x: 50
        y: 343
        width: 150
        height: 30
        text: qsTr("Bulaşık Makinası")
        horizontalAlignment: Text.AlignLeft
        verticalAlignment: Text.AlignVCenter
    }

    TextField {
        id: ozelLavaboText
        x: 245
        y: 127
        width: 150
        height: 30
        horizontalAlignment: Text.AlignRight
        placeholderText: qsTr("Adet Giriniz")
    }

    TextField {
        id: genelLavaboText
        x: 245
        y: 163
        width: 150
        height: 30
        horizontalAlignment: Text.AlignRight
        placeholderText: qsTr("Adet Giriniz")
    }

    TextField {
        id: banyoText
        x: 245
        y: 199
        width: 150
        height: 30
        horizontalAlignment: Text.AlignRight
        placeholderText: qsTr("Adet Giriniz")
    }

    TextField {
        id: dusText
        x: 245
        y: 235
        width: 150
        height: 30
        horizontalAlignment: Text.AlignRight
        placeholderText: qsTr("Adet Giriniz")
    }

    TextField {
        id: mutfakEviyesiText
        x: 245
        y: 271
        width: 150
        height: 30
        horizontalAlignment: Text.AlignRight
        placeholderText: qsTr("Adet Giriniz")
    }

    TextField {
        id: camasirMakinasiText
        x: 245
        y: 307
        width: 150
        height: 30
        horizontalAlignment: Text.AlignRight
        placeholderText: qsTr("Adet Giriniz")
    }

    TextField {
        id: bulasikMakinasiText
        x: 245
        y: 343
        width: 150
        height: 30
        horizontalAlignment: Text.AlignRight
        placeholderText: qsTr("Adet Giriniz")
    }

    Label {
        id: ozelLavaboSonucLabel
        x: 440
        y: 127
        width: 150
        height: 30
        text: qsTr("")
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: genelLavaboSonucLabel
        x: 440
        y: 163
        width: 150
        height: 30
        text: qsTr("")
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: banyoSonucLabel
        x: 440
        y: 199
        width: 150
        height: 30
        text: qsTr("")
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: dusSonucLabel
        x: 440
        y: 235
        width: 150
        height: 30
        text: qsTr("")
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: mutfakEviyesiSonucLabel
        x: 440
        y: 271
        width: 150
        height: 30
        text: qsTr("")
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: camasirMakinasiSonucLabel
        x: 440
        y: 307
        width: 150
        height: 30
        text: qsTr("")
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: bulasikMakinasiSonucLabel
        x: 440
        y: 343
        width: 150
        height: 30
        text: qsTr("")
        verticalAlignment: Text.AlignVCenter
    }

    function incrementString(string)
    {
           var stringValue = String(parseInt(string));
           return stringValue;
    }

    Button {
        id: hesaplaButon
        x: 245
        y: 391
        width: 345
        height: 30
        text: qsTr("Hesapla")
        onClicked: {
            boyler.ozelLavaboSayisi = ozelLavaboText.text
            boyler.genelLavaboSayisi = genelLavaboText.text
            boyler.banyoSayisi = banyoText.text
            boyler.dusSayisi = dusText.text
            boyler.eviyeSayisi = mutfakEviyesiText.text
            boyler.camasirMakinasiSayisi = camasirMakinasiText.text
            boyler.bulasikMakinasiSayisi = bulasikMakinasiText.text
            boyler.boylerHesap()
            ozelLavaboSonucLabel.text = String(boyler.ozelLavaboSayisi)
            genelLavaboSonucLabel.text = String(boyler.genelLavaboSayisi)
            banyoSonucLabel.text = String(boyler.banyoSayisi)
            dusSonucLabel.text = String(boyler.dusSayisi)
            mutfakEviyesiSonucLabel.text = String(boyler.eviyeSayisi)
            camasirMakinasiSonucLabel.text = String(boyler.camasirMakinasiSayisi)
            bulasikMakinasiSonucLabel.text = String(boyler.bulasikMakinasiSayisi)
            kullanmaFaktoruSonucLabel.text = String(boyler.kullanmaFaktoruInt) + " litre/h"
            depolamaFaktoruSonucLabel.text = String(boyler.depolamaFaktoruInt) + " litre"
            isitmaYukuSonucLabel.text = String(boyler.isitmaYukuInt) + " kcal/h"
            boylerIsitmaYukuSonucLabel.text = String(boyler.boylerIsitmaYukuInt) + " kW"
            boylerDepoHacmiSonucLabel.text = String(boyler.depolamaFaktoruInt) + " litre/h"
        }
    }

    Label {
        id: kullanmaFaktoruLabel
        x: 245
        y: 437
        width: 150
        height: 30
        text: qsTr("Kullanma Faktörü")
        horizontalAlignment: Text.AlignRight
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: isitmaYukuLabel
        x: 245
        y: 473
        width: 150
        height: 30
        text: qsTr("Isıtma Yükü")
        horizontalAlignment: Text.AlignRight
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: depolamaFaktoruLabel
        x: 245
        y: 509
        width: 150
        height: 30
        text: qsTr("Depolama Faktörü")
        horizontalAlignment: Text.AlignRight
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: kullanmaFaktoruSonucLabel
        x: 440
        y: 437
        width: 150
        height: 30
        text: qsTr("")
        horizontalAlignment: Text.AlignLeft
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: isitmaYukuSonucLabel
        x: 440
        y: 473
        width: 150
        height: 30
        text: qsTr("")
        horizontalAlignment: Text.AlignLeft
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: depolamaFaktoruSonucLabel
        x: 440
        y: 509
        width: 150
        height: 30
        text: qsTr("")
        horizontalAlignment: Text.AlignLeft
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: boylerIsitmaYukuLabel
        x: 245
        y: 545
        width: 150
        height: 30
        text: qsTr("Boyler Isıtma Yükü")
        horizontalAlignment: Text.AlignRight
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: boylerDepoHacmiLabel
        x: 245
        y: 581
        width: 150
        height: 30
        text: qsTr("Boyler Depo Hacmi")
        horizontalAlignment: Text.AlignRight
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: boylerIsitmaYukuSonucLabel
        x: 440
        y: 545
        width: 150
        height: 30
        text: qsTr("")
        horizontalAlignment: Text.AlignLeft
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: boylerDepoHacmiSonucLabel
        x: 440
        y: 581
        width: 150
        height: 30
        text: qsTr("")
        horizontalAlignment: Text.AlignLeft
        verticalAlignment: Text.AlignVCenter
    }
}
