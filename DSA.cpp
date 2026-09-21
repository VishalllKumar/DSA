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

// class Node{
//     public:
//     int data;
//     Node *next;
    
//     Node(int d){
//         data = d;
//         next = NULL;
//     }

 

// };

// Node* insertAtStart(Node* head,int val){
//     Node* newNode = new Node(val);
//     newNode->next = head;
//     head = newNode;

//     return head;
// }
// Node* insertAtLast(Node* head,int val){
//     Node* newNode = new Node(val);
//      Node* temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = newNode;
//     return head;
// }

// Node* insertAtPos(Node* head,int pos,int val){
//     Node* newNode = new Node(val);

//     Node* temp = head;

//     int count = 1;

//     while(count< pos-1){
//         temp = temp->next;
//         count++;
//     }

//     newNode->next = temp->next;

//     temp->next = newNode;

//     return head;


// }
//     Node* deleteAtStart(Node* head){
//         if(head == NULL || head -> next == NULL){
//                 cout << "LL is empty"<< endl;
//                 return NULL;  
//             }
//             Node* temp = head;
//             head = head -> next;
//             delete temp;
//             return head;
//         } 
//     Node* deleteAtLast(Node* head){
//         if(head == NULL || head -> next == NULL){
//                 cout << "LL is empty"<< endl;
//                 return NULL;  
//             }
//         Node* temp = head;
//         while(temp->next->next != NULL){
//             temp = temp -> next;
//         }
//         Node* ford = temp->next;
//         temp->next = NULL;
//         delete ford;
//         return head;
//         } 
//     Node* deleteAtValue(Node* head, int value){
//         if(head == NULL){
//                 cout << "LL is empty"<< endl;
//                 return NULL;  
//             }
        
//         Node* prev = NULL;
//         Node* curr = head;
//         if (curr->data == value){
//             head = head -> next;
//             curr -> next == NULL;
//             if(head == NULL){
//                 cout << "LL is empty"<< endl;
//             }
//             delete curr;
//             return head;
//         }
//         while(curr->data != value){
//             prev = curr;
//             curr = curr -> next;
//         }
//         prev-> next = curr -> next;
//         curr -> next  = NULL;
//         delete curr;
//         return head;

//     }

//    void display(Node *head){
//         Node *temp = head;

//         while(temp != NULL){
//             cout<<temp->data<<"->";
//             temp = temp->next;
//         }
//     }
// int main(){

//     Node *head = NULL;

//     Node *n1 = new Node(20); 
//     head = n1;

//     Node *n2 = new Node(30);

//     Node *n3 = new Node(40);

//     Node *n4 = new Node(50);


//     n1->next = n2;

//     n2->next = n3;

//     n3->next = n4;

//     // insertAtPos(head,4,100);

//     // display(head);


//     // head = deleteAtStart(head);
//     // display(head);

//     // head = deleteAtLast(head);
//     // display(head);

//     head = deleteAtValue(head,30);
//     display(head);
   
// }

// HEADER LINK LISTTTTTTTTTT :

// #include <iostream>
// using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node *next;
    
//     Node(int d){
//         data = d;
//         next = NULL;
//     }
// };

// void insertAtStart(Node* header,int val){
//     Node* newNode = new Node(val);
//     newNode->next = header->next;
//     header->next = newNode;
//     (header->data)++;
// }

// void insertAtLast(Node* header,int val){
//     Node* newNode = new Node(val);
//     (header->data)++;
//     if(header->next == NULL){
//         header->next = newNode;
//         return;
//     }
//     Node* temp = header->next;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }
// void deletefrompos(Node* header,int pos)
// {
//     if(header->next == NULL)
//     {
//         return;
//     }
//     if(pos > header->data)
//     {
//         cout<<"heallowww world";
//         return;
//     }


//     Node* temp = header->next;

//     if(temp->next == NULL && pos == 1)
//     {
//         deletefromstart(header);
//         return;
//     }
//     if(pos == header->next)
//     {
//         deletefromlast(header);
//         return;
//     }
//     int count = 1;
//     while(temp != NULL && count<pos-1)
//     {
//         temp = temp->next;
//         count++;
//     }
//     Node
// }
// void deletefromstart(Node* header){
//     if(header ->next==NULL){
//         cout<<"LL is empty"<<endl;
//         return ;}
//     Node* temp = header->next;
//     header->next = temp->next;
//     temp->next = NULL;
//     delete temp;
// }

// void deletefromlast(Node* header)
// {
//     Node* temp = header->next;

//     if(header->next == NULL)
//     {
//         header->next = NULL;
//         delete temp;
//         (header->data)--;
//         return;
//     }
//     while(temp->next->next != NULL)
//     {
//         temp = temp->next;
//     }
//     Node* curr = temp->next;
//     temp->next = NULL;
//     delete curr;
//     (header->data)--;
    
