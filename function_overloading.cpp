#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

    float area(double radius){ 
        return(3.14*radius*radius);
        //cout<<"The area of cicle is"<<3.14*radius*radius<<endl;
    }
    int area(int s,int a,int b,int c){
        s = (a+b+c)/2;
        return (sqrt(s*(s-a)*(s-b)*(s-c)));
        //cout<<"The area of triangle is"<<(height*breadth)/2<<endl;
    }
    int area(int length, int width){ 
        return(length*width);
        //cout<<"The area of rectangle is"<<(length*width)<<endl;
    }

int main(){
    char x; //shape
    char c; //c
    char t; //triangle
    char r; //rectangle
    double radius;
    int semi_perimeter;
    int a,b,c_c;
    int length,width;
    cout<<"Please enter a shape"<<endl;
    cin>>x;
    while (x!='c' && x!='t' && x!='r')
{
    cout<<"Please enter one of the following options only."<<endl;
    cout<<"Enter only (circle) or (triangle) or (rectangle)"<<endl;
    cin>>x;
}
if(x=='c'){
    cout<<"Please enter radius"<<endl;
    cin>>radius;
    cout<<"The area of circle is "<<area(radius)<<"sq.units"<<endl;
    //area(radius);
}
if(x=='t'){
    //cout<<"Please enter semi-perimeter of triangle:-"<<endl;
    //cin>>semi_perimeter;
    cout<<"Please enter sides a,b,c:-"<<endl;
    cin>>a>>b>>c_c;
    cout<<"The area of triangle is "<<area(semi_perimeter,a,b,c_c)<<"sq.units"<<endl;
}
if(x=='r'){
    cout<<"Please enter length:-"<<endl;
    cin>>length;
    cout<<"Please enter breadth:-"<<endl;
    cin>>width;
    cout<<"The area of rectangle is "<<area(length,width)<<"sq.units"<<endl;
}
    return 0;
}