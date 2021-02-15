#include<iostream>
#include <algorithm>
int main(){
    long  int sumA=0.0;
    long  int sumB=0.0;
    long  int a[5];
    for(int i=0;i<5;i++){
        std::cin>>a[i];
    }
        std::sort(std::begin(a), std::end(a));

    for(int i=0;i<4;i++){
        sumA+=a[i];
    }
        for(int i=1;i<5;i++){
        sumB+=a[i];
    }
       
    std::cout<<sumA<<" "<<sumB;
}
