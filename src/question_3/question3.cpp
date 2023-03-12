#include "question3.h"

using std::cin; using std::cout;

bool test_config()
{
    return true;
} 


int find_gcd (int num1, int num2)
{
  
    while (num2 != 0)
     {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}
 
