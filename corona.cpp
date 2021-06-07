/*  .......FOR BACKEND ROLE ASSIGNMENT NO.2   .....*/

#include <iostream>
#include <bits/stdc++.h>
#define V INT_MAX
using namespace std;
//int N;
/* to determine the number of possible
epicentres of the virus.*/
/*int countvalue(int N, int* dist, int node[], int h,int x) 
{
	int count=0;
/*	for(int i=0;i<N;i++)
	{
		int flage=0;
		unordered_map<int, int> M;
		for(int j=0;j<h;j++)
		{
			int y=node[j]-1;
			if(*(dist + y*N + i)<=x)
			{
				flage=1;
			}
		}
		if(flage)
		{
			count++;
		}
	}
	return count;
}
int min(int a,int b)
{
 if(a<b)
  return(a);
 else
  return(b);
}
for(int i=0;i<h;i++)
{
	for(int j=0;j<N;j++)
	{
		dist
	}
}*/
int Allpair(int N, int *G, int node[], int h, int x)  //find all pairs Shortest  path
{
	unordered_map<int, int> M;
	 int dist[N][N], i, j, k;
 
    for (i = 0; i < N; i++)
    {
    	for (j = 0; j < N; j++)
    	{
    		dist[i][j] = *(G + i*N + j);
		}
            
	}
	//...
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<dist[i][j]<<" ";
		}
		cout<<endl;
	}
        
 
    for (k = 0; k < N; k++)
    {
    	for (i = 0; i < N; i++) 
    	{
    		 for (j = 0; j < N; j++)
    		 {
    		  if (dist[i][j] > (dist[i][k] + dist[k][j])
                    && (dist[k][j] != V
                        && dist[i][k] != V))
                    dist[i][j] = dist[i][k] + dist[k][j];
			 }
		}
	}
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<dist[i][j]<<" ";
		}
		cout<<endl;
	}

	for(int i=0;i<h;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(dist[node[i]][j]<=x)
			{
				m[i]++;
			}
		}
	}
	count=0;
	for (auto& it : M) {
        if(it.second>=2)
        {
        	count++;
		}
    }
	//int z=countvalue(N,dist[0],node,h,x);
	
	return count;
 
}


int main()
{
    int N,h,x,u,v;
    cin>>N>>h>>x;
    int node[h],G[N][N];
    for(int i=0;i<h;i++)
    {
    	cin>>node[i];
	}
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            if(i==j)
            G[i][j]=0;
            else
			G[i][j]=V;
            
    }
    
    // creating edges 
    for(int i=0;i<N-1;i++)
    {
        cin>>u>>v;
        G[u-1][v-1]=1;
        G[v-1][u-1]=1;
        

    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
        	cout<< G[i][j]<<" ";
		}
		cout<<endl;
           
    }

    int count=Allpair(N,G[0],node,h,x);
    cout<<count+h;
    
    return 0;
}

