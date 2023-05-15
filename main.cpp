#include <iostream>
#include "assets.h"
#include "fstream"
int main() {
    assets SPUEmployee01;  // no parameter constructor;
    assets SPUStudent01("CSC2430"); // name parameter constructor;
    assets SPUStudent02 = SPUStudent01; // copy constructor is private;
    SPUEmployee01 = SPUStudent01; // copy assignement is private;

    SPUStudent01.AddTag("Tag-0001");
    SPUStudent01.AddTag("Tag-0002");
    SPUStudent01.AddTag("Tag-0003");
    cout << SPUStudent01.ToString();
    cout<< endl;


//    string filename;
//    cout << "Yo, give me your filename: ";
//    cin >> filename;
//    ofstream file(filename);
//    if (file.fail()){
//        cerr << "Could not open file " << filename << endl;
//
//    }
//    SPUStudent01.WriteTag(file);
//    file.close();

    return 0;
}
