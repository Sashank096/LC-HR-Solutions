#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    
    
    cin >> a >> b >> c >> d >> e;
    
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    cout << fixed << setprecision(3) << d << "\n";
    cout << fixed << setprecision(9) << e << "\n";
    
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna