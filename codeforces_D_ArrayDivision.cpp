
/*              `-._:  .:'   `:::  .:\            |\__/|           /::  .:'   `:::  .:.-'
                    \      : V         \          |:   |          /         : T      /    
                     \     ::    .     `-_______/ ::   \_______-'   .      ::   . /      
                      |  :   :: ::'  :   :: ::'  :   :: ::'    N  :: ::'  :   :: :|       
                      |     ;::        E ;::         ;::         ;::         ;::  |       
                      |  .:'   `:::  .:'   `:::  .:'   `:::  .:'   `:::  .:'   `:|       
                      /     :           :         E  :           :     I      :    \       
                     /______::_____     ::    .     ::    .     ::   _____._::____\      
                                   `----._:: ::'  :   :: ::'  _.----'                    
                                          `--.       ;::  .--'                           
                                              `-. .:'  .-'                               
                                                 \    /                        
                                                  \  /                                   
                                                   \/  */             
                
// Author : vee_nits123
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back
#define pbk pop_back
#define PI 3.1415926535897932384626
#define endl '\n'
const int mod = 1000000007;
const int N=100005;

void the_Bloombug(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
    #endif
}

int32_t main(){
  
  the_Bloombug();
  
  //int t;cin>>t;while(t--){}
  int n;cin>>n;
	vector <int> v(n+5,0);
	int sum=0;
 
	for (int i=0;i<n;i++){
		cin>>v[i];
		sum+=v[i];
	}
 
	if (sum & 1){
		cout<<"NO";
		return 0;
	}
 
	map <int,int> a1,a2;
 
	a1[v[0]]=1;
	for (int i=1;i<n;i++){
		a2[v[i]]++;
	}
	int sdash=0;
	for (int i=0;i<n;i++){
		sdash+=v[i];
		if (sdash==sum/2){
			cout<<"YES";
			return 0;
		}
 
		if (sdash<sum/2){
			int x=sum/2-sdash;//search it in second part
			if (a2[x]>0){
				cout<<"YES";
				return 0;
			}
		}
 
		if (sdash>sum/2){
			int y=sdash-sum/2;//search it in first part
			if (a1[y]>0){
				cout<<"YES";
				return 0;
			}
		}
		a1[v[i+1]]++;
		a2[v[i+1]]--;//remove from second part
	}
 
	cout<<"NO";
	
	return 0;
}
