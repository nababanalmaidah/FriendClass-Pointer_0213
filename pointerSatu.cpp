#include <iostream>
using namespace std;
class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout<<"NO Induk = "<<nim<<endl;
    }
};

int main (){
    mahasiswa mhs{1}; // object mhs
    mhs.showNim

    mahasiswa &refMhs = mhs; //Pointer Reference refMhs
    refMhs.nim = 2; //Member Acces Operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; //pointer Dereference pMhs
    pMhs->nim = 3; //Arrow Operator
    pMhs->showNim();
    return 0;
}

