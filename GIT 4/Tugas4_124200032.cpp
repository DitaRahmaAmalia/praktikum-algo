#include <iostream>
#include <iomanip>

using namespace std;
main ()
{
	int pilih, M, N, jumlah;
	
	cout << "-------------------------------------------------" << endl;
	cout << "Tugas 4 Praktikum ALgoritma dan Pemrograman 1" <<endl;
	cout << " Nama	: Dita Rahma Amalia" <<endl;
	cout << " NIM	: 124200032" <<endl;
	cout << "-------------------------------------------------" << endl;
	cout << "  " <<endl;
	cout << "  " <<endl;
	
	cout << "[1] Perkalian" << endl;
	cout << "[2] Perpangkatan" << endl;
	cout << "Pilih = ";
	cin >> pilih ;
	cout << "  " <<endl;
	
	switch (pilih)
	{ 
		case 1 :
		cout << "Masukkan Nilai M	= ";
		cin >> M;
		cout << "Masukkan Nilai N	= ";
		cin >> N;
			jumlah = 0;
			for (int loop = 1; loop <=N; loop++)
			{
				jumlah += M;
				if (loop != N)
				{cout << M << "+";}
				else
				{cout << M << "=" << jumlah;}
			}
		break;
		
		case 2 :
		cout << "Masukkan Nilai M	= ";
		cin >> M;
		cout << "Masukkan Nilai N	= ";
		cin >> N;
			cout << "\nhasil" << " " << M << "^" << N << endl;
			jumlah = 1;
			for (int loop = 1; loop <= N; loop++)
			{
				jumlah *= M;
				if (loop != N)
				{cout << M << "x";}
				else
				{cout << setprecision (999999) << M << "=" << jumlah;}
			}
		break;
		
		default :
		cout << ("Input salah !\n");
	}
}
