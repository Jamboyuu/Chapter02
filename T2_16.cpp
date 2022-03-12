/*
 * FileName: T2_16.CPP
 * Author: Jambo Yu
 * Student ID:2112080089
 * E-mail: 1027881124@QQ.COM
 * Date: Mar 11th, 2022
 */

#include <iostream>

using namespace std;

int main()
{
    int x,y,sum,difference,product ,quotient;
    cout<< "请输入两个数";
    cin>>x>>y;
    sum=x+y;
    difference=x-y;
    product=x*y;
    quotient=x/y;

    cout << "和=" <<sum<<" 差="<<difference<<" 积="<<product<<" 商="<<quotient << endl;
    return 0;
}
