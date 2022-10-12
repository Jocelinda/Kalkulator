#include <iostream>
using namespace std;
int main(){
	int angka1,angka2,pilihan;
	float hasil1, hasil2,hasil3,hasil4,hasil5;
	string operasi; 
// masukkan do setelah input data selesai 

do{


	cout <<"Menu Operasi Kalkulator\n";
	cout << "1. Penjumlahan\n";
	cout << "2. Pengurangan\n";
	cout << "3. Perkalian\n";
	cout << "4. Pembagian\n";
	cout << "5. Persen\n";
	cout << "Masukkan pilihan:\n";
	cin >> pilihan;
	
	
	
	switch (pilihan)
	{
		case 1:
			cout << "Masukkan angka pertama:\n";
			cin >> angka1;
			cout << "Masukkan angka kedua:\n";
			cin >> angka2;
			hasil1 = angka1+angka2;
			operasi = '+';
			cout << "Hasil dari " << angka1 << operasi << angka2 << " adalah " << hasil1;
		break;
		
		case 2:
			cout << "Masukkan angka pertama:\n";
			cin >> angka1;
			cout << "Masukkan angka kedua:\n";
			cin >> angka2;
			hasil2 = angka1-angka2;
			operasi = '-';
			cout << "Hasil dari " << angka1 << operasi << angka2 << " adalah " << hasil2 <<"\n";
		break;
		
		case 3:
			cout << "Masukkan angka pertama:\n";
			cin >> angka1;
			cout << "Masukkan angka kedua:\n";
			cin >> angka2;
			hasil3 = angka1 * angka2;
			operasi = '*';
			cout << "Hasil dari " << angka1 << operasi << angka2 << " adalah " << hasil3 <<"\n";
		break;
		
		case 4:
			cout << "Masukkan angka pertama:\n";
			cin >> angka1;
			cout << "Masukkan angka kedua:\n";
			cin >> angka2;
			hasil4 = angka1/angka2;
			operasi = '/';
			cout << "Hasil dari " << angka1 << operasi << angka2 << " adalah " << hasil4 <<"\n";
		break;
		
		case 5:
			cout << "Masukkan angka pertama:\n";
			cin >> angka1;
			cout << "Masukkan angka kedua:\n";
			cin >> angka2;
			hasil5 = angka1%angka2;
			operasi = '%';
			cout << "Hasil dari " << angka1 << operasi << angka2 << " adalah " << hasil5 <<"\n";
		break;
		
		case 6:
			system ("exit");
			cout <<"Terimakasih telah menggunakan program kalkulator ini\n";
		break;
	
		
		default:
			cout << "Pilihan salah\n";
		break;
		
	}
	system ("pause");
	system ("cls");
} while (pilihan!=6);


return 0;
					
}
	

