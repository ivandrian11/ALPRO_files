#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <windows.h>
#include <cstring>
using namespace std;
                                //INGAT STRUCT OTOT
struct olahraga{
    string nama[9];
    string durasi[9];
    int batas;
};  olahraga ol[9];

      // DEKLARASI FUNGSI
void Olahraga_Ideal();
void Makan_Ideal();
void Otot();

     //FUNGSI COLOR
void setcolor(unsigned short color)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,color);
}

    //FUNGSI GOTOXY
void gotoxy(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
        dwCursorPosition.X = x;
        dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}
		// DEKLARASI STRUCT
struct identitas{
    char nama[50];
    char kelamin;
    int usia;
    float bb;
    float tb;
    int sakit;
    int aktif;
};		identitas id;	// Objek id

struct opsi{
    int menu;
    int makan;
    int otot;
    float ideal;
    float energi;
    int karbo;
    int protein;
    int lemak;
};		opsi o;	// Objek o

   //FUNGSI ISI NAMA DAN DURASI SEMUA OLAHRAGA
void PenamaanIdeal(){			//NAMA OLAHRAGA IDEAL TIAP PENYAKIT DAN TIDAK SAKIT
    ol[1].nama[0]="Jogging";               ol[2].nama[0]="Jogging";         ol[3].nama[0]="Jogging";
    ol[1].nama[1]="Yoga\t";                ol[2].nama[1]="Aerobik";         ol[3].nama[1]="Yoga\t";
    ol[1].nama[2]="Bersepeda";             ol[2].nama[2]="Bersepeda";       ol[3].nama[2]="Bersepeda";
    ol[1].nama[3]="Berenang";              ol[2].nama[3]="Meditasi";        ol[3].nama[3]="Berenang";
    ol[1].nama[4]="Bulu Tangkis";          ol[2].nama[4]="Bulu Tangkis";    ol[4].nama[0]="Jogging";
    ol[1].nama[5]="Tenis";                 ol[2].nama[5]="Futsal";          ol[4].nama[1]="Skipping";
    ol[1].nama[6]="Lari\t";                ol[2].nama[6]="Sepak Bola";      ol[4].nama[2]="Bersepeda";
    ol[1].nama[7]="Voli\t";                ol[2].nama[7]="Basket";          ol[4].nama[3]="Berenang";
    ol[1].nama[8]="Baseball";          //BATAS TIAP OLAHRAGA

    ol[5].nama[0]="Bersepeda";             ol[7].nama[0]="Jogging";         ol[8].nama[1]="Berenang";           ol[0].nama[5]="Pull Up";
    ol[5].nama[1]="Berenang";              ol[7].nama[1]="Bersepeda";       ol[8].nama[2]="Jogging";            ol[0].nama[6]="Yoga\t";
    ol[5].nama[2]="Jogging";               ol[7].nama[2]="Berenang";        ol[0].nama[0]="Stretching";         ol[0].nama[7]="Jumping";
    ol[6].nama[0]="Jogging\t";             ol[7].nama[3]="Streching";       ol[0].nama[1]="Plank";              ol[0].nama[8]="Squat";
    ol[6].nama[1]="Bersepeda\t";           ol[7].nama[4]="Berjinjit";       ol[0].nama[2]="Lari\t";
    ol[6].nama[2]="Berenang\t";            ol[7].nama[5]="Senam Stroke";          ol[0].nama[3]="Push Up";
    ol[6].nama[3]="Naik turun tangga";     ol[8].nama[0]="Bersepeda";       ol[0].nama[4]="Sit Up";
//DURASI SAKIT IDEAL
    ol[1].durasi[0]="15-30 Menit";                ol[2].durasi[0]="15-30 Menit";         ol[3].durasi[0]="15-30 Menit";
    ol[1].durasi[1]="Min. 2x Seminggu";           ol[2].durasi[1]="Min. 2x Seminggu";    ol[3].durasi[1]="Min. 2x Seminggu";
    ol[1].durasi[2]="15-45 Menit";                ol[2].durasi[2]="15-45 Menit";         ol[3].durasi[2]="15-45 Menit";
    ol[1].durasi[3]="Min. 1x Seminggu";           ol[2].durasi[3]="15-30 Menit";         ol[3].durasi[3]="Min. 1x Seminggu";
    ol[1].durasi[4]="Min. 1x Seminggu";           ol[2].durasi[4]="Min. 3x Seminggu";    ol[4].durasi[0]="15-30 Menit";
    ol[1].durasi[5]="Min. 3x Seminggu";           ol[2].durasi[5]="Min. 3x Seminggu";    ol[4].durasi[1]="5-10 Menit";
    ol[1].durasi[6]="20-30 Menit";                ol[2].durasi[6]="Min. 3x Seminggu";    ol[4].durasi[2]="15-45 Menit";
    ol[1].durasi[7]="Min. 2x Seminggu";           ol[2].durasi[7]="Min. 3x Seminggu";    ol[4].durasi[3]="Min. 1x Seminggu";
    ol[1].durasi[8]="Min. 3x Seminggu";

    ol[5].durasi[0]="15-45 Menit";           ol[7].durasi[0]="15-30 Menit";              ol[8].durasi[1]="Min. 1x Seminggu";
    ol[5].durasi[1]="Min. 1x Seminggu";      ol[7].durasi[1]="10-15 Menit";              ol[8].durasi[2]="15-30 Menit";
    ol[5].durasi[2]="15-30 Menit";           ol[7].durasi[2]="Min. 1x Seminggu";
    ol[6].durasi[0]="15-30 Menit";           ol[7].durasi[3]="10-15 Menit";
    ol[6].durasi[1]="15-45 Menit";           ol[7].durasi[4]="2-5 Menit";
    ol[6].durasi[2]="Min. 1x Seminggu";      ol[7].durasi[5]="3x Seminggu";
    ol[6].durasi[3]="3-8 Menit";             ol[8].durasi[0]="15-45 Menit";

if(id.kelamin=='p'||id.kelamin=='P'){
    ol[0].durasi[0]="2-5 Menit";        ol[0].durasi[3]="8 kali";          ol[0].durasi[7]="8-12 kali";
    ol[0].durasi[1]="15-30 Detik";      ol[0].durasi[4]="10 kali";         ol[0].durasi[8]="2x8 Set";
    ol[0].durasi[2]="10-15 Menit";      ol[0].durasi[5]="3 kali";          ol[0].durasi[6]="Min.2x Seminggu";
    }
else{
    ol[0].durasi[0]="3-5 Menit";        ol[0].durasi[3]="10 kali";         ol[0].durasi[7]="10-15 kali";
    ol[0].durasi[1]="15-30 Detik";      ol[0].durasi[4]="15 kali";         ol[0].durasi[8]="4x8 Set";
    ol[0].durasi[2]="10-15 Menit";      ol[0].durasi[5]="5 kalii";          ol[0].durasi[6]="Min.2x Seminggu";
    }
                                                      //BATAS
ol[0].batas=9;	ol[1].batas=9;	ol[2].batas=8;	ol[3].batas=4;	ol[4].batas=4;	ol[5].batas=3;	ol[6].batas=4;	ol[7].batas=6;	ol[8].batas=3;
o.otot=0;}

void Loading(){
gotoxy(0,26);  cout<<"PLEASE WAIT. . . .";
gotoxy(0,27);
for(int i=0;i<=114;i++)
{
cout<<(char) 219;
    Sleep(10);
}
cout<<endl;
system("cls");}

