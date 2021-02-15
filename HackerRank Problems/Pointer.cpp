#include<iostream>
using namespace std;
#include<cmath>
#include <stdio.h>      
#include <stdlib.h>

void oper(int *a,int *b){
    int t=*a;
    *a= *a + *b;
    *b= abs(t - *b);
   // if(*b<0) *b=- *b;
}
int main(){
    int a,b;
    int *pa=&a , *pb=&b;
    cin>>a>>b;
    oper(pa , pb);
    cout<<a<<endl<<b;
    return 0;
}
