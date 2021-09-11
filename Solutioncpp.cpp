//First method that is Naive Approach
//Time Complexity -> O(n^2)
//Space Complexity -> O(1)

#include<iostream>
using namespace std; 

void findElement(int a[] , int b[], int n1, int n2){
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i]==b[j]){
                break;
            }
            if(j==n2-1){
                cout<<a[i]<<" ";
            }
        }
    }
}
int main() 
{ 
  int a[]={1, 2, 3, 4, 5, 10};
  int b[]={2, 3, 1, 0, 5};
  int n1 = sizeof(a) / sizeof(a[0]); 
  int n2 = sizeof(b) / sizeof(b[0]); 
  findElement(a, b, n1, n2); 
  return 0; 
} 



//Second method Using hashing
//Time Complexity -> O(n)
//Space Complexity -> O(n)


#include<bits/stdc++.h>
using namespace std;

void findElement(int a[], int b[],int n1, int n2)
{
  
	//copy the second array in a hash table.
	unordered_set <int> s;
	for (int i = 0; i < n2; i++)
		s.insert(b[i]);

	//Print the element that are not present in hash table
	for (int i = 0; i < n1; i++)
		if (s.find(a[i]) == s.end()){
			cout << a[i] << " ";
		}
}


int main()
{
	int a[] = {1, 2, 3, 4, 5, 10};
	int b[] = {2, 3, 1, 0, 5};
	int n1 = sizeof(a) / sizeof(a[0]);
	int n2 = sizeof(b) / sizeof(b[0]);
	findElement(a, b, n1, n2);
	return 0;
}
