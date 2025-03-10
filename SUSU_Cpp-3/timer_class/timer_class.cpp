#include <iostream> 
#include <ctime> 
using namespace std;

class Timer 
{
private: 
	clock_t startTime; 
	clock_t endTime; 
	bool isRunning;
public: Timer() : startTime(0), endTime(0), isRunning(false) {}
	  void start() 
	  { 
		  if (!isRunning) 
		  { 
			  startTime = clock(); isRunning = true; 
		  }
	  }
	  void stop() 
	  { 
		  if (isRunning) 
		  { 
			  endTime = clock(); 
			  isRunning = false; 
		  } 
	  }
	  void reset() 
	  { 
		  startTime = 0; 
		  endTime = 0; 
		  isRunning = false; 
	  }
	  void displayElapsedTime() 
	  {
		  double elapsed = (isRunning ? clock() : endTime) - startTime; 
		  cout << "Elapsed Time: " << (elapsed / CLOCKS_PER_SEC) << " seconds" << endl;
	  }
};
int main() 
{
	Timer t;
	t.start();

	// Simulate some operation
	for (int i = 0; i < 100000000; i++); 
	t.stop();
	t.displayElapsedTime();
	t.reset(); t.displayElapsedTime();

	return 0;
}