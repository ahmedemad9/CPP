#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h> 

int main(){
    int age=0;
    int input=0;
    int counter=1;
    std::cin>>age;
    std::vector<int>length;
    for(int i=0;i<age;i++){
        std::cin>>input;
        length.push_back(input);
    }
          sort(length.begin(), length.end(), std::greater<int>());
    for(int i=1;i<age;i++){
        if(length.at(i)==length.at(0)){
            counter++;
        }
    }
std::cout<<counter;
    return 0;
}
