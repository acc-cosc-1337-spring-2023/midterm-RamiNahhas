#include <iostream>
#include "question1.h"

using std::cout; using std::cin; using std:: string;

using std:: to_string;

bool test_config()
{
    return true;
}



  string get_fib_sequence(int num) 
  {
    string sequence = "0 1 ";

    int num1 = 0, num2 = 1, next_term = 1;

    while (next_term <= num)
     {
        sequence += to_string(next_term) + " ";
        num1 = num2;
        num2 = next_term;
        next_term = num1 + num2;
    }

    return sequence;
}
