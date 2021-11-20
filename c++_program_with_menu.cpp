#include <iostream>




/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
float note1,note2,note3,add,moy;
int b;
cout<<"***********************************************************"<<endl;
cout<<"*** Choice of an operation in a menu and its execution ***"<<endl;
cout<<"***********************************************************"<<endl;
cout<<"Veuillez saisir la note 1 >>: "<<endl;
cin>>note1;
cout<<"Veuillez saisir la note 2 >>: "<<endl;
cin>>note2;
cout<<"Veuillez saisir la note 3 >> : "<<endl;
cin>>note3;




cout<<"****************************"<<endl;
cout<<"---------> Menu <----------"<<endl;
cout<<"(1)----> Somme <---------"<<endl;
cout<<"(2)----> Average <---------"<<endl;
cout<<"(3)-----> Product <-------"<<endl;
cout<<"****************************"<<endl;
cout<<"                       "<<endl;
cout<<"Please choose an operation! :>>"<<endl;
cin>>b;




if (b==1)
{
add=note1+note2+note3;
cout<<"la somme est "<<add<<endl;
}
else
{
if (b==2)
{
moy=(note1+note2+note3)/3;
cout<<"la moyenne est "<<moy<<endl;
}
else
{
if (b==3)
{
add=note1*note2*note3;
cout<<"le produit est "<<add<<endl;
}
}
}


return 0;
}
