/*
 * @lc app=leetcode.cn id=151 lang=cpp
 *
 * [151] 翻转字符串里的单词
 *
 * https://leetcode-cn.com/problems/reverse-words-in-a-string/description/
 *
 * algorithms
 * Medium (19.39%)
 * Total Accepted:    7.9K
 * Total Submissions: 35.7K
 * Testcase Example:  '"the sky is blue"'
 *
 * 给定一个字符串，逐个翻转字符串中的每个单词。
 * 
 * 
 * 
 * 示例 1：
 * 
 * 输入: "the sky is blue"
 * 输出: "blue is sky the"
 * 
 * 
 * 示例 2：
 * 
 * 输入: "  hello world!  "
 * 输出: "world! hello"
 * 解释: 输入字符串可以在前面或者后面包含多余的空格，但是反转后的字符不能包括。
 * 
 * 
 * 示例 3：
 * 
 * 输入: "a good   example"
 * 输出: "example good a"
 * 解释: 如果两个单词间有多余的空格，将反转后单词间的空格减少到只含一个。
 * 
 * 
 * 
 * 
 * 说明：
 * 
 * 
 * 无空格字符构成一个单词。
 * 输入字符串可以在前面或者后面包含多余的空格，但是反转后的字符不能包括。
 * 如果两个单词间有多余的空格，将反转后单词间的空格减少到只含一个。
 * 
 * 
 * 
 * 
 * 进阶：
 * 
 * 请选用 C 语言的用户尝试使用 O(1) 额外空间复杂度的原地解法。
 * 
 */
//reverse
class Solution {
public:
	string reverseWords(string s) {
		int first = 0, index = 0;
		reverse(s.begin(), s.end());
		for (;first < s.size();first++)
		{
			if (s[first] != ' ')
			{
				//当前记录的位置如果不是0，前面就加空格
				if (index != 0) s[index++] = ' ';

				//end和first一起走
				int end = first;
				//当目前end不为空时，这个单词还没结束，更新index
				while (end<s.size()&&s[end] != ' ') s[index++] = s[end++];

				//翻转单词
				reverse(s.begin() + index - (end - first), s.begin() + index);
                first = end;
			}
		}
 
		s.resize(index);
        return s;
	}
};
