#include<bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node* left;
	node* right;

	node(int d){
		this->data=d;
		this->left=NULL;
		this->right=NULL;
	}
};
node* buildTree(node* root){
	int data;
	cout<<"Enter Data for node "<<endl;;
	cin>>data;
	root=new node(data);
	
	if(data==-1)
		return NULL;
	

	cout<<"Enter data to left of "<<root->data<<endl;
	root->left=buildTree(root->left);
	cout<<"Enter data to right of "<<root->data<<endl;
	root->right=buildTree(root->right);
	return root;
}

void levelOrderTraversal(node* root){
	
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* temp=q.front();
		q.pop();

		if(temp==NULL){
			cout<<endl;
			if(!q.empty())q.push(NULL);
		}else{
			cout<<temp->data<<" ";
	
			if(temp->left){
				q.push(temp->left);
			}

			if(temp->right){
				q.push(temp->right);
			}
		}
	}
}
void buildFromLevelOrder(node* &root){
	queue<node*> q;
	cout<<"Enter data for root"<<endl;
	int data;
	cin>>data;
	root=new node(data);
	q.push(root);

	while(!q.empty()){
		node* temp=q.front();
		q.pop();

		cout<<"Enter data for left node of "<<temp->data<<endl;
		int leftData;
		cin >> leftData;
		if(leftData!=-1){
			temp->left=new node(leftData);
			q.push(temp->left);
		}

		cout<<"Enter data for right node of "<<temp->data<<endl;
		int rightData;
		cin >> rightData;
		if(rightData!=-1){
			temp->right=new node(rightData);
			q.push(temp->right);
		}
		
	}
}
void inorderTraversal(node* root){
	if(root==NULL)return;

	inorderTraversal(root->left);
	cout<<root->data<<" ";
	inorderTraversal(root->right);
}
void preorderTraversal(node* root){
	if(root==NULL)return;

	
	cout<<root->data<<" ";
	preorderTraversal(root->left);
	preorderTraversal(root->right);	
}
void postorderTraversal(node* root){
	if(root==NULL)return;
	
	postorderTraversal(root->left);
	postorderTraversal(root->right);	
	cout<<root->data<<" ";
}	
int countLeafNodes(node* root){
	int cnt=0;
	queue<node*> q;
	q.push(root);

	while(!q.empty()){
		node* temp=q.front();
		q.pop();

		if(temp->left==NULL && temp->right==NULL){
			cnt++;

		}
		if(temp->left){
			q.push(temp->left);
		}
		if(temp->right){
			q.push(temp->right);
		}

	}
	return cnt;
}
int main(){
	node* root=NULL;
	//1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
	// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
	 root=buildTree(root);
	// levelOrderTraversal(root);
	// buildFromLevelOrder(root);
	
	// levelOrderTraversal(root);

	
	// inorderTraversal(root);	
	// cout<<endl;
	// preorderTraversal(root);	
	// cout<<endl;
	// postorderTraversal(root);

	cout<<countLeafNodes(root);	
	return 0;
}