#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    int count = 0;
    float sum = 0,standard;
    string textline;
    ifstream source("score.txt");
    while(getline(source, textline)){
        sum += atof(textline.c_str());
        standard += atof(textline.c_str())*atof(textline.c_str());
        count++;
    }

    cout << "Number of data = " << count <<"\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/count << "\n";
    cout << "Standard deviation = " << sqrt(standard/count-pow(sum/count,2));
    source.close();
    return 0;
}