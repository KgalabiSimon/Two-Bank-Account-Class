#ifndef TRANSACTION_H
#define TRANSACTION_H
#include<QString>
#include<QDate>

class Transaction
{
    public:
        Transaction(QString c, QDate date);
        QString toString() const;
        QDate getDate() const;

     private:
        QString m_Description;
        QDate m_Date;

};

#endif // TRANSACTION_H
