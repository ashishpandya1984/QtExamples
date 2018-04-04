#ifndef IWEBSERVICEHANDLER_H
#define IWEBSERVICEHANDLER_H

#include <QObject>

class IWebServiceHandler : public QObject
{
public:
    IWebServiceHandler();

    virtual ~IWebServiceHandler();
};

#endif // IWEBSERVICEHANDLER_H
