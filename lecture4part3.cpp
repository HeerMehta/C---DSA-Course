#include <iostream>

using namespace std;

void solvePattern17Inner(int i, int j, int n){
    if(j>n){
        return;
    }

    if(j<=n-i){
        cout<<" ";
    }
    else{
        cout<<"*";
    }

    solvePattern17Inner(i, ++j, n);
}

void solvePattern17(int i, int n){
    if(i>n){
        return;
    }

    solvePattern17Inner(i, 1, n);
    cout<<endl;

    solvePattern17(++i, n);
}

void solvePattern18Inner(int i, int j){
    if(j>i){
        return;
    }

    cout<<"*";

    solvePattern18Inner(i, ++j);
}

void solvePattern18(int i){
    if(i<1){
        return;
    }

    solvePattern18Inner(i, 1);
    cout<<endl;

    solvePattern18(--i);
}

void solvePattern19Inner(int i, int j, int n){
    if(j>n){
        return;
    }

    if(j<=i-1){
        cout<<" ";
    }
    else{
        cout<<"*";
    }

    solvePattern19Inner(i, ++j, n);
}

void solvePattern19(int i, int n){
    if(i>n){
        return;
    }

    solvePattern19Inner(i, 1, n);
    cout<<endl;

    solvePattern19(++i, n);
}

int main()
{
    //Pattern 17
    //    *
    //   **
    //  ***
    // **** ---> for n=4

    //While Loop
    // int n;
    // cin>>n;
    // int i=1;

    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         if(j<=n-i){
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //For Loop
    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         if(j<=n-i){
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    //Recursion
    // int n;
    // cin>>n;

    // solvePattern17(1, n);

    //Pattern 18
    // ****
    // ***
    // **
    // *       --> n=4

    //While Loop
    // int n;
    // cin>>n;

    // int i=1;

    // while(i<=n){
    //     int j=1;
    //     while(j<=n-i+1){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //For Loop
    // int n;
    // cin>>n;

    // for(int i=n; i>=1; i--){
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }

    //Recursion
    // int n;
    // cin>>n;

    // solvePattern18(n);

    //Pattern 19
    // ****
    //  ***
    //   **
    //    * ---> n=4

    // int n;
    // cin>>n;

    // int i=1;

    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         if(j<=i-1){
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //For Loop
    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         if(j<=i-1){
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }

    //     cout<<endl;
    // }

    //Recursion
    // int n;
    // cin>>n;

    // solvePattern19(1, n);

    return 0;
}
