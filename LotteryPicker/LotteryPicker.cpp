
#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

int* lotteryNumbers() {
    static int myRiches[5];

    for (int i = 0; i < 5; i++) {
        myRiches[i] = rand() % 69 + 1;
    }
    sort(myRiches, myRiches + 5);
    for (int i = 0; i < 4; i++) {
        if (myRiches[i] == myRiches[i + 1]) {
            lotteryNumbers();
        }
    }
    return myRiches;
}

int powerBall() {
    return rand() % 26 + 1;
}

int main()
{
    srand(time(NULL));
    int* showMe;
    int howMany;
    cout << "How many numbers? ";
    cin >> howMany;
    for (int i = 0; i < howMany; i++) 
    {
        showMe = lotteryNumbers();
        for (int i = 0; i < 5; i++) 
        {
            cout << showMe[i] << " ";
        }
        cout << " Power Ball " << powerBall() << endl;
    }
}
