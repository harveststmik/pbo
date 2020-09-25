#include <iostream>
#include <vector>

using namespace std;

class Dosen {
    private:
    string nama;
    string alamat;

    public:
    void setInfo(string nama, string alamat) {
        this->nama = nama; this->alamat = alamat;
    }

    void info() {
        cout << "Informasi Dosen" << endl;
        cout << string(25,'=') << endl;
        cout << "Nama  : " << nama << endl;
        cout << "Alamat :" << alamat << endl;
    }
};

int main()
{

// contoh 1:
//    vector<string> anggota = { "Robert", "Vicky"};
//    anggota.push_back("Eleazar");
//
//    cout << "Daftar Anggota" << endl;
//    cout << string(25,'-') << endl;
//    int c=0;
//    for(string agt : anggota) {
//        c++;
//        cout << c << "\t" << agt << endl;
//    }
//    cout << string(25,'-') << endl;


// contoh 2
//    vector<Dosen> listdosen;
//    Dosen d1;
//    Dosen d2;
//    Dosen d3;
//
//    d1.setInfo("Ezekiel", "Jakarta");
//    d2.setInfo("Yohanes", "Bandung");
//    d3.setInfo("Florence", "Tangerang");
//
//    listdosen.push_back(d1);
//    listdosen.push_back(d2);
//    listdosen.push_back(d3);
//
//    for (Dosen dosen : listdosen) {
//        dosen.info();
//        cout << endl;
//    }

// contoh 3:

    vector<Dosen*> listDosen;
    Dosen* dosen;

    char ulang;
    do {
        dosen = new Dosen();
        string nama, alamat;
        cout << "Masukan data dosen :" << endl;
        cout << "Nama    : "; getline(cin,nama);
        cout << "Alamat  : "; getline(cin,alamat);
        dosen->setInfo(nama,alamat);
        listDosen.push_back(dosen);
        cout << endl << "Masih ada data (Y/t)"; cin >> ulang;
        cin.ignore();
    }
    while(ulang != 'T' && ulang != 't');

    for (Dosen* dsn : listDosen) {
        dsn->info();
        cout << endl;
        delete dsn;
    }
    return 0;
}
