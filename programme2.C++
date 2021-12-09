#include<iostream>
using namespace std;
 class rectangle;
 class triangle;

class shape{
public:
int x;
int y;
int b;
int h;
shape(){

cout<< "entre la largeur : "<<endl;
cin>>x;
cout<<"entre la langeure :"<<endl;
cin>>y;
cout<< "entre la base de triangle :"<<endl;
cin>>b;
cout<<"entre la hauteur :"<<endl;
cin>>h; }
int area1(){
int s=x*y;
cout<<s<<endl;
 }
int area2(){

int s=b*h/2;
cout<<s<<endl;
 }
};

class rectangle{
public:
rectangle(){
cout<<"la surface de rectangle est :"<<endl;

}

 };
class triangle{
public:
triangle(){
cout<<"la surface de triangle est :"<<endl;
}
};

int main(){
shape p;
rectangle O;
p.area1();
triangle R;
p.area2();

return 0;
}