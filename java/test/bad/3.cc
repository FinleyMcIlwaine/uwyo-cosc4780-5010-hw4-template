// Macros to shut up the C++ warnings
#define printInt(x)
#define printDouble(x)
#define printString(x)
#define readInt() 0
#define readDouble() 0
#define readString() 0

#include <string>
using std::string;

bool wantStringPlz(string x) {
    return x; // Type error!
}

int main()
{
    wantStringPlz("lenny");
}