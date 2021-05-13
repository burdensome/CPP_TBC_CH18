#include <iostream>
#include <cctype>
#include <string>
#include <bitset>
using namespace std;

void printCharacterClassification(const int& i) // cctype�� ����ִ� ��
{
    cout << boolalpha;
    cout << "isalnum " << bool(std::isalnum(i)) << endl;    // ���ĺ��̳� ���ڳ� alnum
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
        // i�� intŸ���ε� ���� ���ڿ��� ���´ٸ� ������ �����ٵ�
        // �̷� ������ ǥ���� �� �� �ִ� �͵��� ���� ���̴�. �ٷ�
        // �Ʒ� printstates�Լ��� ����
        printstates(cin);

        //cout << i << endl;
        // bit mask�� ������ ����ϴ� ����� �ִ�.
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

    // �ѱ�¥ �ѱ�¥ ���ϴ� ������� �켱��. ���� ���ǿ��� regular expression(���Խ�)
    /*cout << boolalpha;
    classifyCharacters("1234");
    classifyCharacters("a 1234");*/



    // regular expression

    return 0;
}