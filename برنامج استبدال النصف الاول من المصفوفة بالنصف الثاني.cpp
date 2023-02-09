//برنامج استبدال النصف الاول من المصفوفة بالنصف الثاني

#include <iostream>
using namespace std;

int main() {
    const int size = 7;
    int ar[size], x;
    int temp;

   cout << "enter " << size << " numbers :"<<endl;
    for (int i = 0;i < size;i++) {
        cout << i+1 << ". ";cin >> ar[i];
    }

    for (x = 0;x < size / 2;x++) {
        temp = ar[x];
        ar[x] = ar[x + size / 2];
        ar[x + size / 2] = temp;
    }

    for (int f = 0;f < size;f++) {
        if (size % 2 != 0) {
            cout << "error !! the size must be an even number";
            break;
        }
        else { cout << ar[f] << " "; }
    }



    return 0;
}