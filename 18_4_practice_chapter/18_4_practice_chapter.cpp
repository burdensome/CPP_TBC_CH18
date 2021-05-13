#include <iostream>
#include <cctype>
#include <string>
#include <bitset>
using namespace std;

void printCharacterClassification(const int& i) // cctype에 들어있는 것
{
    cout << boolalpha;
    cout << "isalnum " << bool(std::isalnum(i)) << endl;    // 알파벳이냐 숫자냐 alnum
    cout << "isblank " << bool(std::isblank(i)) << endl;
    cout << "isdigit " << bool(std::isdigit(i)) << endl;
    cout << "islower " << bool(std::islower(i)) << endl;
    cout << "isupper " << bool(std::isupper(i)) << endl;
}

void printStates(const std::ios& stream)
{
    cout << boolalpha;
    cout << "good()=" << stream.good() << endl;
    cout << "eof()=" << stream.eof() << endl;
    cout << "fail()=" << stream.fail() << endl;
    cout << "bad()=" << stream.bad() << endl;
}

bool isAllDigit(const string& str)
{
    bool ok_flag = true;

    for (auto e : str)
        if (!std::isdigit(e))
        {
            ok_flag = false;
            break;
        }

    return ok_flag;
}

void classifyCharacters(const string& str)
{
    for (auto e : str)
    {
        cout << e << endl;
        std::cout << "isdigit " << std::isdigit(e) << endl;
        std::cout << "isblank " << std::isblank(e) << endl;
        std::cout << "isalpha " << std::isalpha(e) << endl;
    }
}

int main()
{
    while (true)
    {
        int i;
        //char i;
        cin >> i;
        // i는 int타입인데 만약 문자열이 들어온다면 문제가 생길텐데
        // 이런 문제를 표현해 줄 수 있는 것들이 있을 것이다. 바로
        // 아래 printstates함수를 보자
        printstates(cin);

        //cout << i << endl;
        // bit mask로 빠르게 사용하는 방법이 있다.
        //cout << boolalpha;
        //cout << std::bitset<8>(cin.rdstate()) << endl;
        //cout << std::bitset<8>(std::istream::goodbit) << endl;
        //cout << std::bitset<8>(std::istream::failbit) << endl;
        //cout << !bool((cin.rdstate() & std::istream::failbit) != 0) << endl;
        //cin.rdstate() == std::istream::goodbit;

        printcharacterclassification(i);

        cin.clear();
        cin.ignore(1024, '\n');
        cout << endl;
    }

    // 한글짜 한글짜 비교하는 방식으로 우선함. 다음 강의에는 regular expression(정규식)
    /*cout << boolalpha;
    classifyCharacters("1234");
    classifyCharacters("a 1234");*/



    // regular expression

    return 0;
}