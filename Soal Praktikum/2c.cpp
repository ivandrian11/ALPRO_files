#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int in_hari, in_tanggal, in_bulan, in_tahun;
    int x, y, z;

    printf("Masukkan hari (0 = Minggu....6 = Sabtu)\nPilihan Anda: ");
    cin>>in_hari;

    printf("Masukkan tanggal: ");
    cin>>in_tanggal;

    printf("Masukkan bulan: ");
    cin>>in_bulan;

    printf("Masukkan tahun: ");
    cin>>in_tahun;

    x = in_tanggal - 21;
    y = in_bulan;
    z = in_tahun;
    if(x < 1){
        x += 30;
        y--;
        if(y < 1){
            y += 12;
            z--;
        }
    }

    cout<<"\nFulan mulai pada hari ";
    switch(in_hari+21%7){
        case 0: cout<<"Minggu, ";
                break;
        case 1: cout<<"Senin, ";
                break;
        case 2: cout<<"Selasa, ";
                break;
        case 3: cout<<"Rabu, ";
                break;
        case 4: cout<<"Kamis, ";
                break;
        case 5: cout<<"Jumat, ";
                break;
        case 6: cout<<"Sabtu, ";
                break;
    }
    cout<<x;
    switch(y){
        case 1: cout<<" Januari ";
                break;
        case 2: cout<<" Februari ";
                break;
        case 3: cout<<" Maret ";
                break;
        case 4: cout<<" April ";
                break;
        case 5: cout<<" Mei ";
                break;
        case 6: cout<<" Juni ";
                break;
        case 7: cout<<" Juli ";
                break;
        case 8: cout<<" Agustus ";
                break;
        case 9: cout<<" September ";
                break;
        case 10: cout<<" Oktober ";
                break;
        case 11: cout<<" November ";
                break;
        case 12: cout<<" Desember ";
                break;
    }
    cout<<z<<endl;

    cout<<"Menjadi kebiasaan pada hari ";
    switch(in_hari){
        case 0: cout<<"Minggu, ";
                break;
        case 1: cout<<"Senin, ";
                break;
        case 2: cout<<"Selasa, ";
                break;
        case 3: cout<<"Rabu, ";
                break;
        case 4: cout<<"Kamis, ";
                break;
        case 5: cout<<"Jumat, ";
                break;
        case 6: cout<<"Sabtu, ";
                break;
    }
    cout<<in_tanggal;
    switch(in_bulan){
        case 1: cout<<" Januari ";
                break;
        case 2: cout<<" Februari ";
                break;
        case 3: cout<<" Maret ";
                break;
        case 4: cout<<" April ";
                break;
        case 5: cout<<" Mei ";
                break;
        case 6: cout<<" Juni ";
                break;
        case 7: cout<<" Juli ";
                break;
        case 8: cout<<" Agustus ";
                break;
        case 9: cout<<" September ";
                break;
        case 10: cout<<" Oktober ";
                break;
        case 11: cout<<" November ";
                break;
        case 12: cout<<" Desember ";
                break;
    }
    cout<<in_tahun<<endl;

    x = in_tanggal + (90-21);
    y = in_bulan;
    z = in_tahun;

    while(x > 30){
        x -= 30;
        y++;
    }
    if(y > 12){
        y -= 12;
        z++;
    }

    cout<<"Menjadi gaya hidup pada hari ";
    switch((in_hari + (90-21))%7){
        case 0: cout<<"Minggu, ";
                break;
        case 1: cout<<"Senin, ";
                break;
        case 2: cout<<"Selasa, ";
                break;
        case 3: cout<<"Rabu, ";
                break;
        case 4: cout<<"Kamis, ";
                break;
        case 5: cout<<"Jumat, ";
                break;
        case 6: cout<<"Sabtu, ";
                break;
    }
    cout<<x;
    switch(y){
        case 1: cout<<" Januari ";
                break;
        case 2: cout<<" Februari ";
                break;
        case 3: cout<<" Maret ";
                break;
        case 4: cout<<" April ";
                break;
        case 5: cout<<" Mei ";
                break;
        case 6: cout<<" Juni ";
                break;
        case 7: cout<<" Juli ";
                break;
        case 8: cout<<" Agustus ";
                break;
        case 9: cout<<" September ";
                break;
        case 10: cout<<" Oktober ";
                break;
        case 11: cout<<" November ";
                break;
        case 12: cout<<" Desember ";
                break;
    }
    cout<<z<<endl;

    system("pause");
}