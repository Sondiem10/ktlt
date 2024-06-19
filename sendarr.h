#ifndef SENDARR_H
#define SENDARR_H

#include <QObject>

class SendArr : public QObject
{
    Q_OBJECT
public:
    explicit SendArr(QObject *parent = nullptr);

signals:
};

#endif // SENDARR_H
