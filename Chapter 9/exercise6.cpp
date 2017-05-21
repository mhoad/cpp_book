/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 9 - Exercise 6
 markdhoad@gmail.com
 
 The history teacher at your school needs help in grading a True/False test. 
 The students’ IDs and test answers are stored in a file. The first entry in the 
 file contains answers to the test in the form:
 TFFTFFTTTTFFTFTFTFTT
 Every other entry in the file is the student ID, followed by a blank, followed by 
 the student’s responses. For example, the entry:
 ABC54301 TFTFTFTT TFTFTFFTTFT
 indicates that the student ID is ABC54301 and the answer to question 1 is True, 
 the answer to question 2 is False, and so on. This student did not answer question 9. 
 The exam has 20 questions, and the class has more than 150 students. Each correct 
 answer is awarded two points, each wrong answer gets one point deducted, and no 
 answer gets zero points. Write a program that processes the test data. 
 The output should be the student’s ID, followed by the answers, followed by 
 the test score, followed by the test grade. Assume the following grade scale: 
 90%–100%, A; 80%–89.99%, B; 70%–79.99%, C; 60%–69.99%, D; and 0%–59.99%, F.
 *****************************************************************************/


#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int NUMBER_OF_QUESTIONS = 20;
const int NUMBER_OF_STUDENTS = 50;

void readFile(ifstream& inFile);
void markTest(char studentAnswers[][NUMBER_OF_QUESTIONS], string studentIDs[], char correctAnswers[]);
char assignGrade(int score);


int main()
{
    
    string studentIDs[NUMBER_OF_STUDENTS];
    char correctAnswers[NUMBER_OF_QUESTIONS+1];
    char studentAnswers[NUMBER_OF_STUDENTS][NUMBER_OF_QUESTIONS];
    ifstream inFile;
    
    readFile(inFile);
    
    // Read the correct answers first
    inFile.getline(correctAnswers, '/n');
    
    // Read each students ID and answers
    for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {
        inFile >> studentIDs[i]; // Grab the student IDs
        inFile.get(); // Discard the space between the student ID and the answers
        for (int j = 0; j < NUMBER_OF_QUESTIONS; j++)
            studentAnswers[i][j] = inFile.get(); // Grab the students answers
    }
    
    markTest(studentAnswers, studentIDs, correctAnswers);
    
    return 0;
}

void markTest(char studentAnswers[][NUMBER_OF_QUESTIONS], string studentIDs[], char correctAnswers[]) {
    for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {
        cout << "Student ID: " << studentIDs[i] << endl;
        int score = 0;
        cout << "Answers: ";
        for (int j = 0; j < NUMBER_OF_QUESTIONS; j++) {
            cout << studentAnswers[i][j];
            if (studentAnswers[i][j] == correctAnswers[j])
                score += 2; // Correct answer
            else if (studentAnswers[i][j] != correctAnswers[j] && studentAnswers[i][j] != ' ')
                score -= 1; // Incorrect answer but not a blank
        }
        if (score < 0)
            score = 0; // Don't allow for minus scores
    
        cout << endl;
        char grade = assignGrade(score);
        cout << "Grade: " << grade << endl << endl;
    }
}

char assignGrade(int score) {    
    double percentScore = static_cast<double>(score) / (NUMBER_OF_QUESTIONS*2);
    cout << "Score: " << percentScore*100 << "%" << endl;
    if (percentScore >= 0.9)
        return 'A';
    else if (percentScore >= 0.8)
        return 'B';
    else if (percentScore >= 0.7)
        return 'C';
    else if (percentScore >= 0.6)
        return 'D';
    else
        return 'F';
}

void readFile(ifstream& inFile) {
    inFile.open("/Users/Mark/Code/C++/cpp_book/Chapter 9/ch9ex6.txt");
    if (!inFile){
        cout << "There was an error opening the input file" << endl;
        exit(1);
    }
}
