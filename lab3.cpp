#include<iostream>
#include<iomanip>
#include<fstream>
#include<vector>
#include<cstdlib>
#include<algorithm>


  using namespace std;



  int main(){

  

   ifstream inFile("file.in",ios::in);



   if(!inFile){



    cerr << "Faied opening" <<endl;



    exit(1);



    }


    int insert,moveItem,sum,n,s;

    inFile >>n;

    const int size=n;



   int init_array[size];



   vector<int> v(size);



    for(int i=0;i<size;++i){



    inFile >>s;



    init_array[i]=s;



    }



    for(int i=0;i<size;++i){



    v.at(i)=init_array[i];



    }

    

    sort(v.begin(),v.end());



    sum=v.at(n-1)+v.at(n-2)+v.at(n-3)+v.at(n-4)+v.at(n-5);


    cout<<sum<<endl;



      return 0;

}


