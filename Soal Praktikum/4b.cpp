#include <iostream>
#include <conio.h>

using namespace std;

main(){
	int arr[]={3,5,7,8,10,15,20,25,40,70};
	int len=sizeof(arr)/sizeof(arr[0]), g, *array, potong;
	float total, persentasi;
	array=new int[potong];
	cout<<"Masukkan persentasi pemotongan: ";
	cin>>persentasi;
	g=(persentasi/100)*len;
	cout<<"Menghapus "<<g<<" data paling kiri dan paling kanan"<<endl;
	potong=len-(2*g);
	
	for(int i=0; i<potong; i++){
		array[i]=arr[g];
		g++;
	}
	
	cout<<"\nArray Mean: ";
	for(int i=0; i<len; i++)
		cout<<arr[i]<<" ";
	total=0;
	for(int i=0; i<len; i++){
		total+=arr[i];
	}
	cout<<"\nMean: "<<total/len<<endl;
	
	cout<<"\nArray Trimmed Mean: ";
	for(int i=0; i<potong; i++)
		cout<<array[i]<<" ";
	total=0;
	for(int i=0; i<potong; i++){
		total+=array[i];
	}
	cout<<"\nTrimmed Mean: "<<total/potong;
	
	getch();
}