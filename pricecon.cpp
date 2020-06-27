#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,N,k;
	cin>>t;
	while(t--){
	    cin>>N>>k;
	    int a[N];
	    for(int i=0;i<N;i++){
	        cin>>a[i];
	    }
	    
	    int s1=0,s2=0;
	    
	    for(int i=0;i<N;i++){
	        s1+=a[i];
	        if(a[i]>k){
	            a[i]=k;
	        }
	        s2+=a[i];
	    }
	    std::cout << s1-s2 << std::endl;
	}
	return 0;
}
