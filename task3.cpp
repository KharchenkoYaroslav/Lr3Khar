#include <iostream>
using namespace std;
int main()
{
    union
    {
        unsigned char bytes[sizeof(int)];
        int value;
    };
    unsigned int i;
    value = 1;

    cout << "value: " << value << endl << "bytes: ";

    for (i = 0; i < sizeof(int); i++)
    cout << (int)bytes[i] << " ";

    unsigned char temp = bytes[3];
    bytes[3] = bytes[0];
    bytes[0] = temp;
    temp = bytes[2];
    bytes[2] = bytes[1];
    bytes[1] = temp;
    
    cout << endl << "Reversed bytes: ";
    for (i = 0; i < sizeof(int); i++)
    cout << (int)bytes[i] << " ";

    cout << endl << "value: " << value << endl;
    return 0;
}