#include<iostream.h>
#include<conio.h>

class fraction
{
  float num,deno;

   public:

      fraction(float n,float d)
      {
	  num=n;
	  deno=d;
      }


      void display()
      {
       cout<<"the numrator is "<<num<<endl<<"the denominator is "<<deno<<endl;
       }
};


void main()
{
clrscr();
   fraction f(2.3,3);

   f.display();
   getch();
   }