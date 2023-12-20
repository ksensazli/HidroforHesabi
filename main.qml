import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

Window {
    id:mainScreen
    width: 640
    height: 480
    visible: true
    title: qsTr("Welcome Screen")

    Button {
        id: hidroforButonu
        x: 50
        y: 354
        width: 245
        height: 40
        text: qsTr("Hidrofor Hesabı için Tıklayınız")
        onClicked: {
            var component = Qt.createComponent("hidrofor.qml")
            var window    = component.createObject()
            window.show()
        }
    }

    Button {
        id: hidroforButonu1
        x: 345
        y: 354
        width: 245
        height: 40
        text: qsTr("Genleşme Tankı Seçimi için Tıklayınız")
        onClicked: {
            var component = Qt.createComponent("genlesmeTanki.qml")
            var window    = component.createObject()
            window.show()
        }
    }
}
