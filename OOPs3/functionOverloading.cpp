#include <iostream>
using namespace std;

class Print {
public:
    void display(int i) {
        cout << "Integer: " << i << endl;
    }

    void display(double f) {
        cout << "Float: " << f << endl;
    }

    void display(string s) {
        cout << "String: " << s << endl;
    }
    void display(string n ,int r){
        cout<<"String : "<<n<<" "<<"Integer : "<<r<<endl;
    }
};

int main() {
    Print p;
    p.display(5);
    p.display(5.5);
    p.display("Hello");
    p.display("Hardik",116);
    return 0;
}
