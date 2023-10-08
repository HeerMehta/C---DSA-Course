#include <iostream>

using namespace std;


void solvePattern20Inner(int i, int j, int n){
    if(j>n){
        return;
    }

    if(j<=i-1){
        cout<<" ";
    }
    else{
        cout<<i;
    }
    solvePattern20Inner(i, ++j, n);
}

void solvePattern20(int i, int n){
    if(i>n){
        return;
    }

    solvePattern20Inner(i, 1, n);
    cout<<endl;

    solvePattern20(++i, n);
}

void solvePattern21Inner(int i, int j, int n){
    if(j>n){
        return;
    }

    if(j<=n-i){
        cout<<" ";
    }
    else{
        cout<<i;
    }

    solvePattern21Inner(i, ++j, n);
}

void solvePattern21(int i, int n){
    if(i>n){
        return;
    }

    solvePattern21Inner(i, 1, n);
    cout<<endl;

    solvePattern21(++i, n);
}


void solvePattern22Inner(int i, int j, int n){
    if(j>n){
        return;
    }

    if(j<=i-1){
        cout<<" ";
    }
    else{
        cout<<j;
    }

    solvePattern22Inner(i, ++j, n);
}

void solvePattern22(int i, int n){
    if(i>n){
        return;
    }

    solvePattern22Inner(i, 1, n);
    cout<<endl;

    solvePattern22(++i, n);
}

void solvePattern23Inner(int i, int j, int n, int &count){
    if(j>n){
        return;
    }

    if(j<=n-i){
        cout<<" ";
    }
    else{
        cout<<count;
        count++;
    }

    solvePattern23Inner(i, ++j, n, count);
}

void solvePattern23(int i, int n, int &count){
    if(i>n){
        return;
    }

    solvePattern23Inner(i, 1, n, count);
    cout<<endl;

    solvePattern23(++i, n, count);
}



int main()
{
    //Patern 20
    // 1111
    //  222
    //   33
    //    4

    //While Loop
    // int n;
    // cin>>n;

    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while (j<=n)
    //     {
    //         if(j<=i-1){
    //             cout<<" ";
    //         }
    //         else
    //         {
    //             cout<<i;
    //         }
    //         j++;
    //     }

    //     cout<<endl;
    //     i++;
        
    // }

    //Recursion
    // int n;
    // cin>>n;

    // solvePattern20(1, n);

    //Pattern 21
    //    1
    //   22
    //  333
    // 4444 --> n=4

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
    //             cout<<i;
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
    //             cout<<i;
    //         }
    //     }
    //     cout<<endl;
    // }

    //Recursion
    // int n;
    // cin>>n;

    // solvePattern21(1, n);

    //Pattern 22
    // 1234
    //  234
    //   34
    //    4  --> n=4

    //While Loop
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
    //             cout<<j;
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
    //             cout<<j;
    //         }
    //     }
    //     cout<<endl;
    // }

    //Recursion
    // int n;
    // cin>>n;

    // solvePattern22(1, n);

    //Pattern 23
    //     1
    //    23
    //   456
    //  78910 --> n=4

    //While Loop
    // int n;
    // cin>>n;

    // int i=1;
    // int count=1;

    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         if(j<=n-i){
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<count;
    //             count++;
    //         }

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
    //     for(int j=1; j<=n; j++){
    //         if(j<=n-i){
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<count;
    //             count++;
    //         }
    //     }
    //     cout<<endl;
    // }

    //Recursion
    // int n;
    // cin>>n;

    // int count=1;

    // solvePattern23(1, n, count);

    return 0;
}
