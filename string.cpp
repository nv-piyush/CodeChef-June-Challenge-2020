#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t;
	
	std::cin >> t;
	while(t--){
	    string s;
	    cin>>s;
	    int c=0;
	    for(int i=0;i<s.length();i++){
	        if(s[i]!=s[i+1] && i+1<s.length()){
	            c++;
	            i++;
	        }
	    }
	    std::cout << c << std::endl;
	}
	return 0;
}
