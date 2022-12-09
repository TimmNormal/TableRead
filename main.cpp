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
    string comand;
    string path;
    Table table = Table();

    bool result = false;
    

    
    while (true){
        system("clear");
        cout << "Привествуем в дневнике нашего дивнего университета" << endl;
        cout << "Введите соотвествующую клавишу" << endl;
        cout << "1.Загрузить данные" << endl;
        cout << "2.Отобразить данные" << endl;
        cout << "3. Отобразить должников" << endl;
        cout << "4. ВЫЙТИ (Кеш полностью сбросится)" << endl;

        cin >> comand;
        cout << endl;

            if (comand == "1"){
                system("clear");
                cout << "Введите путь до файла (либо укажиту 'd' для значения по умолчанию)" << endl;
                
                while(!result){
                    
                    cin >> path;
                    cout << endl;

                    if(path == "d")
                        result = table.loadTable("table_s.txt");
                    else
                        result = table.loadTable(path);
                    if(!result)
                        cout << "!!!Укажите верный путь к файлу" << endl;
                    
                }
                result = false;
            }
            else if (comand == "2"){
                system("clear");
                table.showRows();
                cin >> comand;
            }
            else if (comand == "3"){
                system("clear");
                table.getFailStudents();
                cin >> comand;
            } else if (comand == "4"){
                return 0;
            }  
            
            else{
                cout << "Укажите верный параметр" << endl;
            }
               
        
        
    }

    return 0;
}
