#include<iostream>

using namespace std;

class minPriorityQueue{

    public:
        minPriorityQueue(int);
        void insert(int);
        void del();
        int min();
        void print();
    private:
        static const int MAXLEN = 1000;
        int arr[MAXLEN];
        int pos;
        int size;
};

minPriorityQueue::minPriorityQueue(int l){
    pos = 0; // start filling from index 1
    size = l;
}

void minPriorityQueue::insert(int elem){
    pos += 1;
    arr[pos] = elem;

    int slotFound = false;
    int par_ind, slot;
    slot = pos;

    while(!slotFound){
       par_ind = slot/2;
       if (arr[par_ind] >= arr[slot]){ // parcolate up
           int temp = arr[par_ind];
           arr[par_ind] = arr[slot];
           arr[slot] = temp;
           slot = par_ind;
       }
       else{
            slotFound = true;
       }

       if (slot == 1) slotFound = true;
    }
}


void swap(int *arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void minPriorityQueue::del(){
   int top = 1;  
   while(2*top+1 <= size){
        if (arr[2*top] < arr[2*top+1]){
            swap(arr, 2*top, top);
            top = 2*top;
        }
        else{
            swap(arr, 2*top+1, top);
            top = 2*top+1;
        }
   }
   arr[top] = 32567;
}

int minPriorityQueue::min(){
    return arr[1];
}

void minPriorityQueue::print(){
    cout << "THE HEAP" << endl;
    for (int i = 1; i<=size; ++i)
        cout << arr[i] << " ";

    cout << endl;
}


int main(){
    minPriorityQueue heap(4);;
    
    heap.insert(9);
    cout << "min: " << heap.min() << endl;
    heap.insert(8);
    cout << "min: " << heap.min() << endl;
    heap.insert(4);
    cout << "min: " << heap.min() << endl;
    heap.insert(6);
    cout << "min: " << heap.min() << endl;
    heap.print();

    heap.del();
    cout << "min: " << heap.min() << endl;
    heap.print();

    heap.del();
    cout << "min: " << heap.min() << endl;
    heap.print();


    return 0;
}
