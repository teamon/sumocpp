#ifndef QUEUE_H_
#define QUEUE_H_

class Move
{
  public:
  int left, right;
};

class Queue
{
  public:
    struct Item
    {
      Move move;
      Item* next;
    } *head, *tail;
    
    Queue();
    ~Queue();
    void push(Move move);
    void clear();
    Move pull();
};

#endif


