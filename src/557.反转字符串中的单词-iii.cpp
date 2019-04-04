/*
 * @lc app=leetcode.cn id=557 lang=cpp
 *
 * [557] 反转字符串中的单词 III
 *
 * https://leetcode-cn.com/problems/reverse-words-in-a-string-iii/description/
 *
 * algorithms
 * Easy (63.09%)
 * Total Accepted:    14.2K
 * Total Submissions: 22.2K
 * Testcase Example:  '"Let\'s take LeetCode contest"'
 *
 * 给定一个字符串，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。
 * 
 * 示例 1:
 * 
 * 
 * 输入: "Let's take LeetCode contest"
 * 输出: "s'teL ekat edoCteeL tsetnoc" 
 * 
 * 
 * 注意：在字符串中，每个单词由单个空格分隔，并且字符串中不会有任何额外的空格。
 * 
 */
//reverse
class Solution {
public:
 	string reverseWords(string s) { 

		int left = -1, right = 0;
		while (++left<(int)s.size())
		{
			right = left;
			//right移到单词末尾的后面
			while (right<s.size()  && s[right++] != ' ');
			
			//翻转单词
			if (right == s.size()) reverse(s.begin() + left, s.begin() + right);
			else reverse(s.begin() + left, s.begin() + right-1);
			left = right - 1;
		}
		return s;
	}
};

