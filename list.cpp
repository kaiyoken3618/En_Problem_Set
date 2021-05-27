class Solution
{
    public:
        int countWords(string list[], int n)
        {
            int cnt = 0, dbl =0;
           for(int i=0; i<n;i++)
           {
               for(int j=i+1; j<n;j++)
               {
                   if(list[i]==list[j])
                   {
                       cnt++;
                       if(cnt == 1)
                       {
                           dbl++;
                           break;
                       }
                   }
               }
           }
           return dbl;
        }


};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;
        cout <<ob.countWords(list, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
