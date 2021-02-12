#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

string rRandom(int x){
    string name;
        switch(x){
            case 0:
                name = "don't";
                return name;
                break;
                      
            case 1:
                name = "do";
                return name;
                break;
                      
             case 2:
                name = "bye";
                return name;
                break;
                   }
                   }
main(){
       int i;
       string name;
       
       int x = rand() % 2;
       
       string qn1 = "hey, how are you?";
       cout<<qn1<<endl;
       name = rRandom(x);
       cout<<name<<endl;
     
       return 0;
       }
       
                      
       
                       