// }

// void display(Node *header){
//         Node *temp = header->next;

//         while(temp != NULL){
//             cout<<temp->data<<"->";
//             temp = temp->next;
//         }
// }
// int main()
// {
//     Node* header = new Node(0);

//     // Node* n1 = new Node(10);
//     // Node* n2 = new Node(20);
//     // Node* n3 = new Node(30);
//     // Node* n4 = new Node(40);

//     // header->next = n1;
//     // n1->next = n2;
//     // n2->next = n3;
//     // n3->next = n4;

//     // display(header);

//     // insertAtStart(header, 5);
//     // display(header);
//     // insertAtStart(header, 2);
//     // display(header);
//     // cout<<header->data<<endl;

//     insertAtLast(header, 10);
//     display(header);


//     insertAtLast(header, 20);
//     display(header);

//     insertAtLast(header, 30);
//     display(header);

//     insertAtLast(header, 40);
//     display(header);

//     insertAtLast(header, 50);
//     display(header);
    
//     cout<<header->data;

//     deletefromstart(header);
//     display(header);
//     cout<<header->data;

//     deletefromlast(header);
//     display(header);
//     cout<<header->data;
    
//     deletefrompos(header,1);
// }


// 2D ARRAY :
// LARGEST :-

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[4][4] = 
//     {
//         {10,1,1,10},
//         {1,10,10,1},
//         {1,10,10,1},
//         {10,1,1,10}
//     };
//     // int maxi = arr[0][0];
//     // int maxiRow = 0;
//     // int maxiCol = 0;
//     // for(int i = 0 ; i < 3 ; i++)
//     // {
//     //     for(int j = 0 ; j < 3 ; j++)
//     //     {
//     //         if(arr[i][j] > maxi)
//     //         {
//     //             maxi = arr[i][j];
//     //             maxiRow = i;
//     //             maxiCol = j;
//     //         }
//     //     }
//     // }
//     // cout<<"Maximum element is : "<<maxi<<" at ("<<maxiRow<<","<<maxiCol<<")";
//     int fstDiaSum = 0;
//     int SecDiaSum = 0;
//     for(int i = 0 ; i < 4 ; i++)
//     {
//             fstDiaSum += arr[i][i]; 
//             SecDiaSum += arr[i][3-i];
        
//     }
//     cout<<fstDiaSum<<endl;
//     cout<<SecDiaSum<<endl;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     string s = "I am good";
//     int vowels = 0;
//     int consonents = 0;
//     int spaces = 0;
    
//     for(int i = 0 ; i <= s.size() ; i++)
//     {
//         tolower(s[i]);
//         if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
//         {
//             vowels++;
//         }
//         else if(s[i] == ' ')
//         {
//             spaces++;
//         }
//         else
//         {
//             consonents++;
//         }
//     }
//     cout<<vowels<<endl;
//     cout<<spaces<<endl;
//     cout<<consonents<<endl;
// }

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;
    
//     Node(int d){
//         data = d;
//         next = NULL;
//     }

// };

// void display(Node *header){
    
//     if(header->next == header){
//         cout<<"LL is empty";
//     }
//     Node* temp = header->next;
//         while(temp != header){
//             cout<<temp->data<<"->";
//             temp = temp->next;
//         }
//           cout<<endl;
//     }

//     void  insertAtStart(Node* header,int val){
//     Node* newNode = new Node(val);

//     newNode->next = header->next;
//     header->next = newNode;

//     (header->data)++;
// }

//  void  insertAtLast(Node* header,int val){
//     Node* newNode = new Node(val);

//     Node* temp = header->next;

//     while(temp->next != header){
//         temp = temp->next;
//     }

//     newNode->next = header;
//     temp->next = newNode;
//     (header->data)++;
// }
// void insertAtPos(Node* header,int pos,int val){
    
//     if(pos == 1){
//         insertAtStart(header,val);
//         return;
//     }

//     Node* temp = header->next;

//     int count = 1;

//     while(temp != header && count< pos-1){
//         temp = temp->next;
//         count++;
//     }
    
//     if(temp == header){
//         cout<<"You are fool give right pos !!!sry "<<endl;
//         return;
//     }

//      Node* newNode = new Node(val);
//     (header->data)++;

//     newNode->next = temp->next;

//     temp->next = newNode;
    

// }

// void deleteFromStart(Node* header){
//     if(header->next == header){
//         cout<<"LL is empty"<<endl;
//         return;
//     }
//     Node* temp = header->next;
//     header->next = temp->next;
//     temp->next = NULL;
//     delete temp;
//     (header->data)--;
// }

