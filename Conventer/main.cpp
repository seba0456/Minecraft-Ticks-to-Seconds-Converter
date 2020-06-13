#include <iostream>
#include <conio.h>
#include <windows.h>
#include <locale.h>
using namespace std;

int main()
{
    SetConsoleTitleA( "Tick converter by seba0456" );
    double s;
    double t;
    string instrukcja;
    string petla;
    cout << "Hello world! V.2.3.2 ()seba0456" << endl;
    cout << "Welcome in Tick conventer" << endl;
    cout << "Before we can start:" << endl;
    cout << "1.Please if you want use decimal fractions write them like that '0.5' and not that '0,5' " << endl;
    cout << "Let's start!'" << endl;
    cout << "Do you want run program in loop mode? 'yes' or 'no'" << endl;
    cin >> petla;
    if ( petla == "yes" )
    {
        while ( true )
        {
            cout << "What you want to count? 'ticks' or 'seconds'" << endl;
    cin >> instrukcja;

    if ( instrukcja == "ticks" )
    {
        cout << "Please, enter the value of seconds" << endl;
    cin >> s;
    t = ( s * 20 );
    cout << "-----------------------------" << endl;
    cout << s << " seconds is " << t << " ticks." << endl;
	cout << "Press enter to continue" << endl;
    cin.sync();
    cin.get();

    }
    else if ( instrukcja== "seconds" )
   {
            cout << "Please, enter the value of ticks" << endl;
    cin >> t;
    s = ( t / 20 );
    cout << "-----------------------------" << endl;
    cout << t << " ticks is " << s << " seconds." << endl;
	cout << "Press enter to continue" << endl;
    cin.sync();
    cin.get();

   }
   
        }
    }
     else
     {
         cout << "What you want to count? 'ticks' or 'seconds'" << endl;
    cin >> instrukcja;

    if ( instrukcja == "ticks" )
    {
        cout << "Please, enter the value of seconds" << endl;
    cin >> s;
    t = ( s * 20 );
     cout << "-----------------------------" << endl;
    cout << s << " seconds is " << t << " ticks." << endl;
    cout << "Thanks for using program." << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();
    return 0;
    }
    else if ( instrukcja== "seconds" )
   {
    cout << "Please, enter the value of ticks" << endl;
    cin >> t;
    s = ( t / 20 );
     cout << "-----------------------------" << endl;
     cout << t << " ticks is " << s << " seconds." << endl;
    cout << "Thanks for using program." << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();
    return 0;
   }

     }
}

