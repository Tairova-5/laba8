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
#include "swap.h"
void sort(Student**& arr, int leng)  //����������
{
    printf("1- ���������� �� �����.\n");
    printf("2- ���������� �� ������ �������.\n");
    printf("3- ���������� �� ���� ��������.\n");
    printf("4- ���������� �� �������� ����� �� ��������� ������.\n");
    printf("5- ���������� �� ������� ���������.\n");
    int m;
    while (true)
    {
        m = static_cast<int> (test(1));
        if (m >= 1 && m <= 5)
            break;
        else
            cout << "����������, �������� ������������ �������.\n";
    }
    for (int i = 0; i < leng - 1; i++)
        for (int j = i + 1; j < leng; j++)
        {
            if (m == 1 && strcmp(arr[i]->name, arr[j]->name) > 0)
                swap(arr, i, j);
            if (m == 2 && arr[i]->number > arr[j]->number)
                swap(arr, i, j);
            if (m == 3 && arr[i]->year > arr[j]->year)
                swap(arr, i, j);
            if (m == 4 && arr[i]->srMark > arr[j]->srMark)
                swap(arr, i, j);
            if (m == 5 && arr[i]->scholarship > arr[j]->scholarship)
                swap(arr, i, j);
            cout << "���������� � ��������� �������������.\n";
        }
}