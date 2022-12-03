#include <iostream>
using namespace std;
int helper(string s,int dp[][101],int i,int j){
    if(i>j){
        return 0;
    }
    if(i==j){
        return 1;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(s[i]==s[j]){
        dp[i][j] = 1 + helper(s,dp,i+1,j) + helper(s,dp,i,j-1);
    }
    else{
        dp[i][j] = (mod+helper(s,dp,i,j-1) + helper(s,dp,i+1,j) - helper(s,dp,i+1,j-1);
    }
    return dp[i][j];
}
int countPS(string str)
{
   //Your code here
   int n = str.size();
   int dp[101][101];
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           dp[i][j] = -1;
       }
   }
   return helper(str,dp,0,n-1);
}
int main() {
	// your code goes here
	string s;
	cin>>s;
	cout<<countPS(s);
	return 0;
}