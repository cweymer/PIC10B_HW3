//
//  main.cpp
//  reverse_lines
//
//  Created by Charlotte Weymer on 2/3/23.
//
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ifstream input;
    ofstream output;
    string word;
    vector<string> line;
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
    while (input >> word)//reading file phase
        {
            line.push_back(word);//stores words as a string into a vector
        }
        input.close(); //close input file
    reverse(line.begin(), line.end()); //reverses order of words
    output.open(filename_o); //open output file
    for (int i = 0; i < line.size(); i++)
    {
        output << line[i] << " "; //print words with spaces between them
    }
    cout << endl;
    output.close();
    return 0;
}
