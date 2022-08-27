#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

main(){
	string input, konversi="";
	int a,b,c, n=0, index=-1;
	int *arr = new int[n];
	bool fibo=true;
	cout<<"Masukkan nilai: ";
	getline(cin, input);
	
	cout<<"Baris: "<<input;
	
	for(int i=0; i<input.length(); i++){
		if(input[i]!=' '){
			konversi+=input[i];
			if(i==input.length()-1){
				n++;
				index++;
				arr[index]=stoi(konversi);
				konversi="";
			}
		} else
			if(konversi.length()!=0){
				n++;
				index++;
				arr[index]=stoi(konversi);
				konversi="";
			}
			
	}
	cout<<"\nArray: ";
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	int x=0, y=0;
	for(int i=0; i<n; i++){
		x+=arr[i];
		if(i%2==0)
			y+=arr[i];
		else
			y-=arr[i];
	}
	cout<<"\nHasil Operasi Penjumlahan: "<<x<<endl;
	cout<<"Hasil Operasi Selang Seling: "<<y<<endl;
	
	if(n<3)
		fibo=false;
	else{
		for(int i=2; i<n; i++){
			a=arr[i-2];
			b=arr[i-1];
			c=arr[i];
			if((a+b)!=c){
				fibo=false;
				break;
			}
		}
	}
	cout<<"Fibo: ";
	if(fibo==true)
		cout<<"Benar";
	else
		cout<<"Bukan";
	getch();
}