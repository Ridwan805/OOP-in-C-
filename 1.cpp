#include <iostream>
using namespace std;

class DataType{

    public:
    string name;
    string value; 
    DataType(string n, string v): name(n), value(v){}
};

int main(){

    DataType data("integer","1234");
    cout << data.name << endl;
    cout << data.value << endl;
    cout<< "=====================" << endl;

    DataType data1("String","World");
    cout << data1.name << endl;
    cout << data1.value << endl;
    cout<< "=====================" << endl;

    DataType data2("Float/Double","3.1416");
    cout << data2.name << endl;
    cout << data2.value << endl;
    cout<< "=====================" << endl;
}

