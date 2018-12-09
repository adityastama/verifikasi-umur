#include <iostream>
using namespace std;

int main(){

int umur;

cout <<"\n================================\n" << endl;
cout <<"VALIDASI UMUR" << endl;
cout <<"\n(kami akan memvalidasi umur anda\n" << endl;

cout << "masukan umur : ";
cin >> umur;


if  (umur >= 0 && umur <= 10 )
{
	cout << "\nKAMU MASIH KECIL" << endl;
}
if (umur > 11 && umur <= 20)
{
	cout << "\nKAMU MASIH MUDA" << endl;
}
if (umur > 21 && umur <= 30)
{
	cout << "\nANDA CUKUP TUA" << endl;
}	
if (umur > 31 && umur <=100)\
{
	cout << "\nANDA SUDAH TUA" << endl;
}
else
	cin.get();
	return 0;

}