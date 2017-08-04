#ifndef STOPWATCH_H
#define STOPWATCH_H
#include <ctime>
// returns the amount of time in seconds that has passed since the process (i.e. your program) started executing 
class Stopwatch{
	public:
		Stopwatch();//Stopwatch constructor
		void start();//Start the stopwatch
		void pause();//Pause the stopwatch
		void stop();//Stop the stopwatch
		void resume();//Resume the stopwatch
		double getProcessTime_Pause();//get the time until the pause mark
		double getTotalProcessTime();//How much time has passed
		
	private:
	double startTime, endTime;
	double curTime;
	bool isRunning;
	clock_t theClock = clock();
};

#endif
