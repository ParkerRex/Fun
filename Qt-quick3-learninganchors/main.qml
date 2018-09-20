import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 500
    height: 500
    color: white
    title: qsTr("Hello World")

    Rectangle {
        id: bigRect
        width: parent.width / 2
        height: parent.height / 2
        color: "green"
        anchors.centerIn: parent
    }
    Purplebox {
        id: rectTopleft
        anchors.right: bigRect.left
        anchors.bottom: bigRect.top
    }
    Purplebox {
        id: rectCenterleft
        anchors.right: bigRect.left
        anchors.verticalCenter: bigRect.verticalCenter
    }
    Purplebox {
        id: rectBottomleft
        anchors.right: bigRect.left
        anchors.top: bigRect.bottom
    }
    Purplebox {
        id: rectTopright
        anchors.left: bigRect.top
        anchors.bottom: bigRect.right
    }
}

