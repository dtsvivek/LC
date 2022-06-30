// queue::push/pop
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue

int main ()
{
  std::queue<int> myqueue;
  int myint;

  std::cout << "Please enter some integers (enter 0 to end):\n";

  
    myqueue.push (0);
    myqueue.push(1);
    myqueue.push(2);
  

  std::cout << "myqueue contains: ";
    int i = 4;
  while (!myqueue.empty())
  {
    //if(i<6){
       // std::cout<<"i in"<<i;
    //myqueue.push(i++);
    //}
    std::cout << ' ' << myqueue.back();
    myqueue.pop();
  }
  std::cout << '\n';

  return 0;
}