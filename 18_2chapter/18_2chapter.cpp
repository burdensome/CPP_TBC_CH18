#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // flag setting
    //cout.setf(std::ios::showpos);   // + 기호를 출력하는 showpos임. visual studio에서는 std::showpos안되고 std::ios::showpos
    /*cout.unsetf(std::ios::dec);
    cout.setf(std::ios::hex);   // 16진수 변환을 위해선 위의 10진수를 해제하는게 필요*/ 
    //cout.setf(std::ios::hex, std::ios::basefield);  // 10진수를 unset하지 않고 한번에 16진수 변환, basefield를 set하겠다.
    //cout.setf(std::ios::uppercase); // 대문자 표현을 하고싶으면 이와 같이 세팅
    //cout << std::hex;   // 위의 것들마저도 귀찮다 하면 이렇게
   /* cout << std::hex << std::ios::uppercase;
    cout << 108 << endl;
    cout << 109 << endl;

    cout << std::dec;
    cout << 110 << endl;*/

    //cout.unsetf(std::ios::showpos); // 세팅 해제
    //cout << 109 << endl;

    //// ---------------------
    //cout << std::boolalpha; // true, false를 영어로 표기하게 해줌. 이걸 안쓰면 1, 0으로 표기됨
    //cout << true << " " << false << endl;

    ////cout << std::defaultfloat;
    ////cout << std::fixed; // 소수점 자리수가 고정되어서 소수점의 개수를 표현되게 변경됨
    ////cout << std::scientific << std::uppercase;    // 10진수 표기
    //cout << std::showpoint; // setprecision(3)일 떄도 .을 표시해줌
    //cout << std::setprecision(3) << 123.456 << endl;
    //cout << std::setprecision(4) << 123.456 << endl;
    //cout << std::setprecision(5) << 123.456 << endl;
    //cout << std::setprecision(6) << 123.456 << endl;
    //cout << std::setprecision(7) << 123.456 << endl;
    //cout << std::setprecision(8) << 123.456 << endl;


    cout << -12345 << endl;
    cout.fill('*');
    cout << std::setw(10) << -12345 << endl;
    cout << std::setw(10) << std::left << -12345 << endl;
    cout << std::setw(10) << std::right << -12345 << endl;
    cout << std::setw(10) << std::internal << -12345 << endl;   // 부호와 빈칸사이에 공간을 만든다는 것

    return 0;
}