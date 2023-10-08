#include <iostream>

using namespace std;

void solvePattern8InnerLoop(int j, int i){
    if(j > i){
        cout << endl;
        return;
    }
    cout << i-j+1 << " ";
    solvePattern8InnerLoop(++j, i);
}

void solvePattern8OuterLoop(int i, int n){
    if(i > n){
        return;
    }

    solvePattern8InnerLoop(1, i);
    solvePattern8OuterLoop(++i, n);
}




int main()
{
    //Pattern 7
    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7

    //For Loop
    // int n;
    // cin >> n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << i+j-1 << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;


    //Pattern 8
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1 ---> for n=4

    //For loop
    // int n;
    // cin >> n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << i-j+1 << " ";
    //     }
    //     cout << endl;
    // }

    //While Loop
    // int n;
    // cin >> n;

    // int i=1;

    // while(i <= n){
    //     int j=1;
    //     while(j <= i){
    //         cout << i-j+1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    //Recursion
    // int n;
    // cin >> n;
    // solvePattern8OuterLoop(1,n); 
}


