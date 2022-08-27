#include <iostream>
#include <conio.h>

using namespace std;

void decToBin(int dec){
	if(dec==0)
		return;
	decToBin(dec/2);
	cout<<dec%2;	
}

void decToOctal(int dec){
	if(dec<8){
		cout<<dec;
		return;
	}
	decToOctal(dec/8);
	cout<<dec%8;	
}

void decToHeksa(int dec){
	if(dec<16){
		if(dec%16==15)
			cout<<"F";
		else if(dec%16==14)
			cout<<"E";
		else if(dec%16==13)
			cout<<"D";
		else if(dec%16==12)
			cout<<"C";
		else if(dec%16==11)
			cout<<"B";
		else if(dec%16==10)
			cout<<"A";
		else
			cout<<dec%16;
		return;
	}
	decToHeksa(dec/16);
	if(dec%16<16)
		decToHeksa(dec%16);
	else
		cout<<dec%16;
}

double pow(double nilai, double pangkat){
	if(pangkat==1)
		return nilai;
	else
		return nilai*pow(nilai, pangkat-1);
}

main(){
	int nilai;
	cout<<"Masukkan nilai: ";
	cin>>nilai;
	cout<<"Nilai desimal yang dimasukkan: "<<nilai;
	cout<<"\nNilai binernya: ";
	decToBin(nilai);
	cout<<"\nNilai oktalnya: ";
	decToOctal(nilai);
	cout<<"\nNilai heksanya: ";
	decToHeksa(nilai);
	getch();

}