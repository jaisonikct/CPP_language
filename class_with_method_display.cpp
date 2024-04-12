#include<iostream>
using namespace std;

class Rect {
    private:
        int l, b;

    public:
        void getdim(int length, int breadth) {
            l = length;
            b = breadth;
        }

        void display() {
            cout << "\nLength = " << l << "\nWidth = " << b;
        }
};

int main() {
    Rect r1, r2;
    r1.getdim(10, 20);
    r1.display();
    r2.getdim(12, 13);
    r2.display();

    return 0;
}
