#include<iostream>
#include<string>
using namespace std;

int main(){
    
    int a;
    cout << "Enter an Integer: ";
    cin >> a;
    cout << "Integer is: " << a << " and size is: " << sizeof(a) << " bytes" << endl;
    
    float b;
    cout << "Enter a Decimal Number for Float: ";
    cin >> b;
    cout << "Number is: " << b << " and size is: " << sizeof(b) << " bytes" << endl;
    
    char c;
    cout << "Enter a Character: ";
    cin >> c;
    cout << "Character is: " << c << " and size is: " << sizeof(c) << " bytes" << endl;
    
    double d;
    cout << "Enter a Decimal Number for Double: ";
    cin >> d;
    cout << "Number is: " << d << " and size is: " << sizeof(d) << " bytes" << endl;
    
    string e;
    cout << "Enter a String (no spaces): ";
    cin >> e;
    cout << "String is: " << e << " and length is: " << e.length() << " characters" << endl;

    // Alternatively use getline for full line input
    // cin.ignore(); // To flush newline from previous input
    // getline(cin, e);
    
    bool f;
    cout << "Enter 1 for TRUE or 0 for FALSE: ";
    cin >> f;
    cout << "Input is: " << f << " and size is: " << sizeof(f) << " bytes" << endl;

    return 0;
}
}
