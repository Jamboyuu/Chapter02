/*
 * FileName: T2_19.CPP
 * Author: Jambo Yu
 * Student ID:2112080089
 * E-mail: 1027881124@QQ.COM
 * Date: Mar 11th, 2022
 */

#include <iostream>

using namespace std;

int main()
{
   int a,b,c,Sum,Average,Product,Smallest,Largest;
   cout<<"Input three different integers:";
   cin>>a>>b>>c;
   Sum=a+b+c;
   Average=Sum/3;
   Product=a*b*c;

   if(a<=b)
        {Smallest=a;Largest=b;}
   else if(c<Smallest)
            Smallest=c;
   else if(c>Largest)
            Largest=c;
   else {Smallest=Smallest;Largest=Largest;}

   cout<<"Sum is "<<Sum<<endl;
   cout<<"Average is "<<Average<<endl;
   cout<<"Product is "<<Product<<endl;
   cout<<"Smallest is "<<Smallest<<endl;
   cout<<"Largest is "<<Largest<<endl;
    return 0;
}
