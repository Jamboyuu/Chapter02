/*
 * FileName: T2_31.CPP
 * Author: Jambo Yu
 * Student ID:2112080089
 * E-mail: 1027881124@QQ.COM
 * Date: Mar 12th, 2022
 */


#include <iostream>
#include<math.h>
using namespace std;

int main()
{
  int a,b,c,d,e,p;
  cout<<"Please enter the total number of miles driven per day."<<endl;
  cin>>a;
  cout<<"Please enter the price per gallon of gasoline."<<endl;
  cin>>b;
  cout<<"Please enter the average number of miles you can drive per gallon of gasoline."<<endl;
  cin>>c;
  cout<<"Please enter the daily parking fee."<<endl;
  cin>>d;
  cout<<"Please enter the daily toll."<<endl;
  cin>>e;

  p=(a/c*b)+d+e;
  cout<<"Your daily car consumption is about "<< p << " pounds."<<endl;
   return 0;

}


