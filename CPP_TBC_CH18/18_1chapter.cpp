#include <iostream>
#include <string>
#include <iomanip>  // input/output manipulators
using namespace std;

int main()
{
    /*char buf[5];

    cin >> setw(5) >> buf;
    cout << buf << endl;

    cin >> setw(5) >> buf;
    cout << buf << endl;

    cin >> setw(5) >> buf;
    cout << buf << endl;*/

    //char buff[100];

    //cin.getline(buff, 100); // getline�� �ٹٲ�\n char���� ��������, get�� �ٹٲ� ���� �������� ����.
    //
    //cout << cin.gcount() << " " << buff << endl;
    //    
    //
    //cin.getline(buff, 100);
    //cout << cin.gcount() << " " << buff << endl;

    /*int i;
    float f;

    cin >> i >> f;

    cout << i << " " << f << endl;*/

    string buf; 

    getline(cin, buf);
    cout << cin.gcount() << " " << buf << endl;
    return 0;
}