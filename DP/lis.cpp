#include<iostream>
#include<iterator>
#include<vector>

using namespace std;


int main()
{

    
    int arr[] = {10, 20, 9, 33, 21, 50, 41, 60 , 80};
    //int arr[] = {3, 10, 2, 1, 20};
    
    //int arr[] = {3, 2};
    //int arr[] = {50, 3, 10, 7, 40, 80};
    //int arr[] = {2, 4, 5, 10, 9, 20, 80, 90};
    //int arr[] = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
    long arrSize = 9;
    //long arr[] = {29471, 5242, 21175, 28931, 2889, 7275,19159, 21773,1325, 6901};
    //int arrSize = sizeof(arr)/sizeof(arr[0]);
     

    vector< vector<long> > lis;

    vector<long> seq = {arr[0]};
    lis.push_back(seq);

    vector<long> longestSubSeq;
    longestSubSeq = seq; 
    
    for (long i = 1; i<arrSize; ++i)
    {
        // max(lis[j] for j<i and arr[j] < arr[i]
        
        long maxLen = -1;
        vector<long> newSeq;


        for (long j = 0; j<i; ++j)
        {

            long lsize = lis[j].size();
            if ((lsize > maxLen) && (arr[j] < arr[i]))
            {

                maxLen = lis[j].size();
                newSeq = lis[j];
                newSeq.push_back(arr[i]);
            }

        }

        if (maxLen == -1) 
            newSeq.push_back(arr[i]);

        lis.push_back(newSeq);

    int newSeqSize = newSeq.size();
    int longestSubSeqSize = longestSubSeq.size();
    if (newSeqSize > longestSubSeqSize)
        longestSubSeq = newSeq;
    }
    
    /*for (long i = 0; i<lis.size(); ++i)
    {
        for (long j = 0; j<lis[i].size(); ++j)
        {
            cout << lis[i][j] << " ";
        }
        cout << endl;
    }*/


    long result = longestSubSeq.size();
    cout << result << endl;
}
