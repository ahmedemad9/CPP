#include <iostream>

int comparator(int a,int b){
    int most;
 if(a>b){
     most=1;
 }
 else if(a<b){
     most=2;
 }
 else if(a==b){
     most=0;
 }
 return most;
}

int main(){
    int a[3];
    int b[3];
    int aScore=0;
    int bScore=0;
    int winner=0;
    for(int ai=0;ai<3;ai++){
        std::cin>>a[ai];
    }
    for(int bi=0;bi<3;bi++){
        std::cin>>b[bi];
    }

    for(int i=0;i<=2;i++){
        winner=comparator(a[i],b[i]);
        if(winner==1){
            aScore++;
        }
        else if(winner==2){
            bScore++;
        }
        else if(winner==0){

        }
    }
    std::cout<<aScore<<" "<<bScore;
    return 0;
}
