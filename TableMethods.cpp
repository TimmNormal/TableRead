// // #include <string>
// // #include <fstream>
// // #include <list>
// // #include <sstream>

// // #include"Table.h"

// // #include"Row.h"


// bool Table::loadTable(string path ){
    
//     string line;
//     ifstream file;

//     file.open(path);

//     if(file.is_open()){
//         this->rows = {};
//         this->stringRows = {};
//         while(file){
//             getline(file,line);
//             this->rows.push_back(this->parseStringRow(line));
//             this->stringRows.push_back(line);
//         }
//         return true;
//     }
//     return false;

// }

// void Table::showRows(){
    
//     for(int i = 0;i < this->stringRows.size()-1;i++){
//         cout << this->getStringRow(i) << endl;
//     }

// }

// void Table::getFailStudents()
// {
//     int failCount = 0;
//     int allFailCount = 0;
//     Row row;
//     for (int i = 0; i < this->rows.size()-1;i++){
//         failCount = 0;
//         row = this->getRow(i);
//         for(int e = 0; e < 4; e++){
//             if(row.e[e] == 0){
//                 failCount++;
//             }
//         }
//         for(int e = 0; e < 3; e++){
//             if(row.z[e] == 0){
//                 failCount++;
//             }
//         }
//         if (failCount >= 3){
//             allFailCount++;
//             cout << getStringRow(i) << endl;
//         }
//     }
//     if (allFailCount == 0){
//         cout << "Должники отсуствуют" << endl;
//     }
// }

// Row Table::getRow(int index){
//     list<Row>::iterator it = this->rows.begin();
//     for(int i=0; i<index; i++){
//         ++it;
//     }
//     return *it;
// }
// string Table::getStringRow(int index){
//     list<string>::iterator it = this->stringRows.begin();
//     for(int i=0; i<index; i++){
//         ++it;
//     }
//     return *it;
// }

// int Table::toInt(string s){
//     int num;
//     stringstream st;

//     st << s;
//     st >> num;

//     return num;
// }

// Row Table::parseStringRow(string row){
//     Row rowObject = Row();
//     std::string rawData;

//     stringstream line(row);

//     getline(line,rawData,' ');
//     rowObject.number = this->toInt(rawData);
//     getline(line,rawData,' ');
//     rowObject.lastname = rawData;
//     getline(line,rawData,' ');
//     rowObject.score = this->toInt(rawData);
//     getline(line,rawData,' ');
//     rowObject.e[0] = this->toInt(rawData);
//     getline(line,rawData,' ');
//     rowObject.e[1] = this->toInt(rawData);
//     getline(line,rawData,' ');
//     rowObject.e[2] = this->toInt(rawData);
//     getline(line,rawData,' ');
//     rowObject.e[3] = this->toInt(rawData);
//     getline(line,rawData,' ');
//     rowObject.z[0] = this->toInt(rawData);
//     getline(line,rawData,' ');
//     rowObject.z[1] = this->toInt(rawData);
//     getline(line,rawData,' ');
//     rowObject.z[2] = this->toInt(rawData);
//     getline(line,rawData,' ');
//     rowObject.comment = rawData;


//     return rowObject;
// }



