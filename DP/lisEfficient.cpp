#include<iostream>
#include<vector>

using namespace std;

int customizedBinarySearch(int arr[], int l, int r, int key)
{

  /*  A modified binary search 
   *  to extract index of largest element that is
   *  less than the key 
   *  
   *  arr = [1,2,3,3,3,5,6,7,8,9] 
   *  l = -1, r = 9, key = 4 
   *  returns 5
   *  */

   while (r-l > 1)
   {
     int m = l + (r-l)/2;

     if (arr[m] >= key) r = m;
     else l = m;

   }  

   return r;

}

int main()
{


  int n = 16;
  
  int arr[n] = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
  
  int lastElem[n];

  lastElem[0] = arr[0];
  int length = 1;
  

  for (int i = 1; i<n; ++i)
  {

    if (arr[i] < lastElem[0])
    {
      lastElem[0] = arr[i]; // replace existing smallest element with the new smallest
    }

    else if (arr[i] > lastElem[length-1])
    {
      lastElem[length] = arr[i]; // append largest element the the array
      length += 1;
    }

    else
    {
      int index =  customizedBinarySearch(lastElem, -1, length-1, arr[i]); // find appropriate position
      lastElem[index] = arr[i];
    }
  }

  cout << length << endl;

}





