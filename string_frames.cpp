#include <iostream>
#include<string.h>//we observed that after adding these header files the run time has decreased 
#include<stdlib.h>
int sz=0;

using namespace std;
class frame{
	public:
		string s;
		int seq;
		frame()
		{
			s=" ";
			seq=0;
		}
		void dispaly()
		{
			cout<<s<<"\t";
			cout<<seq<<endl;
		}
};


int main() {
	
	int sz,len,l,h,i,j,k=0,p,q;
	string x;
	cout<<"enter a string "<<endl;
	getline(cin,x);
	cout<<"enter the size of the frame: ";
	cin>>sz;
	
	len=x.length();
	l=len/sz;
	h=len%sz;
	if(h!=0)
	l=l+1; //the string will be divided in these number of frames
	
    frame a[l];//creating an array of class of size l(number of frames possible)	
	
	
	for(i=0;i<l;i++)
	{
		frame obj;//creating object of the class
		obj.seq=i;
		for(j=0;j<sz;j++) //breaking a string into size of sz
		{
			if(k+1 > len)
			break;
			obj.s=obj.s+x.at(k);
			k++;
		}
		a[i]=obj;
		//cout<<obj.s;

	 }
	 cout<<"\n Frames \n";
	 for(i=0;i<l;i++)
	 { 
	    a[i].dispaly();
	  } 

    frame temp; // shuffling using rand()
    for(i=0;i<l;i++)
    {
    	p=rand()%l;
    	q=rand()%l;
    	temp=a[p];
    	a[p]=a[q];
    	a[q]=temp;
    	
	}
	cout<<endl<<"after shuffling \n";
	for(i=0;i<l;i++)
     a[i].dispaly();
	 
	
	cout<<"after sorting \n";
	for(i=0;i<l;i++)
	{
		for(j=0;j<l-i-1;j++)
		{
			if(a[j].seq < a[j+1].seq)
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
							
			}
						
		}
	}
		for(i=0;i<l;i++)
		a[i].dispaly();
	return 0;
}

