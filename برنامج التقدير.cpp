
#include <iostream>
using namespace std;
int main()
{
    float a,b;
    cin >> b;
    cin >> a;
    float c = b / a;

    if (a >= b ) {
        cout << "avg = " << c * 100 << endl;
        if (c == 1) { cout << "a7a wow"; }
        else if (c > 0.9) {
            cout << "excelent";
        }
        else if (c > 0.8) {
            cout << "very good";
        }
        else if (c > 0.7) {
            cout << "good";
        }
        else if (c > 0.6) {
            cout << "ok";
        }
        else if (c > 0.5) {
            cout << "succeed";
        }
        else {
            cout << "fk u";
        }
    }
    else { cout << "enter logical numbers"; }
}
