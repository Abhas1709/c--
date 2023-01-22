#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    int y;
	    int t;
	    cin>> x;
	    cin>> y;
	    cin>> t;
	    if(x % t == 0 ){
	    if (y % t == 0){
	        cout<<"ANY " << endl; }
	   else {
	       cout<<"chicken"<< endl; }
	   } else if ( y % t == 0) {
	       cout<<"ducks"<< endl; }
	   else
	 {  cout<<" NONE"<< endl; }
	}	
	return 0;
}
