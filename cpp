class Solution
{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
         long long unsigned int decimalValue(Node *head)
        {
           // Your Code Here
            long long unsigned int  mod=1000000007;
            int ans = 0;
            
            
            Node *tem=head;
           
            while(tem!=NULL)
            {
                ans = (ans*2 + tem->data)%mod;
                tem=tem->next;
            }
            return ans;
        }
};
