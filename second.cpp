#include<stdio.h>
struct no//����ڵ�no�Ľṹ�� 
{
	int num;
	no *next;
	no(int x) : num(x), next(NULL) {}

};
no *fun(no *head)//ʵ���±�������ǰ��ż���ں�ĺ��ķ��� 
{
	if (!head) return head;
    no* first = head;
    no* even = head->next;
    no* evenHead = even;
    while (first->next && even->next) //whileѭ����ͨ��������ָ����һ��������ż����ָ��ָ����һ��ż����ʵ������������Ű� 
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
	printf("���룺");
	scanf("%c",&c);
	x=x*10+(c-'0');//��������������� 
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
	while(c!='N')//��˳����������������С� 
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
	//���롰ULL�� 
	scanf("%c",&c);
	scanf("%c",&c);
	scanf("%c",&c);
	
	head=fun(head);
	//������յ�����Ľ�� 
	printf("�����");
	while(head!=NULL)
	{
		printf("%d->",head->num);
		head=head->next;
	}
	printf("NULL\n");
	return 0;
}
