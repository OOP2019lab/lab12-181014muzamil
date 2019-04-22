#include<iostream>
#include<string>
#include"shape.h"
#include"triangle.h"
#include"rectangle.h"
#include"circle.h"
using namespace std;


float sumArea(shape &Shape1,shape &Shape2)
{
float sum=Shape1.area()+Shape2.area();
return sum;
}

void main()
{
triangle t1(1.0,9.0, "Red");
circle c1(2, "Blue");
rectangle r1(6,2, "Orange");
shape s1("Purple");

cout<<t1.area()<<endl;
cout<<t1.color<<endl;
cout<<c1.area()<<endl;
cout<<r1.area()<<endl;
 
shape *sptr= &t1;
shape &sref=r1;
cout<< sptr->area()<<endl;
cout<< sptr->color<<endl;
cout<< sref.color<<endl;
cout<< sref.area()<<endl;


cout<<sumArea(t1,c1)<<endl;
cout<<sumArea(s1,r1)<<endl;
cout<<sumArea(s1,t1)<<endl;


int count= 5;
char input;

shape ** shapesArray=new shape * [count];
  for(int i=0; i<count;)
  {
  	cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
	cin>>input;
  	switch (input)
  	{
        	case '1':
				{
				float b;
				float h;
				string c;
				cout<<"Enter base,height,colour"<<endl;
              	cin>>b;
				cin>>h;
				cin>>c;
				*shapesArray[i]=triangle(b,h,c);
                i++;
              	break;
				}

        	case '2':
				{
				float l;
				float w;
				string c;
				cout<<"Enter lenght,width,colour"<<endl;
				cin>>l;
				cin>>w;
				cin>>c;
				*shapesArray[i]=rectangle(l,w,c);
				i++;
              	break;
				}
        	case '3':
				{
				float r;
				string c;
				cout<<"enter radius,colour"<<endl;
				cin>>r;
				cin>>c;
              	*shapesArray[i]=circle(r,c);
				i++;
              	break;
				}
   	 	default:
			    {
              	cout<<"Invalid input. Enter again." <<endl<<endl;
				break;
				}
       }
   }
for(int i=0;i<3;i++)
{
	cout<<shapesArray[i]->area()<<endl;
	cout<<shapesArray[i]->color<<endl;
}

}

//task 1 without virtual
//4.5
//Red
//6.2834
//12
//0
//Red
//Orange
//0

//task 2 with virtual
//4.5
//Red
//6.2834
//12
//4.5
//Red
//Orange
//12