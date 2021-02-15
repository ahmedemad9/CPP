#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
int main(){
    int noOfCakes;  //number of cakes he have eaten
    int cal;
    long long int minMiles=0;
    std::vector<int>cals;
    std::cin>>noOfCakes;
    for(int i=0;i<noOfCakes;i++){
        std::cin>>cal;
        cals.push_back(cal);
    }

    sort(cals.begin(), cals.end(), std::greater<int>());

    for(int i=0;i<noOfCakes;i++){
       minMiles+=pow(2,i) * cals.at(i);
    }
    std::cout<<minMiles;
    return 0;
}
