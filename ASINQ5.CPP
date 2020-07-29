#include<iostream.h>
#include<conio.h>
#include<string.h>

 class student
 {
   char name[20];
   float per;

    public:
       student(char n[20],float p)
       {
	   strcpy(name,n);
	   per=p;
	   cout<<"name is "<<name<<"\n per is "<<per<<endl;
       }

	void accept()
	{
	   cout<<"enter name and persentage";
	   cin>>name>>per;
	}

	void display()
	{
	   cout<<"the name is "<<name<<endl<<"the persantage is "<<per<<endl;
	}
 };
 void main()
 { clrscr();
   student S("abc",84);
   S.accept();
   S.display();
   getch();
 }

