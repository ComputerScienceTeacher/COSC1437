#include <iostream>

using namespace std;

void print(void* &num, char type)
{
    switch(type)
    {
        case('i'):
            cout << *(int*)num << endl; 
            break;
        case('d'):
            cout << *(double*)num << endl; 
            break;
        case('c'):
            cout << *(char*)num << endl; 
            break;
    }
    
}


int main()
{
    int k = 5;
    void* ptr = &k;
    cout << ptr << endl;
    print(ptr, 'i');

    double num = 2.4;
    void* ptr2 = &num;
    cout << ptr2 << endl;
    print(ptr2, 'd');

    char c = 'c';
    void* ptr3 = &c;
    cout << (void*)ptr3 << endl;
    print(ptr3, 'c');

    return 0;
}
