// #include <string>
// #include <fstream>
// #include <list>
// #include <sstream>

// #include"Table.h"

// #include"Row.h"


// void Table::loadTable(string path){
    
//     string line;
//     ifstream file;

//     file.open(path);

//     if(file.is_open()){
//         this->rows = {};
//         while(file){
//             getline(file,line);
//             this->rows.push_front(this->parseStringRow(line));
//         }
//     }

// }

// Row Table::parseStringRow(string row){
//     Row rowObject = Row();
//     string rawData;

//     stringstream line(row);

//     getline(line,rawData,' ');
//     rowObject.number = stoi(rawData);
//     getline(line,rawData,' ');
//     rowObject.lastname = rawData;
//     getline(line,rawData,' ');
//     rowObject.score = stoi(rawData);
//     getline(line,rawData,' ');
//     rowObject.e[0] = stoi(rawData);
//     getline(line,rawData,' ');
//     rowObject.e[1] = stoi(rawData);
//     getline(line,rawData,' ');
//     rowObject.e[2] = stoi(rawData);
//     getline(line,rawData,' ');
//     rowObject.e[3] = stoi(rawData);
//     getline(line,rawData,' ');
//     rowObject.z[0] = stoi(rawData);
//     getline(line,rawData,' ');
//     rowObject.z[1] = stoi(rawData);
//     getline(line,rawData,' ');
//     rowObject.z[2] = stoi(rawData);
//     getline(line,rawData,' ');
//     rowObject.comment = rawData;


//     return rowObject;
// }



