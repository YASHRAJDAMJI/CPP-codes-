#include<iostream.h>
#include<conio.h>

class Book
{
  static int count;
  int objno;
  ~Book();

    public:
	 Book ()
	 {
	    objno=++count;
	    cout<<"obj no "<<objno<<endl;
	 }

		static void showcount()
		{
		  cout<<"totel no of object is "<<count<<endl;
		}
	 ~Book()
	 {   cout<<"distructor called"<<endl;
	 }

  };

  int Book::count;


 void main()
  {
    Book b1,b2,b3,b4;
     clrscr();
    // b1.showcount();
     b2.showcount();

     getch();
    }