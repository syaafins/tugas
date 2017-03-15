// tugas asd.cpp : Defines the entry point for the console application.
// tugas asd nomer 2

#include "stdafx.h"
#include<iostream>
#include<math.h>


using namespace std;

struct komplek
{
	double t;
	double u;
	double m;
	double i;
	double x;
	double y;
	double hasila;
	double hasilb;
	double hasil1;
	double hasil2;
	double hasil;
};

void penambahan(komplek& nilai)
{
	cout << "PENJUMLAHAN " << endl;
	cout << endl;
	cout << "Angka 1 = ";
	cin >> nilai.t;
	cout << "Angka 2 = ";
	cin >> nilai.u;
	cout << "Angka 3 = ";
	cin >> nilai.m;
	cout << "Angka 4 = ";
	cin >> nilai.i;
	cout << endl;

	nilai.hasil1 = nilai.t + nilai.m;
	nilai.hasil2 = nilai.u + nilai.i;
	cout << "Hasil Penambahan Complex = " << "(" << nilai.hasil1 << "," << nilai.hasil2 << ")" << endl;
	nilai.hasil = nilai.hasil1 + nilai.hasil2;
	cout << "Hasil penambahan = " << nilai.hasil << endl;
}

void pengurangan(komplek& nilai)
{
	cout << "PENGURANGAN " << endl;
	cout << endl;
	cout << "Angka 1 = ";
	cin >> nilai.t;
	cout << "Angka 2 = ";
	cin >> nilai.u;
	cout << "Angka 3 = ";
	cin >> nilai.m;
	cout << "Angka 4 = ";
	cin >> nilai.i;
	cout << endl;

	nilai.hasil1 = nilai.t - nilai.m;
	nilai.hasil2 = nilai.u - nilai.i;
	cout << "Hasil Pengurangan Complex = " << "(" << nilai.hasil1 << "," << nilai.hasil2 << ")" << endl;
	nilai.hasil = nilai.hasil1 + nilai.hasil2;
	cout << "Hasil penambahan = " << nilai.hasil << endl;

}

void pembagian(komplek& nilai)
{
	cout << "PEMBAGIAN " << endl;
	cout << endl;
	cout << "Angka 1 = ";
	cin >> nilai.t;
	cout << "Angka 2 = ";
	cin >> nilai.u;
	cout << "Angka 3 = ";
	cin >> nilai.m;
	cout << "Angka 4 = ";
	cin >> nilai.i;
	cout << endl;

	nilai.x = (nilai.t*nilai.m) + (nilai.u*nilai.i);
	nilai.y = pow(nilai.t, 2) + pow(nilai.u, 2);
	nilai.hasila = (nilai.u*nilai.m) - (nilai.t*nilai.i);
	nilai.hasilb = pow(nilai.m, 2) + pow(nilai.i, 2);
	nilai.hasil1 = nilai.x / nilai.y;
	nilai.hasil2 = nilai.hasila / nilai.hasilb;
	cout << "Hasil Pembagian Complex = " << "("	<< nilai.hasil1 << "," << nilai.hasil2 << ")" << endl;
	nilai.hasil = nilai.hasil1 + nilai.hasil2;
	cout << "Hasil pembagian = " << nilai.hasil;
	cout << endl;
}

void perkalian(komplek& nilai)
{
	cout << "PERKALIAN " << endl;
	cout << endl;
	cout << "Angka 1 = ";
	cin >> nilai.t;
	cout << "Angka 2 = ";
	cin >> nilai.u;
	cout << "Angka 3 = ";
	cin >> nilai.m;
	cout << "Angka 4 = ";
	cin >> nilai.i;
	cout << endl;

	nilai.hasil1 = (nilai.t*nilai.m) - (nilai.u*nilai.i);
	nilai.hasil2 = (nilai.u*nilai.m) + (nilai.t*nilai.i);
	cout << "Hasil Perkalian Complex = " << "("	<< nilai.hasil1 << "," << nilai.hasil2 << ")" << endl;
	nilai.hasil = nilai.hasil1 + nilai.hasil2;
	cout << "Hasil Perkalian= " << nilai.hasil << endl;
	}

int main()
{
	komplek nilai1;
	penambahan(nilai1);
	cout << endl;
	pengurangan(nilai1);
	cout << endl;
	pembagian(nilai1);
	cout << endl;
	perkalian(nilai1);
	system("pause");
	return 0;
}
