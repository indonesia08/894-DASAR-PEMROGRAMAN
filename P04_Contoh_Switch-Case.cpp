#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
char kode,lagi;
atas:
clrscr();
cout<<"INPUT KODE [A..C] : ";
kode = getche ();
cout<<'\n';
switch(kode)
{
	case 'A':
	case 'a':
	cout<<"Alat Olah Raga";
   break;
case 'B':
	case 'b':
   	cout<<"Alat Elektronik";
      break;
case 'C':
	case 'c':
   	cout<<"Alat Masak";
      break;
default :
cout<<"Anda Salah Memasukan Kode";
}
cout<<'n';
cout<<"\n Reload Program : ";
lagi = getche();
if (lagi =='Y' || lagi =='y')
	goto atas;
getch();
}
