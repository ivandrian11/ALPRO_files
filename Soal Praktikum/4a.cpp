#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

main(){
    char angka[20];
	int arr[3][3], x=0, hist[9];
	int len=sizeof(arr)/sizeof(arr[0]);
	bool sem;
	do{
		sem=false;
		cout<<"Masukkan nilai: ";
		gets(angka);
		
		for(int i=0; i<strlen(angka); i++)
			if(angka[i]=='9'||angka[i]==' ')
				sem=1;
	} while(strlen(angka)<1||sem==true);
	
	for(int i=0; i<len; i++)
		for(int j=0; j<len; j++){
			if(x==strlen(angka))
				x=0;
			arr[i][j]=int(angka[x])-48;
			x++;
		}
		
	cout<<"Array: "<<endl;
	for(int i=0; i<len; i++){
		for(int j=0; j<len; j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	
	for(int i=0; i<9; i++)
		hist[i]=0;
	
	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++)
			hist[arr[i][j]] += 1;
	
	cout<<"Histogram: ";
	for(int i=0; i<9; i++)
		cout<<hist[i]<<" ";
	
	getch();
}