//برنامج لترتيب مصفوفة تصاعديا 

#include <iostream>
using namespace std;

int main() {
    int x, y, f ;const int zozo = 10;
    int ar[zozo];
    cout << "enter " << zozo << " numbers : ";
    for (size_t i = 0; i < zozo; i++)
    {
        cin >> ar[i];
    }
    
    for (x = 0;x < zozo;x++) {
        for (y = x + 1;y < zozo;y++) {
            if (ar[x] > ar[y]) {
                f = ar[y];
                ar[y] = ar[x];
                ar[x] = f;


            }


        }
    }

    for (int u = 0;u < zozo;u++) {
        cout << ar[u] << " ";
    }

    return 0;
}