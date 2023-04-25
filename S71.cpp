#include <iostream>
#include <math.h>
using namespace std;

class CreditCard{
private:
    int Number;
    float Balance;

public:
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

int main() {
    setlocale(LC_ALL, "Russian");
    CreditCard cc1(5032, 200);
    CreditCard * note;
    note = &cc1;
    note->show_balance();
    note->Put(20);
    note->Take(50);
}
