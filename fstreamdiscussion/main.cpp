//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

//last in first out
//if you use the name of a file that doesn't exist then compiler makes a file
//void practice () {
//    std::ifstream fin; //reading from a file
//    std::ofstream fout; //writing to the file
//    std::string name;
//    std::string arr[3];
//    fout.open ("output.txt");
//    for (size_t i = 0; i < 3; i++)
//    {
//        std::getline(std::cin, name); //take input from console
//        fout << name << std::endl; //writing the input to the file
//    }
//    fout.close(); //must always close a file after opening it (finishes writing phase
//    fin.open("output.txt");
//    for (size_t i = 0; i < 3; i++)
//    {
//        std::getline(fin, name); //take the first line of file into the string, name
//        arr[i] = name; //stores in an array of strings
//    }
//    for (size_t i = 0; i < 3; i++)
//    {
//        std::cout << arr [i] << std::endl;
//    }
//    fin.close();
//}
//
//
//int main() {
//
//    return 0;
//}
