#include <iostream>

using namespace std;

string& strs(string& s) {
    s.push_back('A');
    cout << "strs s alamat " << &s << endl;
    return s;
}

int main()
{

    int a = 10;
    int b = 20;
    int *pa;
    pa = &b;

    int arr[] = { 1, 3, 5, 6, 7 };

    string nama = "Joko";
    cout << (nama == "Joko") << endl << endl;

    cout << "alamat dari array adalah " << *(arr+1) << endl;

    cout << "nilai dari a : " << *pa << endl;

    string s = "Joko";
    string& d = strs(s);
    cout << d << &d << &s << endl;

    s.push_back('C');
    d.push_back('D');

    cout << d << "\t" << s << endl;

    return 0;
}
