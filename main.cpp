#include <iostream>
using namespace std;
int main() {
  int l1,l2,l3;
  int cat1,hip,cat2, area,co,to;
  cout<<"Ingrese el lado 1:"<<"\n";
    cin>>l1;
    cout<<"Ingrese el lado 2:"<<"\n";
    cin>>l2;
    cout<<"Ingrese el lado 3:"<<"\n";
    cin>>l3;
    
    // encontrar la hipotenusa (mayor lado)
if (l1>l2){
  cat1=l2;
  if (l1>l3){
    hip=l1;
    cat2=l3;
  }
  else {
    hip=l3;
    cat2=l1;
  }
}else{
  cat1=l1;
  if (l2>l3){
    hip=l2;
    cat2=l3;
  }
  else{
    hip=l3;
    cat2=l2;
  }
}

co=(hip)^2 ;
to=cat1^2 + cat2^2;
if (co==to)
{
  area=(cat1*cat2)/2;
  cout<<"EL area es:"<<area<<"\n"; 
}
else{
  cout<<"\nNo es un triangulo rectangulo\n";
}
 
}

