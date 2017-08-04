#include <iostream>
#include "StopWatch.h"

using namespace std;

int main(void){
	Stopwatch myStopwatch;
	myStopwatch.start();
	myStopwatch.start();
	cout<<myStopwatch.getTotalProcessTime()<<endl;
	return 0;
}
