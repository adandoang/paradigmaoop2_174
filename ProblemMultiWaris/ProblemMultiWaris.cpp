#include <iostream>
using namespace std;

class orang {
public:
	int umur;

	orang(int pUmur) :
		umur(pUmur)
	{
		cout << "orang dibuat dengan umur" << umur << "\n" << endl;
	}
};

class pekerja : public orang {
public:

	pekerja(int pUmur) :
		orang(pUmur)
	{
		cout << "pekerja dibuat\n" << endl;
	}
};

class pelajar : public orang {
public:

	pelajar(int pUmur) :
		orang(pUmur)
	{
		cout << "pelajar dibuat\n" << endl;
	}
};

class adan : public pekerja, public pelajar {
public:

	adan(int pUmur) :
		pekerja(pUmur),
		pelajar(pUmur)
	{
		cout << "Adan dibuat\n" << endl;
	}
};

int main() {
	adan a(19);
	return 0;
}