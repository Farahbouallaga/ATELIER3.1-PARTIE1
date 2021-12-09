#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int a,d,c,b;
  cout<<"entre a et b tel que a+ib"<<endl;
  cin>>a;
  cin>>b;
  cout<<a<<" +i"<<b<<endl ;
  cout<<"entrer c et d tel que c+id"<<endl;
  cin>>c;
  cin>>d;
  cout<<c<<" +i"<<d<<endl;

  cout<<"la somme de ces deux nombres est :"<<a+b<<" +i"<<c+d<<endl;//l'adition
  cout<<"la soustraction de ces deux nombres est :"<<a-b<<" +i"<<c-d<<endl;//la soustraction
  cout<<"la multiplication de ces deux nombres est :"<<a*b-c*d<<" +i"<<a*d-c*b<<endl;//la multiplication
  cout<<"la division est "<<a*c+b*d<<" +i"<<a*d+b*c<<"/"<<c*c+d*d<<endl;//la division
  if(a==c && b==d)//l'égalité
  {
   cout<<"les deux nombres sont egeaux" ;
  }else{
    cout<<"les deux nombres sont diffirents";
  }

return 0;
 }