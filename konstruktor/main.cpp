#include <iostream>

using namespace std;

class Buku {
    public:
    string judul;
    string penerbit;
    string pengarang;

    /*
        Konstruktor
        Dibuat dengan memberi nama metodenya sama dengan nama kelas
    */
    Buku() {
 		inisialisasi();
    }

    void inisialisasi() {
        judul = penerbit = pengarang = "-";
    }

    void info() {
        cout << "Informasi Buku" << endl;
        cout << "Judul     : " << judul << endl;
        cout << "Pengarang : " << pengarang << endl;
        cout << "Penerbit  : " << penerbit << endl << endl;
    }
};

int main()
{
    Buku b1;
    b1.info();

    Buku b2;
    b2.judul =  "Pemrograman berorientasi obyek";
    b2.pengarang = "Robert de Niro";
    b2.info();

    return 0;
}
