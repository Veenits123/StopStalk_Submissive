
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

   int test_case;cin>>test_case;while(test_case--){
        int number,keys,answer,x_videos2,y;
        cin>>number>>keys;
         int a[number];
        for(int i=0;i<number;++i)
        cin>>a[i];
        if(number%2!=0)
        if((keys>number/2)&&(number!=1))
        a[number/2]=0;
        answer = number*3;
        keys=keys%answer;
        for(int i=0;i<keys;++i)
       {
           x_videos2=a[i%number];
           y=a[(number-(i%number)-1)];
            a[i%number]=(x_videos2^y);
       }

   for(int i=0;i<number;++i)
   cout<<a[i]<<" ";
   cout<<endl;
    }

  return 0;
}
