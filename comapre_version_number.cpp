int compareVersions(string a, string b) 
{
    // Write your code here
    long long num1 = 0;
    long long num2 = 0;
    for(int i = 0,j = 0; (i < a.length() || j < b.length());)
    {
        while(i < a.length() && a[i] != '.')
        {
            num1 = num1*10+(a[i]-'0');
            i++;
        }
        
        while(j < b.length() && b[j] != '.')
        {
            num2 = num2*10+(b[j]-'0');
            j++;
        }
        
        if(num1 > num2) return 1;
        else if(num2 > num1) return -1;
        else
        {
            num1 = 0;
            num2 = 0;
        }
        i++;
        j++;
    }
    return 0;
}