void PenamaanOtot(){
      //NAMA OLAHRAGA OTOT
ol[1].nama[0]="Loncat Bintang";     ol[2].nama[0]="Loncat Bintang";     ol[3].nama[1]="Angkat Tangan Sambil Berdiri\t";
ol[1].nama[1]="Crunch Perut\t";       ol[2].nama[1]="Push Up\t";            ol[3].nama[2]="Angkat Tangan ke Samping\t";
ol[1].nama[2]="Puntir Rusia\t";       ol[2].nama[2]="Tricip Dip\t";         ol[3].nama[3]="Tricip Dip\t\t\t";
ol[1].nama[3]="Pendaki Gunung";     ol[2].nama[3]="Push Up Melebar";    ol[3].nama[4]="Putar Lengan Searah Jarum Jam";
ol[1].nama[4]="Angkat Kaki\t";        ol[2].nama[4]="Push Up Lutut";      ol[3].nama[5]="Push Up Berlian\t\t";
ol[1].nama[5]="Plank\t";              ol[2].nama[5]="Peregangan Kobra";   ol[3].nama[6]="Loncat Bintang\t\t";
ol[1].nama[6]="Sit Up\t";             ol[3].nama[0]="Push Up\t\t\t";        ol[3].nama[7]="Diagonal Plank\t\t";

ol[3].nama[8]="Meninju\t\t\t";                                            ol[5].nama[0]="Loncat Bintang";
ol[4].nama[0]="Loncat Samping\t";                                         ol[5].nama[1]="Push Up Lutut";
ol[4].nama[1]="Squat\t\t";                                                ol[5].nama[2]="Sikap Anak\t";
ol[4].nama[2]="Angkat Kaki Menyamping";
ol[4].nama[3]="Lari Pagi atau Sore\t";                                    ol[5].nama[3]="Hiperekstensi";
ol[4].nama[4]="Lompat Jongkok\t";                                         ol[5].nama[4]="Push Up Tombak";
ol[4].nama[5]="Duduk di Dinding\t";                                       ol[5].nama[5]="Inchworms\t";
ol[4].nama[6]="Tendangan Keledai\t";                                      ol[5].nama[6]="Membalikkan Push Up";

//DOERASI TIAP OLAHRAGA OTOT
	if(id.sakit==1){                                      //ASMA
   if(id.kelamin=='p'||id.kelamin=='P'){
   ol[1].durasi[0]="10 detik";     ol[2].durasi[0]="10 detik";      ol[3].durasi[0]="15 detik";      ol[4].durasi[0]="20 detik";
   ol[1].durasi[1]="10 kali";      ol[2].durasi[1]="8 kali";        ol[3].durasi[1]="15 kali";       ol[4].durasi[1]="10 kali";
   ol[1].durasi[2]="15 kali";      ol[2].durasi[2]="5 kali";        ol[3].durasi[2]="8 kali";        ol[4].durasi[2]="10 kali";
   ol[1].durasi[3]="8 kali";       ol[2].durasi[3]="5 kali";        ol[3].durasi[3]="15 detik";      ol[4].durasi[3]=">20 menit";
   ol[1].durasi[4]="8 kali";       ol[2].durasi[4]="5 kali";        ol[3].durasi[4]="5 kali";        ol[4].durasi[4]="20 kali";
   ol[1].durasi[5]="10 detik";     ol[2].durasi[5]="10 detik";      ol[3].durasi[5]="20 detik";      ol[4].durasi[5]="15 detik";
   ol[1].durasi[6]="10 kali";      ol[5].durasi[1]="10 kali";       ol[3].durasi[6]="8 kali";        ol[4].durasi[6]="12 kali";
   ol[5].durasi[0]="20 detik";     ol[5].durasi[2]="15 detik";      ol[3].durasi[7]="8 kali";        ol[5].durasi[5]="12 kali";
   ol[5].durasi[3]="10 kali";      ol[5].durasi[4]="10 kali";       ol[3].durasi[8]="20 kali";       ol[5].durasi[6]="10 kali";
   }
   else{
   ol[1].durasi[0]="15 detik";     ol[2].durasi[0]="15 detik";      ol[3].durasi[0]="30 detik";      ol[4].durasi[0]="30 detik";
   ol[1].durasi[1]="12 kali";      ol[2].durasi[1]="10 kali";       ol[3].durasi[1]="30 kali";       ol[4].durasi[1]="12 kali";
   ol[1].durasi[2]="20 kali";      ol[2].durasi[2]="6 kali";        ol[3].durasi[2]="10 kali";       ol[4].durasi[2]="12 kali";
   ol[1].durasi[3]="12 kali";      ol[2].durasi[3]="6 kali";        ol[3].durasi[3]="30 detik";      ol[4].durasi[3]=">30 menit";
   ol[1].durasi[4]="10 kali";      ol[2].durasi[4]="8 kali";        ol[3].durasi[4]="6 kali";        ol[4].durasi[4]="25 kali";
   ol[1].durasi[5]="20 detik";     ol[2].durasi[5]="15 detik";      ol[3].durasi[5]="25 detik";      ol[4].durasi[5]="30 detik";
   ol[1].durasi[6]="15 kali";      ol[5].durasi[0]="25 detik";      ol[3].durasi[6]="10 kali";       ol[4].durasi[6]="18 kali";
   ol[5].durasi[1]="12 kali";      ol[5].durasi[2]="30 detik";      ol[3].durasi[7]="10 kali";       ol[5].durasi[5]="16 kali";
   ol[5].durasi[3]="14 kali";      ol[5].durasi[4]="12 kali";       ol[3].durasi[8]="25 kali";       ol[5].durasi[6]="12 kali";
   	}}

else if(id.sakit==2){
   if(id.kelamin=='p'||id.kelamin=='P'){                  //ANEMIA
   ol[1].durasi[0]="10 detik";     ol[2].durasi[0]="10 detik";      ol[3].durasi[0]="15 detik";      ol[4].durasi[0]="20 detik";
   ol[1].durasi[1]="10 kali";      ol[2].durasi[1]="8 kali";        ol[3].durasi[1]="15 kali";       ol[4].durasi[1]="10 kali";
   ol[1].durasi[2]="15 kali";      ol[2].durasi[2]="5 kali";        ol[3].durasi[2]="8 kali";        ol[4].durasi[2]="10 kali";
   ol[1].durasi[3]="8 kali";       ol[2].durasi[3]="5 kali";        ol[3].durasi[3]="15 detik";      ol[4].durasi[3]=">20 menit";
   ol[1].durasi[4]="8 kali";       ol[2].durasi[4]="5 kali";        ol[3].durasi[4]="5 kali";        ol[4].durasi[4]="20 kali";
   ol[1].durasi[5]="10 detik";     ol[2].durasi[5]="10 detik";      ol[3].durasi[5]="20 detik";      ol[4].durasi[5]="15 detik";
   ol[1].durasi[6]="10 kali";      ol[5].durasi[1]="10 kali";       ol[3].durasi[6]="8 kali";        ol[4].durasi[6]="12 kali";
   ol[5].durasi[0]="20 detik";     ol[5].durasi[2]="15 detik";      ol[3].durasi[7]="8 kali";        ol[5].durasi[5]="12 kali";
   ol[5].durasi[3]="10 kali";      ol[5].durasi[4]="10 kali";       ol[3].durasi[8]="20 kali";       ol[5].durasi[6]="10 kali";
   }
   else{
   ol[1].durasi[0]="15 detik";     ol[2].durasi[0]="15 detik";      ol[3].durasi[0]="30 detik";      ol[4].durasi[0]="30 detik";
   ol[1].durasi[1]="12 kali";      ol[2].durasi[1]="10 kali";       ol[3].durasi[1]="30 kali";       ol[4].durasi[1]="12 kali";
   ol[1].durasi[2]="20 kali";      ol[2].durasi[2]="6 kali";        ol[3].durasi[2]="10 kali";       ol[4].durasi[2]="12 kali";
   ol[1].durasi[3]="12 kali";      ol[2].durasi[3]="6 kali";        ol[3].durasi[3]="30 detik";      ol[4].durasi[3]=">30 menit";
   ol[1].durasi[4]="10 kali";      ol[2].durasi[4]="8 kali";        ol[3].durasi[4]="6 kali";        ol[4].durasi[4]="25 kali";
   ol[1].durasi[5]="20 detik";     ol[2].durasi[5]="15 detik";      ol[3].durasi[5]="25 detik";      ol[4].durasi[5]="30 detik";
   ol[1].durasi[6]="15 kali";      ol[5].durasi[0]="25 detik";      ol[3].durasi[6]="10 kali";       ol[4].durasi[6]="18 kali";
   ol[5].durasi[1]="12 kali";      ol[5].durasi[2]="30 detik";      ol[3].durasi[7]="10 kali";       ol[5].durasi[3]="14 kali";
   ol[5].durasi[5]="16 kali";      ol[5].durasi[6]="12 kali";       ol[3].durasi[8]="25 kali";       ol[5].durasi[4]="12 kali";
   	}}

   else if(id.sakit==3){                                      //DIABETES
   if(id.kelamin=='p'||id.kelamin=='P'){
   ol[1].durasi[0]="15 detik";     ol[2].durasi[0]="15 detik";      ol[3].durasi[0]="20 detik";      ol[4].durasi[0]="15 detik";
   ol[1].durasi[1]="10 kali";      ol[2].durasi[1]="10 kali";       ol[3].durasi[1]="20 kali";       ol[4].durasi[1]="10 kali";
   ol[1].durasi[2]="15 kali";      ol[2].durasi[2]="6 kali";        ol[3].durasi[2]="15 kali";       ol[4].durasi[2]="10 kali";
   ol[1].durasi[3]="10 kali";      ol[2].durasi[3]="6 kali";        ol[3].durasi[3]="25 detik";      ol[4].durasi[3]=">20 menit";
   ol[1].durasi[4]="10 kali";      ol[2].durasi[4]="8 kali";        ol[3].durasi[4]="6 kali";        ol[4].durasi[4]="15 kali";
   ol[1].durasi[5]="15 detik";     ol[2].durasi[5]="15 detik";      ol[3].durasi[5]="20 detik";      ol[4].durasi[5]="20 detik";
   ol[1].durasi[6]="10 kali";      ol[5].durasi[0]="15 detik";      ol[3].durasi[6]="10 kali";       ol[4].durasi[6]="15 kali";
   ol[5].durasi[1]="8 kali";       ol[5].durasi[2]="20 detik";      ol[3].durasi[7]="10 kali";       ol[5].durasi[5]="10 kali";
   ol[5].durasi[3]="12 kali";      ol[5].durasi[4]="15 kali";       ol[3].durasi[8]="20 kali";       ol[5].durasi[6]="10 kali";
   }
   else{
   ol[1].durasi[0]="20 detik";     ol[2].durasi[0]="20 detik";      ol[3].durasi[0]="30 detik";      ol[4].durasi[0]="20 detik";
   ol[1].durasi[1]="15 kali";      ol[2].durasi[1]="10 kali";       ol[3].durasi[1]="30 kali";       ol[4].durasi[1]="15 kali";
   ol[1].durasi[2]="20 kali";      ol[2].durasi[2]="8 kali";        ol[3].durasi[2]="15 kali";       ol[4].durasi[2]="15 kali";
   ol[1].durasi[3]="10 kali";      ol[2].durasi[3]="8 kali";        ol[3].durasi[3]="30 detik";      ol[4].durasi[3]=">30 menit";
   ol[1].durasi[4]="10 kali";      ol[2].durasi[4]="10 kali";       ol[3].durasi[4]="6 kali";        ol[4].durasi[4]="20 kali";
   ol[1].durasi[5]="20 detik";     ol[2].durasi[5]="20 detik";      ol[3].durasi[5]="25 detik";      ol[4].durasi[5]="30 detik";
   ol[1].durasi[6]="15 kali";      ol[5].durasi[0]="20 detik";      ol[3].durasi[6]="10 kali";       ol[4].durasi[6]="18 kali";
   ol[5].durasi[1]="10 kali";      ol[5].durasi[2]="30 detik";      ol[3].durasi[7]="15 kali";       ol[5].durasi[5]="15 kali";
   ol[5].durasi[3]="14 kali";      ol[5].durasi[4]="15 kali";       ol[3].durasi[8]="25 kali";       ol[5].durasi[6]="12 kali";
   	}}

  else if(id.sakit==4){                                      //JANTUNG
  if(id.kelamin=='p'||id.kelamin=='P'){
ol[1].durasi[0]="8 detik";      ol[2].durasi[0]="8 detik";    ol[3].durasi[1]="10 kali";    ol[3].durasi[8]="10 kali";
ol[1].durasi[1]="6 kali";       ol[2].durasi[1]="6 kali";     ol[3].durasi[2]="8 kali";     ol[4].durasi[0]="8 detik";
ol[1].durasi[2]="8 kali";       ol[2].durasi[2]="6 kali";     ol[3].durasi[3]="8 detik";    ol[4].durasi[1]="6 kali";
ol[1].durasi[3]="6 kali";       ol[2].durasi[3]="5 kali";     ol[3].durasi[4]="4 kali";     ol[4].durasi[2]="6 kali";
ol[1].durasi[4]="8 kali";       ol[2].durasi[4]="8 kali";     ol[3].durasi[5]="10 detik";   ol[4].durasi[3]=">5 menit";
ol[1].durasi[5]="7 detik";      ol[2].durasi[5]="10 detik";   ol[3].durasi[6]="6 kali";     ol[4].durasi[4]="8 kali";
ol[1].durasi[6]="6 kali";       ol[3].durasi[0]="8 detik";    ol[3].durasi[7]="8 kali";     ol[4].durasi[5]="10 detik";

ol[4].durasi[6]="8 kali";       ol[5].durasi[1]="6 kali";     ol[5].durasi[3]="8 kali";     ol[5].durasi[5]="8 kali";
ol[5].durasi[0]="8 detik";      ol[5].durasi[2]="10 detik";   ol[5].durasi[4]="8 kali";     ol[5].durasi[6]="6 kali";
}
else{
ol[1].durasi[0]="10 detik";     ol[2].durasi[0]="10 detik";     ol[3].durasi[1]="15 kali";      ol[3].durasi[8]="15 kali";
ol[1].durasi[1]="8 kali";       ol[2].durasi[1]="8 kali";       ol[3].durasi[2]="10 kali";      ol[4].durasi[0]="12 detik";
ol[1].durasi[2]="10 kali";      ol[2].durasi[2]="8 kali";       ol[3].durasi[3]="15 detik";     ol[4].durasi[1]="10 kali";
ol[1].durasi[3]="8 kali";       ol[2].durasi[3]="8 kali";       ol[3].durasi[4]="6 kali";       ol[4].durasi[2]="8 kali";
ol[1].durasi[4]="10 kali";      ol[2].durasi[4]="10 kali";      ol[3].durasi[5]="20 detik";     ol[4].durasi[3]=">10 menit";
ol[1].durasi[5]="10 detik";     ol[2].durasi[5]="15 detik";     ol[3].durasi[6]="8 kali";       ol[4].durasi[4]="10 kali";
ol[1].durasi[6]="10 kali";      ol[3].durasi[0]="10 detik";     ol[3].durasi[7]="10 kali";      ol[4].durasi[5]="15 detik";
ol[4].durasi[6]="12 kali";      ol[5].durasi[0]="12 detik";     ol[5].durasi[1]="8 kali";       ol[5].durasi[2]="15 detik";
ol[5].durasi[3]="10 kali";      ol[5].durasi[4]="12 kali";      ol[5].durasi[5]="10 kali";      ol[5].durasi[6]="8 kali";
}}

  else if(id.sakit==5){                                      //HYPERTENSI
  if(id.kelamin=='p'||id.kelamin=='P'){
ol[1].durasi[0]="10 detik";     ol[2].durasi[0]="10 detik";     ol[3].durasi[1]="15 kali";     ol[3].durasi[8]="20 kali";
ol[1].durasi[1]="10 kali";      ol[2].durasi[1]="8 kali";       ol[3].durasi[2]="8 kali";      ol[4].durasi[0]="20 detik";
ol[1].durasi[2]="15 kali";      ol[2].durasi[2]="5 kali";       ol[3].durasi[3]="15 detik";    ol[4].durasi[1]="10 kali";
ol[1].durasi[3]="8 kali";       ol[2].durasi[3]="5 kali";       ol[3].durasi[4]="5 kali";      ol[4].durasi[2]="10 kali";
ol[1].durasi[4]="8 kali";       ol[2].durasi[4]="5 kali";       ol[3].durasi[5]="20 detik";    ol[4].durasi[3]=">20 menit";
ol[1].durasi[5]="10 detik";     ol[2].durasi[5]="10 detik";     ol[3].durasi[6]="8 kali";      ol[4].durasi[4]="20 kali";
ol[1].durasi[6]="10 kali";      ol[3].durasi[0]="15 detik";     ol[3].durasi[7]="8 kali";      ol[4].durasi[5]="15 detik";

ol[4].durasi[6]="12 kali";      ol[5].durasi[1]="10 kali";      ol[5].durasi[3]="10 kali";     ol[5].durasi[5]="12 kali";
ol[5].durasi[0]="20 detik";     ol[5].durasi[2]="15 detik";     ol[5].durasi[4]="10 kali";     ol[5].durasi[6]="10 kali";
}
else{
ol[1].durasi[0]="15 detik";     ol[2].durasi[0]="15 detik";     ol[3].durasi[1]="30 kali";      ol[3].durasi[8]="25 kali";
ol[1].durasi[1]="12 kali";      ol[2].durasi[1]="10 kali";      ol[3].durasi[2]="10 kali";      ol[4].durasi[0]="30 detik";
ol[1].durasi[2]="20 kali";      ol[2].durasi[2]="6 kali";       ol[3].durasi[3]="30 detik";     ol[4].durasi[1]="12 kali";
ol[1].durasi[3]="12 kali";      ol[2].durasi[3]="6 kali";       ol[3].durasi[4]="6 kali";       ol[4].durasi[2]="12 kali";
ol[1].durasi[4]="10 kali";      ol[2].durasi[4]="8 kali";       ol[3].durasi[5]="25 detik";     ol[4].durasi[3]=">30 menit";
ol[1].durasi[5]="20 detik";     ol[2].durasi[5]="15 detik";     ol[3].durasi[6]="10 kali";      ol[4].durasi[4]="25 kali";
ol[1].durasi[6]="15 kali";      ol[3].durasi[0]="30 detik";     ol[3].durasi[7]="10 kali";      ol[4].durasi[5]="30 detik";

ol[4].durasi[6]="18 kali";      ol[5].durasi[2]="30 detik";     ol[5].durasi[5]="16 kali";
ol[5].durasi[0]="25 detik";     ol[5].durasi[3]="14 kali";      ol[5].durasi[6]="12 kali";
ol[5].durasi[1]="12 kali";      ol[5].durasi[4]="12 kali";
}}

  else if(id.sakit==6){                                      //PARU BASAH
  if(id.kelamin=='p'||id.kelamin=='P'){
ol[1].durasi[0]="20 detik";     ol[2].durasi[0]="15 detik";     ol[3].durasi[1]="20 kali";      ol[3].durasi[8]="25 kali";
ol[1].durasi[1]="25 kali";      ol[2].durasi[1]="15 kali";      ol[3].durasi[2]="20 kali";      ol[4].durasi[0]="15 detik";
ol[1].durasi[2]="20 kali";      ol[2].durasi[2]="10 kali";      ol[3].durasi[3]="20 detik";     ol[4].durasi[1]="20 kali";
ol[1].durasi[3]="10 kali";      ol[2].durasi[3]="15 kali";      ol[3].durasi[4]="10 kali";      ol[4].durasi[2]="20 kali";
ol[1].durasi[4]="10 kali";      ol[2].durasi[4]="15 kali";      ol[3].durasi[5]="25 detik";     ol[4].durasi[3]=">20 menit";
ol[1].durasi[5]="20 detik";     ol[2].durasi[5]="20 detik";     ol[3].durasi[6]="20 kali";      ol[4].durasi[4]="25 kali";
ol[1].durasi[6]="15 kali";      ol[3].durasi[0]="20 detik";     ol[3].durasi[7]="20 kali";      ol[4].durasi[5]="20 detik";

ol[4].durasi[6]="20 kali";      ol[5].durasi[2]="25 detik";     ol[5].durasi[5]="20 kali";
ol[5].durasi[0]="20 detik";     ol[5].durasi[3]="15 kali";      ol[5].durasi[6]="15 kali";
ol[5].durasi[1]="20 kali";      ol[5].durasi[4]="15 kali";

}
else{
ol[1].durasi[0]="30 detik";     ol[2].durasi[0]="30 detik";     ol[3].durasi[1]="25 kali";      ol[3].durasi[8]="30 kali";
ol[1].durasi[1]="20 kali";      ol[2].durasi[1]="20 kali";      ol[3].durasi[2]="25 kali";      ol[4].durasi[0]="20 detik";
ol[1].durasi[2]="25 kali";      ol[2].durasi[2]="15 kali";      ol[3].durasi[3]="30 detik";     ol[4].durasi[1]="25 kali";
ol[1].durasi[3]="15 kali";      ol[2].durasi[3]="20 kali";      ol[3].durasi[4]="15 kali";      ol[4].durasi[2]="25 kali";
ol[1].durasi[4]="15 kali";      ol[2].durasi[4]="20 kali";      ol[3].durasi[5]="30 detik";     ol[4].durasi[3]=">30 menit";
ol[1].durasi[5]="25 detik";     ol[2].durasi[5]="30 detik";     ol[3].durasi[6]="25 kali";      ol[4].durasi[4]="30 kali";
ol[1].durasi[6]="20 kali";      ol[3].durasi[0]="30 detik";     ol[3].durasi[7]="25 kali";      ol[4].durasi[5]="30 detik";

ol[4].durasi[6]="25 kali";      ol[5].durasi[2]="30 detik";     ol[5].durasi[5]="25 kali";
ol[5].durasi[0]="30 detik";     ol[5].durasi[3]="20 kali";      ol[5].durasi[6]="20 kali";
ol[5].durasi[1]="25 kali";      ol[5].durasi[4]="20 kali";
}}

  else if(id.sakit==7){                                      //STROKE
  if(id.kelamin=='p'||id.kelamin=='P'){
ol[1].durasi[0]="10 detik";     ol[2].durasi[0]="10 detik";     ol[3].durasi[1]="15 kali";      ol[3].durasi[8]="20 kali";
ol[1].durasi[1]="10 kali";      ol[2].durasi[1]="8 kali";       ol[3].durasi[2]="8 kali";       ol[4].durasi[0]="20 detik";
ol[1].durasi[2]="15 kali";      ol[2].durasi[2]="5 kali";       ol[3].durasi[3]="15 detik";     ol[4].durasi[1]="10 kali";
ol[1].durasi[3]="8 kali";       ol[2].durasi[3]="5 kali";       ol[3].durasi[4]="5 kali";       ol[4].durasi[2]="10 kali";
ol[1].durasi[4]="8 kali";       ol[2].durasi[4]="5 kali";       ol[3].durasi[5]="20 detik";     ol[4].durasi[3]=">20 menit";
ol[1].durasi[5]="10 detik";     ol[2].durasi[5]="10 detik";     ol[3].durasi[6]="8 kali";       ol[4].durasi[4]="20 kali";
ol[1].durasi[6]="10 kali";      ol[3].durasi[0]="15 detik";     ol[3].durasi[7]="8 kali";       ol[4].durasi[5]="15 detik";

ol[4].durasi[6]="12 kali";      ol[5].durasi[1]="10 kali";      ol[5].durasi[3]="10 kali";      ol[5].durasi[5]="12 kali";
ol[5].durasi[0]="20 detik";     ol[5].durasi[2]="15 detik";     ol[5].durasi[4]="10 kali";      ol[5].durasi[6]="10 kali";
}
else{
ol[1].durasi[0]="15 detik";     ol[2].durasi[0]="15 detik";     ol[3].durasi[1]="30 kali";      ol[3].durasi[8]="25 kali";
ol[1].durasi[1]="12 kali";      ol[2].durasi[1]="10 kali";      ol[3].durasi[2]="10 kali";      ol[4].durasi[0]="30 detik";
ol[1].durasi[2]="20 kali";      ol[2].durasi[2]="6 kali";       ol[3].durasi[3]="30 detik";     ol[4].durasi[1]="12 kali";
ol[1].durasi[3]="12 kali";      ol[2].durasi[3]="6 kali";       ol[3].durasi[4]="6 kali";       ol[4].durasi[2]="12 kali";
ol[1].durasi[4]="10 kali";      ol[2].durasi[4]="8 kali";       ol[3].durasi[5]="25 detik";     ol[4].durasi[3]=">30 menit";
ol[1].durasi[5]="20 detik";     ol[2].durasi[5]="15 detik";     ol[3].durasi[6]="10 kali";      ol[4].durasi[4]="25 kali";
ol[1].durasi[6]="15 kali";      ol[3].durasi[0]="30 detik";     ol[3].durasi[7]="10 kali";      ol[4].durasi[5]="30 detik";

ol[4].durasi[6]="18 kali";      ol[5].durasi[1]="12 kali";      ol[5].durasi[3]="14 kali";      ol[5].durasi[5]="16 kali";
ol[5].durasi[0]="25 detik";     ol[5].durasi[2]="30 detik";     ol[5].durasi[4]="12 kali";      ol[5].durasi[6]="12 kali";
}}

  else if(id.sakit==8){                                      //GINJAL BOCOR
  if(id.kelamin=='p'||id.kelamin=='P'){
ol[1].durasi[0]="5 detik";     ol[2].durasi[0]="5 detik";    ol[3].durasi[1]="4 kali";      ol[3].durasi[8]="8 kali";
ol[1].durasi[1]="3 kali";      ol[2].durasi[1]="4 kali";     ol[3].durasi[2]="4 kali";      ol[4].durasi[0]="8 detik";
ol[1].durasi[2]="4 kali";      ol[2].durasi[2]="2 kali";     ol[3].durasi[3]="5 detik";     ol[4].durasi[1]="4 kali";
ol[1].durasi[3]="4 kali";      ol[2].durasi[3]="2 kali";     ol[3].durasi[4]="3 kali";      ol[4].durasi[2]="4 kali";
ol[1].durasi[4]="4 kali";      ol[2].durasi[4]="3 kali";     ol[3].durasi[5]="5 detik";     ol[4].durasi[3]=">3 menit";
ol[1].durasi[5]="5 detik";     ol[2].durasi[5]="5 detik";    ol[3].durasi[6]="4 kali";      ol[4].durasi[4]="5 kali";
ol[1].durasi[6]="4 kali";      ol[3].durasi[0]="5 detik";    ol[3].durasi[7]="4 kali";      ol[4].durasi[5]="5 detik";

ol[4].durasi[6]="4 kali";      ol[5].durasi[1]="4 kali";     ol[5].durasi[3]="5 kali";      ol[5].durasi[5]="5 kali";
ol[5].durasi[0]="5 detik";     ol[5].durasi[2]="8 detik";    ol[5].durasi[4]="4 kali";      ol[5].durasi[6]="4 kali";

}
else{
ol[1].durasi[0]="10 detik";     ol[2].durasi[0]="10 detik";   ol[3].durasi[1]="8 kali";     ol[3].durasi[8]="15 kali";
ol[1].durasi[1]="6 kali";       ol[2].durasi[1]="8 kali";     ol[3].durasi[2]="8 kali";     ol[4].durasi[0]="15 detik";
ol[1].durasi[2]="8 kali";       ol[2].durasi[2]="4 kali";     ol[3].durasi[3]="10 detik";   ol[4].durasi[1]="8 kali";
ol[1].durasi[3]="8 kali";       ol[2].durasi[3]="4 kali";     ol[3].durasi[4]="6 kali";     ol[4].durasi[2]="8 kali";
ol[1].durasi[4]="8 kali";       ol[2].durasi[4]="6 kali";     ol[3].durasi[5]="10 detik";   ol[4].durasi[3]=">5 menit";
ol[1].durasi[5]="10 detik";     ol[2].durasi[5]="10 detik";   ol[3].durasi[6]="8 kali";     ol[4].durasi[4]="10 kali";
ol[1].durasi[6]="8 kali";       ol[3].durasi[0]="10 detik";   ol[3].durasi[7]="8 kali";     ol[4].durasi[5]="10 detik";

ol[4].durasi[6]="8 kali";       ol[5].durasi[1]="8 kali";     ol[5].durasi[3]="10 kali";    ol[5].durasi[5]="10 kali";
ol[5].durasi[0]="10 detik";     ol[5].durasi[2]="15 detik";   ol[5].durasi[4]="8 kali";     ol[5].durasi[6]="8 kali";
}}
	else{                   //SEHAT
   if(id.kelamin=='p'||id.kelamin=='P'){
   ol[1].durasi[0]="15 detik";     ol[2].durasi[0]="15 detik";      ol[3].durasi[0]="15 detik";      ol[4].durasi[0]="20 detik";
   ol[1].durasi[1]="10 kali";      ol[2].durasi[1]="10 kali";       ol[3].durasi[1]="15 kali";       ol[4].durasi[1]="8 kali";
   ol[1].durasi[2]="10 kali";      ol[2].durasi[2]="4 kali";        ol[3].durasi[2]="5 kali";        ol[4].durasi[2]="8 kali";
   ol[1].durasi[3]="10 kali";      ol[2].durasi[3]="4 kali";        ol[3].durasi[3]="15 detik";      ol[4].durasi[3]=">20 menit";
   ol[1].durasi[4]="10 kali";      ol[2].durasi[4]="4 kali";        ol[3].durasi[4]="4 kali";        ol[4].durasi[4]="15 kali";
   ol[1].durasi[5]="15 detik";     ol[2].durasi[5]="10 detik";      ol[3].durasi[5]="15 detik";      ol[4].durasi[5]="20 detik";
   ol[1].durasi[6]="10 kali";      ol[5].durasi[0]="20 detik";      ol[3].durasi[6]="8 kali";        ol[4].durasi[6]="10 kali";
   ol[5].durasi[1]="10 kali";      ol[5].durasi[2]="20 detik";      ol[3].durasi[7]="8 kali";        ol[5].durasi[5]="10 kali";
   ol[5].durasi[3]="10 kali";      ol[5].durasi[4]="8 kali";        ol[3].durasi[8]="15 kali";       ol[5].durasi[6]="8 kali";
   }
   else{
   ol[1].durasi[0]="20 detik";     ol[2].durasi[0]="20 detik";      ol[3].durasi[0]="30 detik";      ol[4].durasi[0]="30 detik";
   ol[1].durasi[1]="16 kali";      ol[2].durasi[1]="20 kali";       ol[3].durasi[1]="30 kali";       ol[4].durasi[1]="12 kali";
   ol[1].durasi[2]="20 kali";      ol[2].durasi[2]="6 kali";        ol[3].durasi[2]="10 kali";       ol[4].durasi[2]="12 kali";
   ol[1].durasi[3]="16 kali";      ol[2].durasi[3]="8 kali";        ol[3].durasi[3]="30 detik";      ol[4].durasi[3]=">30 menit";
   ol[1].durasi[4]="16 kali";      ol[2].durasi[4]="8 kali";        ol[3].durasi[4]="6 kali";        ol[4].durasi[4]="30 kali";
   ol[1].durasi[5]="20 detik";     ol[2].durasi[5]="20 detik";      ol[3].durasi[5]="30 detik";      ol[4].durasi[5]="30 detik";
   ol[1].durasi[6]="20 kali";      ol[5].durasi[0]="30 detik";      ol[3].durasi[6]="10 kali";       ol[4].durasi[6]="18 kali";
   ol[5].durasi[1]="14 kali";      ol[5].durasi[2]="30 detik";      ol[3].durasi[7]="10 kali";       ol[5].durasi[5]="16 kali";
   ol[5].durasi[3]="14 kali";      ol[5].durasi[4]="14 kali";       ol[3].durasi[8]="30 kali";       ol[5].durasi[6]="12 kali";
   	}}
                                                      //BATAS
if(o.otot!=0){
ol[1].batas=7;	ol[2].batas=6;	ol[3].batas=9;	ol[4].batas=7;	ol[5].batas=7;}
}
		// KUMPULAN FUNGSI
