class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
	   int low=0, high= s.size()-1;
	   string old = s;
	   
	   while(low<=high){
	       char temp = s[low];
	       s[low]=s[high];
	       s[high]= temp;
	       low++;
	       high--;
	   }
	   if(s==old) return 1;
	   return 0;
	   
	}

};
