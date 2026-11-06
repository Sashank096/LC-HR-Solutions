#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;


int main() 

{
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    
    int pos;
    cin >> pos;
    v.erase(v.begin() + pos - 1);
    

    int start, end;
    cin >> start >> end;
    v.erase(v.begin() + start - 1, v.begin() + end - 1);
    
    
    cout << v.size() << endl;
    
    
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << (i == v.size() - 1 ? "" : " ");
    }
    cout << endl;
    
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna