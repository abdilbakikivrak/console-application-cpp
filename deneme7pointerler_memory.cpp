// Pointerler ile Arrayler arasındaki ilişki 

#include<iostream>
using namespce std;
int main() {
    int arr[] = {45, 06, 35};

    cout<< arr[0] ;
    int* p;// pointer oluşturduk
    int* p = arr; // oluşturduğumuz pointeri arr dizisine tanımladık

   cout << p << endl; // pointerin tuttuğu adresi yazdırır
    cout << arr << endl; // arr dizisinin bulunduğu adresi yazdırır

    cout << *p << endl; // pointerin tuttuğu adrese gidip ilk sıradaki içerigi yazdırır
    cout << *(p++) << endl; // pointerin tuttuğu adresin içindeki ikinci degeri yazdırır
    cout << p[1] << endl; // yine aynı tanımlanan içeriği yazdırır - dizilerdeki gibi sıradakini yazar



    return 0;
}