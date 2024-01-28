What is the output of the following code?

#include <iostream>
using namespace std;

int main() {
    char * a = "Hello\0World";
    cout << strlen(a) << endl;
    return 0;
}

Which method is correct to concatenate a character at the end of a string object?

Method 1:

string s;
s = s + 'a';
Method 2:

string s;
s.push_back('a');
Ans Both;