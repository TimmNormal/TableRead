/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

#include"Table.h"

using namespace std;

int main()
{
    int comand;
    string path;
    Table table = Table();
    

    cout << "Привествуем в дневнике нашего дивнего университета" << endl;
    cout << "Введите соотвествующую клавишу" << endl;
    while (true){
        cout << "1.Загрузить данные" << endl;
        cout << "2.Отобразить данные" << endl;
        cout << "3. Отобразить должников" << endl;
        cout << "4. ВЫЙТИ (Кеш полностью сбросится)" << endl;

        cin >> comand;
        cout << endl;

        switch (comand){
            case 1:
                cout << "Введите путь до файла (либо укажиту 'd' для значения по умолчанию)" << endl;
                cin >> path;
                cout << endl;
                if(path == "d")
                    table.loadTable("table.txt");
                else
                    table.loadTable(path);
                break;
            case 2:
                table.showRows();
                break;
            case 3:
                table.getFailStudents();
                break;
            case 4:
                return 0;
                break;
            default:
                cout << "Укажите верный параметр" << endl;
                break;
        }
        
    }

    return 0;
}
