/*
Copyright (c) 2010 Nathan M. Wiegand

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/


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
