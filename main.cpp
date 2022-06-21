#include <iostream>

using std::cout;
using std::endl;

struct EmptyStruct {};

struct NotEmptyStruct {
    int x;
    int y;
};

struct PointerStruct {
    int *x;
    int *y;
};

int main() {
    cout << "Primitive Types:" << std::endl;
    cout << "  sizeof(int) >> " << sizeof(int) << endl;
    cout << "  sizeof(char) >>  " << sizeof(char) << endl;
    cout << "  sizeof(bool) >> " << sizeof(bool) << endl;
    cout << "  sizeof(float) >> " << sizeof(float) << endl;
    cout << "  sizeof(double) >> " << sizeof(double) << endl;
    cout << "  sizeof(wchar_t) >> " << sizeof(wchar_t) << endl;


    cout << "Structures:" << std::endl;
    cout << "  EmptyStruct >> " << sizeof(EmptyStruct) << endl;
    cout << "  NotEmptyStruct(int,int) >> " << sizeof(NotEmptyStruct) << endl;
    NotEmptyStruct nes = {2, 1};
    cout << "  Pointer to NotEmptyStruct(int,int) >> " << sizeof(&nes) << endl;
    cout << "  PointerStruct(*int,*int) >> " << sizeof(PointerStruct) << endl;

    return 0;
}

