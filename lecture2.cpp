#include <iostream>

using namespace std;

int main()
{
    // Check which number from a and b is greater
    //  int a = 2;
    //  int b = 3;
    //  if(a > b){
    //      cout << "a is greater";
    //  }
    //  else{
    //      cout << "b is greater or equal to a";
    //  }
    //  return 0;

    // Output question 1
    //  int a = 2;
    //  int b = a+1;

    // if((a=3) == b){
    //     cout << a;
    // }
    // else{
    //     cout << a+1;
    // }
    // ANSWER --> 3

    // Output Question 2
    //  int a = 24;

    // if(a>20){
    //     cout << "Love ";
    // }
    // else if(a==24){
    //     cout << "Lovely ";
    // }
    // else{
    //     cout << "Babbar";
    // }

    // cout << a;

    // ANSWER --> Love 24

    // Homework Question - Check if character entered by user is lowercase, uppercase or number
    //  char c;
    //  cout << "Enter an alphabet or a number";
    //  cin >> c;

    // if(c>=65 && c<=90){
    //     cout << "Uppercase Letter";
    // }
    // else if(c>=98 && c<=122){
    //     cout << "Lowercase Letter";
    // }
    // else if(c>=48 && c<=57){
    //     cout << "Number";
    // }
    // else{
    //     cout << "Not an alphanumeric charracter";
    // }

    // ###LOOPING

    // While Loop - Print all numbers till n

    // int i = 1;
    // int n;
    // cout << "Enter a number";
    // cin >> n;

    // while(i<=n){ // --> Jab tak i n ya use chhota hain tab tak ander ke code o execute karate jao
    //     cout << i << endl;
    //     i = i+1;
    // }

    // cout << "End of code";

    // Sum of n natural numbers

    // int i = 1;
    // int sum = 0;
    // int n;
    // cout << "Enter a number";
    // cin >> n;

    // while (i<=n){
    //     sum = sum + i;
    //     i = i+1;
    // }

    // cout << "The sum of " << n << " natural numbers is - " << sum;

    //Homework - Find sum of all even numbers till n

    // int i = 2;
    // int sum = 0;
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;

    // while(i <= n){
    //     sum = sum + i;
    //     i = i + 2;
    // }

    // cout << "The sum is " << sum;

    //Check if a number is prime or not

    int i = 2;
    int n;
    
    cout << "Enter a number";
    cin >> n;

    while(i < n){
        if(n%i == 0){
            cout << "Number is not prime";
            return 0;
        }
        i++;
    }

    cout << "Number is prime";

}
