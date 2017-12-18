#include<iostream>
#include<iterator>
#include<vector>

using namespace std;


int main()
{

    
    int arrSize;
    cin >> arrSize;

    long long arr[arrSize];

    for (long i = 0; i<arrSize; ++i)
    {
        long elem;
        cin >> elem;
        arr[i] = elem;
    }


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
