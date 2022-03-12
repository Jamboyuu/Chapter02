/*
 * FileName: T2_18.CPP
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
   cout<<"请输入两个整数"<<endl;
   cin>>a>>b;
   if(a==b)
        cout<<"These numbers are equal."<<endl;
   else if(a<b)
        cout<<b<<" is large"<<endl;
   else cout<<a<<" is large"<<endl;

    return 0;
}
