#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL, "Turkish");
unsigned long long faktöriyel = 1; 
int sayi;
cout << "1 ile 20 arasında bir tamsayı giriniz" << endl;
cin >> sayi;
if(sayi<0 || sayi>20) {cout << "Lütfen sadece 1 ile 20 arasında bir sayı giriniz!" << endl; return 1;}
for(int i = 1; i<=sayi; i++)
{
faktöriyel*=i;
}
cout << sayi << "!" << " = " << faktöriyel << endl;
}