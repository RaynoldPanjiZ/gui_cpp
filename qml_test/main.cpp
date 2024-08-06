#include <QtQuick>
#include <QDebug>
int main(int argc, char *argv[]){
	QGuiApplication app(argc, argv);
	QQuickView view;
	view.setSource(QUrl("main.qml"));
	view.show();
	qDebug() << "Excellent!";	
	return app.exec();
}
