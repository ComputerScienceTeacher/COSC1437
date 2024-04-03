#include <iostream>
#include <cstddef>

using namespace std;

int main() {
    bool booleanLiteral = true;  // Boolean literal
    nullptr_t nullPointerLiteral = nullptr;  // Null pointer literal
    
    cout << "Boolean Literal: " << booleanLiteral << endl;
    cout << "Null Pointer Literal: " << static_cast<void*>(nullPointerLiteral) << endl;

    return 0;
}