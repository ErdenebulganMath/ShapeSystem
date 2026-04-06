#include<bits/stdc++.h>
using namespace std ; 

class Person {
    protected :
        string name ; 
        int age ; 
    public : 
        Person(){
            name = "Unknown" ; 
            age = 0 ; 
        }

        Person(string name , int age){
            this->name = name ; 
            this->age = age ;
        }

        void move(){
            cout << name << " hudluj baina" << endl ;
        }
} ; 

class Student : public Person {
    protected : 
        int ID ; 
        int grade ; 
    public : 
        Student(string name , int age , int ID , int grade) : Person(name , age){
                this->ID = ID ; 
                this->grade = grade ; 
        }

        Student() : Person(){
            ID = 0 ; 
            grade = 0 ; 
        }

        void learn(){
            cout << ID << " ID tai " << name << " nertei oyutan " << grade << "r tuvshind suraltsaj bn" << endl ; 
        }
} ;

int main(){
    Student s1 ; 
    s1.move() ; 

    Student s2("Sodbayar" , 20 , 1278 , 3) ;
    s2.move() ; 
    s2.learn() ; 

}