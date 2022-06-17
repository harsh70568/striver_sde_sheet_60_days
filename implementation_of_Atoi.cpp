int atoi(string s) {
    // Write your code here.
    int num = 0;
    int sign = 1;
    if(s[0] == 45) sign = -1;         45 ----> ASCII value of minus sign, if first charcater of the string is negative, make your sign as negative.
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 48 && s[i] <= 57)
        {
            num = num*10+(s[i]-'0');
        }
    }
    return sign*num;
}
