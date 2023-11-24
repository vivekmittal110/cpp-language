#include <iostream>
using namespace std;
int main()
{
    // Operators

    // Airthmetic Operator
    /*
    + -> addition
    - -> subtraction
    * -> multiplication
    / -> division
    % -> modulus (remainder)
    ++ -> incriment (x = x+1)
    -- -> decrement (x = x-1)
    */

    int num1 = 10, num2 = 2;
    cout << "Airthmetic Operator" << endl;
    cout << num1 + num2 << endl;
    cout << num1 - num2 << endl;
    cout << num1 * num2 << endl;
    cout << num1 / num2 << endl;
    cout << num1 % num2 << endl;

    // Relational Operators (returns true(1) or false(0))
    /*
    == -> is equals to
    != -> is not equals to
    > -> greater than
    < -> less than
    >= -> greater than or equals to
    <= -> less than or equals to
    */
    cout << "Relational Operator" << endl;
    cout << (num1 == num2) << endl;
    cout << (num1 != num2) << endl;
    cout << (num1 > num2) << endl;
    cout << (num1 < num2) << endl;
    cout << (num1 >= num2) << endl;
    cout << (num1 <= num2) << endl;

    // Logical Operator(human logic)(reutrn true(1) or false(0))
    /*
    && -> logical and
    || -> logical or
    ! -> logical not
    */

    cout << "Logical Operator" << endl;
    bool exp1 = true;
    bool exp2 = false;
    cout << (exp1 && exp2) << endl;
    cout << (exp1 || exp2) << endl;
    cout << (!exp1) << endl;

    // Assignment Operator (assigns value to variable)
    /*
    = ->
    (a operator= value)
    += -> a = a + 1
    -= -> a = a - 1
    *= -> a = a * 2
    /= -> a = a * 3
    */
    int temp1 = 10;
    cout << "assignment operator" << endl;
    cout << (temp1 += 2) << endl;
    cout << (temp1 -= 2) << endl;
    cout << (temp1 *= 2) << endl;
    cout << (temp1 /= 2) << endl;

    // Bitwise Operator
    /*
    ~ -> Bitwise Compliment ~(1010) = 0101 (change bit 1 into 0 and vice versa)
    << -> left shift a << b = a * b powered by 2 (0010 -> 0100)
    >> -> right shift a >> b = a/ b powered by 2 (0100 -> 0010)
    | -> Bitwise or
    & -> Bitwise and
    ^ -> Bitwise exclusive or (on same bits answer will be 0 like 0^0 = 0)
    */
    int temp2 = 5; // 0101
    int temp3 = 8; // 1000
    cout << "Bitwise Operator" << endl;
    cout << (~temp2) << endl;
    cout << (temp2 << 1) << endl;
    cout << (temp2 >> 1) << endl;

    cout << (temp2 & temp3) << endl;
    cout << (temp2 | temp3) << endl;
    cout << (temp2 ^ temp3) << endl;

    // Misclinious Operator
    /*
    sizeof Operator(to get to know the size of data type)

    condition? exp1 : exp2 -> ternury Operator (if condition is true exp1 is executed otherwise exp2 is executed)

    comma Operator (to saparate)

    . -> dot operator is used in classes
    -> -> arrow operator is used in pointers
    & -> address operator
    * -> pointer operator

    casting operator int(float a), float(int b)...
    */

    int a = 10;
    cout << sizeof(a) << endl;

    4 == 5 ? cout << "they are same" : cout << "they are different";
    cout << endl;

    int y = (4, 6, 7); // the value of y will be 7
    cout << y << endl;

    cout << &(a) << endl;

    float n = 5.5;
    cout << int(n) << endl;

    // Unary Operator ( used on single operand )
    /*
    + -> unary plus
    - -> unary minus
    ++ -> incriment
    -- -> decrement
    ! -> logical compliment operator
    */

    // post increment
    int i = 3;
    cout << "Post increment " << i++ <<endl;// fitstly print the value then increment 
    cout << "Pre increment " << ++i <<endl;// firstly increment the value then print
    // same for decrement

    //Operator associativity
    //right to left for -> unary operators, condition operator, assignment operator

    return 0;
}