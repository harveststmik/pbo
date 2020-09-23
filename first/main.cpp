#include <iostream>
#include <string.h>

using namespace std;

class Orang {
public:
    string nama;
    string alamat; // field / attribut

    void makan(string mkn) {
        cout << nama << " sedang makan " << mkn << endl;
    }

    void membaca() {
        cout << nama << " sedang membaca" << endl;
    }

    void tidur() {
        cout << nama << uppercase << " sedang tidur" << endl;
    }
};

int main()
{
    Orang o1;
    o1.nama = "Joko lodang";
    o1.alamat = "Tangerang";

    string makanan = "Nasi Padang";
    o1.makan(makanan);
    o1.makan("Blueberry");
    o1.tidur();
}
