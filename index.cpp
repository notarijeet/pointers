#include <bits/stdc++.h>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
}
void update(int *p){
    p = p + 1;
    
}
int getSum(int arr[],int n){
    
    cout<<"size of"<< sizeof(arr)<<endl;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main() {
	// your code goes here
	int arr[10]={23,122,41,67};
	cout<<"address of first memory block is "<<arr<<endl;
	cout<<"address of first memoey block is "<<&arr[0]<<endl;
	cout<<"address of second memory block is"<<&arr[1]<<endl;
	cout<<"address of third memory block is"<<&arr[2]<<endl;
	
	cout<<"4th"<<*arr<<endl;
	cout<<"5th"<<*arr+1<<endl;
	cout<<"6th"<<*(arr+1)<<endl;
	cout<<"7th"<<(*arr)+1<<endl;
	cout<<"8th"<<arr[2]<<endl;
	cout<<"9th"<<*(arr+2)<<endl;
	
	//Difference's Pointer/Arrays;
	int temp[10];
	cout<<sizeof(temp)<<endl;
	cout<<"1st"<<sizeof(*temp)<<endl;
	cout<<"2nd"<<sizeof(&temp)<<endl;
	
	int *ptr = &temp[0];
	cout<<sizeof(ptr)<<endl;
	cout<<sizeof(*ptr)<<endl;
    int a[20]={1,2,3,5};
    cout<<" ->"&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
    
    int *p = &a[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<" ->"&p<<endl;
    
    int arr[5] = {1,2,3,4,5}; //integer array;
    char ch[6] = "abcde"; //character array;
    cout<<arr<<endl;
    cout<<ch<<endl;
    char *c = &c[0];
    //print entire string;
    cout<<c<<endl; 

    //Good Difference;
    int arr[10];
    
    arr = arr +1; //Throw an Error
    
    int *ptr = &arr[0];
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl
    int value = 5;
    int *p = &value;
    // print(p);
    
    cout<<"before"<<p<<endl;
    update(p);
    cout<<"after"<<p<<endl;
    int arr[5]={1,2,3,4,5};
    
    cout<<"Sum  is"<<getSum(arr,5)<<endl;
    //iss tarike se jab aap array pass karte hon toh woh usko ek pointer ki tarah leta hai islye uska size8 hote hai.


	//Double Pointer

#include <bits/stdc++.h>
using namespace std;
void update(int **p2){
    // p2 = p2+1;
    //kuch change hoga?? - NO;
    
    // *p2= *p2 + 1;
    // //kuch change hoga?? - yes;
    
    **p2 = **p2 + 1;
    //kuch change hoga??--YES
}

int main() {
	// your code goes here
	int i = 45;
	
	int *p = &i;
	int **p2 = &p;
	
// 	cout<<"printing p"<<p<<endl;
// 	cout<<"address of p"<<&p<<endl;
	
	
// 	cout<<*p2<<endl;
	
	cout<<"before"<<i<<endl;
	cout<<"before"<<p<<endl;
	cout<<"before"<<p2<<endl;
	update(p2);
	cout<<"after"<<i<<endl;
	cout<<"after"<<p<<endl;
	cout<<"after"<<p2<<endl;
	cout<<endl<<endl;

	
	
	
	
	return 0;
	

}

    return 0;

}

🚩 Golden Rules for MCQs
Array name = constant pointer, can’t be incremented.

Pointer = variable, can move around.

Printing int* → address, printing char* → string.

(*p)++ vs *p++ — always check brackets.

sizeof(arr) ≠ sizeof(ptr).

Null pointer is okay until you dereference it.

Double pointer (int **pp) = stores address of a pointer.


	🎯 Summary of Key Fixes

Null pointer → compile OK, runtime crash if dereferenced.

(arr+1) is valid → pointer arithmetic.

p[i] works like arr[i].

char behaves like int → increment works.

Printing char* → string, not address.

Incrementing char* works, shifts string.

Double pointer modifies real variable correctly.








