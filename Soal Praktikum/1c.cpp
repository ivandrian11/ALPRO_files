#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int a = 1, b = 5;
    printf("%d \n", b - a);
    printf("%d \n", b - a++);
    printf("%d \n", b - ++a);
    a--;
    printf("%d \n", b - ++a);
    ++a;
    printf("%d \n", b - a--);
    printf("%d \n", b - --a);
    system("pause");
}