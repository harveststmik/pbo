#include <iostream>
#include <string>

using namespace std;

class Buku {
    private:
    string judul;
    string penerbit;
    string pengarang;

    public:
    void setInfo(string jdl, string pnbt, string pngr) {
 		judul = jdl; penerbit = pnbt; pengarang = pngr;
    }

    void getInfo() {
        cout << string(25,'=') << endl;
        cout << "Informasi Buku" << endl;
        cout << string(25,'=') << endl;
        cout << "Judul    : " << judul << endl;
        cout << "Penerbit : " << penerbit << endl;
        cout << "Pengarang: " << pengarang << endl;
        cout << string(25,'=') << endl;
    }
};

class Member {
    protected:
    string nama;
    string alamat;

    Member() {
        init("Anonim","-");
    }

    Member(string nm, string almt) {
        init(nm,almt);
    }

    void init(string nm, string almt) {
        nama = nm; alamat = almt;
    }
};

enum Tipe { Gold, Silver, Bronze };
string tipe_string[] = { "Gold", "Silver", "Bronze" };

class Executive : private Member {
    Tipe tipe_member;

    public:
    Executive() {
        tipe_member = Tipe::Bronze;
    }


    void setInfo(string nm, string almt, Tipe tp) {
        init(nm,almt);
        tipe_member = tp;
    }

    void getInfo() {
        cout << "Hi " << nama << " kamu tinggal di " << alamat << endl;
        cout << "Tipe membershimu adalah : " << tipe_string[tipe_member] <<endl;
    }
};



void v_private() {
    Buku buku;
    buku.setInfo("C++ Primer","Free Books","Efraim Hazel");
    buku.getInfo();
}

void v_protected() {
    Executive member;
    //member.setInfo("Koko","Yogya",Tipe::Silver);
    member.getInfo();

}

int main() {
    //v_private();
    v_protected();
}
