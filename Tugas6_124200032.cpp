#include<iostream>
#include<iomanip>

using namespace std;

void luas_lingkaran();
void keliling_lingkaran();
void volume_tabung();
void menu();

int pilih;
float r, t, luas, keliling, volume;
char ulang;

int main()
{	
	cout << "Hitung Lingkaran ==========" << endl;
	cout << "1. Luas Lingkaran" << endl;
	cout << "2. Keliling Lingkaran" << endl;
	cout << "3. Volume Tabung" << endl;
	cout << "Pilih : ";
	cin >> pilih;
	
		switch(pilih)
		{
			case 1:
			luas_lingkaran();
			break;
			
			case 2:
			keliling_lingkaran();
			break;
			
			case 3:
			volume_tabung();
			break;
		}
	return 0;
}

void luas_lingkaran()
{
	cout << "Jari - jari	: ";
	cin >> r;
	luas=3.14*r*r;
	cout << "Luas Lingkaran adalah " << luas << endl;
	menu();
}

void keliling_lingkaran()
{
	cout << "Jari - jari	: ";
	cin >> r;
	keliling=2*3.14*r;
	cout << "Keliling Lingkaran adalah " << keliling << endl;
	menu();
}

void volume_tabung()
{
	cout << "Jari - jari	: ";
	cin >> r;
	cout << "Tinggi tabung	: ";
	cin >> t;
	volume=3.14*r*r*t;
	cout << "Volume Tabung adalah " << volume << endl;
	menu();
}

void menu()
{
	cout << "Ulangi Program? (y/n) ";
	cin >> ulang;
	cout << "  " << endl;
	cout << "  " << endl;
	if (ulang=='y')
		main();
}


	
