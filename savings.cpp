#include "savings.h"
#include "account.h"
#include"QTextStream"

QTextStream cout(stdout);

Savings::Savings(QString a, Customer c): Account(a,c)
{

}


bool Savings::withdraw(double d){

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


QString Savings::toString(){


    QString retval;
    QTextStream os(&retval);
    os<<toString()
      <<"Account type: Savings"
      <<"Interest"<<INTEREST;

    return retval;
}
