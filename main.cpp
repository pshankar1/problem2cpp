#include<bits/stdc++.h>
using namespace std;
int main(){
  /***************
  runtime and algorithmic approx :6* BigO(log n)

  declaring variable to to set array elements to
  ************/
    int num,valK;
     /***************
        //user input of array amount/size
    *******************/

     cout<<"+++++++++++++++++++++++++++++"<<endl;
    cout<<"How big is the Array?"<<endl;
    cout<<"+++++++++++++++++++++++++++++"<<endl;
    
    cin>>num;//1
    /***************
    assigning user input value to array

   ******************* */
   
    int arrayA[num];//1
    /********
    putting in number values to array
   ********** */
   

   /*********
   searching through the entered value to find k
   **********/
  
    map<int,int>find;//1
    /*******
   *******/ 
    

   /******

       for loop to enter in values and run it through equation

   *******/ 
   
    for(int i=0;i<num;i++){//1
        cout<<"+++++++++++++++++++++++++++++"<<endl;
        cout<<"Please enter Positive odd integer: "<<endl;
        cout<<"+++++++++++++++++++++++++++++"<<endl;

    /*********

        assigning user input for each element
        based on i iterating through each element

   ***************/ 
    
        
        cin>>arrayA[i];//1

        /*******
             running each element through [log n]+1 equation 

        *******/ 

      
        arrayA[i]=log(arrayA[i])+1;//1
        find[arrayA[i]]++;//1
    }
    /*******

    user input for finding the k value

   *******/ 
    
    
    cout<<"Enter k value: ";
    cout<<"+++++++++++++++++++++++++++++"<<endl;
    cin>>valK;//1


  /*******
    searching through the entered elements and equation values 
    too see if k is in array or not
   *******/ 
    
    if(find.count(valK)){//1
      cout<<"+++++++++++++++++++++++++++++"<<endl;
        cout<<"K is in the array"<<endl;
        cout<<"+++++++++++++++++++++++++++++"<<endl;
    } else cout<<"+++++++++++++++++++++++++++++"<<endl;
    cout<<"K is not in the array"<<endl;
    cout<<"+++++++++++++++++++++++++++++"<<endl;
  /*******


    else statement means k is NOT in array

   *******/ 

}