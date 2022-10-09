#include <bits/stdc++.h>
using namespace std;
#define N 201

int dx[8] = {2, 2, -2, -2, 1, 1, -1, -1};
int dy[8] = {1, -1, 1, -1, 2, -2, 2, -2};

bool visited[N][N] = {0};
queue < pair < int, pair < int, int > >>q;
int knight(int ur, int uc, int pr, int pc, int n)
{   
   // vector<vecttor<int>dis(N,100000)  
    q.push(make_pair(0, make_pair(ur, uc)));
    visited[ur][uc]=1;

    while (!q.empty())
    {
        pair < int, pair < int, int >> cur = q.front();
        q.pop();
        int x = cur.second.first;
        int y = cur.second.second;
        int val = cur.first;
        if(x==pr and y ==pc)
        {
           return val+1;
        }

      
        for (int i = 0; i < 8; i++)
        {
            int X = x + dx[i];
            int Y = y + dy[i];
            if (X >= 1 and Y >= 1 and X <= n and Y <= n and !visited[X][Y])
            {   
                visited[X][Y] = true;
                q.push(make_pair(val + 1, make_pair(X, Y))); 
                
            }
        }
    }
}

int unicorn(int ur, int uc, int pr, int pc, int n)
{
    q.push(make_pair(0, make_pair(ur, uc)));
    visited[ur][uc]=1;
    int dx[24] = {-6, -6, -3, -3, 6, 6, 3, 3,  -4, -4, -2, -2, 4, 4, 2, 2,    -2, -2, -1, -1, 2, 2, 1, 1};
    int dy[24] = {-3, 3, -6, 6, -3, 3, 6, -6,  -2, 2, -4, 4, -2, 2, 4, -4,    -1, 1, -2, 2, -1, 1, 2, -2};
    
    while (!q.empty())
    {
        pair <int, pair<int, int >>cur=q.front();
        q.pop();
        int x=cur.second.first;
        int y=cur.second.second;
        
        int val=cur.first;

        if (x == pr and y == pc)
        {
            return val + 1;
        }

        for(int i=0; i<24; i++)
        {
            int X = x + dx[i];
            int Y = y + dy[i];
            if (X >= 1 and Y >= 1 and X <= n and Y <= n and !visited[X][Y])
            {   
                visited[X][Y] =true;
                q.push(make_pair(val+1, make_pair(X, Y)));
                
            }
            
        }
    }
}



int main()
{
    int t;
    cin >> t;
    for(int tc =1;tc<=t;tc++)
    {
        int n, ur, uc, pr, pc;
        cin >> n >> ur >> uc >> pr >> pc;

        int a = knight(ur, uc, pr, pc, n);
       
        int b = unicorn(ur, uc, pr, pc, n);
        cout << "#" << tc<<" "<< a << endl;
    }
    return 0;
}