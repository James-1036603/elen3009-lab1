#include "StopWatch.h"
#include <ctime>
#include <iostream>
using namespace std;

// returns the amount of time in seconds that has passed since the process (i.e. your program) started executing 

Stopwatch::Stopwatch(){};

void Stopwatch::start(){
	if(!isRunning){
		isRunning = 1;
		startTime = static_cast<double>(theClock)/CLOCKS_PER_SEC;
	} else{
		cerr<<"The clock is already running!\n";
	}
		 
};

void Stopwatch::stop(){
	if(isRunning){
		isRunning = 0;
		endTime = static_cast<double>(theClock)/CLOCKS_PER_SEC;
	} else{
		cerr<<"Clock not running!\n";
	}
};

void Stopwatch::pause(){
	if(!isRunning){
		cerr<<"Clock is not running!\n";
	} else{
		isRunning = 0;
		curTime = static_cast<double>(theClock)/CLOCKS_PER_SEC;
		
	}
};

void Stopwatch::resume(){
	if(isRunning){
		cerr<<"Clock is running!\n";
	} else{
		isRunning = 1;
	}
};

double Stopwatch::getProcessTime_Pause(){
	if(isRunning){
		cerr<<"Clock is not paused!\n";
	} else{
		return curTime-startTime;
	}
};

double Stopwatch::getTotalProcessTime(){
	if(isRunning){
		cerr<<"Clock is not stopped!\n";
	} else{
		return endTime-startTime;
	}
};
