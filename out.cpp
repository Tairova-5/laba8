#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <sstream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

#include "Student_stuct.h"
#include "out.h"
void out(Student** arr, int leng)  //����� �� �����
{
    for (int i = 0; i < leng; i++)
    {
        cout << "������� " << i + 1 << ":\n";
        cout << "���: " << arr[i]->name << "\n";
        cout << "����� �������: " << arr[i]->number << "\n";
        cout << "��� ��������: " << arr[i]->year << "\n";
        cout << "������� ���� �� ��������� ������: " << arr[i]->srMark << "\n";
        cout << "������ ���������: ";
        if (arr[i]->scholarship == 1)
            cout << "�� ��������\n\n";
        if (arr[i]->scholarship == 2)
            cout << "�������\n\n";
        if (arr[i]->scholarship == 3)
            cout << "+50%\n\n";
        if (arr[i]->scholarship == 4)
            cout << "+100%\n\n";
    }
}