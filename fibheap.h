#ifndef __FIBHEAP__
#define __FIBHEAP__

#include <stdlib.h>
#include <stdio.h>

/*TODO
  comment all of this
  post implementation to github
*/

typedef void* Object;
typedef struct FibHeap FibHeap;
typedef struct FibHeapElement FibHeapElement;
typedef unsigned char bool;


FibHeapElement *FibHeapGetRoot(FibHeap *heap);
unsigned int FibHeapGetSize(FibHeap *heap);
FibHeap *FibHeapMakeHeap();
FibHeapElement *FibHeapMinimum();
FibHeapElement *FibHeapInsert(FibHeap *heap, double key, Object value);
FibHeapElement *FibHeapExtractMin(FibHeap *heap);

void FibHeapConsolidate(FibHeap *heap);
void FibHeapLink(FibHeap *heap,FibHeapElement *y, FibHeapElement *x);
void FibHeapDecreaseKey(FibHeap* heap, FibHeapElement *element, double key);

Object FibHeapElementGetValue(FibHeapElement *); 
double FibHeapElementGetKey(FibHeapElement *); 

#endif
