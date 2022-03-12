/*
 * FileName: T2_23.CPP
 * Author: Jambo Yu
 * Student ID:2112080089
 * E-mail: 1027881124@QQ.COM
 * Date: Mar 11th, 2022
 */


#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int min=0, max=0,sum=0;
    cin>>a;
     min = a;
     max = a;
     for(int i=0; i<4; i++)
     {
         cin>>b;
         if(b>max)
          {
             max = b;
          }
         if(b<min)
          {
             min = b;
          }
     }

     cout << "max:" << max << endl;
     cout << "min:" << min << endl;


	return 0;
}


