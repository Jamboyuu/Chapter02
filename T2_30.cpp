/*
 * FileName: T2_30.CPP
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
  int x;
  double weight,height,BMI;
    cout<<"Please select the unit of height and weight."<<endl;
    cout<<"Pounds and feet,enter 1;kilogram and meter,enter 0"<<endl;
    cin>>x;
  if(x==0)
  {   cout<<"Please enter your weight and height"<<endl;
      cin>>weight>>height;
    BMI=weight/(height*height);

  }
  else
  {     cout<<"Please enter your weight and height"<<endl;
      cin>>weight>>height;
    BMI=(weight*703)/(height*height);
  }



  if(BMI<18.5)

        cout<<"Underweight"<<endl;
    else if(BMI>=18.5 &&BMI<=24.9)
        cout<<"Normal"<<endl;
    else if(BMI>=25 && BMI<=29.9)
        cout<<"Overweight"<<endl;
    else
        cout<<"Obese"<<endl;

   return 0;

}


