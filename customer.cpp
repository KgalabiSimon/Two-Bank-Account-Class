#include "customer.h"
#include <QString>


Customer::Customer(QString name, QString id): m_Name(name), m_Id(id)
{

}

QString Customer::toString() const{
    QString s("Custmer name: " +m_Name+" and Id No is: "+m_Id);
    return s;
}
