#include <iostream>
#include <sstream>
using namespace std;
#include<string>

class student{
   private:
     int age;
     string firstName; 
     string lastName;
     int standard;
     string fullName;
  
   public:
     //string combined2;
     int a,d;string b,c;
     void set_age(int a);
     int get_age();
     string get_first_name();
     void set_first_name(string b);
     string get_last_name();
     void set_last_name(string c);
     int get_standard();
     void set_standard(int d);  
     void get_full_name(string firstName,string lastName);
     void to_string(int h);


};

    void student:: set_age(int a){
         age=a;
     }  
    int student::get_age(){
         return age;     
    }
    void student:: set_first_name(string b){
         firstName=b;
     }  
    string student::get_first_name(){
         return firstName;     
    }
    void student:: set_last_name(string c){
         lastName=c;
     }  
    string student::get_last_name(){
         return lastName;     
    }
    void student:: set_standard(int d){
         standard=d;
     }  
    int student::get_standard(){
         return standard;     
    }
    void student :: to_string(int h){
         if (h==2){
         cout<<lastName<<", "<<firstName;
        }
         else {
            cout<<age<<","<<firstName<<","<<lastName<<","<<standard;
         }
    }

int main() {
     int a,d; string b,c;
     cin>>a>>b>>c>>d;
     student ahmed;
     ahmed.set_age(a);
     ahmed.set_first_name(b);
     ahmed.set_last_name(c);
     ahmed.set_standard(d);
     cout<<ahmed.get_age()<<endl;
     ahmed.to_string(2);
     cout<<endl<<ahmed.get_standard()<<endl<<endl;
     ahmed.to_string(4);
return 0;
}
