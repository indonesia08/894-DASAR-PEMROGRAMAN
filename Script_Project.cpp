/*
Tugas Project Semester 1
Matakuliah    				:894 - DASAR PEMROGRAMAN (4 SKS)
Kampus        				:UBSI Margonda
Kelas         				:13.1D.01
Dosen         				:Fintri Indriyani 
Tanggal       				:8 Desember 2018
List Anggota Kelompok	:1.Ade Suhendar
								 2.Abeng Hermawan
								 3.Agung Kresna Bayu
								 4.Akhmad Yusuf
                         5.Hilman Ramadian
								 6.Muhammad Fauzi
*/
#include <stdio.h>
#include <constrea.h>
#include <fstream>
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>
fungsi_header(){
cout<<"\tTOKO MAJU SELULER\n";
cout<<"\tToko HP Modern";
}

main ()
{
system("title POS [TOKO MAJU SELULER]");
atas:
clrscr();
system ("color 1A");
char type[20],nama_barang[15],sembarang[100],pilihan_menu;
int harga,kode,qty,total,pembayaran,uang_kembali;

fungsi_header();
gotoxy (5,5);
cout<<"-----------------------------------------------------------------------\n";

gotoxy (5,6); cout<<"| Kode";
gotoxy (12,6); cout<<"| Merk Barang";
gotoxy (40,6); cout<<"| Tipe";
gotoxy (59,6); cout<<"| Harga";
gotoxy (75,6);  cout<<"|\n";

gotoxy (5,7);
cout<<"|---------------------------------------------------------------------|\n";

gotoxy (5,8); cout<<"| 1";
gotoxy (12,8); cout<<"| Oppo";
gotoxy (40,8); cout<<"| F5";
gotoxy (59,8); cout<<"| Rp. 2.965.000";
gotoxy (75,8);  cout<<"|\n";

gotoxy (5,9); cout<<"| 2";
gotoxy (12,9); cout<<"| Oppo";
gotoxy (40,9); cout<<"| F7";
gotoxy (59,9); cout<<"| Rp. 3.911.000";
gotoxy (75,9);  cout<<"|\n";

gotoxy (5,10); cout<<"| 3";
gotoxy (12,10); cout<<"| Oppo";
gotoxy (40,10); cout<<"| F9";
gotoxy (59,10); cout<<"| Rp. 5.572.500";
gotoxy (75,10);  cout<<"|\n";

gotoxy (5,11); cout<<"| 4";
gotoxy (12,11); cout<<"| Vivo";
gotoxy (40,11); cout<<"| V5";
gotoxy (59,11); cout<<"| Rp. 2.812.000";
gotoxy (75,11);  cout<<"|\n";

gotoxy (5,12); cout<<"| 5";
gotoxy (12,12); cout<<"| Vivo";
gotoxy (40,12); cout<<"| V7";
gotoxy (59,12); cout<<"| Rp. 3.782.000";
gotoxy (75,12);  cout<<"|\n";

gotoxy (5,13); cout<<"| 6";
gotoxy (12,13); cout<<"| Vivo";
gotoxy (40,13); cout<<"| V11";
gotoxy (59,13); cout<<"| Rp. 6.232.000";
gotoxy (75,13);  cout<<"|\n";

gotoxy (5,14); cout<<"| 7";
gotoxy (12,14); cout<<"| Samsung";
gotoxy (40,14); cout<<"| A5";
gotoxy (59,14); cout<<"| Rp. 4.453.000";
gotoxy (75,14);  cout<<"|\n";

gotoxy (5,15); cout<<"| 8";
gotoxy (12,15); cout<<"| Samsung";
gotoxy (40,15); cout<<"| A8";
gotoxy (59,15); cout<<"| Rp. 7.999.999";
gotoxy (75,15);  cout<<"|\n";

gotoxy (5,16); cout<<"| 9";
gotoxy (12,16); cout<<"| Samsung";
gotoxy (40,16); cout<<"| J7";
gotoxy (59,16); cout<<"| Rp. 5.918.000";
gotoxy (75,16);  cout<<"|\n";

gotoxy (5,17); cout<<"| 10";
gotoxy (12,17); cout<<"| Xiaomi";
gotoxy (40,17); cout<<"| Redmi 4";
gotoxy (59,17); cout<<"| Rp. 3.942.500";
gotoxy (75,17);  cout<<"|\n";

gotoxy (5,18); cout<<"| 11";
gotoxy (12,18); cout<<"| Xiaomi";
gotoxy (40,18); cout<<"| Redmi 5";
gotoxy (59,18); cout<<"| Rp. 2.251.500";
gotoxy (75,18);  cout<<"|\n";

gotoxy (5,19); cout<<"| 12";
gotoxy (12,19); cout<<"| Xiaomi";
gotoxy (40,19); cout<<"| 5A";
gotoxy (59,19); cout<<"| Rp. 2.341.500";
gotoxy (75,19);  cout<<"|\n";

gotoxy (5,20);
cout<<"-----------------------------------------------------------------------\n\n";
gotoxy (5,21);
cout<<"Ketik Kode Barang\t";cin>>kode;

if (kode<1 || kode >12){
clrscr();
system ("color 2C");
fungsi_header();
cout<<"\n\n\nKode yang di input tidak tersedia, kode yang tersedia hanya 1 s/d 12";
cout<<"\nKetik sembarang dan klik enter untuk ke pilihan barang\t";cin>>sembarang;
goto atas;
}

else if (kode==1){
   strcpy(nama_barang,"Oppo");
   strcpy(type,"F5");
   harga=2965000;
}
else if (kode==2){
   strcpy(nama_barang,"Oppo");
   strcpy(type,"F7");
   harga=3911000;
}
else if (kode==3){
   strcpy(nama_barang,"Oppo");
   strcpy(type,"F9");
   harga=5572500;
}
else if (kode==4){
   strcpy(nama_barang,"Vivo");
   strcpy(type,"V5");
   harga=2812000;
}
else if (kode==5){
   strcpy(nama_barang,"Vivo");
   strcpy(type,"V7");
   harga=3782000;
}
else if (kode==6){
   strcpy(nama_barang,"Vivo");
   strcpy(type,"V11");
   harga=6232000;
}
else if (kode==7){
   strcpy(nama_barang,"Samsung");
   strcpy(type,"A5");
   harga=4453000;
}
else if (kode==8){
   strcpy(nama_barang,"Samsung");
   strcpy(type,"A8");
   harga=7999999;
}
else if (kode==9){
   strcpy(nama_barang,"Samsung");
   strcpy(type,"J7");
   harga=5918000;
}
else if (kode==10){
   strcpy(nama_barang,"Xiaomi");
   strcpy(type,"Redmi 4");
   harga=3942500;
}
else if (kode==11){
   strcpy(nama_barang,"Xiaomi");
   strcpy(type,"Redmi 5");
   harga=2251500;
}
else if (kode==12){
   strcpy(nama_barang,"Xiaomi");
   strcpy(type,"5A");
   harga=2341500;
}

clrscr();
system ("color 1A");
fungsi_header();
gotoxy (5,24);	cout<<"X : Menu Utama";

gotoxy (5,5);
cout<<"-----------------------------------------------------------------------\n";

gotoxy (5,6); cout<<"| Kode";
gotoxy (12,6); cout<<"| Nama Barang";
gotoxy (30,6); cout<<"| Qty";
gotoxy (40,6); cout<<"| Harga";
gotoxy (59,6); cout<<"| Total";
gotoxy (75,6);  cout<<"|\n";

gotoxy (5,7);
cout<<"|---------------------------------------------------------------------|\n";

gotoxy (5,8); cout<<"| "<<kode;
gotoxy (12,8); cout<<"| "<<nama_barang;
gotoxy (30,8); cout<<"| ";
gotoxy (40,8); cout<<"| "<<harga;
gotoxy (59,8); cout<<"| ";
gotoxy (75,8);  cout<<"|\n";

gotoxy (5,9);
cout<<"|---------------------------------------------------------------------|\n";
gotoxy (32,8);cin>>qty;
total =qty*harga;
gotoxy (61,8); cout<<total;

gotoxy (42,11); cout<<"Uang Bayar";
gotoxy (42,12); cout<<"Kembalian";
pembayaran_xy:
gotoxy (61,11); cin>>pembayaran;

if (pembayaran<total){
gotoxy (5,20);	cout<<"Pembayaran gagal";
goto pembayaran_xy;
}
else{
uang_kembali =pembayaran-total;
gotoxy (5,20);	cout<<"Transaksi berhasil";
gotoxy (61,12); cout<<uang_kembali;
}

gotoxy (20,24); cout<<"C : Cetak Struk";
pilihan_menu_xy:
gotoxy (59,24); cin>>pilihan_menu;

if (pilihan_menu=='X' || pilihan_menu=='x'){
goto atas;
}
else if (pilihan_menu=='C' || pilihan_menu=='c'){

ofstream cetak_struk;
            cetak_struk.open("cetak.struk");
            cetak_struk
            <<"\tTOKO MAJU SELULER\n"<<endl
            <<"Transaksi Belanja\n"
            <<"-----------------\n"
            <<"Nama Barang     : "<<nama_barang<<" "<<type<<endl
            <<"QTY             : "<<qty<<endl
            <<"Harga           : "<<harga<<endl
            <<"------------------------------- x"<<endl
            <<"\nTotal Pembelanjaan      : "<<total<<endl
            <<"Pembayaran              : "<<pembayaran<<endl
            <<"-------------------------------"<<endl
            <<"Uang Kembali            : "<<uang_kembali<<endl
            <<"\n\nTerimakasih, Telah Berbelanja";
            cetak_struk.close();
            system("notepad cetak.struk");
            goto atas;
}
else {
goto pilihan_menu_xy;
}


getch();
}
