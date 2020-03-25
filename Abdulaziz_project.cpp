#include<iostream>
#include<cmath>

using namespace std; 

int main()
{
	int choice1,math, num1 , num2; 
		float x; 
  float bmi,hgh, wgh;   //better to have them as floating point values 

	do{

	        cout<<endl<<"             * welcome to Abdulaziz project *"<<endl; 
	
			cout<<"**************************************************"<<endl;
			
				cout<<"*        *      choose the service you want      * "<<endl; 

				cout<<"*        *      1- mathmatical calculation       *"<<endl; 
				
				cout<<"*        *      2- body mass calculation         *"<<endl; 
				
				cout<<"*        *      3- number square root            *"<<endl; 
				cout<<"**************************************************"<<endl; 
				cin>>choice1; 

	} while((choice1>=4) || (choice1<=0));
 
	if (choice1==1)
	{
       			do
				   {
       				
						cout<<"you cant use zero for the operation"<<endl;    
		 		        cout<<"enter the first number : "<<endl; 
		 		     	cin>>num1;
		 				cout<<"enter the second number : "<<endl; 
		 				cin>>num2;
                 }while(num1==0 || num2==0);    //this do-while will make sure that user 
  												//will not proceed unless the values are non-zero

 					cout<< "choose the mathmatical operation : "<<endl; 
 					do {
							cout<<" Choose a value from 1 to 5"<<endl;
		 					cout<< " 1- addition "<<endl; 
		 					cout<< " 2- subtraction "<<endl;
		 					cout<< " 3-multiplication "<<endl; 
		 					cout<< " 4- division "<<endl; 
		 					cout<< " 5- modulus"<<endl; 
		 					cin>>math;	
					  } while(math<1 || math >5);//this do-while will make sure that user 
  												//will not proceed unless the values are from 1 - 5

 			  		 		
 			if(math==1)
 			
  				cout<<"the result is = "<<num1+num2<<endl; 
  				
 				else if (math==2)
  				cout<<"the result is = "<<num1-num2<<endl; 
  				
 				else if (math==3)
 				 cout<<"the result is = "<<num1*num2<<endl; 
 				 
 				else if (math==4)
  					cout<<"the result is = "<<num1/num2<<endl;
  					
 				else if (math==5)
 					cout<<"the result is = "<<num1%num2<<endl; 

	}

    else if (choice1==2)
				{
 				cout<<"you choose body mass calculation "<<endl; 

  				cout<<"enter your height by meter"<<endl;
 				cin>>hgh; 
 				
 				cout<<"enter your weight"<<endl; 
 				cin>>wgh; 
 				bmi=wgh/(hgh*hgh);  // = is needed instead of <<
		
				 
					 cout<<"your body mass is = "<<bmi<<endl;  //you forgot to add bmi to the cout statement
				
				//may be it's useful to add if the person is obese, underweight, over weight 
				//instead of only printing the bmi	 
					 
	} else if (choice1==3)
					
					
        	{
 			cout<<"you choose square root operation "<<endl;
			  
 			cout<<"enter the number to find the square root : "<<endl;
				  
 			cin>>x; 

 		    cout<<"the result is = "<<sqrt(x)<<endl; 

    	   }     //extra else was removed since it does not do anything

		return 0; 

}
