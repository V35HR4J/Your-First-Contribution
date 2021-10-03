#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 100
using namespace std;

//Struct pertama
struct waktu {
    int hh;
    int mm;
    int ss;
    int detik;
    char nWkt[MAX];
}wkt[MAX];

//Struct dalam struct
struct data_mhs {
    char nama[MAX];
    int usia;
    waktu wkt[MAX];
}mhs[MAX];

int main() { 
int i, jml_mhs=0, rarata=0, temp;
char str[MAX], pilihan, * pch;
struct data_mhs temp_mhs; 
    printf ("\t Input Data Lari Mahasiswa\n");
       printf("\t----------------------------\n");
	do { 
    //Input
    cout<<" Nama Mahasiswa          : "; fflush(stdin); gets(mhs[jml_mhs].nama);
    cout<<" Usia Mahasiswa          : "; cin>>mhs[jml_mhs].usia;
    cout<<" Waktu Tempuh (hh:mm:ss) : "; fflush(stdin); gets(mhs[jml_mhs].wkt[jml_mhs].nWkt);
    strcpy(str, mhs[jml_mhs].wkt[jml_mhs].nWkt);
	pch = strtok (str,":");
	i = 0;
    while (pch != NULL) {
    	stringstream ss;
    	ss << pch;
    	ss >> temp;
    	if (i==0) {
    		mhs[jml_mhs].wkt[jml_mhs].hh = temp;
		} else if (i==1) {
    		mhs[jml_mhs].wkt[jml_mhs].mm = temp;
		} else if (i==2) {
    		mhs[jml_mhs].wkt[jml_mhs].ss = temp;
		}
		i++;
    	pch = strtok (NULL, ":");
    }
    //konversi ke detik
	mhs[jml_mhs].wkt[jml_mhs].detik = 	mhs[jml_mhs].wkt[jml_mhs].hh*3600
										+mhs[jml_mhs].wkt[jml_mhs].mm*60
										+mhs[jml_mhs].wkt[jml_mhs].ss;
    printf("%28i Jam %i Menit %i Detik (%i detik)\n", 
	mhs[jml_mhs].wkt[jml_mhs].hh, 
	mhs[jml_mhs].wkt[jml_mhs].mm, 
	mhs[jml_mhs].wkt[jml_mhs].ss,
	mhs[jml_mhs].wkt[jml_mhs].detik);
    jml_mhs++;
  	//pemilihan melanjutkan atau menghentikan memasukan data
  	printf ("\nLanjut masukan data (Y/T)? : ");
  	pilihan = toupper (getch());
    while (! (pilihan == 'T' || pilihan == 'Y')) {
   		 pilihan = toupper(getch());
   		}
  	printf ("%c\n\n", pilihan); 
	} while (pilihan == 'Y');
    //Output
   printf("Data yang telah di input : \n");
   printf("--------------------------------------------------------------------\n");
   printf("| No. |           NAMA           |    USIA    |    WAKTU TEMPUH    |\n");
   printf("--------------------------------------------------------------------\n");
   for(i=0;i<jml_mhs;i++) {
      printf("| %-3i | %-24s | %-3i tahun  | %-18s |\n",
              i+1,mhs[i].nama,mhs[i].usia,mhs[i].wkt[i].nWkt);
   }
   printf("--------------------------------------------------------------------\n");
   cout<<"\n\n";

  //Sorting data lari mahasiswa dari waktu yang tercepat (Bubble Sort - ascending)
 	   for (int i=0;i<jml_mhs-1;i++) {
            for (int b=0; b<jml_mhs-i-1; b++) {
             if (mhs[b].wkt[b].detik > mhs[b+1].wkt[b+1].detik){
                swap(mhs[b].wkt[b].detik, mhs[b+1].wkt[b+1].detik);
                swap(mhs[b].nama, mhs[b+1].nama);
                swap(mhs[b].usia, mhs[b+1].usia);
                swap(mhs[b].wkt[b].nWkt, mhs[b+1].wkt[b+1].nWkt);
             }
            }
  	printf("Data Disorting berdasarkan Pelari Tercepat : \n");
  	printf("--------------------------------------------------------------------\n");
  	printf("| No. |           NAMA           |    USIA    |    WAKTU TEMPUH    |\n");
   	printf("--------------------------------------------------------------------\n");
   	for(i=0;i<jml_mhs;i++) {
      printf("| %-3i | %-24s | %-3i tahun  | %-18s |\n",
              i+1,mhs[i].nama,mhs[i].usia,mhs[i].wkt[i].nWkt);
   }
   printf("--------------------------------------------------------------------\n");
   cout<<"\n\n";
        }

	//mencari waktu rata-rata seluruh peserta dan pelari tercepat
	for (i=0; i<jml_mhs; i++) {
		rarata += mhs[i].wkt[i].detik;
	}
    rarata /= jml_mhs;
    int jam = rarata/3600;
    int mod = rarata%3600;
    int menit = mod/60;
    int detik = mod%60;
    printf("--------------------------------------------------------------------\n");
    printf("Waktu rata-rata seluruh pelari : %i jam, %i menit, %i detik.\n", jam, menit, detik);
    printf("--------------------------------------------------------------------\n");
    printf("Pelari Tercepat : %s dengan waktu tempuh %i jam, %i menit, %i detik.\n",
    mhs[0].nama,
	mhs[0].wkt[0].hh, 
	mhs[0].wkt[0].mm, 
	mhs[0].wkt[0].ss);
	printf("--------------------------------------------------------------------\n");
	return 0;
}
