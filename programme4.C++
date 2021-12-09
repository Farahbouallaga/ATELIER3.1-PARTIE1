#include<iostream>
using namespace std;
class mere//la class mere et le premier message
{
protected:
string name;
void display(){

cout<<"hello word"<<endl;
}

};
class fille :public mere//la class fille avec la fonction display et la deuxiéme message
{

public:
void display(){

  name="farah";
  cout<<"bonjour "<<name<<endl;

}

};
int main(){
fille f;

f.display();

}