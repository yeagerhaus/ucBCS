/*Cole Yeager*/ 
/*Program 11*/ 
/*Last edited 2-12-18*/ 

#include<iostream>
using namespace std;

int main()
{
     cout << endl;
     cout << endl;
     cout << "  \t0\t1\t2\t3\t4\t5\t6\t7\t8\t9" << endl;
     for(int r = 0; r < 10; r++)
     
     {
          cout << endl;
          cout << endl;
          cout << r << " \t";
          for(int c = 0; c < 10; c++)
          {
          cout << c * r << '\t';
          }
          cout << endl;
     }
     return 0;
}
