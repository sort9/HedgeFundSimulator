#include <iostream>
using namespace std;

extern int year;
extern int week;

int time_advance() {
    
    time = time + 1;

    if (time >= 52)
    {
        time = 1;
        year = year + 1;
    }

    return 0; 
}