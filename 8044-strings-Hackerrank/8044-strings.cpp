#include <iostream>
#include <string>

using namespace std;

int main() 
{ 
    string a, b;
    cin >> a >> b;
    
    cout << a.size() << " " << b.size() << "\n"; 
    
    cout << a + b << "\n";
    
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    
    cout << a << " " << b << endl;
    
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna