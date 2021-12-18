#include <bits/stdc++.h>
using namespace std;
int t,r,i,n;
int main()
{
	cin>>t;
	while(t--){
		deque <int> q;
		cin>>n;
		while(n--){
			cin>>r;
			switch(r){
				case 1:
					cout<<q.size()<<"\n";
					break;
				case 2:
					if(q.empty())cout<<"YES\n";
					else cout<<"NO\n";
					break;
				case 3:
					cin>>i;
					q.push_back(i);
					break;
				case 4:
					if(!q.empty())q.pop_front();
					break;
				case 5:
					if(!q.empty())cout<<q.front()<<"\n";
					else cout<<"-1\n";
					break;
				case 6:
					if(!q.empty())cout<<q.back()<<"\n";
					else cout<<"-1\n";
					break;
				default: break;
			}			
		}
	}
	return 0;
}
