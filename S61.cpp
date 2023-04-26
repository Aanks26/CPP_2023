#include <iostream>
using namespace std;

class Bucket{
public:
    int volume;
    int used;

    Bucket(int v, int u);
    int fill(int V);
    void flush(){used=0;};
};

Bucket::Bucket(int v, int u){
    volume=v; used=u;
}

int Bucket::fill(int V){
    if (V>(volume-used)){
        V=V-(volume-used);
        used=volume;
    }
    else{
        used=used+V;
        V=0;
    }
    return V;
}

int main(){
    setlocale(LC_ALL, "Russian");
    Bucket test_01(12, 3);
    cout<<"1) "<<test_01.volume<<", "<<test_01.used<<"\n";
    int rest=test_01.fill(14);
    cout<<"2) "<<test_01.used<<", "<<rest<<"\n";

    test_01.flush();
    rest=test_01.fill(8);
    cout<<"3) "<<test_01.used<<", "<<rest<<"\n";
}
