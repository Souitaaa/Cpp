#include <iostream>
#include <sstream>  // For stringstream
#include <string>

using namespace std;
int main() {
    std::string str = "100 200 300";
    std::stringstream ss(str);  // Initialize stringstream with a string

    int a;
    ss >> a;
    cout << a << endl;  // Output: 100

    return 0;
}