void DataDiri(){
gotoxy(50,1);   for(int i=0;i<=45;i++){cout<<"-";}
gotoxy(50,2);   cout<<"|NAMA		: "<<strupr(id.nama);                                               gotoxy(95,2); cout<<"|";
gotoxy(50,3);   cout<<"|KELAMIN	: ";	if(id.kelamin=='p'||id.kelamin=='P'){cout<<"PEREMPUAN";}
													else{cout<<"LAKI-LAKI";}                                      gotoxy(95,3); cout<<"|";
gotoxy(50,4);   cout<<"|USIA		: "<<id.usia;                                                       gotoxy(95,4); cout<<"|";
gotoxy(50,5);   cout<<"|BERAT BADAN	: "<<id.bb<<"kg";                                                gotoxy(95,5); cout<<"|";
gotoxy(50,6);   cout<<"|TINGGI BADAN	: "<<id.tb<<"cm";                                             gotoxy(95,6); cout<<"|";
gotoxy(50,7);   cout<<"|PENYAKIT	: ";  if(id.sakit==1){cout<<"ASMA";}
                                       else if(id.sakit==2){cout<<"ANEMIA";}
                                       else if(id.sakit==3){cout<<"DIABETES MELITUS";}
                                       else if(id.sakit==4){cout<<"PENYAKIT JANTUNG";}
                                       else if(id.sakit==5){cout<<"HYPERTENSI";}
                                       else if(id.sakit==6){cout<<"PARU-PARU BASAH";}
                                       else if(id.sakit==7){cout<<"STROKE";}
                                       else if(id.sakit==8){cout<<"GINJAL BOCOR";}
                                       else{cout<<"TIDAK ADA";}                                      gotoxy(95,7); cout<<"|";
gotoxy(50,8);   cout<<"|AKTIVITAS	: "; if(id.aktif==1){cout<<"SEDENTER";}
                                       else if(id.aktif==2){cout<<"KURANG AKTIF";}
                                       else if(id.aktif==3){cout<<"CUKUP AKTIF";}
                                       else if(id.aktif==4){cout<<"SANGAT AKTIF";}                   gotoxy(95,8); cout<<"|";
gotoxy(50,9);   for(int i=0;i<=45;i++){cout<<"-";}
gotoxy(0,1);
}


void Gizi(){		// FUNGSI GIZI PER HARI

switch(id.aktif){
case 1: if(id.kelamin=='p'||id.kelamin=='P'){                              // Sedenter
         o.energi=(655+(9.6*id.bb)+(1.8*id.tb)-(4.7*id.usia))*1.3;}
        else{
         o.energi=(66+(13.7*id.bb)+(5*id.tb)-(6.8*id.usia))*1.3;}
        break;
case 2: if(id.kelamin=='p'||id.kelamin=='P'){                              // kurang
         o.energi=(655+(9.6*id.bb)+(1.8*id.tb)-(4.7*id.usia))*1.55;}
        else{
         o.energi=(66+(13.7*id.bb)+(5*id.tb)-(6.8*id.usia))*1.56;}
        break;
case 3: if(id.kelamin=='p'||id.kelamin=='P'){                              // kurang
         o.energi=(655+(9.6*id.bb)+(1.8*id.tb)-(4.7*id.usia))*1.7;}
        else{
         o.energi=(66+(13.7*id.bb)+(5*id.tb)-(6.8*id.usia))*1.76;}
        break;
case 4: if(id.kelamin=='p'||id.kelamin=='P'){                              // kurang
         o.energi=(655+(9.6*id.bb)+(1.8*id.tb)-(4.7*id.usia))*2;}
        else{
         o.energi=(66+(13.7*id.bb)+(5*id.tb)-(6.8*id.usia))*2.1;}
        break;
} // KEBUTUHAN ENERGI PER HARINYA

switch(id.sakit){
case 1: o.karbo=(o.energi*65/100)/4;    	    // ASMA
        o.lemak=(o.energi*20/100)/9;
        o.protein=(o.energi*15/100)/4;
        break;
case 2: o.karbo=(o.energi*60/100)/4;         //Anemia
        o.lemak=(o.energi*20/100)/9;
        o.protein=(o.energi*20/100)/4;
        break;
case 3: o.karbo=(o.energi*60/100)/4;         // Diabetes
        o.lemak=(o.energi*20/100)/9;
        o.protein=(o.energi*20/100)/4;
        break;
case 4: o.karbo=(o.energi*60/100)/4;         // Jantung
        o.lemak=(o.energi*25/100)/9;
        o.protein=(o.energi*15/100)/4;
        break;
case 5: o.karbo=(o.energi*65/100)/4;         //Hipertensi
        o.lemak=(o.energi*15/100)/9;
        o.protein=(o.energi*20/100)/4;
        break;
case 6: o.karbo=(o.energi*65/100)/4;         // Paru-paru
        o.lemak=(o.energi*25/100)/9;
        o.protein=(o.energi*10/100)/4;
        break;
case 7: o.karbo=(o.energi*60/100)/4;         // Stroke
        o.lemak=(o.energi*25/100)/9;
        o.protein=(o.energi*15/100)/4;
        break;
case 8: o.karbo=(o.energi*65/100)/4;         // Ginjal
        o.lemak=(o.energi*20/100)/9;
        o.protein=(o.energi*15/100)/4;
        break;
default: o.karbo=(o.energi*65/100)/4;         // Normal
         o.lemak=(o.energi*23/100)/9;
         o.protein=(o.energi*12/100)/4;
         break;
}}		// BAGI NUTRISI

void Ideal(float c,float d){     // FUNGSI BADAN IDEAL
PenamaanIdeal();	// KET: c=bb, d=tb
int x=c;				 // variabel bantu
d/=100;	d*=d;     // ubah ke satuan cm  dan pangkat 2
o.ideal=c/d;     // DAPAT HASIL IDEALMU
system("cls");
DataDiri();          //TABEL DATA DIRI		//PENGECEKAN BADAN
if(o.ideal<18.5){                                    // kurus
        cout<<"Berat badan anda kurang dari normal"<<endl;
        while(x>=c){
        if(x/d>=18.5){
        cout<<"Anda butuh min "<<(x-c)<<"kg untuk mencapai ideal"<<endl;	break;}
        x++;}
        getch();	Olahraga_Ideal();}

else if(o.ideal>=18.5&&o.ideal<=24.9){               // ideal
        cout<<"Selamat !! Berat badan anda 'IDEAL'\n"<<endl;
        getch();
        cout<<"Apakah kamu ingin membentuk otot tubuh?"<<endl
            <<"0. Tidak	1. Ya"<<endl                            // Terima atau Keluar
            <<"=================================="<<endl
            <<"Pilih : ";						cin>>o.otot;
        		if(o.otot==1){
                cout<<"\nPilihan Otot :"<<endl
                <<"1.Otot Perut"<<endl
                <<"2.Otot Dada"<<endl
                <<"3.Otot Lengan"<<endl
                <<"4.Otot Kaki"<<endl
                <<"5.Otot Bahu dan Punggung"<<endl
                <<"=================================="<<endl
                <<"Pilih : ";						cin>>o.otot;}
            else{exit(0);}
PenamaanOtot();	Otot();}

else if(o.ideal>=25&&o.ideal<=29.9){                 // gemuk
        cout<<"Berat badan anda lebih dari normal"<<endl;
        while(x<=c){
        if(x/d<25){
        cout<<"Anda butuh diet min "<<(c-x)<<"kg untuk mencapai ideal"<<endl;	break;}
        x--;}
        getch();	Olahraga_Ideal();}
else{                                                // obesitas
        cout<<"Anda obesitas"<<endl;
        while(x<=c){
        if(x/d<25){
        cout<<"Anda butuh diet min "<<(c-x)<<"kg untuk mencapai ideal"<<endl;	break;}
        x--;}
        getch();	Olahraga_Ideal();}
}

