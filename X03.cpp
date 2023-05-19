#include <iostream>
#include <string>
using namespace std;

class Item{
private:
    string Name;
    double Prise;

public:
    double balance_bonus;

    Item(string N, int p);
    double bonus();
    //double use_bonus();
    ~Item(){cout<<"xxx"<<endl;};
};

Item::Item(string n, int p){
    Name = n; Prise = p;
}

double Item::bonus(){
    double a=(Prise/100)*3;
    balance_bonus=balance_bonus+a;
    cout << "Зачислено " << a << " бонусов, текущий баланс: "<<balance_bonus<<endl;
    return balance_bonus;
}

int main(){
    setlocale(LC_ALL, "Russian");
    Item t1("яблоки", 200);
    Item t2("молоко", 120);
    Item t3("конфеты", 300);
    Item t4("масло", 500);
    Item t5("орехи", 1000);
    Item t6("колбаса", 350);
    Item t7("горчица", 45);
    Item t8("хлеб", 50);
    Item t9("чай", 100);
    Item t10("торт", 650);
    Item *arr[10]={&t1, &t2, &t3, &t4, &t5, &t6, &t7, &t8, &t9, &t10};
    for (int a=0; a<10; ++a){
        arr[a]->bonus();
    }
}
/*На данном этапе проблема в том, что balance_bonus при каждом вызове метода сбрасывает значение (вне зависимости от наличия return в реализации).
По моим предположениям, это связано с некорректным описанием метода bonus(), но найти проблему пока не вышло.*/
