#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n,c=0,ct10=0,i;
	    cin>>n;
	    int a[1005];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    for(i=0;i<n;i++){
	        if(a[i]==5)
	            c++;
	        else if(a[i]==10){
	            if(c==0)
	                break;
	            else
	                c--;
	            ct10++;
	        }
	        else{
	            if(ct10==0 && c<=1)
	                break;
	            else if(ct10!=0)
	                ct10-=1;
	            else if(c>=2)
	                c-=2;
	        }
	    }
	    if(i==n)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
