
#include <stdio.h>
//���ʼ�����ͳ�����������������ַ���
//���ʣ��������ո��Ʊ�������з����ַ�����
//���ʼ������������ǿ��ַ�����ǰһ���ǿ��ַ���++��������ֱ����һ���ǿ��ַ���
int main(void){
	int line=0;
	int word=0;
	int cha=0;
	int last=0;//��ʼ��Ϊ ǰһ���ǿ��ַ�
	int c;
    while((c=getchar())!=EOF){
 
		cha++;
		if(c=='\n')
			line++;
		
		if(c==' '||c=='\t'||c=='\n') //�������ַ�
			last=0;
 
		else if(last==0){//ǰһ���ǿ��ַ�
				word++;
				last=1;
			}
	}
	printf("�ַ���Ϊ��%d",cha);
	printf("����Ϊ��%d",line);
	printf("������Ϊ��%d",word);
 
}
