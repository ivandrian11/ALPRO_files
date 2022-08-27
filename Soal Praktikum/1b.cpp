#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
    char input;
    cout<<"Input: ";
    cin>>input;
    printf("Output: %d\n", 9-(int(input)%10));
    system("pause");
}