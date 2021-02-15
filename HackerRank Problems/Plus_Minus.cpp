#include<iostream>
int main(){
    int n;
    double pos=0;
    double neg=0;
    double zer=0;
    int input;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>input;
        if(input>0){
            pos++;  
        }
        else if(input<0){
            neg++;
        }
        else{
            zer++;
        }
    }
   std:: cout<<pos/n<<"\n"<<neg/n<<"\n"<<zer/n;

}
