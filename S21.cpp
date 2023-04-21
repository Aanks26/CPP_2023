#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int A,B;
    printf("Введите число A: ");
    scanf("%d", &A);
    printf("Введите число B (оно должно быть больше числа A): ");
    scanf("%d", &B);
        if (B<A){
            printf("Число A больше числа B");}
    ofstream out;
    out.open("output.txt");
        for (int i=A; i<=B; ++i){
            out<<i*3<<endl;}
    return 0;
    out.close();
}
