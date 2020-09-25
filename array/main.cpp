#include <iostream>

using namespace std;

void array2d() {
    int a[10][10];

    for (int i=0; i<10; i++) {
        for(int x=0; x<10; x++) {
            a[i][x] = i*x;
        }
    }

    for (int i=0; i<10; i++) {
        for(int x=0; x<10; x++) {
            cout << "Data a["<< i << "][" << x << "] adalah : " << a[i][x] << endl;
        }
    }
}

void array1d() {
    int a[10];

    for(int i=0; i<10; i++) {
        a[i] = 2*i + 3;
    }

    int x = 0;
    do {
        cout << "Nilai dari a["<<  x << "]" << " = " << a[x] << endl;
        x++; // x = x + 1;
    } while (x < 10);
}


int main()
{
    array1d();
    array2d();

    char nama[] = "Johansen";

    nama[0] = 'Y';

    cout << "Nama : " << nama << endl;

    return 0;
}
