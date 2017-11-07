#include <iostream>
using namespace std;
int esPrimo(int p)
{
  int flag=0;
  for (int i=2; i<=p/2; i++)
    {
      if (p%i==0)
	flag=1;
    }
  return flag;
}
int main()
{
  int p=0;
  int s=12;
  cout<<"Inserte un numero "<<endl;
  cin >>p;
  do{
    do
      {
	if(p%2==0)
	  p=p+1;
	if ( esPrimo(p)==1)
	  p=p+2;
      }
    while ( esPrimo(p)==1);
    if(s>p){
      s=s-p;
      p=p+2;
    }
    else{
      s=s-1;
      if(s !=0)
	p=p+2;
    }
  }
  while (s !=0);
  cout<<"Tu numero es "<<p<<endl;
   
  return 0;
}