// void deleteFromLast(Node* header){
//     if(header->next == header){
//         cout<<"LL is empty"<<endl;
//         return;
//     }
//     Node* temp = header->next;

//     while(temp->next->next != header){
//         temp = temp->next;
//     }

//     Node* curr = temp->next;

//     temp->next = header;

//     curr->next = NULL;
//     delete curr;
//     (header->data)--;
// }

// void deleteFromPos(Node* header,int pos){
    
//     // if(pos == 1){
//     //     insertAtStart(header,val);
//     //     return;
//     // }

//     // Node* temp = header->next;

//     // int count = 1;

//     // while(temp != header && count< pos-1){
//     //     temp = temp->next;
//     //     count++;
//     // }
    
//     // if(temp == header){
//     //     cout<<"You are fool give right pos !!!sry "<<endl;
//     //     return;
//     // }

//     //  Node* newNode = new Node(val);
//     // (header->data)++;

//     // newNode->next = temp->next;

//     // temp->next = newNode;
    

// }




// int main(){

//     Node* header = new Node(0);
//     header->next = header;


//      insertAtStart(header,10);
//      insertAtLast(header,20);
//      insertAtLast(header,30);
//      insertAtLast(header,40);
//      insertAtLast(header,50);
//     display(header);
//     cout<<header->data<<endl;
//     // insertAtPos(header,8,35);
//     // display(header);
//   //  cout<<header->data;
// //   deleteFromStart(header);
// //   display(header);
// deleteFromLast(header);
//  display(header);
//   cout<<header->data;
// }


// DOUBLY : 
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node *prev;

//     Node(int d)
//     {
//         data = d;
//         next = NULL;
//         prev = NULL;
//     }
// };
// void display(Node *head)
// {
//     if (head == NULL)
//     {
//         cout << "LL is empty" << endl;
//         return;
//     }
//     Node *temp = head;

//     while (temp->next != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << temp->data;
//     cout << endl;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->prev;
//     }
//     cout << endl;
// }
// Node *insertAtStart(Node *head, int val)
// {
//     Node *newNode = new Node(val);

//     if (head == NULL)
//     {
//         return newNode;
//     }

//     newNode->next = head;
//     head->prev = newNode;

//     return newNode;
// }
// Node *insertAtLast(Node *head, int val)
// {

//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         return newNode;
//     }

//     Node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = newNode;
//     newNode->prev = temp;
//     return head;
// }

// Node *insertAtPos(Node *head, int pos, int val)
// {

//     if (pos <= 0)
//     {
//         cout << "Invalid pos.." << endl;
//         return head;
//     }
//     if (pos == 1)
//     {
//         return insertAtStart(head, val);
//     }

//     Node *newNode = new Node(val);

//     Node *temp = head;

//     int count = 1;

//     while (temp != NULL && count < pos - 1)
//     {
//         temp = temp->next;
//         count++;
//     }

//     if (temp == NULL)
//     {
//         cout << "Invalid case !!" << endl;
//         return head;
//     }

//     newNode->next = temp->next;
//     newNode->prev = temp;

//     if (temp->next != NULL)
//     {
//         temp->next->prev = newNode;
//     }

//     temp->next = newNode;

//     return head;
// }

// Node *deleteAtStart(Node *head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         cout << "LL is empty" << endl;
//         return NULL;
//     }
//     Node *temp = head;
//     head = head->next;

//     head->prev = NULL;
//     temp->next = NULL;
//     delete temp;
//     return head;
// }

// Node *deleteAtLast(Node *head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         cout << "LL is empty" << endl;
//         return NULL;
//     }
//     Node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }

//     temp->prev->next = NULL;

//     return head;
// }

// Node* deleteAtPosition(Node* head, int position)
// {

//     if (head == NULL)
//     {
//         cout << "List is empty"<<endl;
//         return head;
//     }

//     if (position <= 0)
//     {
//         cout << "Invalid position\n";
//         return head;
//     }

//     // Delete first node
//     if (position == 1)
//     {
//         return deleteAtStart(head);
//     }

//     Node *temp = head;

//     // Reach the node to be deleted
//     for (int i = 1; i < position && temp != NULL; i++)
//     {
//         temp = temp->next;
//     }

//     // Position does not exist
//     if (temp == NULL)
//     {
//         cout << "Invalid position\n";
//         return head;
//     }

//     // Connect previous node to next node
//     temp->prev->next = temp->next;

//     // If temp is not the last node
//     if (temp->next != NULL)
//     {
//         temp->next->prev = temp->prev;
//     }

//     delete temp;

