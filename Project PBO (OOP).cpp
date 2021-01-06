//Nama  : Ahmad Ja'far Ali
//NIM   : 1905139708
//Kelas : D4 MANAJEMEN INFOMATIKA 2019 B

#include<iostream>
#include<conio.h>
#include<fstream>
#include<cstring>
#include<windows.h>

using namespace std;

class mahasiswa
{
public:
	char nama[50];
	char kehadiran[20][2];
	int hadir=0;
	int nim;
	float persen;
};
mahasiswa mhs[30];

void dataMasuk(int i)
{
	ofstream datamhs("data.dat");
	cout << "Input Data Mahasiswa Ke-" << i + 1 << endl;
	cout << "NIM\t: ";	cin >> mhs[i].nim;
	cout << "Nama\t: "; cin >> mhs[i].nama;

	datamhs.write((char*)&mhs, sizeof(mhs));
	datamhs.close();

}

void dataPresensi(int j, int minggu)
{
	ifstream bukadata("data.dat");
	bukadata.read((char*)&mhs, sizeof(mhs));

	cout << mhs[j].nim <<"\t"<< mhs[j].nama<<"\t";
	cout << "\t Kehadiran : ";
	fflush(stdin);
	cin >> mhs[j].kehadiran[minggu];

	ofstream simpandata("data.dat");
	simpandata.write((char*)&mhs, sizeof(mhs));

	bukadata.close();
	simpandata.close();
}

void rekapData(int banyakMhs)
{
	int i, j;
	int banding;
	ifstream fileRekap("data.dat");
	fileRekap.read((char*)&mhs, sizeof(mhs));

	cout << "NIM\t\tNama\t\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t%" << endl << endl;
	for (i = 0; i < banyakMhs; i++)
	{
		cout << mhs[i].nim <<"\t"<< mhs[i].nama<<"\t\t";
		for (j = 0; j < 10; j++)
		{
			cout << mhs[i].kehadiran[j]<<"\t";

			banding = _strcmpi(mhs[i].kehadiran[j], "H");
			if (banding == 0)
			{
				mhs[i].hadir += 1;
			}
		}
		mhs[i].persen = mhs[i].hadir*100/10;
		cout << mhs[i].persen;
		cout << endl;
	}

	fileRekap.close();
}

int main()
{
	int i, n = 3;
	int x; int Minggu=0
		;
	int pilihan;
	char lagi;
	cout << "Pilih Opsi" << endl;
	cout << "1. Masukkan data Mahasiswa\n2. Presensi Mahasiswa\n3. Rekap Data" << endl;
	cout << "Pilihan: ";
	cin >> pilihan;
	system("cls");
	switch (pilihan)
	{
	case 1:
	{
		for (i = 0; i < n; i++)
		{
			dataMasuk(i);
			system("cls");
		}

	} break;

	case 2:
	{
		do{
			cout << "Absensi Minggu ke-" << Minggu + 1 << endl;

			for (x = 0; x < n; x++)
			{
				dataPresensi(x, Minggu);
			}
			cout << "Absensi Minggu Berikutnya[Y/N]= ";
			cin >> lagi;
			Minggu++;
		} while (lagi == 'y' || lagi == 'Y');

	}break;

	case 3:
	{
		rekapData(n);
	}break;

	default: cout << "pilihan salah";
	}

	_getch();

}
