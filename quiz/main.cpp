#include <iostream>
#include <string>

using namespace std;

class Karyawan {
    public:
    string nama;
};

class KaryawanTetap : public Karyawan {
    private:
    int gajiPokok;
    int tunjangan;

    public:
    void setGajiPokok(int gp) {
        gajiPokok = gp;
    }

    void setTunjangan(int tj) {
        tunjangan = tj;
    }

    int hitungGaji() {
        //
    }
};

class Mahasiswa {
    string nama;
    int tahunlahir;
    string sekolah_asal;

    public:
    Mahasiswa() {
        init("-", 1970, "-");
    }

    Mahasiswa(string nama) {
        init(nama,1970, "-");
    }

    void init(string nm, int thn, string asal) {
        nama = nm; tahunlahir = thn; sekolah_asal = asal;
    }

    void info() {
        cout << nama << " adalah mahasiswa asal " << sekolah_asal << endl;
    }
};


class Orang {
    public:
    string nama;

    void makan(string mkn) {
        cout << nama << " sedang makan " << mkn << endl;
    }
};

int main() {
   Orang o;
   o.nama = "Jono";
   o.makan("Nasi");
}
