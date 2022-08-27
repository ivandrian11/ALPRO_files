#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctime>

using namespace std;

main(){
	srand(time(NULL));
	int randomNumber, arr[5][5], len=5;
	bool cek[26];
	for(int k=0; k<26; k++)
		cek[k]=false;
	
	for(int i=0; i<len; i++){
		for(int j=0; j<len; j++){
			do{
				randomNumber = (rand() % 26);
				} while(cek[randomNumber]==true);
			arr[i][j]=97+randomNumber;
			cek[randomNumber]=true;
		}
	}
	for(int i=0; i<len; i++){
		for(int j=0; j<len; j++)
			cout<<char(arr[i][j])<<" ";
		cout<<endl;
		}

	cout<<"Missing char: ";
	for(int k=0; k<26; k++)
		if(cek[k]==false){
			cout<<char(97+k);
			break;
		}
	
	getch();
}