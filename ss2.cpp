#include <iostream>
using namespace std;

// 2.1.1 ������� ���������
int x;


// 2.4.1 ����� ���������
const int DF = 123;
#define QW = 321


// 2.4.2 ��������� � ��������� ������
const float PI1 = 3.14f;
#define PI 3.1415926535897932384626433832795f


// 2.4.3 ���������� ��������� (char)
/*
����� ������                    NL(LF)      \n
������������� ���������         HT          \t
������������ ���������          VT          \v
������                          BS          \b
������ �������                  CR          \r
������� �������                 FF          \f
������                          BEL         \a
�������� �������� �����         \           \\
���� �������                    ?           \?
��������� �������               '           \'
������� �������                 "           \"
������� ������                  NUL         \0
������������ �����              ooo         \ooo
����������������� �����         hhh         \xhhh
 */


int main() {
    cin >> x;
    setlocale(LC_ALL, "Rus");
    int y = x + 10;
    cout << y << endl;
    // 2.3.1 �������� ����
// (1)������������� ����
    char a1;
    short int a2;   // short
    int a3;
    long int a4;    // long

    // (2) ��� �������� (�� 0 �� +..)
    unsigned char q1;
    unsigned short int q2;
    unsigned int q3;
    unsigned long int q4;

    // (3) �������� (�� -.. �� +..) (������������ ��� ������ ������� ��������� ����)
    signed char w1;
    signed short int w2;
    signed int w3;
    signed long int w4;

    // � ��������� ������
    float s1;
    double s2;
    long double s3;
}