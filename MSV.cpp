
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

int test_case, number;
int n,anime;
int maximum;
int the_star;

void the_martian(){
    maximum = 0;
    cin >> number;
    int data[number], data2[number] = {0};
    for(int i = 0; i < number; i++)
        cin >> data[i];
    n = number-1;
    while(n >= 0){
        if(data2[n] == 1){
            n--; continue;
        }
        the_star = 0;
        anime = data[n];
        for(int i = n-1; i >= 0; i--){
            if((data[i] % data[n]) == 0){
                data2[i] = 1;
                the_star++;
            }
        }
        maximum = max(the_star, maximum);
        n--;
    }
    
    cout << maximum << endl;
    
}

int32_t main(){
  
  the_Bloombug();
  
  cin >> test_case;
    for(int i = 0; i < test_case; i++){
        the_martian();
    }

  return 0;
}
