#include<stdio.h>
struct no//定义节点no的结构体 
{
	int num;
	no *next;
	no(int x) : num(x), next(NULL) {}

};
no *fun(no *head)//实现下标奇数在前，偶数在后的核心方法 
{
	if (!head) return head;
    no* first = head;
    no* even = head->next;
    no* evenHead = even;
    while (first->next && even->next) //while循环，通过奇数的指针下一个奇数，偶数的指针指向下一个偶数来实现链表的重新排版 
	{
        first->next = even->next;
        first =first->next;
        even->next =first->next;
        even = even->next;
    }
    first->next = evenHead;
    return head;
}
int main()
{
	int x=0;
	char c;
	printf("输入：");
	scanf("%c",&c);
	x=x*10+(c-'0');//定义所输入的数字 
	scanf("%c",&c);
	while(c!='-')
	{
		x=x*10+(c-'0');
	}
	scanf("%c",&c);
	no a(x);
	no *head=&a;
	no *p=&a;
	x=0;
	scanf("%c",&c);
	while(c!='N')//按顺序把数字输入链表中。 
	{
		x=x*10+(c-'0');
		scanf("%c",&c);
		while(c!='-')
		{
			x=x*10+(c-'0');
		}
		scanf("%c",&c);
		p->next=new no(x);
		p=p->next;
		x=0;
		scanf("%c",&c);
	}
	//输入“ULL” 
	scanf("%c",&c);
	scanf("%c",&c);
	scanf("%c",&c);
	
	head=fun(head);
	//输出最终单链表的结果 
	printf("输出：");
	while(head!=NULL)
	{
		printf("%d->",head->num);
		head=head->next;
	}
	printf("NULL\n");
	return 0;
}
