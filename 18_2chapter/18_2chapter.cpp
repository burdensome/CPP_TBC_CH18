#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // flag setting
    //cout.setf(std::ios::showpos);   // + ��ȣ�� ����ϴ� showpos��. visual studio������ std::showpos�ȵǰ� std::ios::showpos
    /*cout.unsetf(std::ios::dec);
    cout.setf(std::ios::hex);   // 16���� ��ȯ�� ���ؼ� ���� 10������ �����ϴ°� �ʿ�*/ 
    //cout.setf(std::ios::hex, std::ios::basefield);  // 10������ unset���� �ʰ� �ѹ��� 16���� ��ȯ, basefield�� set�ϰڴ�.
    //cout.setf(std::ios::uppercase); // �빮�� ǥ���� �ϰ������ �̿� ���� ����
    //cout << std::hex;   // ���� �͵鸶���� ������ �ϸ� �̷���
   /* cout << std::hex << std::ios::uppercase;
    cout << 108 << endl;
    cout << 109 << endl;

    cout << std::dec;
    cout << 110 << endl;*/

    //cout.unsetf(std::ios::showpos); // ���� ����
    //cout << 109 << endl;

    //// ---------------------
    //cout << std::boolalpha; // true, false�� ����� ǥ���ϰ� ����. �̰� �Ⱦ��� 1, 0���� ǥ���
    //cout << true << " " << false << endl;

    ////cout << std::defaultfloat;
    ////cout << std::fixed; // �Ҽ��� �ڸ����� �����Ǿ �Ҽ����� ������ ǥ���ǰ� �����
    ////cout << std::scientific << std::uppercase;    // 10���� ǥ��
    //cout << std::showpoint; // setprecision(3)�� ���� .�� ǥ������
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
    cout << std::setw(10) << std::internal << -12345 << endl;   // ��ȣ�� ��ĭ���̿� ������ ����ٴ� ��

    return 0;
}