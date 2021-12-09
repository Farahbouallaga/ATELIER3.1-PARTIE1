#include<iostream>
using namespace std;
class Zebra;

class Dolphin;
class Animal//declaration de nom et age et de la fonction set_value
{
public:
string nom;
int age;
int set_value(int a, string b){
age=a;
nom=b;
cout<<"le nom est "<<nom<<endl;
cout<<"l'age est "<<age<<endl;

}
};

class Zebra : public Animal//declaration de class zebra
{
public:
Zebra(){
cout<<"ils se trouvent principalement en afrique"<<endl;
}

};

class Dolphin : public Animal //declaration de class dolphin
{
public:
Dolphin(){
cout<<"ils ce trouvent dans la mer"<<endl;

}

};
int main()  //affichage de deux variables de type zebra et dolphin et les messages
{
Zebra Z;
Z.set_value(50,"zebra");
Dolphin D;
D.set_value(90, "dolphin");

 }