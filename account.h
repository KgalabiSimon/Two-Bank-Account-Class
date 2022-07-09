#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<QString>
#include"customer.h"
#include<QList>
#include"transaction.h"


class Account
{
    public:
        Account( QString a, Customer c);
        void deposit(double d);
        bool withdraw(double d);
        QString toString() const;
        QList<Transaction> getTransations() const;
        double getBalance() const;
        QString getAccountNo() const;

    private:
        QString m_AccountNo;
        Customer m_AccHolder;
        double m_Balance;
        QList<Transaction> m_Transactions;


};

#endif // ACCOUNT_H
