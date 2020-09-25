#include <iostream>

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

    Dosen *dosen = new Dosen();
    dosen->setInfo("Yohanes","Tangerang");
    dosen->info();
    cout << "Alamat memory dosen " << dosen <<endl;
    delete dosen;
    return 0;
}
