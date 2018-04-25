#include<sstream>
#include<iostream>
#include<fstream>
#include<cmath>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string>
#include<list>
#include<limits>
#include<fstream>

/**
@author Jamal Rasool
@version Created by Greg LaKomski on 3/19/18.
@date 4/3/18
@desc Program is designed to take in input and find the max value inside a
vector [My default list of includes for contest coding]
*/

using std::cout;
using std::endl;

int main() {

    // input the number of cases
    int cases;
    while(!(std::cin >> cases))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }

    std::cin.ignore(); // gets rid of /n

    if(cases > 0) {

        std::vector<int> data;
        // for the number of cases
        for (int k = 0; k < cases; k++) {

            std::string line;
            int num; // Numbers that will be placed within the array

            getline(std::cin, line);
            std::istringstream iss(line);
            while (iss >> num) {
                data.push_back(num);
            }
            // The number of students in the case
            int N = data[0];
            // the rest of data is N speeds of creatures in m per s

            // ------ Your code goes here -------
            // Code is designed to start from the second value then check and see
            // if the N (or max) is bigger than the next value, then essentially
            // return the value if that is the case. Finally after printing the
            // infomraiton it would clear the array for the second case.

            for (size_t i = 1; i < data.size(); i++)
                if(data[i]>N)
                    N = data[i];
            std::cout << "Case " << k+1 << ": " << N << "\n";
            data.clear();
        }
    }
    //return 0;  NOTE  no return 0
}