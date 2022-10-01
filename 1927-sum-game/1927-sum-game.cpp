class Solution {
public:
    bool sumGame(string num) {
        int n=(int)num.size();
        int sum=0, q=0;
        for(int i=0;i<n/2;++i){
            if(num[i]>='0' && num[i]<='9'){
                sum+=(num[i]-'0');
            }
            else{
                ++q;
            }
            int j=i+n/2;
            if(num[j]>='0' && num[j]<='9'){
                sum-=(num[j]-'0');
            }
            else{
                --q;
            }
        }
        if(abs(q)%2) return true;
        if(sum==0 && q==0) return false;
        else if(sum==0 || q==0) return true;
        else if((sum>0 && q>0) || (sum<0 && q<0)) return true;
        return (abs(q)/2)*9!=abs(sum);
    }
};