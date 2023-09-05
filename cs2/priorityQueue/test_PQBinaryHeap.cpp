#include "PQBinaryHeap.h"
#include <iostream>
using namespace std;

int main()
{
  PQBinaryHeap pq;
  Tuple t1(5, "Gary");
  Tuple t2(3, "George");
  Tuple t3(7, "Frank");
  Tuple t4(1, "Richard");
  Tuple t5(9, "James");
  pq.insert(t1);
  pq.insert(t2);
  pq.insert(t3);
  pq.insert(t4);
  pq.insert(t5);
  
  Tuple t;
  for (int i = 0; i < 5; i++) {
      t = pq.delete_max();
      cout << "Priority: " << t.priority() << " Name: " << t.name() << endl;
  }
  
  return 0;
}
