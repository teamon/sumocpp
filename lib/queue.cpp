#include "sumo.h"
#include "queue.h"

Queue::Queue()
{
  head = tail = NULL;
}

Queue::~Queue()
{
  clear();
}

void Queue::clear()
{
  while(head) pull();
}

void Queue::push(Move move)
{
  Item* curr = (Item*) malloc(sizeof(Item));
	if(head == NULL) head = curr;
	else tail->next = curr;
	curr->move = move;
	curr->next = NULL;
	tail = curr;
}

Move Queue::pull(int time)
{
  if(head) 
  {
    head->move.time -= time;
    Move move = head->move;
    if(move.time <= 0)
    {
      Item *tmp = head->next;
      free(head);
      head = tmp;
    }
    return move;
  }
}

Move Queue::pull()
{
  if(head) 
  {
    Move move = head->move;
    Item *tmp = head->next;
    free(head);
    head = tmp;
    return move;
  }
}