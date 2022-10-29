
#include <iostream>
using namespace std;




int main()
{
    int seconds;


    
   

    cout << "Please enter any number of seconds to convert it into hours plus minutes and/or seconds: ";

   
    cin >> seconds;
    int minutes = seconds / 60;// Result will be 1. something
    int remSeconds = seconds % 60;

    int hour = minutes / 60;
    int remMin = minutes % 60;
   
    // seconds= 11126;



    cout << seconds << " seconds is "<<  hour <<" hour(s) " << remMin  << " minute(s) and " << remSeconds << " second(s)."
        << endl<<"Also "<< minutes<< " minutes is equivallient to the total hours."<<endl;
}

