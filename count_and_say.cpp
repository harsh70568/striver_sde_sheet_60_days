string writeAsYouSpeak(int n) 
{
	// Write your code here.
    if(n == 1) return "1";
    if(n == 2) return "11";
    string s = "11";
    for(int i = 3; i <= n; i++)
    {
        int count = 1;
        s += "&";
        string t = "";
        for(int j = 1; j < s.length(); j++)
        {
            if(s[j] == s[j-1])
            {
                count++;
            }
            else
            {
                t += to_string(count);
                t += s[j-1];
                count = 1;
            }
        }
        s = t;
    }
    return s;
}
