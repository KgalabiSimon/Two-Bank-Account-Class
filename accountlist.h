#ifndef ACCOUNTLIST_H
#define ACCOUNTLIST_H
#include"account.h"
#include<QDate>


class AccountList: public QList<Account*>
{
public:
    void addAcount(Account* a);
    void displayList() const;
    void displayAccounts(QDate d);
    int countAccounts(double d);
    void deleteAll();
};

#endif // ACCOUNTLIST_H
