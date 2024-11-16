#include<iostream>
#include<vector>
int main()
{
  std::vector<int>twoAdd(const std::vector<int>&a,const std::vector<int>&b);
    std::vector<int>V1={1,2,3,4,5};
    std::vector<int>V2={1,1,1,1,1};//赋值
    std::vector<int>V4=twoAdd(V1,V2);
    V4.insert(V4.begin(),V1.front());
    std::cout<<V1[0]<<std::endl;
    std::cout<<"你好 Git!"<<std::endl;
    return 0;
}

std::vector<int>twoAdd(const std::vector<int>&a,const std::vector<int>&b)
{
   std::vector<int>C;
   C.resize(a.size());
   for(int i=0;i<a.size();i++)
   {
    C[i]=a[i]+b[i];
   }
   return C;
   
}