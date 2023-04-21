#include <iostream>
#include <math.h>
using namespace std;

int pl(int B, int C){
    float x, S=0;
    double const pi=3.14159265359;
        x=tan(pi/C);
        S=(B*B*C)/(4*x);
        cout<<"Площадь "<<C<<"-угольника со стороной "<<B<<" равна "<<S<<endl;
    return S;}

int main(){
    setlocale(LC_ALL, "Russian");
        int A, N;
        printf("Введите сторону A: ");
        scanf("%d", &A);
        printf("Введите число сторон N: ");
        scanf("%d", &N);
    pl(A, N);
}
