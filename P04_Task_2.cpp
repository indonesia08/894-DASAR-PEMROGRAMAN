#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <stdlib.h>
main()
{
char kode_kereta[2],nama_kereta[50],kelas_kereta,nama_kelas_kereta[50],ulang,nama_pemesan[30];
int ada_kelas,tarif,jumlah_tiket,total_harga,uang_bayar,uang_kembali;
atas:
clrscr();
cout<<"		PROGRAM TIKET KERETA\n\n";
cout<<"__________________________________________________________________________\n";
cout<<"Masukan Kode Kereta [AG/AL/PH]	: ";cin>>kode_kereta;
cout<<"\nPilih Kelas [1/2/3]\n1.Executive\n2.Bisnis\n3.Ekonomi";
cout<<"\nMasukan kelas Kereta :";cin>>kelas_kereta;
clrscr();

if (strcmp(kode_kereta,"AG")==0||strcmp(kode_kereta,"ag")==0)
	{
		strcpy(nama_kereta,"Argo Bromo Anggrek");
		if (kelas_kereta=='1')
			{
				strcpy(nama_kelas_kereta,"Execuive");
				tarif =750000;
  				ada_kelas=1;
			}
		else if (kelas_kereta=='2')
			{
				strcpy(nama_kelas_kereta,"Bisnis");
				tarif =0;
  				ada_kelas=0;
			}
		else if (kelas_kereta=='3')
			{
				strcpy(nama_kelas_kereta,"Ekonomi");
				tarif =0;
  				ada_kelas=0;
			}
		else
      {
				strcpy(nama_kelas_kereta,"0");
         	tarif =0;
  				ada_kelas=0;
      }
   }

else if (strcmp(kode_kereta,"AL")==0||strcmp(kode_kereta,"al")==0)
	{
		strcpy(nama_kereta,"Senja Utama Yogya");
		if (kelas_kereta=='1')
			{
				strcpy(nama_kelas_kereta,"Execuive");
				tarif =650000;
  				ada_kelas=1;
			}
		else if (kelas_kereta=='2')
			{
				strcpy(nama_kelas_kereta,"Bisnis");
				tarif =50000;
  				ada_kelas=1;
			}
		else if (kelas_kereta=='3')
			{
				strcpy(nama_kelas_kereta,"Ekonomi");
				tarif =0;
  				ada_kelas=0;
			}
		else
      {
				strcpy(nama_kelas_kereta,"0");
         	tarif =0;
  				ada_kelas=0;
      }
   }

else if (strcmp(kode_kereta,"PH")==0||strcmp(kode_kereta,"ph")==0)
	{
		strcpy(nama_kereta,"Serayu");
		if (kelas_kereta=='1')
			{
				strcpy(nama_kelas_kereta,"Execuive");
				tarif =0;
  				ada_kelas=0;
			}
		else if (kelas_kereta=='2')
			{
				strcpy(nama_kelas_kereta,"Bisnis");
				tarif =20000;
  				ada_kelas=1;
			}
		else if (kelas_kereta=='3')
			{
				strcpy(nama_kelas_kereta,"Ekonomi");
				tarif =150000;
  				ada_kelas=1;
			}
		else
      {
				strcpy(nama_kelas_kereta,"0");
         	tarif =0;
  				ada_kelas=0;
      }
   }
else
	{
	   strcpy(nama_kereta,"0");
		strcpy(nama_kelas_kereta,"0");
      tarif =0;
		ada_kelas=0;
	}

if (strcmp(nama_kereta,"0")==0)
	{
		cout<<"		PROGRAM TIKET KERETA\n\n";
		cout<<"__________________________________________________________________________\n";
		cout<<"Kode kereta yang di input ("<<kode_kereta<<") tidak tersedia";
	}
else
	{
		if (ada_kelas==0)
			{
				cout<<"		PROGRAM TIKET KERETA\n\n";
				cout<<"__________________________________________________________________________\n";
				cout<<"Kelas kereta ("<<kelas_kereta<<"."<<nama_kelas_kereta<<") tidak tersedia di kereta "<<nama_kereta<<endl;
			}
		else
      	{
				cout<<"		PROGRAM TIKET KERETA\n\n";
				cout<<"__________________________________________________________________________\n";
				cout<<"\nNama Pemesan 			= ";cin>>nama_pemesan;
				cout<<"Nama Kereta 			= "<<kode_kereta<<"."<<nama_kereta<<endl;
				cout<<"Kelas Kereta 			= "<<kelas_kereta<<"."<<nama_kelas_kereta<<endl;
				cout<<"Harga Per Tiket 		= "<<tarif<<endl;
				cout<<"Jumlah Pemesanan Tiket		= ";cin>>jumlah_tiket;
				cout<<"Biaya Tambahan Fasilitas	= 0";
            total_harga =tarif*jumlah_tiket;
				cout<<"\nPembayaran			= "<<total_harga<<endl;
				cout<<"Discount			= 0 ";
				cout<<"\n*****************************************************";
				cout<<"\nTotal Pembayaran		= "<<total_harga<<endl;
				cout<<"\nUang Bayar			= ";cin>>uang_bayar;
            uang_kembali =uang_bayar-total_harga;
				cout<<"\nUang Kembali			= "<<uang_kembali<<endl;
				cout<<"\n*****************************************************\n";
			}
   }

cout<<"\n Reload Program : ";ulang = getche();
if (ulang =='Y' || ulang =='y')
	goto atas;
getch();
}
