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
        float perimetr ; 
        float talbai ;
    public :
        Shape2D(float talbai , float perimetr) : Shape(){
                this->talbai = talbai ; 
                this->perimetr = perimetr ; 
        }
} ; 

class Circle : public Shape2D{
    protected : 
        Point p1 ; 
        float radius ; 
        string name ; 
    public :
        float talbai(float radius){
            return 3.14 * radius * radius ; 
        }

        float perimetr(float radius){
            return 2 * 3.14 * radius ; 
        }
} ; 

class Square : public Shape2D{
    protected :
        Point p1 , p2 , p3 , p4 ; 
        float tal ; 
        string name ; 
    public :
        float talbai(float radius){
            return radius * radius ; 
        }

        float perimetr(float radius){
            return 4 * radius ; 
        }
} ; 

class Triangle : public Shape2D{
    protected : 
        Point p1 , p2 , p3 ; 
        float tal1 , tal2 , tal3 ; 
        string name ; 
    public :
        float talbai(float tal1 , float tal2 , float tal3){
            float a = (tal1 + tal2 + tal3)/2 ; 
            return sqrt(a * (a-tal1) * (a-tal2) * (a-tal3)) ; 
        }

        float perimetr(float tal1 , float tal2 , float tal3){
            return (tal1 + tal2 + tal3) ; 
        }
} ;



