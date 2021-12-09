#include<iostream>
using namespace std;
class MYclass{
public:
string nom;

MYclass(){

cout<<"entrer votre nom"<<endl;
cin>>nom;

}

~MYclass(){

cout<<"bonjour "<<nom<<endl;

}

};
int main()
{
MYclass P;

return 0;

}