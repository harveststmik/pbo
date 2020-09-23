#include <iostream>

// decision
// perulangan
// selection



using namespace std;

int main()
{
    // decision
    // if else elseif
    // operator: < lebih kecil  > lebih besar <= lebih kecil sama dengan >= lebih besar sama dengan

//    int angka;
//    cout << "Masukan sebuah angka"; cin >> angka;
//    if (angka < 10) {
//        cout << "angka yang anda masukan lebih kecil dari 10" << endl;
//    }
//    else if(angka < 30) {
//        cout << "angka yang anda masukan sama dengna 10 atau lebih kecil dari 30\n";
//    }
//    else {
//        cout << "angka yang ada masukan lebih besar dari 29" << endl;
//    }

    // perulangan
    // for
    // form: for(kondisi) {    }

    // contoh:
    // carilah f dari 2x + 3; 0 < x <10

//    for(int x = 0; x<10; x++) {
//        cout << "loop ke : " << (x+1) << ": 2 x " << x << " +3" << " = " << (2*x)+3 << endl;
//    }


//    int x = 0;
//    while(x < 10 ) {
//        cout << "loop ke : " << (x+1) << ": 2 x " << x << " +3" << " = " << (2*x)+3 << endl;
//        x++;
//    }


//    int x = 0;
//    do {
//        cout << "loop ke : " << (x+1) << ": 2 x " << x << " +3" << " = " << (2*x)+3 << endl;
//        x++;
//    } while(x<10);


//selection

    int pilih;
    cout << "Menu" << endl;
    cout << "1. Nasi goreng" << endl;
    cout << "2. Soto" << endl;
    cout << "3. Indomie rebus" << endl;
    cout << "Pilih nomor (1/2/3) : "; cin >> pilih;

    switch(pilih) {
        case 1: cout << "Kamu suka nasi goreng" << endl; break;
        case 2: cout << "Kamu suka soto" << endl; break;
        case 3: cout << "Kamu suka indomie rebus" << endl; break;
        default: cout << "Kamu salah pilih" << endl;
    }

    return 0;
}
