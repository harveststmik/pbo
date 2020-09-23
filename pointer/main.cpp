#include <iostream>

using namespace std;

int main()
{

    int a = 10;
    int b = 20;
    int *pa;

    pa = &b;

    char *nama = "Joko";
    printf("Nama %s", nama);

    cout << "nilai dari a : " << *pa << endl;
    return 0;
}
