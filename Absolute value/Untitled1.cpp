#include <iostream>
#include <conio.h>
using namespace std;
main()
{
  int x,y;
  
  cout<<"enter a number:";
  cin>>x;
  
  if (x >= 0) {
  	y = x;
  } else {
  	y = -x;
  }
  
  cout<<"Absolute value is :"<<y;
  
  getch();
}