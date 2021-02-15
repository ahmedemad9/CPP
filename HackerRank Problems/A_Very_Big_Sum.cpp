#include <iostream>

int main(){
    int n;
    long long int sum=0;
    std::cin>>n;
    double a[n];
    for(int i=0;i<=n;i++){
        std::cin>>a[i];
        sum+=a[i];
    }
    std::cout<<std::fixed<<sum;
    return 0;
}
