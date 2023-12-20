import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hidrofor Hesabı")

    Label {
        id: aileSayisiLabel
        x: 50
        y: 120
        width: 270
        height: 30
        text: qsTr("A ... Aile Sayısı")
        horizontalAlignment: Text.AlignLeft
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: bireySayisiLabel
        x: 50
        y: 156
        width: 270
        height: 30
        text: qsTr("B ... Birey Sayısı")
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: suTuketimiLabel
        x: 50
        y: 192
        width: 270
        height: 30
        text: qsTr("T ... Bireyin Ortalama Günlük Su Tüketimi")
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: kullanimFaktoruLabel
        x: 50
        y: 228
        width: 270
        height: 30
        text: qsTr("F ... Eş Zaman Kullanım Faktörü")
        verticalAlignment: Text.AlignVCenter
    }

    Label {
        id: formulLabel
        x: 50
        y: 83
        width: 270
        height: 16
        text: qsTr("HİDROFOR DEBİSİ (m³/h) = Q = A x B x T x f")
    }

    TextField {
        id: aDegeri
        x: 370
        y: 120
        width: 170
        height: 30
        horizontalAlignment: Text.AlignRight
        placeholderText: qsTr("Değer Giriniz ... (A)")
        validator: RegExpValidator { regExp: /[0-9A-F]+/ }
    }

    TextField {
        id: bDegeri
        x: 370
        y: 156
        width: 170
        height: 30
        horizontalAlignment: Text.AlignRight
        placeholderText: qsTr("Değer Giriniz ... (B)")
        validator: RegExpValidator { regExp: /[0-9A-F]+/ }
    }

    TextField {
        id: tDegeri
        x: 370
        y: 192
        width: 170
        height: 30
        horizontalAlignment: Text.AlignRight
        placeholderText: qsTr("Değer Giriniz ... (T)")
        validator: RegExpValidator { regExp: /[0-9A-F]+/ }
    }

    TextField {
        id: fDegeri
        x: 370
        y: 228
        width: 170
        height: 30
        horizontalAlignment: Text.AlignRight
        placeholderText: qsTr("Değer Giriniz ... (f)")
    }

    Button {
        id: hesaplaButon
        x: 370
        y: 288
        width: 170
        height: 30
        text: qsTr("Hesapla")
        onClicked: {
            hidrofor.aDegeri = aDegeri.text
            hidrofor.bDegeri = bDegeri.text
            hidrofor.tDegeri = tDegeri.text
            hidrofor.fDegeri = fDegeri.text
            hidrofor.hidroforHesap()
            sonucLabel.text = "HİDROFOR DEBİSİ (m³/h) = " + hidrofor.sonucDegeriText + " m³/h"
        }
    }

    Label {
        id: sonucLabel
        x: 304
        y: 337
        width: 236
        height: 30
        text: qsTr("HİDROFOR DEBİSİ (m³/h)")
        horizontalAlignment: Text.AlignRight
        verticalAlignment: Text.AlignVCenter
    }
}
