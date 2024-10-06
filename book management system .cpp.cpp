#include<iostream>
using namespace std;
class books {
public:
	string book;
	string author;
	int  copies,cost;

	void details()
	{
		cout<<"\nenter the book name:\t";
		cin>>book;
		cout<<"\nenter the author name:\t";
		cin>>author;
		cout<<"\nenter the enter the no of copies available:\t";
		cin>>copies;
		cout<<"\nenter the cost of the book:\t";
		cin>>cost;
		cout<<endl;
	}
	void display()
	{

		cout<<"\nbook name:\t"<<book;
		cout<<"\nauthor name:\t"<<author;
		cout<<"\navailable copies:\t"<<copies;
		cout<<"\ncost of book\t"<<cost;
		cout<<endl;
	}
};
int main()
{
	books b[10];
	string sbook,sauthor;
	int rcopies,totalcost,flag=1;
	for(int i=0; i<3; i++)
	{
		cout<<"\n*** accept data of book "<<i+1<<"***"<<endl;
		b[i].details();
	}
	for(int j=0; j<3; j++)
	{
		for(int i=0; i<3; i++)
		{
			swap(b[i],b[i+1]);
		}
	}
	do {
		cout<<"\n enter the name of book: ";
		cin>>sbook;
		cout<<"\nenter the author name: ";
		cin>>sauthor;
		cout<<endl;
		for(int i=0; i<3; i++)
		{
			if(sbook==b[i].book && sauthor==b[i].author)
			{
				cout<<"\nenter the no of copies required: "<<endl;
				cin>>rcopies;
				if(rcopies<=b[i].copies)
				{
					totalcost=b[i].cost*rcopies;
					cout<<"\ntotal cost of required book is: "<<totalcost;
					cout<<endl;
					b[i].copies=b[i].copies-rcopies;

					cout<<"\n*******remaining books********"<<endl;
					b[i].display();
				}
				else {
					cout<<"\n**********no stock is available**************"<<endl;
				}
			}
		}
	} while(0<1);

}