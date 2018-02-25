#include<iostream>
#include<queue>
#include<algorithm>
#include<map>

using namespace std;

vector<pair<int, int> > findValidSteps(vector<pair<int, int> > stepsArr, int n, int m){
    vector<pair<int, int> > validSteps;

    for (auto p: stepsArr){
        int i = p.first;
        int j = p.second;

        if (i >= 0 && i < n  && j >= 0 && j < m &&
                find(validSteps.begin(), validSteps.end(),p) == validSteps.end())
            validSteps.push_back(p);   
    }

    return validSteps;
}


vector<pair<int, int> > findNextSteps(int i, int j, int a, int b){

    vector<pair<int, int> > next_steps;
    next_steps.push_back(make_pair(i+a, j+b));
    next_steps.push_back(make_pair(i+a, j-b));
    next_steps.push_back(make_pair(i-a, j+b));
    next_steps.push_back(make_pair(i-a, j-b));


    next_steps.push_back(make_pair(i+b, j+a));
    next_steps.push_back(make_pair(i+b, j-a));
    next_steps.push_back(make_pair(i-b, j+a));
    next_steps.push_back(make_pair(i-b, j-a));

    return next_steps;
}

int findPath(int a, int b, int n, int m){
    int i = 0;
    int j = 0;
    vector<pair<int, int> > next_steps;
    map<pair<int, int>, pair<int, int>> parents;       

    next_steps = findNextSteps(i, j, a, b);
    next_steps = findValidSteps(next_steps, n, m);

    queue<pair<int, int> > q;
    int visited[n][m];
    for (int i = 0; i<n; ++i){
        for (int j = 0; j<m; ++j){
            visited[i][j] = 0;
        }
    }
    visited[0][0] = 1;
    
    int found = false; 
    int count = 0;

    q.push(make_pair(0,0));
    while(!q.empty() && !found){
        pair<int, int> new_point = q.front();
        q.pop();
        count += 1;
        next_steps = findNextSteps(new_point.first, new_point.second, a, b);
        next_steps = findValidSteps(next_steps, n, m);  
        //cout << "current point: " << new_point.first << ", " << new_point.second << endl;
        for(auto x : next_steps){

            int x1 = x.first;
            int y1 = x.second;
            //cout << x1 << ", " << y1 << endl;
                        
           if (visited[x1][y1] == 0){
                //cout << "child: " << x1 << " : " << y1 << " parent: " << new_point.first << " " << new_point.second << endl;
                parents[x] = new_point;
                visited[x1][y1] = 1;
                q.push(x);
            }

            if (x1 == n-1 && y1 == m-1){
                found = true;
                break;
            }
 
        }
    }
    if(found){
        int found = false;
        pair<int, int> origin, child, parent;
        origin = make_pair(0,0);
        child = make_pair(n-1, m-1);
        int count = 0;        
        while(!found){
            count += 1;
            parent = parents[child];
            //cout << parent.first << " " << parent.second << endl;
            if (parent.first == 0 && parent.second == 0) found = true;
            else child = parent;
        }
        return count;
    }
    else return -1;    
}

int main(){

    int n, m, a, b;

    cin >> n; // rows

    m = n; // cols
    
    for (int a = 1; a<n; ++a){
        for (int b = 1; b<n; ++b){
            cout << findPath(a, b, n, m) << " ";
        }
        cout << endl;
    }
    return 0;
}
