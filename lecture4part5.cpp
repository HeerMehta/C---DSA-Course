#include <iostream>

using namespace std;


void solvePattern24InnerPattern1(int j, int end){
    if(j>end){
        return;
    }

    cout<<" ";

    solvePattern24InnerPattern1(++j, end);
}

void solvePattern24InnerPattern2(int k, int i){
    if(k>i){
        return;
    }

    cout<<k;

    solvePattern24InnerPattern2(++k, i);
}

void solvePattern24InnerPattern3(int l){
    if(l<1){
        return;
    }

    cout<<l;

    solvePattern24InnerPattern3(--l);
}



void solvePattern24(int i, int n){
    if(i>n){
        return;
    }

    solvePattern24InnerPattern1(1, n-i);
    solvePattern24InnerPattern2(1,i);
    solvePattern24InnerPattern3(i-1);
    cout<<endl;

    solvePattern24(++i, n);
}

void solvePattern25InnerPattern1(int j, int end){
    if(j>end){
        return;
    }

    cout<<j;

    solvePattern25InnerPattern1(++j, end);
}

void solvePattern25InnerPattern2(int k, int end){
    if(k>end){
        return;
    }

    cout<<"*";

    solvePattern25InnerPattern2(++k, end);
}

void solvePattern25InnerPattern3(int l){
    if(l<1){
        return;
    }

    cout<<l;

    solvePattern25InnerPattern3(--l);
}

void solvePattern25(int i, int n){
    if(i>n){
        return;
    }

    solvePattern25InnerPattern1(1, n-i+1);
    solvePattern25InnerPattern2(1, 2*(i-1));
    solvePattern25InnerPattern3(n-i+1);
    cout<<endl;

    solvePattern25(++i, n);
}

int main()
{
    //Pattern 24
    //    1   
    //   121
    //  12321
    // 1234321

    //While Loop
    // int n;
    // cin>>n;

    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n-i){
    //         cout<<" ";
    //         j++;
    //     }

    //     int k=1;
    //     while(k<=i){
    //         cout<<k;
    //         k++;
    //     }

    //     int l=i-1;
    //     while(l>=1){
    //         cout<<l;
    //         l--;
    //     }

    //     cout<<endl;
    //     i++;
    // }

    //For Loop
    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<" ";
    //     }

    //     for(int k=1; k<=i; k++){
    //         cout<<k;
    //     }

    //     for(int l=i-1; l>=1; l--){
    //         cout<<l;
    //     }

    //     cout<<endl;
    // }

    //Recursion
    // int n;
    // cin>>n;

    // solvePattern24(1, n);


    //Pattern 25
    // 1234554321
    // 1234**4321
    // 123****321
    // 12******21
    // 1********1

    //While Loop
    // int n;
    // cin>>n;

    // int i=1;
    
    // while(i<=n){
    //     int j=1;
    //     while(j<=(n-i+1)){
    //         cout<<j;
    //         j++;
    //     }

    //     int k=1;
    //     while(k<=2*(i-1)){
    //         cout<<"*";
    //         k++;
    //     }

    //     int l=n-i+1;

    //     while(l>=1){
    //         cout<<l;
    //         l--;
    //     }

    //     cout<<endl;
    //     i++;
    // }

    //For Loop
    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=(n-i); j++){
    //         cout<<j;
    //     }

    //     for(int k=1; k<=2*(i-1); k++){
    //         cout<<"*";
    //     }

    //     for(int l=n-i+1; l>=1; l--){
    //         cout<<l;
    //     }

    //     cout<<endl;
    // }

    //Recursion
    int n;
    cin>>n;

    solvePattern25(1, n);

    return 0;
}