void Olahraga_Ideal(){           // FUNGSI Saran Olahraga Ideal
cout<<"\nSaran Olahraga untuk Anda :"<<endl;
for(int i=0;i<ol[id.sakit].batas;i++){
cout<<(i+1)<<". "<<ol[id.sakit].nama[i]<<"\t("<<ol[id.sakit].durasi[i]<<")"<<endl;}
cout<<"\nTekan keyboard apapun untuk melanjutkan";
getch();
}

void Makan_Ideal(){     // FUNGSI PILIH MAKANAN
string makan[22];
makan[0]="Roti Gandum(100gr)";   	makan[1]="Ikan Asin(100gr)";
makan[2]="Nasi Goreng(100gr)";  		makan[3]="Ayam Panggang(85gr)";
makan[4]="Tempe Goreng(85gr)";  		makan[5]="Nasi Putih(100gr)";
makan[6]="Puding Coklat(100gr)";		makan[7]="Pisang(Sedang 18-20cm)";
makan[8]="Yoghurt(240ml)";       	makan[9]="Susu Sapi Murni(240ml)";
makan[10]="Ikan Tongkol(100gr)"; 	makan[11]="Telur Rebus(100gr)";
makan[12]="Telur Dadar(100gr)";  	makan[13]="Salad Buah(100gr)";
makan[14]="Kentang Rebus(100gr)";	makan[15]="Cumi Rebus(100gr)";
makan[16]="Ubi Jalar Ungu(100gr)";	makan[17]="Tumis Kangkung(85gr)";
makan[18]="Sayur Sop(241gr)";       makan[20]="Tahu Goreng(1 ons)";
makan[19]="Apel(100gr)";        		makan[21]="Salad Sayur(100gr)";

int jml[23],	tot[23];       	// Berdasarkan jumlah menu
float tk=0,	tl=0,	tp=0,	k,	l,	p;   // t=total,
for(int i=1 ; i<=22 ; i++){   // Supaya gak error/berisi alamat
    jml[i]=0;tot[i]=0;
}
bool ulang=true;              // siap looping
while(ulang==true)
{   system("cls");
    cout<<"|========================================================MENU========================================================|"<<endl
        <<"|==========================================================|=========================================================|"<<endl;
        if(id.sakit==2||id.sakit==7||id.sakit==8){setcolor(11);}
        cout<<"|1."<<makan[0]<<"     [P=9gr    |L=4gr     |K=54.4gr ] ";			 setcolor(15);
        if(id.sakit==1||id.sakit==2||id.sakit==8){setcolor(11);}
        cout<<"|12."<<makan[11]<<"    [P=12.5gr |L=10.57gr |K=1.12gr ]|"<<endl;   setcolor(15);
        if(id.sakit==2){setcolor(11);}	else{setcolor(15);}
        cout<<"|2."<<makan[1]<<"       [P=42gr   |L=1.6gr   |K=0  gr  ] ";      	 setcolor(15);
        cout<<"|13."<<makan[12]<<"    [P=10.62gr|L=12.02gr |K=0.69gr ]|"<<endl;
        cout<<"|3."<<makan[2]<<"     [P=6.3gr  |L=6.23gr  |K=21.1gr ] ";
        if(id.sakit==1||id.sakit==4||id.sakit==7){setcolor(11);}
        cout<<"|14."<<makan[13]<<"     [P=0.41gr |L=0.1 gr  |K=22.36gr]|"<<endl;  setcolor(15);
        if(id.sakit==2||id.sakit==3){setcolor(11);}
        cout<<"|4."<<makan[3]<<"    [P=23gr   |L=11.46gr |K=0  gr  ] ";         	 setcolor(15);
        if(id.sakit==4||id.sakit==5){setcolor(11);}
        cout<<"|15."<<makan[14]<<"  [P=1.8gr  |L=0.1gr   |K=20.1gr ]|"<<endl;     setcolor(15);
        if(id.sakit==2||id.sakit==3){setcolor(11);}
        cout<<"|5."<<makan[4]<<"     [P=11.31gr|L=12.93gr |K=10.15gr] ";        	 setcolor(15);
        if(id.sakit==3){setcolor(11);}	else{setcolor(15);}
        cout<<"|16."<<makan[15]<<"     [P=15.58gr|L=1.38gr  |K=3.08gr ]|"<<endl;  setcolor(15);
        if(id.sakit==2||id.sakit==8){setcolor(11);}
        cout<<"|6."<<makan[5]<<"      [P=2.66gr |L=0.28gr  |K=28gr   ] ";       	 setcolor(15);
        if(id.sakit==3||id.sakit==6){setcolor(11);}
        cout<<"|17."<<makan[16]<<" [P=1.37gr |L=0.14gr  |K=17.7gr ]|"<<endl;      setcolor(15);
        cout<<"|7."<<makan[6]<<"   [P=2.7gr  |L=4 gr    |K=23gr   ] ";
        if(id.sakit==2||id.sakit==4){setcolor(11);}
        cout<<"|18."<<makan[17]<<"  [P=2.76gr |L=9.4gr   |K=4.31 gr]|"<<endl;     setcolor(15);
        if(id.sakit!=2&&id.sakit!=8&&id.sakit!=0){setcolor(11);}
        cout<<"|8."<<makan[7]<<" [P=1.29gr |L=0.39gr  |K=27gr   ] ";            	 setcolor(15);
        if(id.sakit!=0){setcolor(11);}
        cout<<"|19."<<makan[18]<<"      [P=2.12gr |L=1.9gr   |K=11.98gr]|"<<endl; setcolor(15);
        if(id.sakit==3||id.sakit==5){setcolor(11);}
        cout<<"|9."<<makan[8]<<"         [P=8.5gr  |L=7.96gr  |K=11.42gr] ";    	 setcolor(15);
        if(id.sakit==8){setcolor(11);}
        cout<<"|20."<<makan[19]<<"           [P=0.26gr |L=0.17gr  |K=13.81gr]|"<<endl; setcolor(15);
        if(id.sakit==1||id.sakit==2){setcolor(11);}
        cout<<"|10."<<makan[9]<<"[P=7.86gr |L=7.93gr  |K=11.03gr] ";              setcolor(15);
        if(id.sakit==2||id.sakit==3){setcolor(11);}
        cout<<"|21."<<makan[20]<<"    [P=4.87gr |L=5.72gr  |K=2.97gr ]|"<<endl;   setcolor(15);
        if(id.sakit==2){setcolor(11);}
        cout<<"|11."<<makan[10]<<"   [P=24gr   |L=1 gr    |K=0gr    ] ";        	 setcolor(15);
        if(id.sakit==1||id.sakit==4||id.sakit==7){setcolor(11);}	else{setcolor(15);}
        cout<<"|22."<<makan[21]<<"    [P=1.52gr |L=0.24gr  |K=3.2gr  ]|";
        if(id.sakit!=0){setcolor(11);cout<<"\n "<<(char) 219<<" Rekomendasi Makanan";}	setcolor(15);
        cout<<"\n|====================================================================================================================|"<<endl;
			cout<<" Kebutuhan: ";    		setcolor(10);
         cout<<"P="<<o.protein<<"gr "<<"L="<<o.lemak<<"gr "<<"K="<<o.karbo<<"gr "<<endl;
			setcolor(15); cout<<" Terpenuhi: ";
if(o.ideal<18.5){                                                  // KURUS
if(tp-o.protein<0){setcolor(12);}  else if(tp-o.protein>20){setcolor(14);} else{setcolor(10);}
cout<<"P="<<tp<<"gr ";
if(tl-o.lemak<0){setcolor(12);}  else if(tl-o.lemak>20){setcolor(14);} else{setcolor(10);}
cout<<"L="<<tl<<"gr ";
if(tk-o.karbo<0){setcolor(12);}  else if(tk-o.karbo>20){setcolor(14);} else{setcolor(10);}
cout<<"K="<<tk<<"gr "<<endl;
if(tp-o.protein>20||tl-o.lemak>20||tk-o.karbo>20){setcolor(14);	cout<<" Ket:	Terdapat Gizi yang Berlebih. Tekan 0 untuk mengulang!";}
else if(tp-o.protein<0||tl-o.lemak<0||tk-o.karbo<0){setcolor(12);	cout<<" Ket:	Gizi Belum Terpenuhi";}
else{setcolor(10);	cout<<" Ket:	Tekan 0 untuk selesai!";}}

else if(o.ideal>=18.5&&o.ideal<=24.9){                            // IDEAL
if(tp-o.protein<-5){setcolor(12);}  else if(tp-o.protein>10){setcolor(14);} else{setcolor(10);}
cout<<"P="<<tp<<"gr ";
if(tl-o.lemak<-5){setcolor(12);}  else if(tl-o.lemak>10){setcolor(14);} else{setcolor(10);}
cout<<"L="<<tl<<"gr ";
if(tk-o.karbo<-5){setcolor(12);}  else if(tk-o.karbo>10){setcolor(14);} else{setcolor(10);}
cout<<"K="<<tk<<"gr "<<endl;
if(tp-o.protein>10||tl-o.lemak>10||tk-o.karbo>10){setcolor(14);	cout<<" Ket:	Terdapat Gizi yang Berlebih. Tekan 0 untuk mengulang!";}
else if(tp-o.protein<-5||tl-o.lemak<-5||tk-o.karbo<-5){setcolor(12);	cout<<" Ket:	Gizi Belum Terpenuhi";}
else{setcolor(10);	cout<<" Ket:	Tekan 0 untuk selesai!";}}

else if(o.ideal>=25&&o.ideal<=29.9){                             // GEMUK
if(tp-o.protein<-15){setcolor(12);}  else if(tp-o.protein>5){setcolor(14);} else{setcolor(10);}
cout<<"P="<<tp<<"gr ";
if(tl-o.lemak<-15){setcolor(12);}  else if(tl-o.lemak>5){setcolor(14);} else{setcolor(10);}
cout<<"L="<<tl<<"gr ";
if(tk-o.karbo<-15){setcolor(12);}  else if(tk-o.karbo>5){setcolor(14);} else{setcolor(10);}
cout<<"K="<<tk<<"gr "<<endl;
if(tp-o.protein>5||tl-o.lemak>5||tk-o.karbo>5){setcolor(14);	cout<<" Ket:	Terdapat Gizi yang Berlebih. Tekan 0 untuk mengulang!";}
else if(tp-o.protein<-15||tl-o.lemak<-15||tk-o.karbo<-15){setcolor(12);	cout<<" Ket:	Gizi Belum Terpenuhi";}
else{setcolor(10);	cout<<" Ket:	Tekan 0 untuk selesai!";}}

else{                                            // ObesitaSSS
if(tp-o.protein<-20){setcolor(12);}  else if(tp-o.protein>0){setcolor(14);} else{setcolor(10);}
cout<<"p="<<tp<<"gr ";
if(tl-o.lemak<-20){setcolor(12);}  else if(tl-o.lemak>0){setcolor(14);} else{setcolor(10);}
cout<<"l="<<tl<<"gr ";
if(tk-o.karbo<-20){setcolor(12);}  else if(tk-o.karbo>0){setcolor(14);} else{setcolor(10);}
cout<<"k="<<tk<<"gr "<<endl;
if(tp-o.protein>0||tl-o.lemak>0||tk-o.karbo>0){setcolor(14);	cout<<" Ket:	Terdapat Gizi yang Berlebih. Tekan 0 untuk mengulang!";}
else if(tp-o.protein<-20||tl-o.lemak<-20||tk-o.karbo<-20){setcolor(12);	cout<<" Ket:	Gizi Belum Terpenuhi";}
else{setcolor(10);	cout<<" Ket:	Tekan 0 untuk selesai!";}}

setcolor(15);
cout<<"\n|====================================================================================================================|"<<endl
        <<"Pilihan Anda :";cin>>o.makan;
        if(o.makan>0){
    cout<<"Sebanyak     :"; cin>>jml[o.makan];}
        switch(o.makan)
    {
        case 1: p=9*jml[o.makan];    l=4*jml[o.makan];   k=54.4*jml[o.makan];
                break;
        case 2: p=42*jml[o.makan];  l=1.6*jml[o.makan];    k=0*jml[o.makan];
                break;
        case 3: p=6.3*jml[o.makan];    l=6.23*jml[o.makan];   k=21.1*jml[o.makan];
                break;
        case 4: p=23*jml[o.makan];  l=11.46*jml[o.makan];    k=0*jml[o.makan];
                break;
        case 5: p=11.31*jml[o.makan];    l=12.93*jml[o.makan];     k=10.15*jml[o.makan];
                break;
        case 6: p=2.66*jml[o.makan];  l=0.28*jml[o.makan];   k=28*jml[o.makan];
                break;
        case 7: p=2.7*jml[o.makan];   l=4*jml[o.makan];    k=23*jml[o.makan];
                break;
        case 8: p=1.29*jml[o.makan];  l=0.39*jml[o.makan];   k=27*jml[o.makan];
                break;
        case 9: p=8.5*jml[o.makan];  l=7.96*jml[o.makan];   k=11.42*jml[o.makan];
                break;
        case 10:p=7.86*jml[o.makan];   l=7.93*jml[o.makan];     k=11.03*jml[o.makan];
                break;
        case 11:p=24*jml[o.makan];  l=1*jml[o.makan];     k=0*jml[o.makan];
                break;
        case 12:p=12.5*jml[o.makan];    l=10.57*jml[o.makan];   k=1.12*jml[o.makan];
                break;
        case 13:p=10.62*jml[o.makan];   l=12.02*jml[o.makan];     k=0.69*jml[o.makan];
                break;
        case 14:p=0.41*jml[o.makan];    l=0.1*jml[o.makan];     k=22.36*jml[o.makan];
                break;
        case 15:p=1.8*jml[o.makan];    l=0.1*jml[o.makan];     k=20.1*jml[o.makan];
                break;
        case 16:p=15.58*jml[o.makan];   l=1.38*jml[o.makan];    k=3.08*jml[o.makan];
                break;
        case 17:p=1.37*jml[o.makan];  l=0.14*jml[o.makan];   k=17.7*jml[o.makan];
                break;
        case 18:p=2.76*jml[o.makan];  l=9.4*jml[o.makan];     k=4.31*jml[o.makan];
                break;
        case 19:p=2.12*jml[o.makan];    l=1.9*jml[o.makan];     k=11.98*jml[o.makan];
                break;
        case 20:p=0.26*jml[o.makan];   l=0.17*jml[o.makan];   k=13.81*jml[o.makan];
                break;
        case 21:p=4.87*jml[o.makan];   l=5.72*jml[o.makan];   k=2.97*jml[o.makan];
                break;
        case 22:p=1.52*jml[o.makan];   l=0.24*jml[o.makan];   k=3.2*jml[o.makan];
                break;
        case 0:                                               // SELESAI PILIH
            if(o.ideal<18.5){                                 // UNTUK KURUS

            	if(tp-o.protein>20 || tl-o.lemak>20 || tk-o.karbo>20){
               	tp=0;	tk=0;	tl=0;
                  for(int i=1 ; i<=22 ; i++){   // Supaya ulang juga dari 0
                  jml[i]=0;tot[i]=0;}}
               else if(tp-o.protein<0 || tl-o.lemak<0 || tk-o.karbo<0){}
            	else{ulang=false;}}                                            // Selese

            else if(o.ideal>=18.5&&o.ideal<=24.9){             // UNTUK IDEAL
               if(tp-o.protein>10 || tl-o.lemak>10 || tk-o.karbo>10){
               	tp=0;	tk=0;	tl=0;
                  for(int i=1 ; i<=22 ; i++){   // Supaya ulang juga dari 0
                  jml[i]=0;tot[i]=0;}}
               else if(tp-o.protein<-5 || tl-o.lemak<-5 || tk-o.karbo<-5){}
            	else{ulang=false;}}

            else if(o.ideal>=25&&o.ideal<=29.9){              // UNTUK GEMUK
               if(tp-o.protein>5||tl-o.lemak>5||tk-o.karbo>5){
               	tp=0;	tk=0;	tl=0;                             // Selese
                  for(int i=1 ; i<=22 ; i++){   // Supaya ulang juga dari 0
                  jml[i]=0;tot[i]=0;}}
            	else if(tp-o.protein<-15||tl-o.lemak<-15||tk-o.karbo<-15){}
            	else{ulang=false;}}

            else{             							// UNTUK OBESITAS
               if(tp-o.protein>0 || tl-o.lemak>0 || tk-o.karbo>0){
               	tp=0;	tk=0;	tl=0;
                  for(int i=1 ; i<=22 ; i++){   // Supaya ulang juga dari 0
                  jml[i]=0;tot[i]=0;}}
               else if(tp-o.protein<-20||tl-o.lemak<-20||tk-o.karbo<-20){}
            	else{ulang=false;}}

        default:	p=0;	l=0;	k=0;	break;                  // ASAL MILIH
    }
    tot[o.makan]+=jml[o.makan];
    tk+=k;	tl+=l;	tp+=p;                                 // JUMLAH TOTAL YANG TERPILIH
}
system("cls");
for(int i=1;i<=22;i++){                                      // TULIS MAKANAN YANG KEPILIH
if(jml[i]>0){
  cout<<"Anda memilih "<<makan[i-1]<<" sebanyak "<<tot[i]<<endl;}}
getch();
system("cls");
Loading();
cout<<"\nNAMA		: "<<id.nama;
cout<<"\nKELAMIN		: ";	if(id.kelamin=='p'||id.kelamin=='P'){cout<<"PEREMPUAN";}
									else{cout<<"LAKI-LAKI";}
cout<<"\nUSIA		: "<<id.usia;
cout<<"\nBERAT BADAN	: "<<id.bb<<"kg";
gotoxy(32,2);	cout<<"TINGGI BADAN	: "<<id.tb<<"cm";
gotoxy(32,3);	cout<<"PENYAKIT	: ";  if(id.sakit==1){cout<<"ASMA";}
                              			else if(id.sakit==2){cout<<"ANEMIA";}
                              			else if(id.sakit==3){cout<<"DIABETES MELITUS";}
                              			else if(id.sakit==4){cout<<"PENYAKIT JANTUNG";}
                              			else if(id.sakit==5){cout<<"HYPERTENSI";}
                              			else if(id.sakit==6){cout<<"PARU-PARU BASAH";}
                              			else if(id.sakit==7){cout<<"STROKE";}
                              			else if(id.sakit==8){cout<<"GINJAL BOCOR";}
                              			else{cout<<"TIDAK ADA";}
gotoxy(32,4);	cout<<"AKTIVITAS	: "; if(id.aktif==1){cout<<"SEDENTER";}
                             				else if(id.aktif==2){cout<<"KURANG AKTIF";}
                             				else if(id.aktif==3){cout<<"CUKUP AKTIF";}
                             				else if(id.aktif==4){cout<<"SANGAT AKTIF";}
gotoxy(0,6);          //GARIS ATAS
for(int i=0;i<=90;i++){
if(i==31){cout<<" ";}
else{cout<<"-";}}

gotoxy(0,7);	cout<<"|MAKANAN";
gotoxy(24,7);	cout<<"|PORSI";
gotoxy(30,7);	cout<<"|";
gotoxy(32,7);  cout<<"|SARAN OLAHRAGA";
gotoxy(65,7);	cout<<"|DURASI";
gotoxy(90,7);	cout<<"|"<<endl;

for(int i=0;i<=90;i++){
if(i==31){cout<<" ";}
else{cout<<"-";}}

for(int i=1,x=9;i<=22;i++){                                      // TABEL MAKANAN
if(jml[i]>0){
gotoxy(0,x);	cout<<"|"<<makan[i-1];
gotoxy(24,x);	cout<<"|"<<tot[i];
gotoxy(30,x);	cout<<"|";	x++;}//tutup if
if(i==22){cout<<endl;	for(int j=0;j<=30;j++){cout<<"-";}}
}//tutup for

if(o.otot==0){
for(int i=0,x=9;	i<ol[id.sakit].batas;	i++,x++){
gotoxy(32,x);  cout<<"|"<<ol[id.sakit].nama[i];
gotoxy(65,x);	cout<<"|"<<ol[id.sakit].durasi[i];
gotoxy(90,x);	cout<<"|";
if(i==ol[id.sakit].batas-1){x++;	gotoxy(32,x);	for(int j=32;j<=90;j++){cout<<"-";}}
}}
else{
for(int i=0,x=9;	i<ol[o.otot].batas;	i++,x++){
gotoxy(32,x);  cout<<"|"<<ol[o.otot].nama[i];
gotoxy(65,x);	cout<<"|"<<ol[o.otot].durasi[i];
gotoxy(90,x);	cout<<"|";
if(i==ol[o.otot].batas-1){x++;	gotoxy(32,x);	for(int j=32;j<=90;j++){cout<<"-";}}
}}}//tutup fungsi

