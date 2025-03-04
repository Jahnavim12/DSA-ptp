
#include <iostream>
#include<forward_list>
using namespace std;
int main() {
    forward_list<int> fl;
    fl.push_front(80);
    fl.push_front(60);
    fl.push_front(40);
    fl.push_front(30);
    fl.push_front(10);
    fl.push_front(20);
    fl.remove(40);
    fl.remove(60);
    fl.sort();
    fl.reverse();
   int size=distance(fl.begin(),fl.end());

    for(int i: fl){
        cout<<i<<"\n";}
  cout<<size;
   return 0;
}
