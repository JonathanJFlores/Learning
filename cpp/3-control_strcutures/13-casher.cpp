#include<iostream>

using namespace std;

int main(){
    int initial_balance = 1000, option, money_entry, withdraw;

    cout<<"\t Welcome to ATM "<<endl;
    cout<<" 1. Deposit money into the account"<<endl;
    cout<<" 2. Withdraw money to the account"<<endl;
    cout<<" 3. Exit"<<endl;
    cout<<" Option: "; cin>>option;

    switch(option){
        case 1:
            cout<<"\n Write the amount of money to enter: ";
            cin>>money_entry;
            initial_balance += money_entry;

            cout<<"\n Money in the account: "<<initial_balance<<endl; break;

        case 2:
            cout<<"\n Write the amount of money you are going to withdraw: ";
            cin>>withdraw;

            if( withdraw > initial_balance ){
                cout<<"\n Your don't have that amount of money"<<endl;
            } else {
                initial_balance -= withdraw;
                
                cout<<"\n Money in the account: "<<initial_balance<<endl; break;
            }
        case 3:
            break;
    }


    return 0;
}