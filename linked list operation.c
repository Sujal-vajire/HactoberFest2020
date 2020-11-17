#include <stdio.h>
#include<stdlib.h>

struct node {
    
   int data;
   struct node *ptr;
   
} *start = NULL, *t,*last,*t1;

int main()
{
    int n,i,v,ch,pos,f,e,el,count=0;
    do{
        
        printf("Enter your choice :- 1. Creation 2. Insertion 3. Deletion 4. Search (Linear) 5. Print 6. Middle elements 7. exit\n");
        
        scanf("%d",&ch);
        
        switch(ch)
        {
        //Code for creation of a node
    case 1:    
    printf("Enter number of nodes\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        printf("Enter value for node %d: ",i+1);
        scanf("%d",&v);
        t -> data = v;
        
        if (start == NULL)
        {
            start = t;
        }
        else
        {
            last -> ptr = t;
        }
        
        last = t;
    }
    
    break;
    //Code for insertion of a node
    case 2:
       t = (struct node*) malloc( sizeof (struct node) );
        printf("Enter Data: ");
        scanf("%d",&t->data);
        printf("Enter Position: ");
        scanf("%d",&pos);
          if (pos == 1)
          {
            t -> ptr = start ;
            start = t;
          }
            else
          {
            t1 = start;
            for (i=2; i<pos && t1 -> ptr!=NULL; i++)
          {
            t1 = t1 -> ptr;
          }
            t -> ptr = t1 -> ptr;
            t1 -> ptr = t;
            
          }
          n=n+1;
          break;
        //Code for deletion of a node  
    case 3:
    printf("Enter Position: ");
    scanf("%d",&pos);
  if (pos == 1)
     {
    t = start;
      start = start->ptr;
      free (t);
      }
        else
      {
        t = t1 = start;
        for ( i=1; i< pos; i++)
      {
        t1 = t;
        t = t->ptr;
        if (t == NULL)
      {
        f=1;
        break;
      }
      }}
        if (f != 1)
      {
        t1 -> ptr = t ->ptr;
      }
        else
      {
        printf ("Error");
      }
    n=n-1;
    break;      
     //Code for searching a node  
    case 4:
     t = (struct node*) malloc( sizeof (struct node) );
     printf("Enter Element which u want to find : ");
    scanf("%d",&e);
    for(t=start;t!=NULL;t=t->ptr)
    {
        if(t->data == e)
        {
          el=1; 
          break;
        }
        
    }
    if(el==1)
    printf("Element found\n"); 
    else
    printf("Element not found\n"); 
    
    break;
     //Code for printing  the list  
    case 5:
    t = (struct node*) malloc( sizeof (struct node) );
    for(t=start;t!=NULL;t=t->ptr)
    printf("%d ",t->data);
    printf("\n");
    break;
     //Code for printing middle node 
    case 6:
     t = (struct node*) malloc( sizeof (struct node) );
    if(n%2==0){ 
    for(t=start;t!=NULL;t=t->ptr)
    {
        count++;
        if(count==n/2 || count==((n/2) +1))
        printf("%d ",t->data);
        
    }}
    else{ 
    for(t=start;t!=NULL;t=t->ptr)
    {
        count++;
        if(count==((n+1)/2))
        printf("%d ",t->data);
        
    }}
    printf("\n");
    count=0;
    break;
    
     //Code to exit program  
    case 7:
    exit(0);
    break;
    
    
    }}while(ch);

    return 0;
}
//Pranav
