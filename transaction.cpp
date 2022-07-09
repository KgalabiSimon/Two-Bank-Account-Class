#include "transaction.h"
#include<QString>
#include<QDate>

Transaction::Transaction(QString code, QDate date ):m_Description(code), m_Date(date)
{

}

QString Transaction::toString() const{
    QString s("Transaction type:" + m_Description+ " date : " + m_Date.toString());

    return s;
}

QDate Transaction::getDate() const{
    return m_Date;
}
