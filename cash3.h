/*

    cash3.h

    Matt Porter
    COP3014
    Summer 2010
    Project 2 Solution

    This is an example solution to the problem here:
    http://ww2.cs.fsu.edu/~porter/cop3014/summer2010/projects/Project%202.htm    

*/

#ifndef CASH3_H
#define CASH3_H

#include <cstdlib>

//The Cash3 class declaration.

class Cash3
{

    public:

        int GetFirstNumber();   //Returns the first lottery number.
        int GetSecondNumber();  //Returns the second lottery number.
        int GetThirdNumber();   //Returns the third lottery number.

        void Draw();            //Randomly draws three lottery numbers from 0 to 9,
                                //storing each number in the corresponding variable below.

    private:

        size_t firstNumber_;    //The first lottery number.
        size_t secondNumber_;   //The second lottery number.
        size_t thirdNumber_;    //The third lottery number.

};

#endif
