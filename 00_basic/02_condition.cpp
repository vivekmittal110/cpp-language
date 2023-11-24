#include <iostream>
using namespace std;
int main()
{
    // Conditionals

    // if statement
    /*
    if(condition){
        //code executed
    }
    */

    int marks = 34; // you can take marks from user
    if (marks > 33)
    {
        cout << "Pass" << endl;
    }

    // if-else statement
    /*
    if(condition){
        code executed;
    }
    else{
        if if false then this code executed;
    }
    */

    if (marks > 33)
    {
        cout << "Pass" << endl;
    }
    else
    {
        cout << "fail" << endl;
    }

    // if-elseif statement
    /*
    if(condition - 1){
        //code
    }
    else if(condition - 2){
        //code
    }
    else{
        //code
    }
    */

    // nested if-else statement
    /*
    if(condition){
        if(condition){
            //code
        }
        else{
            //code
        }
    }
    else{
        //code
    }
    */

    // Ternary Operator (short version of if-else statement)
    // condition? exp1 : exp2
    cout << "Ternuary operator" << endl;
    int percent = 32;
    percent >= 33 ? cout << "Pass" : cout << "Fail";

    // switch case (when you need to compare 1 value with multiple values)
    /*
    switch (expression){
        case x:
            //code
            break;  //(break statement is used to terminate switch when case matches)
        case y:
            //code
            break;
        default:
            //code
    }
    */
    return 0;
}