#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
char kode,lagi,nama[30],bonus[30];
int jumlah,harga,potongan,total,ppn,total_byr;
atas:
clrscr();
cout<<"		***Toko Buku Ahmad***\n";
cout<<"		   Jl. Raya Bogor KM.28\n";
cout<<"__________________________________________________________________________\n";
cout<<"Masukan Kode Buku [1|2|3]	= ";cin>>kode;
cout<<"\nMasukan Jumlah Pembelian Buku	= ";cin>>jumlah;
cout<<"\n__________________________________________________________________________\n";
cout<<'\n';
switch(kode)
{
	case '1':
   	harga =50000;
	   break;
	case '2':
	   harga =35000;
	   break;
	case '3':
	   harga =45000;
   	break;
	default :
	   harga =0;
}

if(kode=='1')
	{
   strcpy(nama,"Sukses Belajar Borland C++");
   }
else if(kode=='2')
	{
   strcpy(nama,"Kunci Pribadi Yang Sukses");
   }
else if(kode=='3')
	{
   strcpy(nama,"Mencari Mutiara Di Dasar Hati");
   }
else
	{
   strcpy(nama,"----barang tidak di temukan---");
   }

if (jumlah>5)
	{
   strcpy(bonus,"Note Book");
   potongan =jumlah*harga*10/100;
   }
else
	{
   strcpy(bonus,"Maaf tidak mendapat bonus");
   potongan =0;
   }
total =(harga*jumlah)-potongan;
ppn	=total*10/100;
total_byr =total+ppn;
cout<<"Nama Buku 			="<<nama<<endl;
cout<<"Harga Buku 			="<<harga<<endl;
cout<<"Potongan 			="<<potongan<<endl;
cout<<"Bonus 				="<<bonus<<endl;
cout<<"Total Bayar (inc. ppn)		="<<total_byr<<endl;
cout<<"PPN 				="<<ppn<<endl;
cout<<"________________________________________________________\n\n";
cout<<"			*** T E R I M A K A S I H ***\n\n";
cout<<'\n';
cout<<nama<<" "<<harga<<endl;
cout<<"\n Reload Program : ";
lagi = getche();
if (lagi =='Y' || lagi =='y')
	goto atas;
getch();
}
