#include <iostream>

using namespace std;

void solveQuestion1(int i, int n){
    if(i>n){
        return;
    }

    cout << i << endl;
    solveQuestion1(++i, n);
}

int main()
{
    /* code */
    //Print 1 to n

    //For Loop
    // int n;
    // cin >> n;

    // for(int i=1; i<=n; i++){
    //     cout << i << endl;
    // }

    //While Loop
    // int n;
    // cin >> n;

    // int i=1;

    // while(i<=n){
    //     cout << i << endl;
    //     i++;
    // }

    //Recursion
    int n;
    cin >> n;

    solveQuestion1(1, n);

    return 0;
}
