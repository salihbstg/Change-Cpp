#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main ()
{
	setlocale(LC_ALL,"turkish");
	int p2,p3,n2,n3,h2,h3,a;	/* 2'ler virg�lden �ncesi,		3'ler virg�lden sonras�*/
	double p,h,n;
	yetersiz:
	cout<<"hesap: ";	cin>>h;
	cout<<"nakit: ";	cin>>n;
	if(n<h)	{	cout<<"yetersiz bakiye!!!";		goto yetersiz;	}
	p=n-h;

	cout<<"\npara�st�: "<<p<<"\n\n";

	h2=h;							/*virg�den �ncesi*/	
	n2=n;							/*virg�den �ncesi*/
	p2=p;							/*virg�den �ncesi*/
	h3=(h-h2)*100;					/*h �n virg�den sonras�*/
	n3=(n-n2)*100;					/*n in virg�den sonras�*/
	if(n3>=h3)	{	p3=100-(n3-h3);	/*p �n virg�den sonras�*/	}		// virg�l sonras�n�n (-)negatif ��kmamas� diye 
		else	{	p3=100-(h3-n3);	/*p �n virg�den sonras�*/	}		//	yani |n3-h3|(mutak)

	a=p2/200;		cout<<"\n200'l�k:  "<<a;		p2=p2%200;
	a=p2/100;		cout<<"\n100'l�k:  "<<a;		p2=p2%100;
	a=p2/50;		cout<<"\n50'lik:   "<<a;		p2=p2%50;
	a=p2/20;		cout<<"\n20'lik:   "<<a;		p2=p2%20;
	a=p2/10;		cout<<"\n10'luk:   "<<a;		p2=p2%10;
	a=p2/5;			cout<<"\n5'lik:    "<<a;		p2=p2%5;
	a=p2/1;			cout<<"\n1'lik:    "<<a;
	
	a=p3/50;		cout<<"\n0.50'lik: "<<a;		p3=p3%50;
	a=p3/25;		cout<<"\n0.25'lik: "<<a;		p3=p3%25;
	a=p3/10;		cout<<"\n0.10'luk: "<<a;		p3=p3%10;
	a=p3/5;			cout<<"\n0.05'lik: "<<a;		p3=p3%5;
	a=p3/1;			cout<<"\n0.01'lik: "<<a;
	
	getch ();
	return 0;
	
}
