#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int fakto(int x){
	// 5
	if(x==1)
		return x;
	else
		return x*fakto(x-1);
	// 5*4*3*2*1=120
}	// 5! = 5x4x3x2x1

main(){
	
	cout<<"5"<<" Faktorial: "<<fakto(5)<<endl;
	printf("%d Faktorial: %d \n", 5, fakto(5));
	getch();
}