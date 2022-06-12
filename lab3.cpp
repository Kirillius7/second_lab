#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{
    int a[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int a[12];
    cout << "Enter members of the first array: " << endl;
    for (unsigned i = 0; i != 12; ++i)
        cin >> a[i];

    int b[12] = {1,2,3,4,5,6,7,8,9,10,11,13};
    // int b[12];
    cout << "Enter members of the second array: " << endl;
    for (unsigned j = 0; j != 12; ++j)
        cin >> b[j];

    for (unsigned k = 0; k != 12; ++k)
    {
        if (a[k] == b[k])
            a[k] = 0;
    }

    cout << "Members of first array now are: " << endl;
    for (unsigned i = 0; i != 12; i++)

        cout << " " << a[i];
    cout << endl << endl;

    for (unsigned i = 0; i != 12; i++)
    {
        for (unsigned j = 0; j != 12; ++j)
        {
            cout << a[i] << " \n" << b[j];
        }
        cout << endl;
    }
    return 0;

}
