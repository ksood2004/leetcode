class Solution {
public:
int karan(string& s1, string& s2,int n,int m){
        int t[n+1][m+1];
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0){
                t[i][j]=0;
            }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    t[i][j]= 1+t[i-1][j-1];
        }
        else{
            t[i][j]= max(t[i-1][j],t[i][j-1]);
            //return karan(s1,s2,n,m-1);
        }
    }
}
        return t[n][m];
}
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        return karan(text1,text2,n,m);
        
    }
};