#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

void anakAyam(int jumlah);

int main(){
    int n;
    do
    {
        cout<<"Masukkan jumlah anak ayam (1<=N<=100): ";
        cin >> n;
    } while(n < 1 || n>100);
    cout<<"tek kotek kotek kotek, anak ayam turun berkotek\n";
    anakAyam(n);
    getch();
}

void anakAyam(int jumlah){
    if(jumlah == 1){
		cout<<"anak ayam turunlah "<<jumlah<<" mati satu tinggallah induknya";
        return;
    }
    else{
        cout<<"anak ayam turunlah "<<jumlah<<" mati satu tinggallah "<<jumlah-1<<endl;
    }
    anakAyam(jumlah-1);
}