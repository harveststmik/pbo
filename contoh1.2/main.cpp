#include <iostream>

using namespace std;

/*
    Constructor
*/

class Buku {
    public:
    string judul;
    string penerbit;
    string pengarang;

    //constructor
    Buku() {
        this->judul = "Tanpa judul";
        this->penerbit = "Tanpa penerbit";
        this->pengarang = "Tanpa pengarang";
    }

    void info() {
        cout << "Informasi buku" << endl;
        cout << "Judul    : " << judul << endl;
        cout << "Pengarang: " << pengarang << endl;
        cout << "Penerbit : " << penerbit << endl;
    }
};


int main()
{
    Buku b1;
    b1.info();

    Buku b2;
    b2.judul = "Pemrograman Berorientasi Obyek";
    b2.info();
    return 0;
}
