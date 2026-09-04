//calculatorrrrr:::::
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     int b;
//     cout<<"Input First Digit: ";
//     cin>>a;
//     cout<<"Input Secound Digit: ";
//     cin>>b;
//     char op;
//     cout<<"enter operations(*,/,-,+,%): ";
//     cin>>op;
//     switch(op)
//     {
//         case '+':
//             cout<<"Ans: "<<a+b;
//             break;
//         case '-':
//             cout<<"Ans: "<<a-b;
//         case '*':
//             cout<<"Ans: "<<a*b;
//         case '/':
//             cout<<"Ans: "<<a/b;
//         case '%':
//             cout<<"Ans: "<<a%b;
//         default:
//             cout<<"Invalid Operator!"<<endl;
//     }
// }

//Electricity bill:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int units;
//     cout<<"Units: ";
//     cin>>units;
//     int bill;
//     if (units<=0)
//     {
//         cout<<"Disposiible";
//     }
//     else if (units<=100)
//     {
//         bill = units * 5;
//         cout<<"Bill: "<<bill<<endl;
//     }
//     else if (units<=200)
//     {
//         bill = 100 * 5
//              +(units-100) * 7;
//         cout<<"Bill: "<<bill<<endl;

//     }
//     else if (units<=300)
//     {
//         bill = 100 * 5 
//         + 100 * 7
//         + (units-200) * 10;

//         cout<<"Bill: "<<bill<<endl;

//     }
//     else
//     {
//         bill = 100 * 5
//              + 100 * 7
//              + 100 * 10
//              + (units - 300) * 13;

//         cout<<"Bill: "<<bill<<endl;

//    }

// }

//construct ATM machine

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {2,4,6,8,9,10};
//     cout<<arr[4]<<endl;
//     int num[5];
//     num[0]=10;
//     num[1]=20;
//     num[2]=30;
//     num[3]=40;
//     num[4]=50;
//     num[5]=60;
    
    
//     for (int i = 0;i<5;i++)
//     {
//         cout<<num[i]<<endl;
//     }
    
    

//     int nums[5];
//     cout<<"enter nums[0]: ";
//     cin>>nums[0];
    
//     cout<<"enter nums[1]: ";
//     cin>>nums[1];
    
//     cout<<"enter nums[2]: ";
//     cin>>nums[2];

//     cout<<"enter nums[3]: ";
//     cin>>nums[3];
    
//     cout<<"enter nums[4]: ";
//     cin>>nums[4];


//     cout<<" "<<endl;

//     cout<<"num[0] is "<<nums[0]<<endl;
//     cout<<"num[1] is "<<nums[1]<<endl;
//     cout<<"num[2] is "<<nums[2]<<endl;
//     cout<<"num[3] is "<<nums[3]<<endl;
//     cout<<"num[4] is "<<nums[4]<<endl;


// }


// for (int i=0;i<5;i++)
//     {
//         int x;
//         cout<<"Enter the value of index :"<<i<<endl;
//         cin>>x;
//         nums[i] = x;
//     }
//     for (int i = 0;i<5;i++)
//     {
//         cout<<num[i]<<endl;
//     }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[50];
//     for (int i=0;i<50;i++)
//     {
//         arr[i] = i*2;
//     }
//     for (int i = 0; i < 50; i++)
//     {
//         cout << arr[i] << " ";
//     }
    
// }

    

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {87,89,78,99,88,95};
//     float sum = 0;
//     for (int i=0;i<6;i++)
//     {
//         sum = sum + arr[i];
//     }
//     float avg = (sum/6);
//     cout<<avg<<endl;
//     float per = (sum/600)*100;
//     cout<<per<<endl;
//     if (per>=90)
//     {
//         cout<<"GRADE A";  
//     }
//     else if (per>=80)
//     {
//         cout<<"GRADE B";
//     }
//     else if(per>=60)
//     {
//         cout<<"GRADE C";
//     }
//     else
//     {
//         cout<<"Fail";
//     }
// }

// maximum number in array

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {10,20,45,65,642};
//     int largest = arr[0];
//     for (int i=1;i<5;i++)
//     {
//         if (arr[i]>largest)
//         {
//             largest = arr[i];
//         }
//     }
//     cout<<largest;
// }

// find minimum number in array

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {89,12,46,9,173,6};
//     int minimum = arr[0];
//     for (int i=0;i<6;i++)
//     {
//         minimum = arr[i];
//     }
//     cout<<minimum;
// }

// find secound largest in array

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {10,20,30,1,42,32};
//     int largest = arr[0];
//     int slargest = arr[0];
//     for (int i = 0;i<6;i++)
//     {
//         if (arr[i]>largest)
//         {
//         slargest = largest;
//         largest = arr[i];
//         }
//         else if (arr[i] > slargest)
//         {
//             slargest = arr[i];
//         }
//     }
//     cout<<"secound largest: "<<slargest<<endl;
//     cout<<"largest: "<<largest;
// }

// count even number in array



// count odd number in array

// find positive, negative, zeroes in array



//Array insertionnnnnnnnnnnnnnnnnn:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[10];
//     int n;
//     cout<<"enter the numebers of values in array that should be less than 9: ";
//     cin>>n;
//     cout<<"enter "<<n<<" numbers: ";
//     for (int i = 0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     int index;
//     cout<<"enter the index on which you want to insert val: ";
//     cin>>index;
    
//     int val;
//     cout<<"enter the value u want to insert: ";
//     cin>>val;

//     for(int i=0;i>=index;i--)
//     {
//         arr[i+1] = arr[i];
//     }
//     arr[index] = val;
//     n++;
//     for(int i = 0;i<=n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }  
// }  

//array deletion: of first element

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {2,4,6,8,9,12};
//     int n = 6;
//     for (int i = 0 ; i<n ; i++)
//     {
//         cout<< arr[i] <<" ";
//     }
//     for (int i = 0; i<n-1;i++)
//     {
//         arr[i] = arr[i+1];
//     }
//     n--;
//     cout<<endl;
//     for(int i = 0 ; i<n ; i++)
//     {
//         cout<< arr[i]<<" ";
//     }
//     return 0;
// }

// check sortedddddddddddddddddddddddddddddddddddddddd

// #include <iostream>
// using namespace std;
// bool isSorted(int arr[],int n)
// {
//     for (int i = 1;i<n;i++)
//     {
//         if(arr[i]>arr[i-1])
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int arr[]={2,3,12,42,122,4,1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<n<<endl;
//     bool res = isSorted(arr,n);

//     if(res)
//         cout<<"Array is sorted";
//     else
//         cout<<"Array is not sorted";
//     return 0;        
// }

// count pairs of sorted elements in array 

// #include <iostream>
// using namespace std;

//     int countPairs(int arr[], int n)
//     {
//         int count = 0;
//         for (int i = 1;i<n;i++)
//         {
//             if (arr[i]<=arr[i+1]){
//             count++;
//             }
//         }
//         return count;
//     }
    

// int main()
// {
//     int arr[7] = {2,3,12,42,122,4,1};
//     int n = sizeof(arr)/sizeof(arr[0]);  // REMEMBER
//     cout<<"sorted pairs: "<<countPairs(arr,n);
//     return 0;
// }


//LINEAR SEARCH:

// #include <iostream>
// using namespace std;

// int search(int arr[], int n, int val)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == val)
//         {
//             return i;
//         }
//     }

//     return -1;
// }

// int main()
// {
//     int arr[7] = {2, 3, 12, 42, 122, 4, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int val;
//     cout << "Enter element: ";
//     cin >> val;

//     int result = search(arr, n, val);

//     if (result != -1)
//         cout << "Element found at index: " << result;
//     else
//         cout << "Element not found";

//     return 0;
// }

//FIRST OCCURANCE AND LAST OCCURANCE :

// #include <iostream>
// using namespace std;

// int firstOccurrence(int arr[], int n, int val)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == val)
//         {
//             return i;
//         }
//     }

//     return -1;
// }

// int lastOccurrence(int arr[], int n, int val)
// {
//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (arr[i] == val)
//         {
//             return i;
//         }
//     }

//     return -1;
// }

// int main()
// {
//     int arr[] = {2, 3, 12, 4, 3, 42, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int val;
//     cout << "Enter element: ";
//     cin >> val;

//     cout << "First occurrence: " << firstOccurrence(arr, n, val) << endl;
//     cout << "Last occurrence: " << lastOccurrence(arr, n, val) << endl;

//     return 0;
// }

//BINARY SEARCHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH

// #include<iostream>
// using namespace std;
// int binarySearch(int arr[],int n,int val)
// {
//     int s = 0;
//     int e = n - 1;

//     while(s<=e)
//     {
//         int mid = (s+e)/2;
//         if(arr[mid] == val)
//         {
//             return mid;
//         }
//         else if(arr[mid] < val)
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
        
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {2,4,7,9,10,12};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int index = binarySearch(arr,n,10);

//     cout<<index;
// }

// FIRST OCCURANCE USING BINARY SEARCHHHHHHHHHHHHHHHHHHHHH

// #include <iostream>
// using namespace std;
// int firstOccu(int arr[],int n,int val)
// {
//     int s = 0;
//     int e = n - 1;
//     int ans = -1;
//     while (s<=e)
//     {
//         int mid = (s+e)/2;
//         if (arr[mid]==val)
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else if (arr[mid]<val)
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
        
//     }
//     return ans;
// }
// int main()
// {
//     int arr[]={1,2,4,4,4,6,8,8,8};
//     int n = sizeof(arr)/sizeof(arr[0]); 
//     int index = firstOccu(arr,n,4);
//     cout<<index;
// }

// Bubble sorttttttttttt:

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {4,6,8,5,2,1,19};

//     int n = 7;

//     for(int i = 1;i<n;i++){
//         for(int j = 1;j<n-i;j++){
//             if(arr[j] < arr[j -1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j-1];
//                 arr[j-1] = temp;
//             }
//         }
//     }

//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Selection sortttttttttt :

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {4,5,2,7,3,9,1,12,8};
//     int n = 9;

//     for (int i = 0 ; i < n - 1 ; i++)
//     {
//         int miniIndex = i;
//         for( int j = i + 1;j<n; j++)
//         {
//             if (arr[j] < arr[miniIndex])
//             { 
//                 miniIndex = j;
//             }
//         }
//         swap(arr[i],arr[miniIndex]);
//     }

//     for (int i = 0 ; i < n ; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// INSERTION SORTTTTTTTTTTTTTTTTTTTT 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {2,1,0,45,3,99,7};
//     int n = 7;

//     for (int i = 0;i<n;i++)
//     {
//         int key = arr[i];
//         int j = i - 1;
//         while (j>=0 && arr[j]>key)
//         {
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = key;
//     }
//     for (int i = 0; i<n ; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// UNIT 2 ::



// 'NEW' KEYWORD : new keyword is used to occupy the dynamic/permanent memory from heap and returns the address of that memory

//  --> we use pointers to store/point that address .
// #include<iostream>
// using namespace std;
// int main()
// {
//     int *a = new int;
//     int *b = new int(10);  // SYNTAX : int *b = new int(address) ;

//     *a = 100;

//     cout<<*a<<endl;
//     cout<<*b<<endl;

// }

// More data typess :

// #include<iostream>
// using namespace std;
// int main()
// {
//     int *a = new int;
//     bool *b = new bool;  
//     float *c = new float;
//     double *d = new double;  

//     *a = 100;
//     *b = true;
//     *c = 12.123;
//     *d =  12.12121;

//     cout<<*a<<endl;
//     cout<<*b<<endl;
//     cout<<*c<<endl;
//     cout<<*d<<endl;
// }

// LINKED LISTTTTTTTTTTTTTT :

// #include <iostream>
// using namespace std;
// class Node
// {
//     public:

//     int data;
//     Node *nxt;

//     void setData()
//     {
//         int d;
//         cout<<"enter the data: "<<endl;
//         cin>>d;
//         data = d;
//     }
// };
// int main()
// {
//     Node *n1 = new Node();
//     n1->setData();
//     cout<<n1->data<<endl;
// }

// INSERTING NODE IN BETWEEN NODESSSSSSSSSSSSSSSSSSS : 

// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node *next;
//     Node(int d)
//     {
//         data = d;
//         next = NULL;
//     }
// };

// Node* insertAtStart(Node* head,int val)
// {
//     Node* newNode = new Node(val);
//     newNode->next = head;
//     head = newNode;
//     return head;
// }

// Node* insertAtLast(Node* head,int val)
// {
//     Node* newNode = new Node(val);
//     Node* temp = head;

//     while(temp->next != NULL)
//     {
//         temp = temp->next;
//     }

//     temp->next = newNode;
//     return head;
// }

// Node* insertAtPos(Node* head,int pos,int val)
// {
//     Node* newNode = new Node(val);
//     Node* temp = head;
//     int count = 1;
    
//     while(count< pos-1)
//     {
//         temp = temp->next;
//         count++;
//     }

//     newNode->next = temp->next;
//     temp->next = newNode;
//     return head;
// }

//    void display(Node *head)
//    {
//         Node *temp = head;
//         while(temp != NULL)
//         {
//             cout<<temp->data<<"->";
//             temp = temp->next;
//         }
//     }
    
// int main()
// {
//     Node *head = NULL;
//     Node *n1 = new Node(20); 
//     head = n1;
//     Node *n2 = new Node(30);
//     Node *n3 = new Node(40);
//     Node *n4 = new Node(50);
//     n1->next = n2;
//     n2->next = n3;
//     n3->next = n4;
//     insertAtPos(head,4,100);
//     display(head);   
// }


