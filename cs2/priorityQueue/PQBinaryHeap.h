#ifndef __PQBinaryHeap_H__
#define __PQBinaryHeap_H__

#include "Tuple.h"

class PQBinaryHeap {

public:
  PQBinaryHeap();
  ~PQBinaryHeap();

  int size() { return size_; }
  void insert(Tuple tuple);
  Tuple get_max() const;
  Tuple delete_max();

private:
  void resize();
  void heapify(int pos);
  
private:
  Tuple *heap_;
  int size_;
  int capacity_;
};

#include "PQBinaryHeap.template"

#endif
