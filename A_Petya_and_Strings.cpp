#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{   
char s1[100], s2[100];
cin >> s1;
cin >>s2;
int n=0;

for (int i=0;s1[i]!='\0';i++){
    char a,b;
    a=s1[i];
    b=s2[i];
    if (a>96){
        a=a-32;
    }
    if (b>96){
        b=b-32;
    }
    if(a>b){
        n=-1;
        break;
    }
    if(a<b){
        n=1;
        break;
    }
}
cout << n;
return 0;
}