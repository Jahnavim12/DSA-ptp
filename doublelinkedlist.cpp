
#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> ls;
    ls.push_front(10);
    ls.push_front(20);
    ls.push_front(30);
    ls.push_front(40);
    ls.push_back(50);
    ls.insert(++ls.begin(),60);
    ls.insert(++ls.begin(),80);
        for (auto i = ls.begin(); i!= ls.end(); ++i) {
        cout << *i << " ";
    }
    return 0;
}
