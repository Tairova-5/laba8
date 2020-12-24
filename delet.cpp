#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <sstream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

#include "Student_stuct.h"
#include "delet.h"
void deletSt(Student**& arr, int& leng) //удаление студента
{
    Student** temp = new Student * [leng - 1];
    int perebor = 0;
    int extra = 0;
    cout << "Имеется информация о " << leng << " студентах. Введите номер подлежащего удалению.\n";
    while (true)
    {
        extra = static_cast<int> (test(1));
        if (extra >= 1 && extra <= leng)
            break;
        else
            cout << "Пожалуйста, выберете существующий вариант.\n";
    }
    extra--;
    for (int i = 0; i < leng; i++)
    {
        if (i == extra)
        {
            delete[] arr[extra]->name;
            delete[] arr[extra];
        }
        else
        {
            temp[perebor] = arr[i];
            perebor++;
        }
    }
    cout << "Информация о студенте удалена.\n";
    leng--;
    delete[] arr;
    arr = temp;
}