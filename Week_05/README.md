学习笔记
回文解题:

构造二维dp数组来保存状态， dp[i][j]代表 string[i~j]是否是回文子字符串。

base case ：
i == j 则为true

迭代二维数组 

dp 方程：
if string[i] == string[j]
	dp[i][j] = dp[i+1][j-1]
else
        dp[i][j] = true


遗漏case：

if string[i] == string[j] and i adjecent to j :
    dp[i][j] = true; 
