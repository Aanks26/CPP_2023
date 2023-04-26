#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    int a=12;
    float b=3.1;
    char c='M';
    bool d=false;
    cout<<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c<<endl<<"d="<<d<<endl;
    cout<<"Сумма равна: "<<a+b<<endl;
    cout<<"Разность равна: "<<a-b<<endl;
    cout<<"Результат умножения равен: "<<a*b<<endl;
    cout<<"Результат деления равен: "<<a/b<<endl;
    return 0;
}
