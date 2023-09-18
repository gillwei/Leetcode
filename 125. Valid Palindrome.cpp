class Solution {
public:
    bool isPalindrome(string s) {
        // ���Nstring �̭����ťթM�D�r���Ʀr���r���h��
        string nstr;
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if (isalnum(c))
            {
                nstr += tolower(c);
            }
        }
        // �A����x�s�r��̭����C���w�M�����w�O�_�ۦP�Y�i
        int left = 0, right = nstr.size() - 1;
        while (left < right)
        {
            if (nstr[left] != nstr[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};