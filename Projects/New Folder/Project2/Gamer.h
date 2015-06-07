/* 
 * File:   Gamer.h
 * Author: JR
 *
 * Created on June 5, 2015, 11:37 PM
 */

#ifndef GAMER_H
#define	GAMER_H

#include <vector>
#include <string>
#include <string.h>

struct Gamer
{
    // Initializes variables
    Gamer(): score(0), chances(0), hints(0), cResult("") {}
    // Current Game Variables
    int                 score;   // User's score
    int                 chances;        // User's strikes
    int                 hints;          // User's number of hints used 
    std::string         cResult;  // Current Results
    // All Game Variables
    std::vector<int>    aScores; //User all score 
    std::vector<string> aWords;  //User all words
    std::vector<string> aResults; //User all results
};

#endif	/* Gamer_H */