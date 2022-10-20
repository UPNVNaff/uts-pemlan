#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void display();
void frekuensi();

struct seagames{
    int urutan;
    int tahun;
    char tuan_rumah[40];
    char kota[40];
};
int main(){
    int pilih;
    menu:
    printf("Pilih untuk menampilkan jawaban dengan soal! \n");
    printf("1. Simpan data diatas dalam bentuk struct yang memiliki 3 variabel, yaitu tahun, tuan rumah, dan kota\n");
    printf("2. Buatlah tabel frekuensi\n");
    printf("Pilihan : ");
    scanf("%d", &pilih);
    if (pilih == 1){
        system("clear");
        display();
        goto menu;
    }
    else if (pilih == 2){
        system("clear");
        frekuensi();
        goto menu;
    }
    else{
        printf("Pilihan tidak ada!");
        return 0;
    }
} 
void display(){
    int len = 31;
    struct seagames anggota[31] = {
        {
            1, 1959, "Thailand", "Bangkok"
        }, 
        {
            2, 1961, "Myanmar", "Rongoon"
        },
        {
            3, 1963, "DIBATALKAN", "-"
        },
        {
            3, 1965, "Malaysia", "Kuala Lumpur"
        },
        {
            4, 1967, "Thailand", "Bangkok"
        },
        {
            5, 1969, "Myanmar", "Rangoon"
        },
        {
            6, 1971, "Malaysia", "Kuala Lumpur"
        },
        {
            7, 1973, "Singapura", "Singapura"
        },
        {
            8, 1975, "Thailand", "Bangkok"
        },
        {
            9, 1977, "Malaysia", "Kuala Lumpur"
        },
        {
            10, 1979, "Indonesia", "Jakarta"
        },
        {
            11, 1981, "Filipina", "Manila"
        },
        {
            12, 1983, "Singapura", "Singapura"
        },
        {
            13, 1985, "Thailand", "Bangkok"
        },
        {
            14, 1987, "Indonesia", "Jakarta"
        },
        {
            15, 1989, "Malaysia", "Kuala Lumpur"
        },
        {
            16, 1991, "Filipina", "Manila"
        },
        {
            17, 1993, "Singapura", "Singapura"
        },
        {
            18, 1995, "Thailand", "Bangkok"
        },
        {
            19, 1997, "Indonesia", "Jakarta"
        },
        {
            20, 1999, "Brunei    ", "Bandar Seri Begawan"
        },
        {
            21, 2001, "Malaysia", "Kuala Lumpur"
        },
        {
            22, 2003, "Vietnam", "Hanoi & Ho Chi Min"
        },
        {
            23, 2005, "Filipina", "Manila"
        },
        {
            24, 2007, "Thailand", "Nakhon Ratchasima"
        },
        {
            25, 2009, "Laos    ", "Vientiane"
        },
        {
            26, 2011, "Indonesia", "Jakarta"
        },
        {
            27, 2013, "Myanmar", "Naypyidaw"
        },
        {
            28, 2015, "Singapura", "Singapura"
        },
        {
            29, 2017, "Malaysia", "Kuala Lumpur"
        },
        {
            30, 2019, "Filipina", "Manila"
        }
    };
    struct seagames* ptr = anggota;
    printf("Urutan\t Tahun\t Tuan Rumah\t\t Kota\n");
    printf("------------------------------------------------------------\n");
    for (int i=0; i<len; i++, ptr++){
        printf("%d\t %d\t %s\t\t %s\n", ptr->urutan, ptr->tahun, ptr->tuan_rumah, ptr->kota);
    }
}

void frekuensi(){
    char string[] = "Thailand Myanmar DIBATALKAN Malaysia Thailand Myanmar Malaysia Singapura Thailand Malaysia Indonesia Filipina Singapura Thailand Indonesia Malaysia Filipina Singapura Thailand Indonesia Brunei Malaysia Vietnam Filipina Thailand Laos Indonesia Myanmar Singapura Malaysia Filipina ";  
    char words[20][20];  
    int i = 0, j = 0, k, length, count;  
      
    for(k=0; string[k]!='\0'; k++){  
        if(string[k] != ' ' && string[k] != '\0'){  
            words[i][j++] = toupper(string[k]);  
        }  
        else{  
            words[i][j] = '\0';  
            i++;  
            j = 0;  
        }  
    }  
      
    length = i+1;  
    system("clear");
    printf("Jumlah banyaknya tour tuan rumah!\n\n"); 
    printf("Negara\t\t Jumlah\n");
    printf("------------------------\n");
    for(i = 0; i < length; i++){  
        count = 1;  
        for(j = i+1; j < length; j++){  
           if(strcmp(words[i], words[j]) == 0 && (strcmp(words[j],"0") != 0)){  
               count++;  
               strcpy(words[j],"0");  
           }   
        } 
        if(count > 1 ){
            printf("%s  \t   %d\n", words[i], count); 
        }
    }  
}
