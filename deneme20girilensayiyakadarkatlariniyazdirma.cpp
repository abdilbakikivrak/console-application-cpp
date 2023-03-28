// index 1den girilen sayılaya kadar olan 7 nin katlarını ekrana yazddırsın 
#include<iostream>
using namespace std ;
int main ()
{
    int index =1;
    int girilendeger ;

count <<"maksimum index degerini giriniz :";
cin>> girilendeger ;
while (index <= girilendeger)
{
    if (index %7 == 0)
    {
        count <<index << endl ;
    
    }
    index++ ;
}


};