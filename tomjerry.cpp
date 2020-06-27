#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    long long int ts;
	    cin>>ts;
	    
	    while(ts%2==0)
	        ts/=2;
	    ts/=2;
	    cout<<ts<<endl;
	    
	    
	    /*if(ts==1){
            cout<<"0"<<endl;
        }
	    while(i<=ts && ts>1){
	        
	        if(ts%2==0){
	            if(i%2==0){
	                ts/=2;
	                i/=2;
	            }
	            else{
	                f=1;
	                break;
	            }
	        }
	        else{
	            if(i%2==0){
	                cnt++;
	                i++;
	            }
	            else{
	                f=1;
	                break;
	            }
	        }
	    }
	    if(f==1)
	        cout<<"0"<<endl;
	    else
	        cout<<cnt<<endl;*/
	}
	return 0;
}
