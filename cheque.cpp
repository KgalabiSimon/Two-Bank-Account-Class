#include "cheque.h"

Cheque::Cheque(QString a, Customer c, double o):Account(a,c),m_Overdraft(o)
{

}


bool Cheque::withdraw(double d){
    //declare poniter
    //declare variable balance and store th value
    //assign pointer to the balance object
    double balance = getBalance();
    double* ptr = &balance;
    //check if the are sufficient funds
    if(balance>d){
         //subtract paramter d from balance
         *ptr = *ptr-balance;
         return true;
    //else return false
    }else{
        return true;
    }


}


QString Cheque::toString() const{

    QString retval;
    QTextStream os(&retval);
    os<<toString()
      <<"Account type: Cheque"
      <<"Interest"<<m_Overdraft;

    return retval;

}


