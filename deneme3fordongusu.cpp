#include<iostream>

using namespace std;
int main()
{
    int sayi ;
    int sonuc =1;
    cout<<"fakoriyel hesaplanacak degeri girin:";
    cin>>sayi;
    for (int i = 1; i <= sayi;i= i++)
    {
        sonuc = sonuc*i;
    }
    
    cout << "Faktoriyel degeri:"<<sonuc ;



}