//     return head;
// }
// int main()
// {
//     Node *head = NULL;
//     // Node* n1 = new Node(10);
//     // head = n1;
//     // Node* n2 = new Node(20);
//     // Node* n3 = new Node(30);
//     // Node* n4 = new Node(40);
//     // Node* n5 = new Node(50);
//     // n1->next = n2;
//     // n2->next = n3;
//     // n3->next = n4;
//     // n4->next = n5;

//     // n2->prev = n1;
//     // n3->prev = n2;
//     // n4->prev = n3;
//     // n5->prev = n4;

//     // display(head);
//     head = insertAtStart(head, 5);
//     head = insertAtStart(head, 10);
//     head = insertAtStart(head, 20);
//     head = insertAtStart(head, 30);
//     display(head);

//     // head = insertAtLast(head,2);
//     //  display(head);

//     // head = insertAtPos(head,7,22);
//     //  display(head);

//     // head = deleteAtLast(head);

//     head = deleteAtPosition(head,3);
//     display(head);
// }

// STACKKKKK :

// #include <iostream>
// using namespace std;

// class Stack{
//     // int arr[100];
//     int *arr;
//     int capacity;
//     int top = -1;
//     public:
//     Stack(int capacity){
//         this-> capacity = capacity;
//         arr = new int(capacity);
//     }
//     void push(int val){
//         if(top == capacity -1 ){
//             cout<<"Stack overflow!!";
//             return;
//         }
//         top++;
//         arr[top] = val;
//         cout<<"Inserted element successfully!!"<<endl;
//     }
//     int peek(){
//         if(top == -1){
//             cout<<"Stack is empty insert element to see!!";
//             return -1;
//         }
//         return arr[top];
//     }
//     int pop(){
//         if(top == -1){
//             cout<<"stack is empty"<<endl;
//             return -1;
//         }
//         int temp = arr[top];
//        // cout<<arr[top]<<" is deleted!!"<<endl;
//         top--;
//         return temp;
//     }
//     int size(){
//         return top+1;
//     }
//     int totalCapacity(){
//         return capacity;
//     }
//     void traversal(){
//         while (top != -1)
//         {
// //            cout<<pop()<<" ";
// //        }    
// //     }
// // };
// // int main(){
// //     Stack s1(10);
// //     s1.push(5);
// //      s1.push(10);
// //       s1.push(15);
// //        s1.push(25);
// //         s1.push(55);
// //          s1.push(95);
// //     s1.traversal();
// // }

// #include<iostream>
// using namespace std;
// class Node {
// public:
//     int data;
//     Node* next;
//     Node(int d) {
//         data = d;
//         next = NULL;
//     }
// };
// class Stack {

//     Node* top;
//     int count;
//     public:
//     Stack() {
//         top = NULL;
//         count = 0;
//     }
//     void push(int val)
//     {
//         Node* newNode = new Node(val);
//         newNode->next = top;
//         top = newNode;
//         count++;
//     }
//     int pop()
//     {
//         if(top == NULL)
//         {
//             cout<<"LL is empty"<<endl;
//             return -1;
//         }
//         count--;
//         if(top->next == NULL)
//         {
//             int temp = top->data;
//             delete top;
//             top = NULL;
//             return temp;
//         }
//         Node* temp = top;
//         top = top->next;
//         int val = temp->data;
//         delete temp;
//         return val;
//     }
//     int peek()
//     {
//         if(top==NULL)
//         {
//             cout<<"Stack is empty"<<endl;
//             return -1;
//         }
//     }
//     int size()
//     {
//         return count;
//     }
//     // int findMiddle(stack s)
//     // {
        
//     // }
// };
// int main() {
//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     cout << "Stack elements: ";
//     cout << "Top element: " << s.peek() << endl;
//     cout << "Stack size: " << s.size() << endl;
//     cout << "Popped element: " << s.pop() << endl;
//     cout << "Stack after pop: ";
//     cout << "Top element: " << s.peek() << endl;
//     cout << "Stack size: " << s.size() << endl;
//     return 0;
// }


#include <iostream>
using namespace std;
class Queue{
    int *arr;
    int capacity;
    int front;
    int rear;

    public:
    Queue(int capacity)
    {
        this->capacity = capacity;
        arr = new int(capacity);
        front = -1;
        rear = -1;
    }
    void enqueue(int val)
    {
        if(front == -1 && rear == -1)
        {
            front ++;
            rear ++;
            arr[front] == val;
            return ;
        }
        arr[rear++] = val;
    }
    int dequeue()
    {
        if(front==-1)
        cout<<"queue is empty"<<endl;
        return -1;
        if(front == rear)
        {
            int temp = arr[front];
            front = rear = -1;
            return temp;
        }

        int temp = arr[front];
        front++;
        return temp;
    }
    int peek()
    {
        if(front == -1)
        {
            return -1;
        }
        return arr[front];
    }
    int size()
    {

    }

};
int main()
{
    
}