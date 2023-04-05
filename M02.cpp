#include <iostream>
#include <math.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int A, N;
    float x, S=0;
    double const pi=3.14159265359;
    printf("Введите сторону A: ");
    scanf("%d", &A);
    printf("Введите число сторон N: ");
    scanf("%d", &N);
    x=tan(pi/N);
    S=(A*A*N)/(4*x);
    cout<<"Площадь "<<N<<"-угольника со стороной "<<A<<" равна "<<S<<endl;
    return 0;
}
