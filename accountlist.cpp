#include "accountlist.h"
#include <QTextStream>

QTextStream coutt(stdout);
QTextStream cinn(stdin);

//AccountList::AccountList()
//{

//}

void AccountList::addAcount(Account* a){

    append(a);
}






void AccountList::deleteAll(){
    qDeleteAll(*this);
    clear();
    coutt<<"All accounts deleted"<<Qt::endl;
}

//AccountList::AccountList(): QList<Account *>(){


//}


void AccountList::displayAccounts(QDate d){

    //loop through the container list
    for (int i=0 ; i<size(); ++i){

          //assign list to the list transaction
           QList<Transaction> list = at(i)->getTransations();

           //Loop throough the list transactions
            for(int j=0;i<size(); i++){

                 //compare the jth element with the date
                if(list.at(j).getDate()==d){

                    //print the element at the ith index
                    coutt<<at(i)->toString()<<Qt::endl;
                }else{
                    coutt<<"Did not find any accounts";
                }
            }


     }

}

void AccountList::displayList() const{

    //loop through the container list
    for(int i=0; i<size(); ++i){

        //print the element at the ith index
        coutt<<at(i)->toString()<<Qt::endl;
    }
}


int AccountList::countAccounts(double d){

    //declare int variable and initialise to o
    int count =0;
    //loop through the container list
        for(int i=0;i<size();i++){

            double balance = at(i)->getBalance();
            //check if ith account's current balance
            if(balance>d){
                //increment count by 1
                count++;
            }else{

                return count;
            }

        }

        return count;
}

