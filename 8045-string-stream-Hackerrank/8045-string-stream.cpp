
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> integers;
    int num;
    char ch;

    while (ss >> num) {
        integers.push_back(num);
        ss >> ch;
    }

    return integers;
}

int main() {
    string str;
    cin >> str;

    vector<int> result = parseInts(str);

    for (int num : result) {
        cout << num << endl;
    }

    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna