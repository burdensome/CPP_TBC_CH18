// �Է¹��� ���ڿ��� �츮�� ���ϴ� ���Ŀ� �´��� �ȸ´��� �����ϴ� ���Խ�(regular expression)�� ���ؼ� ���
#include <iostream>
#include <regex>    // C++ 11 �̻���� ��� ����. regex = regular expression
using namespace std;

int main()
{
    //regex re("\\d+");
    //regex re("[ab]");
    //regex re("[[:digit:]]{3}"); // [:digit:] = \d �� ���� �̰� �ΰ��ִ� []�� �ٱ��� ���ȣ �ȿ��ִ� ���ڵ��� ����Ѵٴ� �ǹ�, {3} �� ��Ȯ�� 3���� �Է��ؾ� �Ѵٴ� �ǹ�
    //regex re("[A-Z]+");
    //regex re("[A-Z]{1,5}");
    regex re("([0-9]{1})([-]?)([0-9]{1,4})");   // ()�� ������, ?�� �ְų� ���ų�

    string str;

    while (true)
    {
        getline(cin, str);

        if (std::regex_match(str, re))
            cout << "Match" << endl;
        else
            cout << "No match" << endl;
    
        // print matches
        {
            auto begin = std::sregex_iterator(str.begin(), str.end(), re);
            auto end = std::sregex_iterator();
            for (auto itr = begin; itr != end; ++itr)
            {
                std::smatch match = *itr;
                cout << match.str() << " ";
            }
            cout << endl;
        }
        cout << endl;
    }


    return 0;
}