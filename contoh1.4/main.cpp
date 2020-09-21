#include <iostream>
#include <string>

using namespace std;

class Buku {
    string judul;
    string penerbit;
    string pengarang;

    public:
    Buku(string jdl, string pnbt, string pgrg) {
        inisialisasi(jdl,pnbt,pgrg);
    }

    void inisialisasi(string jdl, string pnbt, string pgrg) {
        judul = jdl; penerbit = pnbt; pengarang = pgrg;
    }

    void info() {
        cout << "Informasi buku" << endl;
        cout << "Judul    : " << judul << endl;
        cout << "Pengarang: " << pengarang << endl;
        cout << "Penerbit : " << penerbit << endl;
    }

};

class Member {
    string nama;
    string alamat;

    public:
    Member() {
        nama = "Tanpa nama";
        alamat = "-";
    }

    Member(string nm, string alm) {
        nama = nm; alamat = alm;
    }

    void membaca(Buku b) {
        cout << nama << " sedang membaca buku:" << endl;
        b.info();
    }

    void info() {
        cout << "Nama    : " << nama << endl;
        cout << "Alamat  : " << alamat << endl;
    }
};

using namespace std;

int main()
{
    string judul, penerbit, pengarang;
    cout << "Masukan data buku" << endl;
    cout << "Judul     : "; getline(cin,judul);
    cout << "Pengarang : "; getline(cin,pengarang);
    cout << "Pengerbit : "; getline (cin, penerbit );
    Buku b(judul, penerbit,pengarang);

    string nama, alamat;
    cout << endl << "Masukan data member" << endl;
    cout << "Nama     : "; getline(cin,nama); // alternatif cin >> nama;
    cout << "Alamat   : "; getline(cin,alamat); //  cin >> alamat;
    Member m(nama,alamat);
    cout << endl;
    m.info();
    m.membaca(b);
    return 0;
}
