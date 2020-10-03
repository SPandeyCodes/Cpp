#include<bits/stdc++.h>

using namespace std;
class Box{
    
    private:
          int l;
          int b;
          int h;
    public:
          Box()
          {
              l=0;
              b=0;
              h=0;
              
          }
           Box(int length,int breadth,int height)
           {
               l=length;
               b=breadth;
               h=height;
               
           }
           Box(Box &B3 )
           {
               l=B3.l;
               b=B3.b;
               h=B3.h;
           }
           
           int getLength()
           {
               return l;
           }
           int getBreadth()
           {
               return b;
           }
           int getHeight()
           {
               return h;
           }
           
           int long long CalculateVolume()
           {return l*b*h;}
           
          friend bool operator < ( Box&B1,Box& B2){
        if( (B1.l < B2.l) || ((B1.b < B2.b) && (B1.l == B2.l)) || ((B1.h < B2.h) && (B1.l == B2.l) && (B1.b == B2.b)) ){
            return true;
        }else{
            return false;
        }
       }
       ostream& operator<<(ostream&  out, const Box& B2)
{
    out << B2.l << " " << B2.b << " " << B2.h; 
    return out;
}

    
    
    
    
    
    
};

int main()
{   
    
    
    int len,bre,hei;
    int vol;
    Box B1;
    cin>>len;
    cin>>bre;
    cin>>hei;
    
    
    Box B2(len,bre,hei);
    
    Box B3(B2);
    vol=B2.CalculateVolume();
    bool x=(B1<B2);
    cout<<vol<<endl;
    //cout<<B2.getLength()<<" "<<B2.getBreadth()<<" "<<B2.getHeight()<<endl;
    out<<B2;
    
    
    return 0;
}
