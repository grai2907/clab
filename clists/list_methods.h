#ifndef LIST_METHODS_H
#define LIST_METHODS_H

int isEmpty(struct node *start);


struct node* addatbeg(struct node *start, int num);


struct node* addatend(struct node *start, int num);


struct node* addafterval(struct node *start, int num, int value);


struct node* addbeforeval(struct node *start, int num, int value);


struct node* addatpos(struct node *start, int num, int pos);


#endif	//LIST_METHODS_H
