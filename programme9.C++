#include<iostream>
using namespace std;
class T{
static int c;  
public:

int age;
string nom;
void call(int v, string name){
age=v;
nom=name;


c++;

 }
int afficher(){ 
cout<<"l'age a entrer est "<<age<<endl;
cout<<"le nom a entrer est "<<nom<<endl;



}
static void affi();

};

int T:: c=0;
void T:: affi(){
cout<<"le nbre de fois la fonction call a  repeter est :"<<c<<endl;


}
int main(){
T t;
t.call(20,"farah");
t.afficher();
t.call(20,"assia");
t.afficher();
T::affi();


}
