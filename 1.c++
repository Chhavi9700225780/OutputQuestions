What is the output of the following code?

#include <iostream>
using namespace std;

int main() {
    char * a = "Hello\0World";
    cout << strlen(a) << endl;
    return 0;
}