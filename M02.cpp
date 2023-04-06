#include <iostream>
#include <math.h>
using namespace std;

    float x, S=0;
    double const pi=3.14159265359;
    int pl(int A, int N){
    x=tan(pi/N);
    S=(A*A*N)/(4*x);
    cout<<"Площадь "<<N<<"-угольника со стороной "<<A<<" равна "<<S<<endl;
    }
    int main() {
    setlocale(LC_ALL, "Russian");
    int A, N;
    printf("Введите сторону A: ");
    scanf("%d", &A);
    printf("Введите число сторон N: ");
    scanf("%d", &N);
    pl(A, N);
}
