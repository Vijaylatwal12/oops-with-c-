#include <iostream>
#include <ctime>
using namespace std;
 
int main( )
 {       
                 time_t ttime = time(0);
                 tm *local_time = localtime(&ttime);
                 int a;
                 cout<<"enter your choice"<<endl;
                 cin>>a;
       switch(a)   {
                    case 1: cout << "Year: "<<  1900 +local_time->tm_year << endl;
                    break;
                    case 2: cout << "Month: "<< 1 + local_time->tm_mon<< endl;
                    break;
                    case 3: cout << "Day: "<< local_time->tm_mday << endl;
                    break;
                    case 4 :cout << "Time: "<< 1 + local_time->tm_hour << ":";
                               cout << 1 + local_time->tm_min << ":";
                               cout << 1 + local_time->tm_sec << endl;
                     break;
                   default:cout<<"not applicable"<<endl;
                   break;
                   }                 
     return 0;
 }                      
