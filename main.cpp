#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
setlocale(LC_ALL, "Turkish");
double sayi1, sayi2;
char islemOperatorV2;
cout << "İKİ SAYI GİRİNİZ" << endl;
cin >> sayi1 >> sayi2;
cout << "BİR İŞLEM GİRİNİZ" << endl;
cin >> islemOperatorV2;
switch(islemOperatorV2)
{
case '+':
cout << "SONUÇ: " << sayi1 + sayi2 << endl;
break;
case '-':
cout << "SONUÇ: " << sayi1 - sayi2 << endl;
break;
case '*':
cout << "SONUÇ: " << sayi1 * sayi2 << endl;
break;
case '/':
if(sayi2==0) cout << "İŞLEM TANIMSIZ" << endl;
else cout << "SONUÇ: " << sayi1 / sayi2 << endl;
break;
case '%':
if(sayi2==0) cout << "İŞLEM TANIMSIZ" << endl;
else cout << "SONUÇ: " << int(sayi1) % int(sayi2) << endl;
break;
case 'O':
case 'o':
cout << "SONUÇ: " << (sayi1 + sayi2) / 2 << endl;
break;
case 'M':
case 'm':
if(sayi1>sayi2) cout << "MAKSİMUM SAYI: " << sayi1 << endl;
else if(sayi1==sayi2) cout << "SAYILAR BİRBİRİNE EŞİT" << endl;
else cout << "MAKSİMUM SAYI: " << sayi2 << endl;
break;
default: cout << "GEÇERSİZ KARAKTER ALGILANDI";
}
}