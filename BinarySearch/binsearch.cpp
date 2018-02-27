#include<iostream>
#include<vector>

using namespace std;

#define NOT_FOUND -1

int BinarySearch(vector<int> arr, int elem){
    int l, r, mid;
    l = 0;
    r = arr.size()-1;
    
    while(l<=r){
        mid = l + (r-l)/2;
        if (elem < arr[mid]) r = mid-1;
        else if (elem > arr[mid]) l = mid+1;
        else return mid;
    }
    return NOT_FOUND;
}

int FirstOccurance(vector<int> arr, int elem){
    /*
     * index of first occurance of element elem in sorted array arr
     */
    int l, r, mid, ind;
    l = 0;
    r = arr.size()-1;
    ind = -1;
    while(l<=r){
        mid = l + (r-l)/2;
        if (elem < arr[mid]){ 
            r = mid-1;
        }
        else if (elem > arr[mid]){
            l = mid+1; 
        }

        else{
            ind = mid;
            r = mid-1;
        }
    } 
    return ind;
}

int FirstGreater(vector<int> arr, int elem){
    /*
     * index of first element in array arr that is greater than element elem
     */
    int l, r, mid, ind;
    l = 0;
    r = arr.size()-1;
    ind = -1; 
    while(l<=r){
        mid = l + (r-l)/2;
        if (elem < arr[mid]){
            r = mid-1;
            ind = mid;
        }
        else l = mid + 1;
        
    }
    return ind;
}



int main(){

    vector<int> v1 = {-14, -10, 2, 108, 108, 243, 285, 285, 285, 401}; 
    for (int elem : v1)
        cout << elem << " ";
    cout << endl;
    
    vector<int> elems {-100, -14, 108, 285, 401, 1001};
    
    for (int elem : elems){
        int ind = BinarySearch(v1, elem);    
        int find = FirstOccurance(v1, elem);
        cout << elem << " found here:  " << ind << " first occurance: " << find  << endl;
    }

    cout << "first element greater than k: " << endl;
    vector<int> ks {-12, 5, 50, 150, 250, 300, 400, 500};
    for (int k : ks){
        cout << "k: " << k << " first largest number occurs at: " << FirstGreater(v1, k) << endl;
    }


    return 0;
}
