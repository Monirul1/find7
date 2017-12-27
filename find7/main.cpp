#include <iostream>
using namespace std;

int count7 (int n);

int main ()
{
    int n;
    
    cout << "Enter some digits that has 7: ";
    cin >> n;
    
    int totalsev = count7(n);
    cout << "7 appeared " << totalsev << " times " << endl;
    
    return 0;
}

int count7 (int n)
{
    if (n == 0)
        return 0;
    if (n%10 == 7)
        return 1+count7(n/10);
    else
        return count7(n/10);
}

/* ----SAMPLE RUN----
 Enter some digits that has 7: 717
 7 appeared 2 times
 Program ended with exit code: 0
*/