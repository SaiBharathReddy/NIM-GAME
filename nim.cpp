#include <iostream>
using namespace std;
int main()
{
    int a[20],b[20],c[20],count=0,n,m,l,cont=0,cou=0,f,g,h,j,i,coun,player=1,k=0,o=0;
    cout<<"enter no of piles in a\n";
      cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter no of piles in b\n";
    cin>>m;
     for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
      cout<<"enter no of piles in c\n";
      cin>>l;
     for(i=0;i<l;i++)
    {
        cin>>c[i];
    }
  
    for(i=0;i<n;i++)
    {
        count=count+1;
    }
    cout<<"number of piles present in a\n";
    cout<<count<<"\n";
    for(i=0;i<m;i++)
    {
        cont=cont+1;
    }
    cout<<"number of piles present in b\n";
    cout<<cont<<"\n";
    for(i=0;i<l;i++)
     {
        cou=cou+1;
    }
    cout<<"number of piles present in c\n";
    cout<<cou<<"\n";
    coun=count+cont+cou;
    cout<<"Total number of piles present\n";
    cout<<coun<<"\n";
    cout<<"player who picks the last pile will be the looser\n";
    while(coun!=1)
    {
        coun=count+cont+cou;
        player=(player%2)?1:2;
        if(o==1)
        {
        	cout<<"player:"<<player<<"is the looser"<<"\n";
        	cout<<"game over";
        	exit(0);
		}
		cout<<"1.Piles to be removed from a\n2.Piles to be removed from b\n3.Piles to be removed c\n";
        cout<<"player:"<<player<<"'s turn"<<"\n";
        cin>>f;
        k=0;
        switch(f)
        {
            case 1:
                cout<<"no of piles to be removed from a\n";
                cin>>g;
              while(k<1)
              {
                if(g<=count&&count>=1)
                {
                count=count-g;
                cout<<"piles remaining in a:";
                cout<<count<<"\n";
                }
                else
                {
                    cout<<"enter smaller value\n";
                }
                k++;
            }
            if(count<=0)
            {
                cout<<"no further piles\n";
            }
             
                break;
            case 2:
            	cout<<"no of piles to be removed from b\n";
                cin>>h;
                while(k<1)
                {
				if(h<=cont&&cont>=1)
                {
                cont=cont-h;
                 cout<<"piles remaining in b:";
                cout<<cont<<"\n";
            }
                   else
                {
                    cout<<"enter smaller value\n";
                }
                k++;
                }
                 if(cont<=0)
            {
                cout<<"no further piles\n";
            }
             
                
                break;
            case 3:
                cout<<"no of piles to be removed from c\n";
                cin>>j;
                while(k<1)
                {
				if(j<=cou&&cou>=1)
                {
                cou=cou-j;
                 cout<<"piles remaining in c:";
                cout<<cou<<"\n";
                }
                   else
                {
                cin>>j;
                }
                k++;
                }
                if(cont<=0)
            {
                cout<<"no further piles\n";
            }
             break;
            }
                o=count+cont+cou;
                cout<<"Remaining piles:\n";
                cout<<o<<"\n";
        if(o!=coun)
        {
             player++;
        }
         if(o==0)
	    {
	        cout<<"game is drawn\n";
	        exit(0);
	    }
    }
}
