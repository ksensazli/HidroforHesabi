#include <QGuiApplication>
#include <QQmlContext>
#include <QQmlApplicationEngine>
#include "hidrofor.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    hidrofor h1;

    QQmlApplicationEngine engine;
    QQmlContext* context = engine.rootContext();
    context->setContextProperty("h1", &h1);

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
        &app, [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);

    engine.load(url);

    return app.exec();
}
