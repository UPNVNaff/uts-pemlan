#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
struct daftar{
    string tuanRumah, kota[3];
    int tahun[6], jumlah;
}; // inisialisasi struct
void seagames(struct daftar Negara[]) {
    for (int i = 0; i < 9; i++){
        cout << "Negara SeaGames ke-" << i + 1 << endl;
        cout << "Negara Tuan Rumah : " << Negara[i].tuanRumah << endl;
        cout << "Kota yang menjadi tuan rumah : " << endl;
        for (int j=0; j<3; j++){
            if (Negara[i].kota[j] == ""){
                break;
            }
        cout << "\t\t\t\t" << j + 1 << ". " << Negara[i].kota[j] << endl; 
        }
        cout << "Tahun : " << endl; 
        for (int k = 0; k <= 5; k++){
            if (Negara[i].tahun[k] == 0){
                break;
            }      
        cout << "\t" << k + 1 << ". " << Negara[i].tahun[k] << endl; 
        }
        cout << "==============================\n"; 
    }
}

void frekuensi(struct daftar Negara[]) {
    int count = 0;
    cout << "Negara\t\t";
    cout << "Frekuensi\n";
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 6; j++){
            if (Negara[i].tahun[j] == 0){
                break;
            }
            count++;
            Negara[i].jumlah = count;
        }
        cout << "\n";
        cout << i+1 << ". " << Negara[i].tuanRumah << "\t" << Negara[i].jumlah << "\t";
        count = 0;
    }
}

void selectionSort(int arr[], int length){
  int temp;
  int loc_min;

  for(int i = 0; i < length; i++){
    loc_min = i;
    for (int j = i; j < length; j++){
      if (arr[j] < arr[loc_min]){
       loc_min = j;
     }
   }
   temp = arr[i];
   arr[i] = arr[loc_min];
   arr[loc_min] = temp;
  } 
}

void printArray(int arr[],int length){
  for (int i= 0; i < length; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << "Terkecil : " << arr[1];
  cout << endl;
  cout << "Terbesar : " << arr[length-1];
  cout << endl;
}

int main(){
    struct daftar Negara[9] = {
    {"Myanmar", {"Rangoon", "Naypyidaw"}, {1961, 1969, 2013}},
    {"Thailand", {"Bangkok", "Chiang Mai", "Nakhon Ratchasima"}, {1959, 1967, 1975, 1985, 1995, 2007}},
    {"Malaysia", {"Kuala Lumpur"}, {1965, 1971, 1977, 1989, 2001, 2017}}, 
    {"Singapura", {"Singapura"}, {1973, 1983, 1993, 2015}},
    {"Indonesia", {"Jakarta", "Palembang"}, {1979, 1987, 1997, 2011}}, 
    {"Filipina", {"Manila"}, {1981, 1991, 2001, 2019}},
    {"Brunei D", {"Bandar Seri Begawan"}, {1999}}, 
    {"Vietnam", {"Hanoi", "Ho Chi Min"}, {2003}},
    {"Laos ", {"Vientiane"}, {2009}}
    };
    seagames(Negara);
    frekuensi(Negara);

    int angka[9] = {3, 6, 6, 4, 4, 4, 1, 1, 1};
    selectionSort(angka,9);
    cout << "\nsesudah sort : ";
    printArray(angka, 9);

}
