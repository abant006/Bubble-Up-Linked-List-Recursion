#include "IntList.h"

bool IntList::bubbleUp() {
   IntNode *temp = nullptr;
   return bubbleUp(temp);
}

bool IntList::bubbleUp(IntNode *curr) {
   // another temp Int Node pointer that will point to the lowest seen value so far
   IntNode *lowestVal = nullptr;
   // base case: when curr->next == nullptr, meaning it has reached the end of the list (or there's only one node in list)
   if (curr->next == nullptr) {
      lowestVal = curr;
   }

   
}
