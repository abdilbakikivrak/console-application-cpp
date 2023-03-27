// Pointerler ile Arrayler arasındaki ilişki 

#include<iostream>
using namespace std;
int main() {
    int arr[] = { 45, 06, 35 };

    cout << arr[0];
    int *p;// pointer oluşturduk
    p = arr; // oluşturduğumuz pointeri arr dizisine tanımladık

    cout << p << endl; // pointerin tuttuğu adresi yazdırır
    cout << arr << endl; // arr dizisinin bulunduğu adresi yazdırır

    cout << *p << endl; // pointerin tuttuğu adrese gidip ilk sıradaki içerigi yazdırır
    cout << *(p+1) << endl; // pointerin tuttuğu adresin içindeki ikinci degeri yazdırır
    cout << p[2] << endl; // yine aynı şekilde tanımlanan 35 degerine karşılık gelir ve içeriği yazdırır - dizilerdeki gibi sıfırdan başlayarak sıradakini yazar



    return 0;
}