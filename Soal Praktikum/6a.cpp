#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int tot=0;
struct dora{
	char tempat[50];
	int jarak;
	dora* next;
};

int tampil(dora *arr)
{
	tot+=arr->jarak;
	printf("Anda berada di %s\n\tdan telah menempuh jarak sebesar %d km", arr, tot);
	if(arr->next != 0)
	{
		cout<< ", kemudian\n";
		return tampil(arr->next);
	}
	else
		return 0;
}

main(){
	dora *d = new dora[4];
	strcpy(d[0].tempat, "Rumah");
	strcpy(d[1].tempat, "Blue Bird");
	strcpy(d[2].tempat, "Taman Sejahtera");
	strcpy(d[3].tempat, "Smanju");
	d[0].jarak=0;
	d[1].jarak=2;
	d[2].jarak=5;
	d[3].jarak=3;
	for(int i=0; i<4; i++){
		if(i!=3)
			d[i].next=&d[i+1];
		else
			d[i].next=NULL;
	}

	cout<<"\tRincian perjalanan:\n"<<endl;
	tampil(&d[0]);
	
	getch();
}