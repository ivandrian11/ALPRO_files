#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctime>

using namespace std;

struct cermin{
	int arr[3][3];
};

main(){
	srand((unsigned) time(0));
	int randomNumber;
	cermin d[3];
	int last = 2;

	for(int i=0; i<3; i++){
		bool cek[10];
		for(int k=0; k<10; k++)
			cek[k]=false;
		for(int j=0; j<3; j++){
			do{
				randomNumber = (rand() % 10);
			} while(cek[randomNumber]==true);
			d[0].arr[i][j]=randomNumber;
			cek[randomNumber]=true;
		}
	}
	
	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++){
			d[1].arr[i][j] = d[0].arr[last-i][j];
			d[2].arr[i][j] = d[0].arr[i][last-j];
		}
	
	for(int x=0; x<3; x++){
		if(x==0)
			cout<<"Array Utama: "<<endl;
		else if(x==1)
			cout<<"Cermin thd Sb X: "<<endl;
		else
			cout<<"Cermin thd Sb Y: "<<endl;
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++)
				cout<<d[x].arr[i][j]<<" ";
			cout<<endl;
		}
		cout<<endl;
	}
	getch();
}