// 문자열 흐름의 버퍼역할을 하는 stream strea -> sstream을 알아보는 것
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    stringstream os;

    //os << "Hello, World!";  // << : insertion operator, >> : extraction operator    
    //os << "Hello, World!2" << endl;
    //os.str("Hello, World!\n");  // 앞에 있던걸 싹 지우고 os.str은 바꿔버리는 것

    //cout << os.str() << endl;

    //cout << os.str() << endl;

    //int i = 12345;
    //double d = 67.89;

    ////os << "1234567.89";
    //os << i << " " << d;

   // os << "12345 67.89";

    //os.str(string());
    /*os.str("");
    os.clear();

    os << "Hello";*/

    //cout << os.str() << endl;

    /*int i2;
    double d2;

    os >> i2 >> d2;

    cout << i2 << " | " << d2 << endl;*/

    /*string str1;
    string str2;

    os >> str1 >> str2;

    cout << str1 << " | " << str2 << endl;*/

    return 0;
}