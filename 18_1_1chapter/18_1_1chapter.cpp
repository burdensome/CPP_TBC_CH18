#include <iostream>
#include <string>
#include <iomanip>  // input/output manipulators
using namespace std;

int main()
{
    char buf[1024];

    //cout << (char)cin.peek() << endl; // ���۸� �鿩�� ���� �� �������� ����
    ////cin.ignore();   // �Է¹��� �� �ѱ��ڸ� �����ϴ±���~ ����ȣ. ���� ����¿� ����
    //cin.ignore(2);

    cin >> buf;
    cout << buf << endl;

    //cin.unget();    // �������� ���� ���� ���ۿ� ���� ��
    cin.putback('A');   // ���ۿ� �ٽ� ���� �ִ� ��

    cin >> buf;
    cout << buf << endl;

    return 0;
}