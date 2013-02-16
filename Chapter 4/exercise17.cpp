/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 4 - Exercise 15
 markdhoad@gmail.com
 
 You have several pictures of different sizes that you would like to frame. 
 A local picture-framing store offers two types of frames—regular and fancy. 
 The frames are available in white and can be ordered in any color the customer desires. 
 Suppose that each frame is 1 inch wide. The cost of coloring the frame is $0.10 per inch. 
 The cost of a regular frame is $0.15 per inch, and the cost of a fancy frame is $0.25 per inch. 
 The cost of putting a cardboard paper behind the picture is $0.02 per square inch, and the cost 
 of putting glass on top of the picture is $0.07 per square inch. The customer can also choose to 
 put crowns on the corners, which costs $0.35 per crown. 
 
 Write a program that prompts the user to input the following information and then 
 output the cost of framing the picture:
 
 a. The length and width, in inches, of the picture
 b. The type of the frame
 c. Customer’s choice of color to color the frame
 d. If the user wants to put the crowns, then the number of crowns
 *****************************************************************************/


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
    int pictureLength, pictureWidth, pictureSquareInchSize, picturePerimiter, numberOfStars;
    char frameType;
    string frameColour;
    float totalPrice;
    
    //values below represent cost per inch
    const float FRAME_COLOURING_PRICE = 0.10;
    const float REGULAR_FRAME_PRICE = 0.15;
    const float FANCY_FRAME_PRICE = 0.25;
    
    //values below represent cost per square inch
    const float CARDBOARD_PRICE = 0.02;
    const float GLASS_PRICE = 0.07;
    
    const float STARS_PRICE = 0.35;
    
    cout << "Please enter the length & width of the picture: ";
    cin >> pictureLength >> pictureWidth;
    pictureSquareInchSize = pictureLength * pictureWidth;
    picturePerimiter = (pictureLength * 2) + (pictureWidth * 2);
    cout << "Please select your frame type (r for regular & f for fancy): ";
    cin >> frameType;
    
    // Calculate cost of the frame type
    switch (frameType) {
        case 'r':
        case 'R':
            totalPrice = picturePerimiter * REGULAR_FRAME_PRICE;
            break;
        case 'f':
        case 'F':
            totalPrice = picturePerimiter * FANCY_FRAME_PRICE;
            break;
        default:
            cout << "You entered an invalid fram type" << endl;
            return 1;
            break;
    }
    
    cout << "Please enter which colour frame you would like (Note: white is default): ";
    cin >> frameColour;
    
    // Only charge for colouring if they want something other than the default
    if (frameColour != "white" || frameColour != "") {
        totalPrice += FRAME_COLOURING_PRICE * picturePerimiter;
    }
    
    cout << "Please enter the total number of stars you wish to have on your frame: ";
    cin >> numberOfStars;
    
    if (numberOfStars > 0) {
        totalPrice += numberOfStars * STARS_PRICE;
    }
    
    //Calculate costs for glass and cardboard dependent on picture size
    totalPrice += (GLASS_PRICE * pictureSquareInchSize) + (CARDBOARD_PRICE * pictureSquareInchSize);
    
    cout << fixed << showpoint << setprecision(2);
    cout << "Your total bill for your frame comes to: $" << totalPrice << endl;
    
    return 0;
}