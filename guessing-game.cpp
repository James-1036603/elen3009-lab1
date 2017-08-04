/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   guessing-game.cpp
 * Author: drdoom
 *
 * Created on 28 July 2017, 3:48 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>

using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {

srand(time(NULL));
int ranNum = rand() % 100; //Generate a number between 0 and 99
int guessedNum; //Guessed number variable
int guessTries=0;
bool guessed = false; //Guessed state
while(!guessed){
	cout<<"Enter a number: ";
	cin>>guessedNum;
	if(guessedNum==ranNum){
		cout<<"You win."<<endl;
		guessed=true;
	} else{
		cout<<"You lose."<<endl;
	}
	if(guessTries>=5){ //More than 5 tries
		if(guessedNum>ranNum){
			cout<<"Guess Lower"<<endl;
		} else if(guessedNum<ranNum){
			cout<<"Guess Higher"<<endl;
		}

	}
	guessTries++;
}
return (EXIT_SUCCESS);
}

