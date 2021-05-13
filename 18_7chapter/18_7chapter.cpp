#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>  // exit()
#include <sstream>

using namespace std;

int main()
{
    const string filename = "my_file.txt";

    // make a file
    {
        ofstream ofs(filename);

        for (char i = 'a'; i <= 'z'; ++i)
            ofs << i;
        ofs << endl;
    }

    // read the file
    //{
    //    ifstream ifs(filename);

    //    ifs.seekg(5); //ifs.seekg(5, ios::beg); // 5byte 이동 후에 읽어들여라
    //    cout << (char)ifs.get() << endl;

    //    ifs.seekg(5, ios::cur); // 다시 5byte를 이동해서 읽어봐라
    //    cout << (char)ifs.get() << endl;

    //    //ifs.seekg(-5, ios::end);

    //    /*ifs.seekg(0, ios::end);
    //    cout << ifs.tellg() << endl;*/ // tellg는 현재 위치를 알려줌

    //    string str;
    //    getline(ifs, str);

    //    cout << str << endl;
    //}

    {
        //fstream iofs(filename, ios::in | ios::out);
        fstream iofs(filename);

        iofs.seekg(5);
        cout << (char)iofs.get() << endl; // read

        iofs.seekg(5);
        iofs.put('A');  // write
    }
    return 0;
}