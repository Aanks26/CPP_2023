#include <iostream>
using namespace std;

int squared_sum(double A, double B){
    double c;
    c=(A+B)*(A+B);
    return c;
}

int main(){
    setlocale(LC_ALL, "Russian");
    double a, b;
    cout<<"Введите первое число: ";
    cin>>a;
    cout<<"Введите второе число: ";
    cin>>b;
    cout<<"Квадрат суммы равен: "<<squared_sum(a, b);
    return 0;
}
