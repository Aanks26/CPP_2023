#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    int a=12;
    float b=3.1;
    char c='M';
    bool d=false;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;
    float s=a+b;
    float v=a-b;
    float y=a*b;
    float dl=a/b;
    cout<<"Сумма равна: "<<s<<endl;
    cout<<"Разность равна: "<<v<<endl;
    cout<<"Результат умножения равен: "<<y<<endl;
    cout<<"Результат деления равен: "<<dl<<endl;
    return 0;
}
