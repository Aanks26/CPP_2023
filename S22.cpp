#include <iostream>
#include <string>
#include <fstream>
using namespace std;

 int main(){
    ifstream file("output.txt");
    int n=1, b;
       while(file>>b){
	   cout<<n<<". "<<b<<endl;
	   ++n;}
    file.close();
    return 0;

}
