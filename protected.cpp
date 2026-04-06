#include<bits/stdc++.h>
using namespace std ; 

class Animal {
    protected : 
        int age = 10 ;
} ; 

class Dog : public Animal {
    public : 
        void show(){
            cout << age << endl ;
        }
} ; 

int main(){
    Animal a ; 
    a.age = 20 ;
    Dog d ; 
    d.show() ; 

}