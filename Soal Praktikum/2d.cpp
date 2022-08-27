#include <stdio.h>
#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

main(){
    string input, kode = "51067";
    int correctNum, correctPos, wrongPos, loop = 0;
    bool repeat;

    while(true){
        correctNum = 0;
        correctPos = 0;
        do{
            repeat = false;
            printf("Masukkan kode(5 angka yang berbeda): ");
            cin >> input;
            for(int i = 0; i <= input.length() - 1; i++)
                for(int j = i+1; j <= input.length(); j++)
                    if(input[i] == input[j])
                        repeat = true;
        } while(repeat == true || input.length() > 5 || input.length() < 5);

        if(input.length() == 5){
            for(int i = 0; i < input.length(); i++)
                for(int j = 0; j < input.length(); j++)
                    if(input[i] == kode[j]){
                        correctNum++;
                        if(i == j)
                            correctPos++;
                    }
            wrongPos = correctNum - correctPos;
            loop++;
            if(correctNum == 5 && correctPos == 5)
                break;
            else{
                if(correctNum == 0)
                    printf("Seluruh digit salah");
                else{
                    if(correctNum == wrongPos)
                        printf("%d digit benar tetapi posisinya salah", correctNum);
                    else if(correctNum == correctPos)
                        printf("%d digit benar dan posisinya juga benar", correctNum);
                    else
                        printf("%d digit benar tetapi hanya %d digit yang posisinya benar", correctNum, correctPos);
                }    
            }
        }
        getch();
        cout<<"\n\n";
    }
    printf("Selamat, Anda menyelesaikan permainan ini dalam %dx perulangan.", loop);
    getch();
}