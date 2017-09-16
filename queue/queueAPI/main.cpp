#include "queue.h"

int main()
{

    Queue q;
    q.enque(10.0);
    q.enque(20.0);
    q.enque(30.0);
    q.enque(40.0);

    while (!q.isEmpty())
    {
        cout << q.deque() << endl;
    }
}
