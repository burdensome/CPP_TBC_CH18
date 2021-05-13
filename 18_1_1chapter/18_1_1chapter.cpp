#include <iostream>
#include <string>
#include <iomanip>  // input/output manipulators
using namespace std;

int main()
{
    char buf[1024];

    //cout << (char)cin.peek() << endl; // 버퍼를 들여다 보는 것 꺼내지는 않음
    ////cin.ignore();   // 입력받을 떄 한글자를 무시하는구나~ 무야호. 파일 입출력에 좋음
    //cin.ignore(2);

    cin >> buf;
    cout << buf << endl;

    //cin.unget();    // 마지막에 읽은 것을 버퍼에 넣은 것
    cin.putback('A');   // 버퍼에 다시 값을 넣는 것

    cin >> buf;
    cout << buf << endl;

    return 0;
}