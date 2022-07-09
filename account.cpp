#include "account.h"
#include "customer.h"
#include "transaction.h"
#include<QDate>
#include<QString>
#include<QTextStream>


Account::Account(QString acc, Customer cus):m_AccountNo(acc), m_AccHolder(cus)
{

}

void Account::deposit(double d){

    //update balance
    m_Balance=+d;
    //create current date object and set to current date
    QDate currentDate = QDate::currentDate();
    //create variable of QString type and assign to Deposit
    QString detail("Deposit");
    //Record the transaction
    Transaction DepTransaction(detail, currentDate);

    //update transaction list
    m_Transactions.append(DepTransaction);
}


double Account::getBalance() const{

    return m_Balance;
}

QString Account::toString() const{
    QString retval;
    QTextStream os(&retval);
    os<< " Account no: " << m_AccountNo
    << "; Account Holder: " <<m_AccHolder.toString()
    << "; Balance: " << getBalance();

    return retval;
}


QString Account::getAccountNo() const{
    return m_AccountNo;
}


QList<Transaction> Account::getTransations() const{

    return m_Transactions;
}


