//
//  main.cpp
//  Random number generator
//
//  Created by David Perez on 10/20/23.
//

#include <iostream>
#include <ctime> 
#include <cstdlib>

using namespace std;

void door_diff (int &, int);
void character_p (int &, int);
void stat_dis (int stat[6]);
void stat_bouns (int &, int &, int &, int&, int &, int &, int &);

int main()
{
    int str, dex, con, intl, wis, Chars;
    int doornum1 = 15;
    int npc1 = 20;
    const int stats_c = 6;
    int stat [stats_c];
    
     stat_dis (stat);
    
    return 0;
}
void stat_dis (int stat[6])
{
    int total_points = 67;
    cout <<"You have " << total_points << " to use for your stats use them carefully." << endl;
    do
    {
        cout << "Enter how many points you would like to use for Strength" << endl;
        cin >> stat [0];
        total_points = total_points - stat[0];
        cout << "You have " << total_points << " left" << endl;
        
        cout << "Enter how many points you would like to use for Dex" << endl;
        cin >> stat [1];
        total_points = total_points - stat[1];
        cout << "You have " << total_points << " left" << endl;
        
        cout << "Enter how many points you would like to use for Con" << endl;
        cin >> stat [2];
        total_points = total_points - stat[2];
        cout << "You have " << total_points << " left" << endl;
        
        cout << "Enter how many points you would like to use for Intl " << endl;
        cin >> stat [3];
        total_points = total_points - stat[3];
        cout << "You have " << total_points << " left" << endl;
        
        cout << "Enter how many points you would like to use for Wis" << endl;
        cin >> stat [4];
        total_points = total_points - stat[4];
        cout << "You have " << total_points << " left" << endl;
        
        cout << "Enter how many points you would like to use for Chars" << endl;
        cin >> stat [5];
        total_points = total_points - stat[5];
        cout << "You have " << total_points << " left" << endl;
        
    } while (total_points > 0);
    cout << "Your stats are " << endl;
    cout << "Str " << stat [0] << endl;
    cout << "Dex " << stat [1] << endl;
    cout << "Con " << stat [2] << endl;
    cout << "Intl " << stat [3] << endl;
    cout << "Wis " << stat [4] << endl;
    cout << "Chars " << stat [5] << endl;
}
