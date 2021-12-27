#include <iostream>
#include <iomanip>

using namespace std;

class Time
{
private:
  int seconds;
  int hh, mm, ss;
public:
  void getTime(void);
  void convertIntoSeconds(void);
  void displayTime(void);
};

void Time::getTime(void)
{
  cout << "Enter Hours:   ";          cin >> hh;
  cout << "Enter Minutes:  ";          cin >> mm;
  cout << "Enter Seconds: ";          cin >> ss;
}

void Time::convertIntoSeconds(void)
{
  seconds = hh * 3600 + mm * 60 + ss;
}

void Time::displayTime(void)
{
  cout << "Time in total seconds: " << seconds;
}

int main()
{
  Time T; 

  T.getTime();
  T.convertIntoSeconds();
  T.displayTime();

  return 0;
}

