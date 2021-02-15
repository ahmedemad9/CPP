#include <iostream>
#include <string>
using namespace std;

int main() {
      string s1;
      string s2;
       ;
      string s4;
      string s5;
      cin>>s1>>s2;
      string s3=s1+s2; 
      int x=s1.size();
      int y=s2.size();
      cout<<x<<" "<<y<<endl<<s3<<endl;
      for(int dr=0;dr<x;dr++){
         if(dr==0) s4+=s2[0];
         else{
             s4+=s1[dr];
         }  
      }
      
      cout<<s4<<" ";
      for(int dr=0;dr<y;dr++){
         if(dr==0) s5+=s1[0];
         else{
             s5+=s2[dr];
         }  
      }
      cout<<s5;
    return 0;
}
