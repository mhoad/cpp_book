/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 7 - Exercise 6
 markdhoad@gmail.com
 
 For research purposes and to better help students, the admissions office of your 
 local university wants to know how well female and male students perform in certain 
 courses. You receive a file that contains female and male student UAIs for certain 
 courses. Due to confidentiality, the letter code f is used for female students 
 and m for male students. Every file entry consists of a letter code followed by a UAI. 
 Each line has one entry. The number of entries in the file is unknown. 
 Write a program that computes and outputs the average UAI for both female and male students. 
 Format your results to two decimal places. Your program should use the following functions:
 
 a. Function openFiles: This function opens the input and output files, and sets the output
    of the floating-point numbers to two decimal places in a fixed decimal format with a
    decimal point and trailing zeros.
 b. Function initialize: This function initializes variables such as countFemale, 
    countMale, sumFemaleUAI, and sumMaleUAI.
 c. Function sumGrades: This function finds the sum of the female and male students’ UAIs.
 d. Function averageGrade: This function finds the average UAI for female and male students.
 e. Function printResults: This function outputs the relevant results.
 f. There can be no global variables. Use the appropriate parameters to pass
    information in and out of functions.
 *****************************************************************************/


#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void openFiles(ifstream& inData, ofstream& outData);
void initialise(int& countFemale, int& countMale, double& sumFemaleUAI, double& sumMaleUAI);
void sumGrades(ifstream& inData, int& countFemale, int& countMale, double& sumFemaleUAI, double& sumMaleUAI);
void averageGrade(int countMale, int countFemale, double sumFemaleUAI, double sumMaleUAI, double& avgMaleUAI, double& avgFemaleUAI);
void printResults(double avgMaleUAI, double avgFemaleUAI, ofstream& outData);

int main()
{
    // Declare all relevant variables
    ifstream inData;
    ofstream outData;
    int countFemale, countMale;
    double sumFemaleUAI, sumMaleUAI, avgMaleUAI, avgFemaleUAI;
    
    openFiles(inData, outData);
    initialise(countFemale, countMale, sumFemaleUAI, sumMaleUAI);
    sumGrades(inData, countFemale, countMale, sumFemaleUAI, sumMaleUAI);
    cout << "There are " << countMale << " males and " << countFemale << " females." << endl;
    averageGrade(countMale, countFemale, sumFemaleUAI, sumMaleUAI, avgMaleUAI, avgFemaleUAI);
    cout << fixed << showpoint << setprecision(2);
    cout << "The average male UAI is: " << avgMaleUAI << " and the average female UAI is: " << avgFemaleUAI << endl;
    printResults(avgMaleUAI, avgFemaleUAI, outData);
    return 0;
}

void printResults(double avgMaleUAI, double avgFemaleUAI, ofstream& outData) {
    outData << "Average male UAI: " << avgMaleUAI << endl;
    outData << "Average female UAI: " << avgFemaleUAI << endl;
}

void averageGrade(int countMale, int countFemale, double sumFemaleUAI, double sumMaleUAI, double& avgMaleUAI, double& avgFemaleUAI) {
    avgFemaleUAI = sumFemaleUAI / countFemale;
    avgMaleUAI = sumMaleUAI / countMale;
}

void sumGrades(ifstream& inData, int& countFemale, int& countMale, double& sumFemaleUAI, double& sumMaleUAI) {
    char gender;
    double uaiScore;
    while (!inData.eof()) {
        inData >> gender >> uaiScore;
        switch (gender) {
            case 'm':
                countMale += 1;
                sumMaleUAI += uaiScore;
                break;
            case 'f':
                countFemale += 1;
                sumFemaleUAI += uaiScore;
            default:
                break;
        }
    }
}

void initialise(int& countFemale, int& countMale, double& sumFemaleUAI, double& sumMaleUAI) {
    countFemale = 0;
    countMale = 0;
    sumFemaleUAI = 0.00;
    sumMaleUAI = 0.00;
}

void openFiles(ifstream& inData, ofstream& outData) {
    // Open both the input and output data files.
    // If there is an error with either, exit the program with the appropriate message.
    
    inData.open("/Users/mark/Code/cpp/Malik Book/Chapter 7/uaidata.txt");
    if (!inData){
        cout << "There was an error opening the input file" << endl;
        exit(1);
    }
    outData.open("/Users/mark/Code/cpp/Malik Book/Chapter 7/uaiout.txt");
    if (!outData) {
        cout << "There was an error writing to the output file" << endl;
        exit(1);
    } else {
        outData << fixed << showpoint << setprecision(2);
    }
}

