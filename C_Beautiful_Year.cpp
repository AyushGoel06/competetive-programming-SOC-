#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int con=1;
   while(con){
    a++;
    int a1,a2,a3,a4;
    a1=a/1000;
    a2=a/100-a1*10;
    a3=a/10-a2*10-a1*100;
    a4=a%10;
    if (a1 != a2 && a1 != a3 && a1 != a4 && a2 != a3 && a2 != a4 && a3 != a4) {
            cout << a << endl; 
            break;             
        }
   }

return 0;
}