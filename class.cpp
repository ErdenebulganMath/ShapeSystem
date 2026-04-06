#include<bits/stdc++.h>
#include<math.h>
using namespace std ; 

struct Point{
    float x;
    float y;

} typedef Point ;

class Shape{
    protected :
        Point points[100];
} ; 

class Shape2D : public Shape{
    protected : 
        string name;
    public :
        virtual float talbai() = 0 ;
        virtual float perimetr() = 0 ; 
        string getName(){
            return name ; 
        }
} ; 

class Circle : public Shape2D{
    protected : 
        Point p1 ; 
        float radius ;  
    public :
        Circle(Point p1 , float radius , string name){
            this->p1 = p1 ; 
            this->radius = radius ; 
            this->name = name ; 
        }

        float talbai() override {
            return 3.14 * radius * radius ; 
        }

        float perimetr() override {
            return 2 * 3.14 * radius ; 
        }
} ; 

class Square : public Shape2D{
    protected :
        Point p1 , p2 , p3 , p4 ; 
        float tal ; 
    public :
        Square(Point p1 , Point p2 , Point p3 , Point p4 , float tal , string name){
            this->p1 = p1 ; 
            this->p2 = p2 ; 
            this->p3 = p3 ; 
            this->p4 = p4 ; 
            this->tal = tal ;
            this->name = name ; 
        }

        float talbai() override {
            return tal * tal ; 
        }

        float perimetr() override {
            return 4 * tal ; 
        }
} ; 

class Triangle : public Shape2D{
    protected : 
        Point p1 , p2 , p3 ; 
        float tal1 , tal2 , tal3 ; 
    public :
        Triangle(Point p1 , Point p2 , Point p3 , float tal1 , float tal2 , float tal3 , string name){
            this->p1 = p1 ; 
            this->p2 = p2 ; 
            this->p3 = p3 ; 
            this->tal1 = tal1 ; 
            this->tal2 = tal2 ; 
            this->tal3 = tal3 ; 
            this->name = name ; 
        }

        float talbai() override {
            float a = (tal1 + tal2 + tal3)/2 ; 
            return sqrt(a * (a-tal1) * (a-tal2) * (a-tal3)) ; 
        }

        float perimetr() override {
            return (tal1 + tal2 + tal3) ; 
        }
} ;



