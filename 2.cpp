#include <iostream>
using namespace std;

class flower{
    public:
    string name;
    string color;
    int num_of_petals;
    flower(string n, string c,int p): name(n),color(c), num_of_petals(p){}
};

int main(){
    flower one("rose","red",6);
    cout << one.name << endl;
    cout << one.color << endl;
    cout << one.num_of_petals <<endl;
}
