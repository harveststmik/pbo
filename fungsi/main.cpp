#include <iostream>

using namespace std;

// fungsi yang tidak mengembalikan nilai
void tambah(int a, int b) {
    cout << "Jumlah " << a << " ditambah " << b << " = " << (a+b) << endl;
}


// fungsi yang mengembalikan nilai bertipe intenger (int)
int tambah2(int a, int b) {
    return a+b;
}

int main()
{
    tambah(5,6);
    cout << "Jumlah total : " << tambah2(tambah2(3,7),tambah2(5,5)) << endl;
    return 0;
}
