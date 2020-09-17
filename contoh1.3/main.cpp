#include <iostream>

using namespace std;

class Member {
    private:
    string nama;
    string alamat;

    public:
    Member() {
        nama = alamat = "-";
    }

    void setNama(string nm) {
        if(nm != "Joko")
            nama = nm;
        else
        cout << "data tidak benar" << endl;
    }

    void setAlamat(string alamat) {
        this->alamat = alamat;
    }

    void info() {
        cout << "Member detail" << endl;
        cout << "Nama   : " << nama << endl;
        cout << "Alamat : " << alamat << endl;
    }
};

int main()
{
    Member m;
    m.setNama("Joko");
    m.info();
    return 0;
}



//aksesibiltas atau visibity
