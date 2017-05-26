#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int m,m2,n;
	cout<<"Enter The Value of m :"<<endl;
	cin>>m;
	cout<<"Enter The Value of m2 :"<<endl;
	cin>>m2;
	while(m2>m) // in subtraction num1 is always greator
	{
		cout<<"You Entered m Smaller than m2 "<<endl;
		cout<<"Enter again"<<endl;
		cout<<"Enter The value of m :"<<endl;
		cin>>m;
		cout<<"Enter The value of m2 :"<<endl;
		cin>>m2;
	}
	char operation;
	cout<<"Enter operation :"<<endl;
	cin>>operation;
	switch(operation)
	{
		case ('+') :
			{
	int num1[m];    //arrays declaration
	int num2[m];
	int sum[m];
	int carry[m];
	carry[m-1]=0; // carry is always 0 in last digits
	
	cout<<"enter The Values of num1 :"<<endl;
	for(int i=0;i<=m-1;i++) //Loop to enter values in arrays for num1
	{
		
		cin>>n;
		while(n/10!=0)
		{
			cout<<"Enter Again :";
			cin>>n;
		}
		num1[i]=n;
	}
	cout<<"Enter The Value of num2 :"<<endl;
	for(int i=m-m2;i<=m-1;i++) //loop to enter values in arrays for num2
	{
		cin>>n;
		while(n/10!=0)
		{
			cout<<"Enter Again :";
			cin>>n;
		}
		num2[i]=n;
	}
	for(int i=0;i<=m-m2-1;i++) // loop to fill num2 0
	{
		num2[i]=0;
	}
	for(int i=m-1;i>=0;i--) //for loop to calculate sum
	{
		sum[i]=num1[i]+num2[i]+carry[i];
		if(sum[i]>=10&&i!=0)
		{
			carry[i-1]=sum[i]/10;
			sum[i]=sum[i]%10;
		}
		else if (i!=0) carry[i-1]=0;
	}

	cout<<"sum =";
	for(int i=0;i<=m-1;i++) //for loop to display result
	{
		cout<<sum[i];
	}
break;
			}
			case ('-') :
				{
int num1[m];
int num2[m];
int subt[m];

cout<<"Enter The Value of num1 :"<<endl;
for(int i=0;i<=m-1;i++) //loop for fill num1
{
	cin>>n;
	while(n/10!=0)
	{
		cout<<"enter again";
		cin>>n;
	}
	num1[i]=n;
}
	
cout<<"Enter The Value of num2 :"<<endl;
for(int i=m-m2;i<=m-1;i++) //loop for fill num2
{
	cin>>n;
	while(n/10!=0)
{

cout<<"enter again";
cin>>n;

}
num2[i]=n;
}

for(int i=0;i<=m-m2-1;i++) // loop to fill num2 0
	{
		num2[i]=0;
	}
for(int i=m-1;i>=0;i--) //loop to calculate subtract
{
	if(num1[i]<num2[i])
	{
		num1[i-1]=num1[i-1]-1;
		num1[i]=num1[i]+10;
		
	}
	  subt[i]=num1[i]-num2[i];
}
cout<<"subt =";
for(int i=0;i<=m-1;i++) //loop to display result
{
	cout<<subt[i];
}
break;

			}
			case('*') :
				{
	int num1[m+m];    //arrays declaration
	int num2[m+m];
	int multiply[m][m+m];
	int totalmul[m+m];
	int carry[m+m];
	carry[m+m-1]=0;
	cout<<"Enter The Value of n for num1 of column :"<<endl;
	for(int x=0;x<m+m;x++) //loop to fill num 0
	{
		num1[x]=0;
		num2[x]=0;
	}
	for(int i=m;i<m+m;i++) //Loop to enter values in arrays for num1
	{
		
		cin>>n;
		while(n/10!=0)
		{
			cout<<"Enter Again :";
			cin>>n;
		}
		num1[i]=n;
	}
	cout<<"Enter The Value of n for num2 of column : "<<endl;
	for(int i=m;i<m+m2;i++) //loop to enter values in arrays for num2
	{
		
		cin>>n;
		while(n/10!=0)
		{
			cout<<"Enter Again :";
			cin>>n;
		}
		num2[i]=n;
	}
	for(int i=0;i<m;i++) // loop to fill mul 0
	{
		for(int j=0;j<m+m;j++)
		{
			multiply[i][j]=0;
		}
	}
	
	for(int i=0,k=m+m-1;i<m&&k>=0;i++,k--) //for loop to calculate mul
	{
			for(int j=m+m-1;(j-i)>=0;j--)
			{
			
				multiply[i][j-i]=num1[j]*num2[k]+carry[j];
				if(multiply[i][j-i]>=10&&j!=0) // carry or mul 2
			{
			carry[j-1]=multiply[i][j-i]/10;
			multiply[i][j-i]=multiply[i][j-i]%10;
			}	
		else if (j!=0) carry[j-1]=0;
			
		
}

	}
	for(int i=m+m-1;i>=0;i--)
	{
		totalmul[i]=0;
		for(int j=0;j<m;j++) //loop for total sum
		{
			totalmul[i]=totalmul[i]+multiply[j][i];	
		}
		totalmul[i]=totalmul[i]+carry[i];
			if(totalmul[i]>=10&& i!=0) // carry or mul 2
			{
			carry[i-1]=totalmul[i]/10;
			totalmul[i]=totalmul[i]%10;
			}	
			
		else if(i!=0)  carry[i-1]=0;
		
	}
	cout<<"total mul =";
	for(int i=0;i<m+m2;i++)
	{
		cout<<totalmul[i];
	}
break;
				}
		case('/') :
			{
	int num1[m];
	int num2[m2];
	int div[m];
for(int i=0;i<=m-1;i++) //fill div=0
{
	div[i]=0;
}	
	
	
	cout<<"Enter The Value of n for num1 of column :"<<endl;
	for(int i=0;i<m;i++) //Loop to enter values in arrays for num1
	{
		
		cin>>n;
		while(n/10!=0)
		{
			cout<<"Enter Again :";
			cin>>n;
		}
		num1[i]=n;
	}
	cout<<"Enter The Value of n for num2 of column : "<<endl;
	for(int i=0;i<m2;i++) //loop to enter values in arrays for num2
	{
		
		cin>>n;
		while(n/10!=0)
		{
			cout<<"Enter Again :";
			cin>>n;
		}
		num2[i]=n;
	}
	
	
	for(int i=0;i<m2-1;i++)
	{
		num2[i+1]=(num2[i]*10)+num2[i+1];
	}
	for(int i=0;i<=m-1;i++ ){///looop of division
		if(num2[m2-1]>num1[i]){
		
		num1[i+1]=(num1[i]*10)+num1[i+1];
       num1[i]=0;
	   }
		else 
		div[i]=num1[i]/num2[m2-1];
	num1[i]=num1[i] % num2[m2-1];
		num1[i+1]=(num1[i]*10)+num1[i+1];
		cout<<endl;
	
	}
	cout<<"div=";
	for(int i=0;i<=m-1;i++)
	{
		cout<<div[i];
	}
break;
			}	
			default : cout<<"case is un defined";
	}
	_getch();
}