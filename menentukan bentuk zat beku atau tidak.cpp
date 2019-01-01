#include <iostream>
using namespace std;

int main ()
{
	int a;
	cout <<"==========================================="<<endl;
	cout <<"MENENTUKAN BENTUK SUATU ZAT BEKU ATAU TIDAK"<<endl;
	cout <<"==========================================="<<endl;
	cout <<"MASUKKAN SUHU ZAT DALAM CELCIUS : ";
	cin >>a;
	
	if (a<0)
	cout <<"BENTUK ZAT INI ADALAH ZAT BEKU";
	else
	cout <<"BENTUK ZAT INI BUKAN ZAT BEKU";
	
	return 0;
	
}
