#include<iostream>
#include<iomanip>
#include<fstream>
#include<vector>
#include<cstdlib>
#include<algorithm>


  using namespace std;



  int main(){



   const int size=8;



   int init_array[size];



   vector<int> v(size);

   

   int insert,moveItem,sum,n,s;

  

   ifstream inFile("file.in",ios::in);



   if(!inFile){



    cerr << "Faied opening" <<endl;



    exit(1);



    }



   ofstream outFile("file.out",ios::out);



   if(!outFile){



    cerr << "Faied opening" <<endl;



    exit(1);



    }



    inFile >>n;



    for(int i=0;i<size;++i){



    inFile >>s;



    init_array[i]=s;



    }



    for(int i=0;i<size;++i){



    v.at(i)=init_array[i];



    }

    

    sort(v.begin(),v.end());



    sum=v.at(7)+v.at(6)+v.at(5)+v.at(4)+v.at(3);


    outFile <<sum<<endl;



      return 0;

}


