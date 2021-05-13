// 입력받은 문자열을 우리가 원하는 형식에 맞는지 안맞는지 검증하는 정규식(regular expression)에 대해서 배움
#include <iostream>
#include <regex>    // C++ 11 이상부터 사용 가능. regex = regular expression
using namespace std;

int main()
{
    //regex re("\\d+");
    //regex re("[ab]");
    //regex re("[[:digit:]]{3}"); // [:digit:] = \d 와 같음 이걸 싸고있는 []는 바깥쪽 대괄호 안에있는 문자들은 허용한다는 의미, {3} 은 정확히 3개를 입력해야 한다는 의미
    //regex re("[A-Z]+");
    //regex re("[A-Z]{1,5}");
    regex re("([0-9]{1})([-]?)([0-9]{1,4})");   // ()는 구분자, ?는 있거나 없거나

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