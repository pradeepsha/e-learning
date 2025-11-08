#include<stdio.h>#include<stdlib.h>
struct node{
    int data;
    struct node*left,*right;
    int hight;
};
struct node creat node(int value){
    strct node*n=(struct node*)malloc(sizeof(struct node));
    n->data=value;
    n->left=NULL;
    n->right=NULL;
    n->hight=1;
    return n;
}
int hight(struct node*n){
    if(n==NULL)
    return 0;
return hight;
int balance factor(struct node*n){
    if(n==NULL)
    return 0;
return hight (n->)_hight(n->right);
}
    void insert node(struct node* root , struct node*/struct node*r);{
        root->left=l;
        root->right=r;
    }
    void display tree (struct node*root){
        printf("\n AVL tree : \n \n");
     printf("[%d%d] \n,root ->data");
        printf("[/\\\n]");
        printf("[%d][%d]\n root->left->data root->right->data");
        int bf=balnce factor (root);
        printnf("\n balance factor of root[%d]=%d\n root->data,bf");
        if(bf>=-1 && bf<=1)
        printf("tree is balance \n");
    else
    printf("tree is not balance \n");
    }
    void deletnodes(struct node,root,int value){
        if(root->data==value)
        root->data=0;
    elseif(root->left->data==value)
    root->left->data==0;
elseif root->right->data==root->right->data=0;
else
printf("\n value not found \n");
printf("\n AVL befor tree:\n \n");
printf("[%d]\n",root->data);
printf("[%d][%d] \n",root->left->data root->right->data);}
    }


int main(){
    int r,l,ri,del;
    printf("enter root not value:");
    scanf("%d",&r);

    printf("enter left node value:");
    scanf("%d",&l);

    printf("enter right node value:");
    scanf("%d",&ri);
    struct node*root=creatnode(r);
    struct node*root=creatnode(l);
    struct node*root=crearnode(ri);
    insert node[root,left,right];
    display(root);
    printf("\n enter the node value to delet:");
    scanf("%d",&del);
    delet node(root del);

    return 0;
}
    