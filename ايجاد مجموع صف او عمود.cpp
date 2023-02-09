#include <iostream>
using namespace std;
int main()
{
    const int w = 2, l = 3;
    cout << "enter " << w * l << " nums : ";

    int ar[w][l];
    for (size_t x = 0; x < w; x++)
    {
        for (size_t y = 0; y < l; y++)
        {
            cin >> ar[x][y];
        }
    }

    for (size_t x = 0; x < w; x++)
    {
        for (size_t y = 0; y < l; y++)
        {
            cout << ar[x][y] << " " ;
        }
        cout << endl;
    }
    cout << endl << endl << endl;

    
        cout << "enter the 3amalia : \n1.+\n2.*\n\n";
        int _3m;
        cin >> _3m;
        if (_3m == 1) {
            cout << "choose the number of saf : ";
            int num, sum = 0;
            cin >> num;

            for (size_t j = 0; j < l; j++)
            {
                sum += ar[num - 1][j];
            }
            cout << "sum = " << sum;
        }
        else {
            cout << "choose the number of saf : ";
            int num, sum = 1;
            cin >> num;
            cout << endl;

            for (size_t j = 0; j < l; j++)
            {
                sum *= ar[num - 1][j];
            }
            cout << "sum = " << sum;
        }

    }

