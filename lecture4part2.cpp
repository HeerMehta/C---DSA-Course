#include <iostream>

using namespace std;


// void solvePattern9Inner(int i, int j, int n){
//     if(j>n){
//         return;
//     }

//     char ch = 'A' + i - 1;
//     cout<<ch;
//     solvePattern9Inner(i, ++j, n);
// }

// void solvePattern9Outer(int i, int n){
//     if(i>n){
//         return;
//     }
//     solvePattern9Inner(i, 1, n);
    
//     cout<<endl;

//     solvePattern9Outer(++i, n);

// }

void solvePattern10Inner(int j, int n){
    if(j>n){
        return;
    }

    char ch = 'A' + j - 1;
    cout<<ch;
    solvePattern10Inner(++j, n);
}

void solvePattern10(int i, int n){
    if(i>n){
        return;
    }

    solvePattern10Inner(1, n);
    cout<<endl;

    solvePattern10(++i, n);
}

void solvePattern11Inner(int i, int j, int n){
    if(j>n){
        return;
    }
    int steps = n*(i-1) + j;
    char ch = 'A' + steps - 1;

    cout<<ch;
    solvePattern11Inner(i, ++j, n);
}

void solvePattern11(int i, int n){
    if(i>n){
        return;
    }

    solvePattern11Inner(i, 1, n);
    cout<<endl;

    solvePattern11(++i, n);
}

void solvePattern12Inner(int i, int j, int n){
    if(j>n){
        return;
    }

    int steps = i+j-1;
    char ch = 'A' + steps -1;
    cout<<ch;

    solvePattern12Inner(i, ++j, n);
}

void solvePattern12(int i, int n){
    if(i>n){
        return;
    }

    solvePattern12Inner(i, 1, n);
    cout<<endl;

    solvePattern12(++i, n);
}

void solvePattern13Inner(int i, int j){
    if(j>i){
        return;
    }

    char ch = 'A' + i - 1;
    cout<<ch;

    solvePattern13Inner(i, ++j);
}

void solvePattern13(int i, int n){
    if(i>n){
        return;
    }

    solvePattern13Inner(i, 1);
    cout<<endl;

    solvePattern13(++i, n);
}

void solvePattern14Inner(int i, int j, int &count){
    if(j>i){
        return;
    }
    
    char ch = 'A'+ count - 1;
    cout<<ch;

    count++;

    solvePattern14Inner(i, ++j, count);
}

void solvePattern14(int i, int n, int &count){
    if(i>n){
        return;
    }


    solvePattern14Inner(i, 1, count);
    cout<<endl;

    solvePattern14(++i, n, count);
}

void solvePattern15Inner(int i, int j){
    if(j>i){
        return;
    }

    int steps = i + j - 1;
    char ch = 'A' + steps - 1;
    cout<<ch;

    solvePattern15Inner(i, ++j);
}

void solvePattern15(int i, int n){
    if(i>n){
        return;
    }

    solvePattern15Inner(i, 1);
    cout<<endl;

    solvePattern15(++i, n);
}

void solvePattern16Inner(int j, int n){
    if(j<0){
        return;
    }

    int steps = n-j;
    char ch = 'A' + steps - 1;
    cout<<ch;

    solvePattern16Inner(--j, n);
}

void solvePattern16(int i, int n){
    if(i>=n){
        return;
    }

    solvePattern16Inner(i, n);
    cout<<endl;

    solvePattern16(++i, n);
}




int main()
{
    //Pattern 9
    // A A A
    // B B B
    // C C C

    //while loop

    // int n;
    // cin >> n;

    // int i=1;

    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         char ch = 'A' + i - 1;
    //         cout<<ch;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //For loop
    // int n;
    // cin >> n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         char ch = 'A' + i - 1;
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }

    //Recursion
    // int n;
    // cin>>n;

    // solvePattern9Outer(1, n);

    // return 0;

    //Pattern 10
    // ABC
    // ABC
    // ABC

    //While loop
    // int n;
    // cin>>n;

    // int i=1;
    
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         char ch = 'A' + j - 1;
    //         cout<<ch;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //For loop
    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         char ch = 'A' + j - 1;
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }

    //Recursion
    // int n;
    // cin>>n;

    // solvePattern10(1, n);

    //Pattern 11
    // ABC
    // DEF
    // GHI

    //--Solving by approach 2 (approach 1) is trivial

    //While Loop
    // int n;
    // cin>>n;

    // int i=1;

    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         int steps = n*(i-1) + j;
    //         char ch = 'A' + steps - 1;
    //         cout<<ch;
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
    //         int steps = n*(i-1) + j;
    //         char ch = 'A' + steps -1;
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }

    //Recursion
    // int n;
    // cin>>n;

    // solvePattern11(1, n);

    //Pattern 12
    // ABC
    // BCD
    // CDE

    //While Loop

    // int n;
    // cin>>n;

    // int i=1;

    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         int steps = i+j-1;
    //         char ch = 'A' + steps - 1;
    //         cout<<ch;
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
    //         int steps = i + j - 1;
    //         char ch = 'A' + steps - 1;
    //         cout<<ch;
    //     }

    //     cout<<endl;
    // }

    //Recursion

    // int n;
    // cin>>n;

    // solvePattern12(1, n);

    //Pattern 13
    // A
    // BB
    // CCC

    //while Loop

    // int n;
    // cin>>n;

    // int i=1;

    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         char ch = 'A' + i - 1;
    //         cout<<ch;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //For Loop
    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         char ch = 'A' + i - 1;
    //         cout<<ch;
    //     }

    //     cout<<endl;
    // }

    //Recursion
    // int n;
    // cin>>n;

    // solvePattern13(1, n);

    //Pattern 14
    // A
    // BC
    // DEF
    // GHIJ

    //While Loop
    // int n;
    // cin>>n;

    // int i=1;
    // int count=1;

    // while(i<=n){
    //     int j=1;
    //     while (j<=i)
    //     {
    //         char ch = 'A' + count - 1;
    //         cout<<ch;
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //For Loop
    // int n;
    // cin>>n;

    // int count=1;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         char ch = 'A' + count - 1;
    //         cout<<ch;
    //         count++;
    //     }
    //     cout<<endl;
    // }

    //Recursion
    // int n;
    // cin>>n;

    // int count=1;
    // solvePattern14(1, n, count);

    //Pattern 15
    // A
    // BC
    // CDE 
    // DEFG 

    //While Loop

    // int n;
    // cin>>n;

    // int i=1;

    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         int steps = i + j - 1;
    //         char ch = 'A' + steps - 1;
    //         cout<<ch;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //For Loop
    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         int steps = i + j - 1;
    //         char ch = 'A' + steps - 1;
    //         cout<<ch;
    //     }

    //     cout<<endl;
    // }

    //Recursion
    // int n;
    // cin>>n;

    // solvePattern15(1, n);

    //Pattern 16
    // D 
    // CD 
    // BCD 
    // ABCD 
    
    //While Loop
    // int n;
    // cin>>n;

    // int i=0;

    // while(i<n){
    //     int j=i;
    //     while (j>=0)
    //     {
    //        int steps = n-j;
    //        char ch = 'A' + steps - 1;
    //        cout<<ch;
    //        j--; 
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //For Loop
    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=i; j>=0; j--){
    //         int steps = n - j;
    //         char ch = 'A' + steps - 1;
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }

    //Recursion
    // int n;
    // cin>>n;

    // solvePattern16(0, n);
}

