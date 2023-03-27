//Örnek 3 Kullanıcıdan Değer alma ve alınan değerleri hesaplama *****************************************************************

#include <iostream>

using namespace std;

int main() {
    float alan, en, boy;
   /*
    cout << " cismin enini girin ; ";
    cin >> en ; 
    cout << " cismin boyunu girin ;";
    cin >> boy;
    alan = en * boy;
    cout <<"alani ;"<<  alan << endl; */ 
    

     float not1, not2;
     int ort;    
     cout << " 1. notu giriniz :";
     cin >> not1;
     cout << " 2. notu giriniz :";
     cin >> not2;
    ort = not1 + not2;
    ort = (not1 * 40 / 100) + (not2 * 60 / 100);

   cout << "ortalama;" << ort;

   return 0;
}