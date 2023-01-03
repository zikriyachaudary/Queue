/* CPP Program which can perfrom Queue Functions using Array. enqueue, dequeue, display, show_head, show_tail, factorial, display even, display odd, reverse, display the sum of array, sort the stack array. */

#include<iostream>
using namespace std;
#define SIZE 8
int head = 0;
int sum = 0;
int tail = -1;
int Queue[SIZE];
void Enqueue(int value)
{
	if (tail == SIZE-1)
	{
		cout << "Queue is FULL" << endl;
	}
	else
	{
		tail++;
		Queue[tail] = value;
		sum = sum + value;
	}
}
void Display()
{
	if (tail == -1)
	{
		cout << "Queue is Empty" << endl;
	}
	else
	{
		int temp = head;
		while (temp <= tail)
		{
			cout << Queue[temp] << "  ";
			temp++;
		}
		cout << endl;
	}
}
void show_head()
{
	if (tail == -1)
	{
		cout << "Queue is Empty" << endl;
	}
	else
	{
		cout << Queue[head] << endl;
	}
}
void show_tail()
{
	if (tail == -1)
	{
		cout << "Queue is Empty" << endl;
	}
	else
	{
		cout << Queue[tail] << endl;
	}
}
void Dequeue()
{
	if (tail == -1)
	{
		cout << "Queue is Empty" << endl;
	}
	else
	{
		head++;
	}
}

void factorial()
{
	if(tail==-1)
	{
		cout << "Queue is Empty." << endl;
	}
	else
	{
		for(int i=0; i<=tail; i++)
		{
		    double fact = 1;
			for(int j=1; j<=Queue[i]; j++)
			{
				fact = fact * j;
			}
			cout << fact << endl;
		}
	}
}

void display_sum()
{
	if(tail==-1)
	{
		cout << "Queue is Empty." << endl;
	}
	else
	{
		cout << "The sum of Queue is : " << sum << endl;
	}
}

void display_even()
{
	if(tail==-1)
	{
		cout << "Queue is Empty." << endl;
	}
	else
	{
		for(int i=0; i<=tail; i++)
		{
			if(Queue[i]%2==0)
			{
				cout << Queue[i] << endl;
			}
		}
	}
}

void display_odd()
{
	if(tail==-1)
	{
		cout << "Queue is Empty." << endl;
	}
	else
	{
		for(int i=0; i<=tail; i++)
		{
			if(Queue[i]%2==1)
			{
				cout << Queue[i] << endl;
			}
		}
	}
}

void reverse()
{
	if(tail==-1)
	{
		cout << "Queue is Empty." << endl;
	}
	else
	{
		for(int i=tail; i>=0; i--)
		{
			cout << Queue[i] << endl;
		}
	}
}

void sort()
{
	if(tail==-1)
	{
		cout << "Queue is Empty." << endl;
	}
	else
	{
		for(int j=0; j<=tail; j++)
		{
			for(int k=0;k<=tail-1;k++)
			{
				if(Queue[k]>Queue[k+1])
				{
					Queue[k] = Queue[k] + Queue[k+1];
					Queue[k+1] = Queue[k] - Queue[k+1];
					Queue[k] = Queue[k] - Queue[k+1];
				}
			}
		}
	}
	cout << "Queue is Sorted" << endl;
}

int main()
{
Again:
	int choice, data;
	cout << "1. Enqueue" << endl;
	cout << "2. Dequeue" << endl;
	cout << "3. Display " << endl;
	cout << "4. Show Head" << endl;
	cout << "5. Show Tail" << endl;
	cout << "6. Factorial of Queue Elements." << endl;
	cout << "7. Display Even Numbers" << endl;
	cout << "8. Display Odd Numbers" << endl;
	cout << "9. Sort the Queue." << endl;
	cout << "10. Reverse the Queue." << endl;
	cout << "11. Display the Sum of Queue Elements." << endl;
	cout << "99. Exit" << endl;
	cout << "  ==>  ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "Enter Value ==>  ";
		cin >> data;
		Enqueue(data);
		goto Again;
	case 2:
		Dequeue();
		goto Again;
	case 3:
		Display();
		goto Again;
	case 4:
		show_head();
		goto Again;
	case 5:
		show_tail();
		goto Again;
	case 6:
		factorial();
		goto Again;
	case 7:
		display_even();
		goto Again;
	case 8:
		display_odd();
		goto Again;
	case 9:
		sort();
		goto Again;
	case 10:
		reverse();
		goto Again;
	case 11:
		display_sum();
		goto Again;
	case 99:
		goto End;
	default:
		cout << "Enter the Correct Input." << endl;
		goto Again;
	}
	End:
	return 0;
}
