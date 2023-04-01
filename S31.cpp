#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
   string a[10]={"ноль","один","два","три","четыре","пять","шесть","семь","восемь","девять"};
        int number;
        printf("Введите число от 0 до 9: ");
        scanf("%d", &number);
        int len = sizeof(a)/sizeof(a[0]);
      for (int i=0; i<=len; ++i){
        if (i == number){
            cout<<a[i]<<endl;
            return 0;
        }
        if((i<0) || (i>9)) {
            cout<<"Число не входит в диапазон от 0 до 9 "<<endl;
        }
      }
}
