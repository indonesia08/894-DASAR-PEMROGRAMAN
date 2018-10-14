#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
char denied,kode_kereta[2],nama_kereta[50],kelas_kereta,nama_kelas_kereta[50],ulang,nama_pemesan[30];
int tarif,jumlah_tiket,jumlah_pembyaran,kembalian,harga,potongan,total,ppn,total_byr;
atas:
clrscr();
cout<<"		PROGRAM TIKET KERETA\n\n";
cout<<"__________________________________________________________________________\n";
cout<<"Masukan Kode Kereta [AG/AL/PH]	: ";cin>>kode_kereta;
cout<<"\nPilih Kelas [1/2/3]\n1.Executive\n2.Bisnis\n3.Ekonomi";
cout<<"\nMasukan kelas Kereta :";cin>>kelas_kereta;
cout<<"\n__________________________________________________________________________\n";

if (kode_kereta=="AG")
	{
  	   strcpy(nama_kereta,"Argo Bromo Anggrek");
      if (kelas_kereta=='1')
      	{
		  	   strcpy(nama_kelas_kereta,"Execuive");
            tarif =750000;
         }
      else if (kelas_kereta=='1')
      	{
		  	   strcpy(nama_kelas_kereta," kelas bisnis tidak tersedia untuk keret ini");
            tarif =0;
         }
      else if (kelas_kereta=='1')
      	{
		  	   strcpy(nama_kelas_kereta," kelas ekonomi tidak tersedia untuk keret ini");
            tarif =0;
         }
      else
      	{
         	denied ='1';
         }
   }

else if (kode_kereta=="AL")
	{
  	   strcpy(nama_kereta,"Argo Bromo Anggrek");
if (kode_kereta=="AG")
	{
  	   strcpy(nama_kereta,"Argo Bromo Anggrek");
      if (kelas_kereta=='1')
      	{
		  	   strcpy(nama_kelas_kereta,"Execuive");
            tarif =650000;
         }
      else if (kelas_kereta=='1')
      	{
		  	   strcpy(nama_kelas_kereta,"Bisnis");
            tarif =500000;
         }
      else if (kelas_kereta=='1')
      	{
		  	   strcpy(nama_kelas_kereta," kelas ekonomi tidak tersedia untuk keret ini");
            tarif =0;
         }
      else
      	{
         	denied ='1';
         }
   }

else if (kode_kereta=="PH")
	{
  	   strcpy(nama_kereta,"Senja Utama Yogya");
if (kode_kereta=="AG")
	{
  	   strcpy(nama_kereta,"Argo Bromo Anggrek");
      if (kelas_kereta=='1')
      	{
		  	   strcpy(nama_kelas_kereta," kelas executive tidak tersedia untuk keret ini");
            tarif =0;
         }
      else if (kelas_kereta=='1')
      	{
		  	   strcpy(nama_kelas_kereta,"Bisnis");
            tarif =200000;
         }
      else if (kelas_kereta=='1')
      	{
		  	   strcpy(nama_kelas_kereta,"Ekonomi");
            tarif =150000;
         }
      else
      	{
         	denied ='1';
         }
   }
else
	{
 	   strcpy(nama_kereta,"Senja Utama Yogya");
		  	   strcpy(nama_kelas_kereta,"Ekonomi");
            tarif =150000;
      
   }


cout<<"Nama Buku 			="<<kode_kereta<<endl;
cout<<"Harga Buku 			="<<nama_kereta<<endl;
cout<<"Potongan 			="<<nama_kelas_kereta<<endl;
cout<<"Bonus 				="<<nama_kereta<<endl;
cout<<"Total Bayar (inc. ppn)		="<<nama_kereta<<endl;
cout<<"PPN 				="<<nama_kereta<<endl;
cout<<"________________________________________________________\n\n";
cout<<"			*** T E R I M A K A S I H ***\n\n";
cout<<'\n';
cout<<"\n Reload Program : ";ulang = getche();
if (ulang =='Y' || ulang =='y')
	goto atas;
getch();
}
