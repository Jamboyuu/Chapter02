/*
 * FileName: T2_28.CPP
 * Author: Jambo Yu
 * Student ID:2112080089
 * E-mail: 1027881124@QQ.COM
 * Date: Mar 11th, 2022
 */


#include <iostream>
#include<math.h>
using namespace std;

int main()
{
       int n,x,y[10];
       cin>>n;
       x=n;
       int i,sum=0;       //sum用于确定所输入个数位数
       for(i=0;i<10;i++)
       {
           if(i==0)
           {
                y[0]=x%10;          //如果是第一位，则将个位存在数组
                sum++;
           }
           if(x<10)                  //如果x<10则跳出循环
            break;
            if(i>0)
            {
                y[i]=(x/10)%10;           //与上面相同的算法
                x=x/10;
                sum++;
            }

       }
        int k=sum;
       for(i=0;i<k;i++)                //循环所属数字的位数次
       {
          cout<<y[sum-1]<<"   ";          //从后向前输出
           sum--;

       }

       return 0;

}


