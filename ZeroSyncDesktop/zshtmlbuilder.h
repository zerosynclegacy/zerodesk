#ifndef ZSHTMLBUILDER_H
#define ZSHTMLBUILDER_H

#include <QObject>
#include <QSqlQuery>
#include <QtDebug>
#include <QFile>
#include <QIODevice>
#include <QTextStream>
#include <QMap>
#include <QStringList>
#include "zsdatabase.h"

class ZShtmlBuilder : public QObject
{
    Q_OBJECT

public:
    explicit ZShtmlBuilder(QObject *parent = 0, ZSDatabase *zsdatabase = 0);
    QString formHtml();
    QString getFileFromSubDirectories(QString key);


public slots:
        void slotGenerateHtml(QString);

private:
    ZSDatabase *database;
    QStringList *folderList;
    QMap<QString,QStringList> map;


signals:

public slots:

};

#endif // ZSHTMLBUILDER_H