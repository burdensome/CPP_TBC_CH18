#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>  // exit()
#include <sstream>
using namespace std;

int main()
{
    // writing
    if (true)
    {
        ofstream ofs("my_first_file.dat", ios::app); // ios::app, ios::binary
        //ofs.open("my_First_file.dat");

        // ����������� ����ó��, ����Ǵ� ������ ó���ؾ� �Ѵ�. 
        if (!ofs)
        {
            cerr << "Couldn't open file" << endl;
            exit(1);
        }

        ofs << "Line 1" << endl;
        ofs << "Line 2" << endl;

        // binary�κ�
        /*const unsigned num_data = 10;
        ofs.write((char*)&num_data, sizeof(num_data));

        for (int i = 0; i < num_data; ++i)
            ofs.write((char*)&i, sizeof(i));*/

        /*stringstream ss;
        ss << "Line 1" << endl;
        ss << "Line 2" << endl;
        string str = ss.str();

        unsigned str_length = str.size();
        ofs.write((char*)&str_length, sizeof(str_length));
        ofs.write(str.c_str(), str_length);*/

        // ������ �Ʒ��Ͱ��� ���� �� ������, ���� �ڵ��� �̷��� if�� ����
        // ������ ����鼭 �ڵ����� �Ҹ��ڰ� �����Ǿ� ������ ������ ������
        // �Ʒ� close�� ���� �ʿ� ���ٴ� �ǹ�
        //ofs.close();    // not necessary
    }

    // reading
    if (true)
    {
        ifstream ifs("my_first_file.dat");
        //ifstream ifs("my_first_file.dat", ios::binary);

        if (!ifs)
        {
            cerr << "Cannot open file" << endl;
            exit(1);
        }

        while (ifs)
        {
            std::string str;
            getline(ifs, str);

            std::cout << str << endl;
        }

        // binary �����
      /*unsigned num_data = 0;

        cout << "test " << num_data << endl;
        ifs.read((char*)&num_data, sizeof(num_data));
        cout << "test " << num_data << endl;

        for (unsigned i = 0; i < num_data; ++i)
        {
            int num;
            ifs.read((char*)&num, sizeof(num));

            std::cout << num << endl;
        }*/
        
    }
    return 0;
}