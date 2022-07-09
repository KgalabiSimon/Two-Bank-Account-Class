#include <QString>
#include"customer.h"
#include "transaction.h"
#include "account.h"
#include"accountlist.h"
#include <QTextStream>

QTextStream cout(stdout);
QTextStream cin(stdin);


int main()
{

    //Create customers
    Customer A("Tshepo", "38310901921");
    Customer B("Ditebogo", "38310901921");
    Customer C("Basetsana", "38310901921");

    //Create Accounts
    Account accA("1111", A);
    Account accB("22222",B);
    Account accC("33333",C);

    //made deposit
    accA.deposit(66.78);
    accB.deposit(78.66);
    accC.deposit(55.27);


    //create account list
    AccountList acc;

    acc.addAcount(&accA);
    acc.addAcount(&accB);
    acc.addAcount(&accC);


    //acc.displayAccounts(QDate::currentDate());
    //acc.displayList();

    cout<<"Number of accounts with a balance more than 60 is "<<acc.countAccounts(60)<<Qt::endl;

     acc.deleteAll();




    return 0;
}
