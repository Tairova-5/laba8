#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <sstream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

#include "Student_stuct.h"
#include "test.h"
using namespace std;
float test(int mod)
{
    float x;
    if (mod == 1) //��� �����
    {
        int z;
        while (true)  //������ �����������
        {
            if (cin >> z)
            {
                if (z < 0)
                    cout << "����������� ��������. ���������� �����.\n";
                else
                    break;
            }
            else
            {
                cout << "����������� ��������. ���������� �����.\n";
                cin.clear();
                while (getchar() != '\n');
            }
        }
        x = static_cast<float>(z);
    }
    else //���������� ��������� ��� �������� �����
    {
        while (true)
        {
            if (cin >> x)
            {
                if (x < 0 || x > 5)
                    cout << "����������� ��������. ���������� �����.\n";
                else
                    break;
            }
            else
            {
                cout << "����������� ��������. ���������� �����.\n";
                cin.clear();
                while (getchar() != '\n');
            }
        }
    }
    return x;
}