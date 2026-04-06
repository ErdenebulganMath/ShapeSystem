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
      Square(Point topLeft, float length, string n) {
    p1 = topLeft;
    p2 = {topLeft.x + length, topLeft.y};
    p3 = {topLeft.x + length, topLeft.y - length};
    p4 = {topLeft.x, topLeft.y - length};
    tal = length;
    name = n;
}

        float talbai() override {
            return tal * tal ; 
        }

        float perimetr() override {
            return 4 * tal ; 
        }
};

class Triangle : public Shape2D {
protected:
    Point p1, p2, p3;
    float tal1, tal2, tal3;
public:
    Triangle(Point top, float a, string n) : Shape2D() {
        p1 = top; 
        float height = sqrt(3)/2 * a;
        p2 = {top.x - a/2, top.y - height}; 
        p3 = {top.x + a/2, top.y - height}; 

    
        tal1 = tal2 = tal3 = a;
        name = n;
    }

    float talbai() override {
        return (sqrt(3)/4) * tal1 * tal1; 
    }

    float perimetr() override {
        return tal1 + tal2 + tal3; 
    }
};


    int main() {
    Shape2D* shape;

    // toirgiin tov
    Point center = {0, 0};
    shape = new Circle(center, 5, "Circle");
    cout << shape->getName() << endl;
    cout << "Talbai: " << shape->talbai() << endl;
    cout << "Perimetr: " << shape->perimetr() << endl;
    cout << "------------------" << endl;

    // squere zuun deeshee 10, urt 4
    Point topLeft = {0, 10};
    shape = new Square(topLeft, 4, "Square");
    cout << shape->getName() << endl;
    cout << "Talbai: " << shape->talbai() << endl;
    cout << "Perimetr: " << shape->perimetr() << endl;
    cout << "------------------" << endl;

    // oroi talaa tootsood busdiig tootsno
     Point top = {0,10};
    shape = new Triangle(top, 6, "Triangle");
    cout << shape->getName() << endl;
    cout << "Talbai: " << shape->talbai() << endl;
    cout << "Perimetr: " << shape->perimetr() << endl;

    return 0;
}



