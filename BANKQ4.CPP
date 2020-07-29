#include<iostream.h>
#include<conio.h>
#include<string.h>

class Bank
{
  char NamsOfDepositer[20];
  int accno,BalanceAmount;
  char TypOfAcc[20];
  int depo,withdraw,newbalance;
 int OldBalance;

   public:
	Bank()
	{   strcpy(NamsOfDepositer,"ABC");
	    accno=12134;
	    BalanceAmount=50;
	    strcpy(TypOfAcc,"Business");
	    cout<<"\nthe name of depositer is "<<NamsOfDepositer<<"\naccno is "<<accno<<"\nbalance amount is" <<BalanceAmount<<"\ntype acc "<<TypOfAcc<<endl;
	}

	void ToDepoAmo()
	{
	   cout<<"enter the valu for deposit = ";
	   cin>>depo;
	}

	 void ToW()
	 {
	    cout<<"enter the value of withdraw = ";
	    cin>>withdraw;
	 OldBalance=BalanceAmount+depo;

	     if(OldBalance>withdraw)
	     {
	   //  cout<<"\nyes you can withdraw";
	      }
	      else
	      { cout<<"\ninseficant balenc";}
	      }

	      void todisplay()
	      {
		newbalance=OldBalance-withdraw;
		cout<<"\nreaming balance is "<<newbalance<<"\nname is "<<NamsOfDepositer<<endl;
	      }

  };

  void main()
  { clrscr();
   Bank B;
    B.ToDepoAmo();
    B.ToW();
    B.todisplay();
    getch();
  }

