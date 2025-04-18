#include<iostream>
using namespace std;
class PaymentMethod{
    public:
        virtual void processPayment(double amount)=0;
};
class CreditCard:public PaymentMethod{
    string cardNumber;
    public:
        CreditCard(string number):cardNumber(number){}
        void processPayment(double amount){
            if(amount>=0){
                cout<<"Payment processed successfully"<<endl;
            }
            else{
                cout<<"Invalid amount so payment cannot be processed"<<endl;
            }
        }
};
class DigitalWallet:public PaymentMethod{
    double balance;
    public:
        DigitalWallet(double balance):balance(balance){}
        void processPayment(double amount){
            balance-=amount;
            cout<<"Amount deducted succssfully"<<endl;
        }
};
int main(){
    string number;
    double balance,amount;
    cout<<"Enter card number for credit card: ";
    cin>>number;
    cout<<"Enter balance for digital wallet: ";
    cin>>balance;
    CreditCard card(number);
    DigitalWallet wallet(balance);
    cout<<endl<<"Enter amount to process for card: ";
    cin>>amount;
    cout<<"Processing payment for card"<<endl;
    card.processPayment(amount);
    cout<<endl<<"Enter amount to process for wa;;et: ";
    cin>>amount;
    cout<<"Processing payment for wallet"<<endl;
    wallet.processPayment(amount);
    return 0;
}