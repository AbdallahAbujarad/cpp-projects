//برنامج فاكتوريال بس بريكيرجن فنكشن

#include <iostream>
using namespace std;
int fact(int x) {

    if (x > 0) {
        return (x * fact(x - 1));
    }
    else {
        return 1;
    }



}
int main() {
    cout << "enter ";
    int y;cin >> y;
    cout << fact(y);


    return 0;
}