//  统计键盘输入的字符（$作为结束）中每个小写英文字母出现的个数，n[0]、n[1]、...、n[25]分别存放小写字母a,b,...,z。并输出统计结果

#include <stdio.h>

void main()
{
	int n[26]={0},k;
	char ch;
	while ((ch=getchar()) != '$')
		if(ch >= 'a' && ch <= 'z')
			n[ch-'a']+=1;
	for (k=0; k<=25; k++)
		printf("%c:%d\n", k+'a', n[k]);
}