void Otot(){
cout<<"\nSaran Olahraga untuk Anda :"<<endl;
for(int i=0;i<ol[o.otot].batas;i++){
cout<<(i+1)<<". "<<ol[o.otot].nama[i]<<"\t("<<ol[o.otot].durasi[i]<<")"<<endl;}
cout<<"\nTekan keyboard apapun untuk melanjutkan";
getch();
}

		// DISINI MAIN-NYA
int main(){

system("Color 0F");
		// ISI BIODATA
gotoxy(25,7); cout<<" ===================================================================="<<endl;
gotoxy(25,8); cout<<"|                         #SELAMAT DATANG#                           |"<<endl;
gotoxy(25,9); cout<<"|                                                                    |"<<endl;
gotoxy(25,10);cout<<"|                                                                    |"<<endl;
gotoxy(25,11);cout<<"|                          #IDEALiZPORT#                             |"<<endl;
gotoxy(25,12);cout<<" ===================================================================="<<endl;
Loading();
cout<<"=================IDENTITAS================="<<endl;
    cout<<"1.Nama Lengkap        : ";            gets(id.nama);
    cout<<"2.Jenis Kelamin (P/L) : ";            cin>>id.kelamin;
    cout<<"3.Usia(th)            : ";            cin>>id.usia;
    cout<<"4.Berat Badan (Kg)    : ";            cin>>id.bb;
    cout<<"5.Tinggi Badan(Cm)    : ";            cin>>id.tb;
    cout<<"\nRiwayat Penyakit :"<<endl
            <<"1. Asma "<<setw(37)<<"5. Hypertensi"<<endl
            <<"2. Anemia"<<setw(41)<<"6. Paru-paru basah"<<endl
            <<"3. Diabetes Melitus"<<setw(22)<<"7. Stroke"<<endl
            <<"4. Penyakit Jantung"<<setw(28)<<"8. Ginjal Bocor"<<endl
            <<"0. Tidak Ada"<<endl
            <<"=================================="<<endl
            <<"Pilih : ";               cin>>id.sakit;
        cout<<"\nTingkat Aktifitas :"<<endl
        <<"1.Sedenter	(Minim aktivitas fisik, jarang/tak pernah olahraga)"<<endl
        <<"2.Sedikit Aktif	(Olahraga ringan 1-3 hari seminggu)"<<endl
        <<"3.Cukup Aktif	(Olahraga sedang, 3-5 hari seminggu)"<<endl
        <<"4.Sangat Aktif	(Olahraga berat 6-7 hari semingggu)"<<endl
        <<"=================================="<<endl
        <<"Pilih : ";						cin>>id.aktif;
Gizi();     // HITUNG GIZI
    system("cls");
    Loading();
DataDiri();											// PILIH MENU
    cout<<"Menu Pilihan :"<<endl
        <<"1.Membentuk Badan Ideal"<<endl
        <<"2.Membentuk Otot Tubuh"<<endl
        <<"=================================="<<endl
        <<"Pilih : ";                  cin>>o.menu;
    if(o.menu==1){Ideal(id.bb,id.tb);}
    else if(o.menu==2){                           // Milih Otot
    cout<<"\nPilihan Otot :"<<endl
        <<"1.Otot Perut"<<endl
        <<"2.Otot Dada"<<endl
        <<"3.Otot Lengan"<<endl
        <<"4.Otot Kaki"<<endl
        <<"5.Otot Bahu dan Punggung"<<endl
        <<"=================================="<<endl
        <<"Pilih : ";						cin>>o.otot;
    PenamaanOtot();	Otot();}	else{exit(0);}
Makan_Ideal();		// MASUK FUNGSI MAKANAN
getch();
}
