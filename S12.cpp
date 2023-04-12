#include <iostream>

using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
int a=1, s=0;
while(a<=1000)
  {
    a=a+4;
    if(a<=1000)
    if(a%7==0)
    {
        s=s+a;
    }
    else
    {
        s=s;
    }
  }
    cout<<"Сумма чисел равна: "<<s<<endl;
    return 0;
}
