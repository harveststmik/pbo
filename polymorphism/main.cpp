#include <iostream>

using namespace std;

class Buku {
    public:
    string judul;
    string penerbit;
    string pengarang;

    //constructor
    Buku() {
        this->judul = "-";
        this->penerbit = "-";
        this->pengarang = "-";
    }

    Buku(string jdl) {
        judul = jdl;
        penerbit = "-";
        pengarang = "-";
    }

    Buku(string jdl, string pnbt) {
        judul = jdl;
        penerbit = pnbt;
        pengarang = "-";
    }

    Buku(string jdl, string pnbt, string png) {
        judul = jdl;
        penerbit = pnbt;
        pengarang = png;
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

    Buku b1("Prinsip-Prinsip Algoritma");
    b1.info();

    Buku b2("Pemrograman C++","-","Sutejo");
    b2.info();


    return 0;
}
