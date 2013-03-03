/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 9 - Exercise 7
 markdhoad@gmail.com
 
 Write a program that allows the user to enter the last names of five candidates
 in a local election and the number of votes received by each candidate. The 
 program should then output each candidate’s name, the number of votes
 received, and the percentage of the total votes received by the candidate. 
 Your program should also output the winner of the election.
 *****************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int findWinner(int votes[]);
void printResults(string candidates[], int votes[]);
double calculatePercentage(int votes[], int vote);

const int NUMBER_OF_CANDIDATES = 5;

int main()
{
    
    string candidates[NUMBER_OF_CANDIDATES];
    int votes[NUMBER_OF_CANDIDATES];
    
    cout << "Please input the 5 candidates followed by the votes they recieved i.e. Smith 5000: ";
    for (int i = 0; i < NUMBER_OF_CANDIDATES; i++) {
        cin >> candidates[i] >> votes[i];
    }
    printResults(candidates, votes);
    cout << "And the winner is: " << candidates[findWinner(votes)] << endl;
    return 0;
}

double calculatePercentage(int votes[], int vote){
    int sumOfVotes = 0;
    
    for (int i = 0; i < NUMBER_OF_CANDIDATES; i++) {
        sumOfVotes += votes[i];
    }
    
    double percentage = static_cast<double>(vote) / sumOfVotes;
    
    return percentage*100;
}


void printResults(string candidates[], int votes[]){
    cout << "Name:" << setw(15) << "Votes:" << setw(15) << "Percentage:" << endl;
    for (int i = 0; i < NUMBER_OF_CANDIDATES; i++) {
        cout << candidates[i] << setw(15) << votes[i] << setw(15);
        int percentage = calculatePercentage(votes, votes[i]);
        cout << percentage << "%" << endl;
        
    }
}

int findWinner(int votes[]){
    int winner = 0;
    for (int i = 0; i < NUMBER_OF_CANDIDATES; i++) {
        if (votes[i] > winner)
            winner = i;
    }
    return winner;
}