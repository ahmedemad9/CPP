#include<iostream>
using namespace std;

class tri{ 
    public :
         void Tri(){
             cout<<"I am a triangle"<<endl;
         }  
};

class isc : public tri{
    public :
         void Isc(){
             cout<<"I am an isosceles triangle"<<endl;
         }
};

class des : public isc{
    public :
         void Des(){
             cout<<"In an isosceles triangle two sides are equal"<<endl;
         }
};

int main(){
    des triangle;
    triangle.Isc();
    triangle.Des();
    triangle.Tri();
    return 0;
}
