#include <iostream>

using namespace std;

int UnOrderedLinearSearch(int A[], int n, int data);
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

  pos = UnOrderedLinearSearch(A,n,data);
  cout << "\n" << data <<" Found at position " << pos <<endl;

  //printArray(A, n);
  return 0;
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

void printArray(int A[], int n)
{
  for(int i =0; i < n; i++)
  {
    cout << A[i] << "\t";
  }
}