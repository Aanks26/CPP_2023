#include <iostream>
#include <math.h>
using namespace std;

class CreditCard{
public:
    int Number;
    float Balance;

    CreditCard(int n, int b);
    void Put(int v);
    void Take(int v);
    void show_balance();
};

CreditCard::CreditCard(int n, int b){
    Number=1234;    Balance=0;
    Number=n;   Balance=b;
}

void CreditCard::Put(int v){

Balance=Balance+v;
    cout<<"Операция пополнения проведена. Текущий баланс карты: "<<Balance<<endl;
}

void CreditCard::Take(int v){
    Balance=Balance-v;
    cout<<"Операция снятия проведена. Текущий баланс карты: "<<Balance<<endl;
}

void CreditCard::show_balance(){
    cout<<"Текущая карта: "<<Number<<endl;
    cout<<"Текущий баланс: "<<Balance<<endl;
}

int Transfer(CreditCard C1, CreditCard C2, int V){
        if ((C1.Balance <= 0)||(C1.Balance < V)){
        cout<<"Недостаточно средств для осуществления перевода"<<endl;
    }
    else if (C1.Number != C2.Number){
        int a, b;
        a=C1.Balance-V;
        b=C2.Balance+V;
        cout<<"Текущий баланс карты-отправителя: "<<a<<endl;
        cout<<"Текущий баланс карты-получателя: "<<b<<endl;}
    else{
        cout<<"Невозможно осуществить перевод: выбрана одна и та же карта"<<endl;
    }

};
    int main() {
        setlocale(LC_ALL, "Russian");
        CreditCard cc1 (5032, 20);
        CreditCard cc2 (2305, 500);
        Transfer (cc1, cc2, 300);
}

