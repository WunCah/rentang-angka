#include<iostream>
#include<conio.h>
using namespace std;
main ()
{
      ulang:

    double NilaiUjian;
    char skor;

    cout<<"Nur Wulan Cahani \n";
    cout<<"19051397010\n";
    cout<<"D4 Manajemen Informatika \n";
    cout<<"selamat datang di Rentang Angka"

    ;cout<<"\n";
    cout<<"\n Masukan Nilai Ujian : ";
    cin>>NilaiUjian;

    if (NilaiUjian >= 95)
    {
        skor= 'A' ;
    }
        else

    if (NilaiUjian >=85)
    {
        skor= 'B'
    ;}
        else

    if (NilaiUjian >=75)
    {
        skor= 'D'
    ;}
       else
        skor='E'
        ;cout<<"skornya adalah : "<<skor<<endl;

    return 0;

}
