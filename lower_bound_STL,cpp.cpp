#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void lower_bound_finder(vector<int> v, int x);



void find_func(vector<int> v, vector<int> que)
{
	vector<int>::iterator it;
	int i,index;
	for(i=0; i<que.size(); i++)
	{
		it=find(v.begin(),v.end(),que[i]);
		
		if(it != v.end())
		{
			index=it-v.begin();
			++index;
			cout<<"Yes "<<index<<endl;
		}
		else
		{
			vector<int>::iterator fx;
		fx= lower_bound(v.begin(),v.end(),que[i]);
		int indexq;
		indexq= fx-v.begin();
		++indexq;
		cout<<"No "<<indexq<<endl;
		return;
		}
		
	}
}


void lower_bound_finder(vector<int> v,int x)
{

}

int main() {
    
    vector<int> v;
    vector<int> que;
    int n,i,j,q,q_num,num;
    
    cin>>n;
    
    
    for(i=0; i<n; i++)			//pushing content in V
    {
    	cin>>num;
    	v.push_back(num);
	}
	
	cin>>q;
	
	
	for(j=0; j<q; j++)			//pushing content in Q
	{
		cin>>q_num;
		que.push_back(q_num);
	}
	
	find_func(v,que);


    return 0;
}


