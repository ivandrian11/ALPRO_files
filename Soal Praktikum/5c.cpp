#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctime>

using namespace std;

struct mhs{
	char nama[50];
};

main(){
	bool udah[10];
	int urut[10], z;
	mhs d[10];
	
	for(int i=0; i<10; i++){
		printf("Masukkan nama orang ke-%d: ", (i+1));
		gets(d[i].nama);
		udah[i]=false;
	}
	
	for(int i=0; i<10; i++){
		for(z=0; z<10; z++)
			if(udah[z]==false)
				break;
		urut[i]=z;
		for(int j=0; j<10; j++){
			if(udah[j]==true)
				continue;
			if(z!=j)
				if(strcmp(d[z].nama,d[j].nama)>0){
					urut[i]=j;
					z=j;
				}
		}
		udah[urut[i]]=true;		
	}
	
	cout<<"\nAbsen:";
	for(int i=0; i<10; i++){
		printf("\n%d. %s", (i+1), d[urut[i]].nama);
	}
	getch();
}