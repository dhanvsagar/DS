#include <iostream>

using namespace std;

int UnOrderedLinearSearch(int A[], int n, int data);
int OrderedBinarySearchRecursive(int A[], int low, int high, int data);
void printArray(int A[], int n);

int main()
{
  int A[30];
  int n = 0;
  int data = 3;
  int pos = 0;

  cout << "Enter the length of array to be sorted :\t" << endl;
  cin >> n;
  for (int i = 0; i < n; i++){
    cout << "\nEnter element " << i << ":\t";
    cin >> A[i];
  }

  //pos = UnOrderedLinearSearch(A,n,data);
  pos = OrderedBinarySearchRecursive(A, 0, n, data);
  cout << "\n" << data <<" Found at position " << pos <<endl;

  //printArray(A, n);
  return 0;
}

void printArray(int A[], int n)
{
  for(int i =0; i < n; i++)
  {
    cout << A[i] << "\t";
  }
}


int UnOrderedLinearSearch(int A[], int n, int data)
{
  int i = 0;
  for(i=0;i<n;i++)
  {
    if (A[i] == data)
    {
      return i;
      break;
    }
  }
  return -i;
}

int OrderedBinarySearchRecursive(int A[], int low, int high, int data)
{
  int mid = 0;
  mid = (low + high) / 2 ;
  if(A[mid] == data)
    return mid;
  else if (A[mid] > data)
    return OrderedBinarySearchRecursive(A, 0, mid-1, data);
  else
    return OrderedBinarySearchRecursive(A, mid+1 , high, data);
  return -1;
}