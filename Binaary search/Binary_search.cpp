#include <iostream>
#include <cstdlib>
using namespace std;
int a[20];
int top=0;
int i=0;
struct Bin_Tree
{
    int value;
    Bin_Tree *left;
    Bin_Tree *right;
};

Bin_Tree *root = NULL;

void add_node(int n, Bin_Tree *temp)
{

    if (root == NULL)
    {

        Bin_Tree *ttemp = new Bin_Tree();
        ttemp->value = n;
        root = ttemp;

        return;
    }

    else
    {
        if (temp->value > n)
        {
            if (temp->left == NULL)
            {
                Bin_Tree *ttemp = new Bin_Tree();
                ttemp->value = n;

                temp->left = ttemp;
                return; /* code */
            }

            else
            {
                temp = temp->left;
                add_node(n, temp);
            }
        }

        else if (temp->value < n)
        {
            if (temp->right == NULL)
            {
                Bin_Tree *ttemp = new Bin_Tree();
                ttemp->value = n;

                temp->right = ttemp;
                return;
            }
            else
            {
                temp = temp->right;
                add_node(n, temp);
            }
        }
    }
}
void ascending(Bin_Tree *N)
{
    if (N->left != NULL)
    {
        ascending(N->left);
        cout << N->value << "\n";

    }
    else
    {
        cout << N->value << "\n";
    }

    if (N->right != NULL)
    {
        ascending(N->right);
    }
}

Bin_Tree *find_node(int n, Bin_Tree *t)
{

    if (t->value < n)
    {
        if (t->right!=NULL)
        find_node(n, t->right);
        else 
        {
cout<<"valuue not found"<<endl;
        return NULL;

        }
    
    }

    else if (t->value > n)
    {
     if (t->left!=NULL)
       find_node(n, t->left);

        else{
cout<<"value not found"<<endl;
return NULL;
        } 
    

    }
    else
    {
        if (t->value != n)
        {
            cout << "Value Not fo"<<"\n";
            return NULL;
        }
        else
        {
            return t;
        }
    }
}

void dscending(Bin_Tree *N)
{
    if (N->right != NULL)
    {
        dscending(N->right);
        cout << N->value << "\n";
    }
    else
    {
        cout << N->value << "\n";
    }

    if (N->left != NULL)
    {

        dscending(N->left);
    }
}

void Maximum()
{
    Bin_Tree *temp = new Bin_Tree();
    temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }

    cout << temp->value << "\n";
}

void Minimum()
{
    Bin_Tree *temp = new Bin_Tree();
    temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }

    cout << temp->value << "\n";
}

void update_node(int n,int r){
//  dlete or add node ka kaaam he 
Bin_Tree *change=find_node(n,root);

if (change->value!=NULL){
change->value=r;
cout<<"value update"<<endl;
}
else
{
    cout<<"values not update"<<endl;
}

}


void forascending(Bin_Tree *N)
{
    if (N->left != NULL)
    {
        forascending(N->left);
        a[i++]= N->value;

    }
    else
    {
    a[i++]=N->value ;
    }

    if (N->right != NULL)
    {
        forascending(N->right);
    }
}



void delte_node(int n, Bin_Tree *t){

for ( i =0;i<=top;i++){

}





}


        Bin_Tree *pre=NULL;

void find_pre(int n , Bin_Tree *t){

     if (t->value < n)
    {
// pre = t;

        if (t->right!=NULL)
        find_node(n, t->right);
        else 
        {
cout<<"valuue not found"<<endl;

        }
    
    }

    else if (t->value > n)
    {
// pre = t;
     if (t->left!=NULL)
       find_node(n, t->left);

        else{
cout<<"value not found"<<endl;
        } 
    

    }
    else
    {
        if (t->value != n)
        {
            cout << "Value Not fo"<<"\n";
        }
        else
        {
            delete(t);
            //  pre->left=NULL;
            //  pre->right=NULL;
        
        
        
        }
    }
}


int main()
{


    add_node(100, root);
    top++;
    add_node(150, root);
    top++;
    add_node(140, root);
    top++;
    add_node(160, root);
    top++;
    
    add_node(170, root);
    top++;

    add_node(50, root);
    top++;

    add_node(42, root);
    top++;

    add_node(70, root);
    top++;

    add_node(30, root);
    top++;

    add_node(60, root);
    top++;

    add_node(80, root);
    
    
    
    // add_node(60,root);
    // add_node(80,root);
    // Bin_Tree *t=root;
    // cout<<root->value;
    // t=t->left;
    // cout<<t->value;

    ascending(root);
    // cout<<root->value;

    cout << "-------- Descending order  ---  ------\n";

    dscending(root);

    cout << "-------- Maximum value  ---  ------\n";

    Maximum();

    cout << "-------- Minimum value  ---  ------\n";
    Minimum();

    cout << "-------- Find value  ---  ------\n";

    Bin_Tree *node1=find_node(42,root);
    cout<<node1->value<<"\n";

    // Bin_Tree *node2=find_node(20,root);
    // cout<<node2->value<<"\n";

    // Bin_Tree *node3=find_node(1,root);
    // cout<<node3->value<<"\n";

    //  Bin_Tree *node4=find_node(50,root);
    // cout<<node4->value<<"\n";

    // Bin_Tree *node5=find_node(43,root);
    // cout<<node5->value<<"\n";


// update_node(20,)


    // cout << "-------- Delete root  ---  ------\n";

// find_pre(60,root);
// ascending(root);

}
