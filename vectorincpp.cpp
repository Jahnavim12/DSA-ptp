#include <iostream>
#include <vector>
using namespace std;

int main() { 
    vector<int> v;
    v.insert(v.begin(), 10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
 
    vector<int>::iterator itr;
    for (itr = v.begin(); itr != v.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << "\n";
    itr = v.begin() + 2;
    v.erase(itr);
    for (itr = v.begin(); itr != v.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << "\n";
    
    return 0;
}
