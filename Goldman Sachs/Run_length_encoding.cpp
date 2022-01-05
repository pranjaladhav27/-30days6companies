string encode(string src)
{     
  int n=src.length();
  int cnt;
    for(int i=0;i<n;i++)
    {
         cnt=1;
        while(i<n-1 && src[i]==src[i+1])
        {
            cnt++;
            i++;
        }
        
        cout<< src[i]<<cnt;
    }
    
}    
