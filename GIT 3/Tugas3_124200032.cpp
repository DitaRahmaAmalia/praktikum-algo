#include <iostream>
using namespace std;
main()
{
	int harian1, uts1, uas1, harian2, uts2, uas2, pilih;
	string  name, password, algo, kalkulus;
	float rata2, rata_rata;
	cout << "		Login Akun		" <<endl;
	cout << "------------------------------------------" <<endl;
	
	cout << "Username	: ";
	cin >> name;
	cout << "Password	: ";
	cin >> password;
	
	cout << "\n\n";
	
	if ((name == "DITA" or name == "Dita" or name == "dita") && (password == "124200032"))
	{
		cout << "LOGIN BERHASIL";
		cout << "\n\n";
		cout << "Input Nilai Mata Kuliah" <<endl;
		cout << "1. Algoritma dan Pemrograman	" <<endl;
		cout << "2. Kalkulus 		 " <<endl;
		cout << "Pilih	: " ;
		cin >> pilih;
		switch (pilih)
		{
			case 1 :
			cout << "Nilai Harian	: " ;
			cin >> harian1;
			cout << "Nilai UTS	: ";
			cin >> uts1;
			cout << "Nilai UAS	: " ;
			cin >> uas1;	
			
			rata2 = (harian1+uts1+uas1)/3;
			cout << "Nilai rata-rata : " << rata2 << endl;
			if (rata2>=80)
			{
			cout << "\n\n";
			cout << "LULUS" <<endl;
			}
			else if (rata2<80)
			{
			cout << "\n\n";
			cout << "TIDAK LULUS" <<endl;
			}
			break;
			
			
			case 2 :
			cout << "Nilai Harian	: ";
			cin >> harian2;
			cout << "Nilai UTS	: ";
			cin >> uts2;
			cout << "Nilai UAS	: " ;
			cin >> uas2;
			
			rata_rata = (harian2+uts2+uas2)/3;
			cout << "Nilai rata-rata : " << rata_rata << endl;
			if (rata_rata>=80)
			{
			cout << "\n\n";
			cout << "LULUS" <<endl;
			}
			else if (rata_rata<80)
			{
			cout << "\n\n";
			cout << "TIDAK LULUS" <<endl;
			}
			break;	
			
			default : cout << "PILIHAN TIDAK TERSEDIA" <<endl;	
		}
		
	}
	else if ((name != "DITA" or name != "Dita" or name != "dita") && (password == "124200032"))
	cout << "USERNAME ANDA SALAH";
	
	else if ((name == "DITA" or name == "Dita" or name == "dita") && (password != "124200032"))
	cout << "PASSWORD ANDA SALAH";
	
	else cout << "USERNAME DAN PASSWORD ANDA SALAH";
}

		
