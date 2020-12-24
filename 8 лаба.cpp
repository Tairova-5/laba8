#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <sstream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <student_stuct.h>
#include <delet.h>
#include <out.h>
#include <printfl.h>
#include <readfl.h>
#include <readst.h>
#include <readName.h>
#include <sort.h>
#include <swap.h>
#include <inputName.h>
#include <test.h>



using namespace std;

int main()
{
   
    bool w = true;
    int menu;
    int c1 = 0;

    Student** arr = nullptr;
    int leng = 0;
    int lengadd = 0;
    while (w == true)
    {
        cout << "----------МЕНЮ----------\n";
        cout << "1- добавление стуента.\n";
        cout << "2- удаление студента.\n";
        cout << "3- сортировка информации о студентах.\n";
        cout << "4- вывод информации о студентах.\n";
        cout << "5- запись данных в файл.\n";
        cout << "6- выход.\n";
        cout << "------------------------\n";

        while (true)
        {
            menu = static_cast<int> (test(1));
            if (menu <= 6 && menu >= 1)
                break;
            else
                cout << "Пожалуйста, выберете существующий вариант.\n";
        }
        switch (menu)
        {
        case 1: //добавление элемента
        {
            cout << "1- ввести данные с клавиатуры.\n";
            cout << "2- считать данные из файла.\n";
            while (true)
            {
                c1 = static_cast<int> (test(1));
                if (c1 == 1 || c1 == 2)
                    break;
                else
                    cout << "Пожалуйста, выберете существующий вариант.\n";
            }
            if (c1 == 1) //ручной ввод
                addSt(arr, leng);
            if (c1 == 2) //чтение из файла
            {
                FILE* file = fopen("C:\\Users\\79293\\Desktop\\project\\6 laba\\input.txt", "r");
                if (file == NULL)
                    cout << "Файла не существует.\n";
                else
                {
                    Student** readarr = nullptr;
                    readFl=(file, readarr, lengadd);
                    fclose(file);
                    Student** tmp = new Student * [leng + lengadd];
                    int p = 0;
                    for (int i = 0; i < leng; i++)
                    {
                        tmp[i] = arr[i];
                    }
                    for (int i = leng; i < leng + lengadd + 1; i++)
                    {
                        tmp[i] = readarr[p];
                        p++;
                    }
                    delete[] arr;

                    arr = new Student * [leng + lengadd];
                    for (int i = 0; i <= leng + lengadd; i++)
                    {
                        arr[i] = tmp[i];
                    }
                    leng = leng + lengadd;

                    delete[] readarr;
                    delete[] tmp;
                    cout << "Данные считаны.\n";
                }
            }
            break;
        }
        case 2: //удаление
        {
            if (leng != 0)
                deletSt(arr, leng);
            else
                cout << "Информация о студентах ещё не была добавлена.\n";

            break;
        }
        case 3: //сортирвка
        {
            if (leng != 0)
            {
                if (leng == 1)
                    cout << "Недостаточно данных о студентах для сортировки.\n";
                else

                    sort(arr, leng);
            }
            else
                cout << "Информация о студентах ещё не была добавлена.\n";

            break;
        }
        case 4: //вывод
        {
            if (leng != 0)
                out(arr, leng);
            else
                cout << "Информация о студентах ещё не была добавлена.\n";

            break;
        }
        case 5: //запись в файд
        {
            if (leng != 0)
            {
                FILE* file1 = fopen("C:\\Users\\79293\\Desktop\\project\\6 laba\\finish.txt", "w");
                printFl(file1, arr, leng);
                fclose(file1);
                cout << "Данные записаны в файл.\n";
            }
            else
                cout << "Информация о студентах ещё не была добавлена.\n";

            break;
        }
        case 6: //выход
        {
            w = false;
            break;
        }
        }
    }
    for (int i = 0; i < leng; i++)
    {
        delete[] arr[i]->name;
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
