#include <iostream>
using namespace std;

class Rectangle{

private: 

int length;
int breadth; 

public: 
Rectangle(){length=breadth=1;}
Rectangle(int l, int b);
int area ();
int Perimiter();

int getLength(){return length;}
void setLength(int l){length = l;}
};

Rectangle::Rectangle(int l,int b){
    length =l;
    breadth = b;
    
}

int Rectangle::area(){
    return length *breadth;
}

int Rectangle::Perimiter()
{
    return 2* (length+breadth);
}

int main(void){
   
    Rectangle r(10,5);
    cout<<r.area();
    cout<<r.Perimiter();
    r.setLength(20);
    cout<<r.getLength();
    
}
