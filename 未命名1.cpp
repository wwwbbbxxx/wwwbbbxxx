
#include <stdio.h>
//单词计数：统计行数、单词数、字符数
//单词：不包含空格、制表符、换行符的字符序列
//单词计数：读到不是空字符：：前一个是空字符：++。这样做直到下一个是空字符。
int main(void){
	int line=0;
	int word=0;
	int cha=0;
	int last=0;//初始化为 前一个是空字符
	int c;
    while((c=getchar())!=EOF){
 
		cha++;
		if(c=='\n')
			line++;
		
		if(c==' '||c=='\t'||c=='\n') //读到空字符
			last=0;
 
		else if(last==0){//前一个是空字符
				word++;
				last=1;
			}
	}
	printf("字符数为：%d",cha);
	printf("行数为：%d",line);
	printf("单词数为：%d",word);
 
}
