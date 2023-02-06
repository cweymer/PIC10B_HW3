/*
PIC 10B Homework 3, reverse_lines.cpp
Author: Charlotte Weymer
UID: 005760636
Discussion Section: 1C
Date: 02/03/2023
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ifstream input;
    ofstream output;
    string line;
    vector<string> all_lines;
    string filename_i;
    string filename_o;
    cout << "Please enter the input data file name: ";
    getline(cin,filename_i); //use getline in case of white space
    if(input.fail()) {
            cout << "Unable to open input file. Try again." << endl;
            return 1;
        } //accounts for file open failure
    cout << "Please enter the output data file name: ";
    getline(cin, filename_o);
    if (output.fail()) {
        cout << "Unable to open output file. Try again." << endl;
        return 1;
    } //accounts for file open failure
    input.open(filename_i); //opens input file
    while (getline(input, line))//reading file phase
        {
            all_lines.push_back(line);//stores words as a string into a vector
        }
        input.close(); //close input file
    reverse(all_lines.begin(), all_lines.end()); //reverses order of words
    output.open(filename_o); //open output file
    for (int i = 0; i < line.size(); i++)
    {
        output << all_lines[i] << endl; //print words with spaces between them
    }
    output.close();
    return 0;
}
