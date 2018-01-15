#include<stdio.h>
#include<stdlib.h>

int isEmpty(struct node *start)
{
	if(start==NULL)
		return 1;
	else
		return 0;
}

struct node* addatbeg(struct node *start, int num)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp-> val = num;
	temp-> next = start;
	start = temp;	
	return start;
}


struct node* addatend(struct node *start, int num)
{
	struct node *temp, *mov;
	temp = (struct node*)malloc(sizeof(struct node));
	mov = (struct node*)malloc(sizeof(struct node));
	mov = start;
	temp-> val = num;
	if(isEmpty(mov))
	{
		mov->next = temp;
		temp->next = NULL;
		return start;		
	}
	while(move-> next != NULL)
		mov=mov->next;
	mov->next = temp;
	temp->next = NULL;
	return start;
}

struct node* addafterval(struct node *start, int num, int value)
{
	struct node *temp, *mov;
	temp = (struct node*)malloc(sizeof(struct node));
	mov = (struct node*)malloc(sizeof(struct node));
	mov = start;
	temp->val = num;
	if(isEmpty(mov))
	{
		printf("List is empty!!!");
		return start;
	}
	while(mov != NULL)
	{
		if(mov->val==value)
			break;
		mov = mov->next;
	}
	if(mov == NULL)
	{
		printf("Given value not found in the list");
		return start;
	}
	temp->next = mov->next;
	mov->next = temp;
	return start;
}

struct node* addbeforeval(struct node *start, int num, int value)
{
	struct node *temp, *mov;
	temp = (struct node*)malloc(sizeof(struct node));
	mov = (struct node*)malloc(sizeof(struct node));
	mov = start;
	temp->val = num;
	if(isEmpty(mov))
	{
		printf("List is empty!!!");
		return start;
	}
	while(mov->next != NULL)
	{
		if(mov->next->val == value)
			break;
		mov = mov->next;
	}
	if(mov->next == NULL)
	{
		printf("Given value not found in the list");
		return start;
	}
	temp->next = mov->next;
	mov->next = temp;
	return start;
}

struct node* addatpos(struct node *start, int num, int pos)
{
	struct node *mov;
	int found = 0, cur_pos = 0;
	mov = (struct node*)malloc(sizeof(struct node));
	mov = start;
	if(cur_pos == pos)
	{
		start = addatbeg(start,num);
		found = 1;
	}
	while(mov->next != NULL)
	{
		if(found==1)
			break;
		if(cur_pos == pos-1)
		{
			start = addafterval(start,num,mov->val);
			found=1;
		}
		cur_pos++;
		mov = mov->next;
	}
	if(found==0 && cur_pos == pos-1)
	{
		start = addatend(start,num);
		found=1;
	}
	if(found==0)
		printf("Mentioned position is out of the max range of the list");

	return start;
}



