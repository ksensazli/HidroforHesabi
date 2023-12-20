#include <QGuiApplication>
#include <QQmlContext>
#include <QQmlApplicationEngine>
#include "hidrofor.h"
#include "genlesmetanki.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    hidrofor h1;
    genlesmeTanki g1;

    QQmlApplicationEngine engine;
    QQmlContext* context = engine.rootContext();
    context->setContextProperty("hidrofor", &h1);
    context->setContextProperty("genlesme", &g1);

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
