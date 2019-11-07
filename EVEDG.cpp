
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
//const int N=100005;

void the_Bloombug(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
    #endif
}

struct root{
    int inf;
    int order_deg;
    vector<root*> native;
};

root* newnode(int ID){
    root* n = new root;
    n->inf = ID;
    n->order_deg = 0;
    return n;
}

int test_case, N, M;
int a,b,c;
root* all_;

void addedge(vector<root*> &vec, int m, int k){
    vec.at(m)->native.push_back(vec.at(k));
    vec.at(k)->native.push_back(vec.at(m));
    vec.at(m)->order_deg++;
    vec.at(k)->order_deg++;
}

void the_martian(){
    vector<root*> nodes;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        //nodes[i] = newnode[i];
        nodes.push_back(newnode(i));
    }
    for(int i = 0; i < M;i++){
        cin >> a >> b;
        addedge(nodes, a-1,b-1);
    }
    if((M % 2) == 0){
        cout << 1 << endl;
        for(int i = 0; i < N; i++)
            cout << 1 << " ";
        cout << endl;
        return;
    }
    
    for(int i = 0; i < N; i++){
        //all_ = nodes[i];
        all_ = nodes.at(i);
        if((all_->order_deg % 2) == 0)
            continue;
        cout << 2 << endl;
        for(int j = 0; j < N; j++){
            if(j == all_->inf) cout << 2 << " ";
            else cout << 1 << " "; 
        }
        cout << endl;
        return;
    }
    
    for(int i = 0; i < N; i++){
        all_ = nodes.at(i);
        if(all_->order_deg == 0) continue;
        cout << 3 << endl;
        b = all_->inf;
        c = ((all_->native).at(0))->inf;
        for(int j = 0; j < N; j++){
            if((j == b)) cout << 2 << " ";
            else if (j == c) cout << 3 << " ";
            else cout << 1 << " ";
        }
        cout << endl;
        return;
    }
}

int32_t main(){
  
  the_Bloombug();
  
  cin >> test_case; 
    for(int i = 0; i < test_case; i++){
        the_martian();
    }

  return 0;
  //"#" debug
}
