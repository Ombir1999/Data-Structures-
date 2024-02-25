#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
void linkedListTraversal(struct Node *ptr)
{
	while(ptr != NULL)
	{
		printf("Elements : %d\n", ptr->data);
		ptr = ptr->next;
	}
}
int main()
{
	struct Node *head;
	struct Node *second;
	struct Node *third;
	struct Node *fourth;
	struct Node *fifth;
	//Allocate memory for node in the linked list in Heap
	head=(struct Node *)malloc(sizeof(struct Node));
	second=(struct Node *)malloc(sizeof(struct Node));
	third=(struct Node *)malloc(sizeof(struct Node));
	fourth=(struct Node *)malloc(sizeof(struct Node));
	fifth=(struct Node *)malloc(sizeof(struct Node));
	// Link First and second node
	head->data =18;
	head->next =second;
	//Link second and third node
	second->data =8;
	second->next =third;
	//Link third and fourth
	third->data =1999;
	third->next =fourth;
	//Link fourth and fifth
	fourth->data = 1;
	fourth->next = fifth;
	//terminated list at fourth
	fifth->data = 40;
	fifth->next = NULL;
	linkedListTraversal(head);
	return 0;

}
