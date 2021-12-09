#include <iostream>
using namespace std;
class Audio;

class Media//creation de la classe media et la difinition des fonction void imprimer() et char *id
{
public:
  string titre ;
 string nom;
  void imprimer(string c)
  {
    
    nom=c;
  }
  char *id()
  {
    titre="media";
    cout << " le "<<nom<<" qui herite le "<< titre << endl;
  }
};
class Audio : public Media// creation de class audio ,levre et presse
{
public:
string name;
void display(string c){
name=c;
 }
char *afficher(){
cout<<" le "<<name<<" herite ";

}

};

class CD: public Audio  //creation des class cd ,cassette et disque qui herite la class audio
 {
public:


};
class Cassette: public Audio
{


public:

  };
class Disque: public Audio{
public:

   };

class Livre : public Media
{

};


class Presse : public Media
{
public:
string nam;
void dis(string n){
nam=n;
 }
char *affi(){
cout<<" le "<<nam<<" herite ";

}

};

class Magazine: public Presse //creation des class magazine et journal , revue qui herite la class presse
{
public:


};
class Journal: public Presse{


public:

  };
class Revue: public Presse{
public:

};

int main()
{
  
  Audio A;
  Livre L;
  Presse P;
  CD C;
  Cassette T;
  Disque D;

  Magazine M;
  Journal J;
  Revue R;
  A.imprimer("audio");
  A.id();
  L.imprimer("livre");
  L.id();
  P.imprimer("presse");
  P.id();

  C.display("CD");
  C.imprimer("audio");
  C.afficher();
  C.id();
  T.display("Cassette");
  T.imprimer("livre");
  T.afficher();
  T.id();
  D.display("Disque");
  D.imprimer("Presse");
  D.afficher();
  D.id();

  M.dis("Magazine");
  M.imprimer("Presse");
  M.affi();
  M.id();
  J.dis("Journal");
  J.imprimer("Ptesse");
  J.affi();
  J.id();
  R.dis("Revue");
  R.imprimer("Presse");
  R.affi();
  R.id();


}
