#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <stdlib.h>
main()
{
char kode_kamar,tipe_kamar[30],ulang,nama_penyewa[30],souvenir[30];
int lama_menginap,tarif,biaya_sewa,uang_bayar,uang_kembali,biaya_administrasi,total_biaya;
atas:
clrscr();
cout<<"PENGINAPAN PASTI BETAH\n";
cout<<"***********************************\n";
cout<<"\nNama Penyewa 		: ";cin>>nama_penyewa;
cout<<"Kode Kamar [A/B/M]	: ";cin>>kode_kamar;
clrscr();

if (kode_kamar=='A' || kode_kamar=='a')
	{
		strcpy(tipe_kamar,"Anggrek");
		tarif =300000;
	}

else if (kode_kamar=='B' || kode_kamar=='b')
	{
		strcpy(tipe_kamar,"Bougenville");
		tarif =250000;
	}

else if (kode_kamar=='M' || kode_kamar=='m')
	{
		strcpy(tipe_kamar,"Mawar");
		tarif =200000;
	}

else
	{
		strcpy(tipe_kamar,"0");
		tarif =0;
	}

if (strcmp(tipe_kamar,"0")==0)
	{
		cout<<"PENGINAPAN PASTI BETAH\n";
		cout<<"***********************************\n";
		reload_kode_kamar:
		cout<<"Kode kamar yang anda masukan salah, ingin input lagi [Y/T]";cin>>ulang;
		if (ulang =='Y' || ulang =='y')
			{	goto atas;	}
		else if (ulang =='T' || ulang =='t')
			{	exit(0);	}
		else
			{	goto reload_kode_kamar; }
	}
else
	{
		cout<<"PENGINAPAN PASTI BETAH\n";
		cout<<"***********************************\n";
		cout<<"\nNama Pemesan 		: "<<nama_penyewa<<endl;
		cout<<"Kode Kamar [A/B/M]	: "<<kode_kamar;
		cout<<"\nLama Menginap		: ";cin>>lama_menginap;
		if (lama_menginap>=7)
			{
				strcpy(souvenir,"Payung Cantik");
			}
		else
			{
				strcpy(souvenir," - ");
			}
		cout<<"***********************************\n";
      		cout<<"Tipe Kamar		: "<<tipe_kamar;
      		cout<<"\nTipe Kamar		: "<<tipe_kamar;
      		cout<<"\nLama Menginap		: "<<lama_menginap<<" hari";
      		cout<<"\nSouvenir		: "<<souvenir;
      		biaya_sewa = tarif*lama_menginap;
      		cout<<"\nBiaya Sewa		: "<<biaya_sewa;
      		biaya_administrasi=200000;
      		cout<<"\nBiaya Administrasi  	: "<<biaya_administrasi;
      		total_biaya=biaya_sewa+biaya_administrasi;
      		cout<<"\nTotal Biaya		: "<<total_biaya;
		cout<<"\n***********************************\n";
		cout<<"\nUang Bayar		: ";cin>>uang_bayar;
      		uang_kembali=uang_bayar-total_biaya;
		cout<<"Uang Kembali		: "<<uang_kembali;
	}

reload:
cout<<"\n\n Mau Input Data Lagi [Y/T] ??";cin>>ulang;
if (ulang =='Y' || ulang =='y')
	{	goto atas;	}
else if (ulang =='T' || ulang =='t')
	{	exit(0);	}
else
	{	goto reload; }
getch();
}
