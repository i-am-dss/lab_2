#include <iostream>

using namespace std;

struct time
{
    int hrs, mins, secs;
};

int main()
{
    time time1 = {11, 10, 59};
    cout << time1.hrs << "." << time1.mins << "." << time1.secs << endl;
    int x;
    cin>>x;
    return 0;
}
