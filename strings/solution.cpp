#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    
    // Print the size of both strings
    cout << a.size() << " " << b.size() << endl;
    
    // Concatenate both strings
    cout << a + b << endl;
    
    // Swap first characters and print
    if(a.size() > 0 && b.size() > 0) {
        char temp = a[0];
        a[0] = b[0];
        b[0] = temp;
    }
    cout << a << " " << b << endl;
    
    return 0;
}
