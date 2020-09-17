#include <iostream>

using namespace std;

class Member {
    public:
    string nama;
    string alamat;

    public:
    void makan() {
        cout << nama << " sedang makan " << endl;
    }

    void membaca() {
        cout << nama << " sedang membaca" << endl;
    }

    void tidur() {
        cout << nama << " sedang tidur" << endl;
    }
};

class Mahasiswa : public Member {
    public:
    string nim;
    string jurusan;

    void belajar() {
        cout << nama << "Sedang belajar" << endl;
    }
};

class Dosen : public Member {
    public:
    string nidn;

    void mengajar() {
        cout << nama << "Sedang mengajar" << endl;
    }
};

int main()
{
    Member m;
    m.nama = "Member 1";
    m.alamat = "Jakarta";
    m.makan();

    Dosen dsn;
    dsn.makan();
    dsn.mengajar();

    return 0;
}
