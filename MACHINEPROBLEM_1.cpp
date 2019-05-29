#include<iostream> 
#include<string.h> 
#include<iomanip> 
 
using namespace std; 
 
int main() 
{  
int num_of_students=1;  
string name[num_of_students];  
double e1[num_of_students], e2[num_of_students], e3[num_of_students], e4[num_of_students];  
double s1[num_of_students], s2[num_of_students], s3[num_of_students], s4[num_of_students];  
double m1[num_of_students], m2[num_of_students];  
double prelims[num_of_students], finals[num_of_students];  
double prelims_w[num_of_students], prelims_p[num_of_students];  
double finals_w[num_of_students], finals_p[num_of_students];  
double final_grade[num_of_students];  
double transmutated_grade[num_of_students];   
   
for(int i=0; i<num_of_students; i++)  

{   
cout<<"Enter Student's name: "; cin>>name[i];   
cout<<"Experiment 1: "; cin>>e1[i];   
cout<<"Experiment 2: "; cin>>e2[i];      
cout<<"Experiment 3: "; cin>>e3[i];      
cout<<"Experiment 4: "; cin>>e4[i];      
cout<<"Skills Test 1: "; cin>>s1[i];      
cout<<"Skills Test 2: "; cin>>s2[i];      
cout<<"Skills Test 3: "; cin>>s3[i];      
cout<<"Skills Test 4: "; cin>>s4[i];      
cout<<"Machine Problem 1: "; cin>>m1[i]; 
cout<<"Machine Problem 2: "; cin>>m2[i];      
cout<<"Written Prelims: "; cin>>prelims_w[i];      
cout<<"Prelims Practical: "; cin>>prelims_p[i];      
cout<<"Written Finals: "; cin>>finals_w[i];      
cout<<"Finals Practical: "; cin>>finals_p[i];     

final_grade[i] += e1[i]/100*5;   
final_grade[i] += e2[i]/100*5;   
final_grade[i] += e3[i]/100*5;   
final_grade[i] += e4[i]/100*5;   
final_grade[i] += s1[i]/100*5;   
final_grade[i] += s2[i]/100*5;   
final_grade[i] += s3[i]/100*5;   
final_grade[i] += s4[i]/100*5;   
final_grade[i] += m1[i]/100*10;   
final_grade[i] += m2[i]/100*10;   
final_grade[i] += (prelims_w[i] + prelims_p[i]) /100*20;   
final_grade[i] += (finals_w[i] + finals_p[i]) /100*20;  
} 
 
 for(int i=0; i<num_of_students; i++)  
 {   
 if(final_grade[i] >= 60.00 && final_grade[i] <= 64.44 )   
 {    
 transmutated_grade[i] = 3.00;   
 }   
 else if(final_grade[i] >= 64.45 && final_grade[i] <= 68.89 )   
 {   
 transmutated_grade[i] = 2.75;   
 }   
 else if(final_grade[i] >= 68.90 && final_grade[i] <= 73.33 )   
 {    
 transmutated_grade[i] = 2.50;   
 }   
 else if(final_grade[i] >= 73.34 && final_grade[i] <= 77.78 )   
 {    
 transmutated_grade[i] = 2.25;    
 }   
 else if(final_grade[i] >= 77.79 && final_grade[i] <= 82.22 )   
 { 
 transmutated_grade[i] = 2.00;   
 }   
 else if(final_grade[i] >= 82.23 && final_grade[i] <= 86.67 )   
 {    
 transmutated_grade[i] = 1.75;   
 }   
 else if(final_grade[i] >= 86.68 && final_grade[i] <= 91.11 )   
 {    
 transmutated_grade[i] = 1.50;   
 }   
 else if(final_grade[i] >= 91.12 && final_grade[i] <= 96.56 )  
{    
transmutated_grade[i] = 1.25;   
}   
else if(final_grade[i] >= 95.57 )   
{    
transmutated_grade[i] = 1.00;   
}  
else   
{    
transmutated_grade[i] = 5.00;   
}  
}    
cout<<endl;  
cout<<"Name"<<"\t\t\t"<<"Final Grade"<<"\t\t\t"<<"Transmutated"<<"\t\t\t"<<"Pass/Fail"<<endl;  
for(int i=0; i<num_of_students; i++)
{   
cout<<fixed<<setprecision(2)<<left; 
cout<<name[i]<<"\t\t\t"<<final_grade[i]<<"\t\t\t\t"<<transmutated_grade[i] <<"\t\t\t\t";   
if(transmutated_grade[i] <= 3)
{    
cout<<"Pass"<<endl;   
}else{    
cout<<"Fail"<<endl;   
} 
}
for(int i=0; i<num_of_students-1; i++)
{   
for(int j= i+1; j<num_of_students; j++)
{    
if(final_grade[i] < final_grade[j])
{     
string temp1 = name[i];     
name[i] = name[j];     
name[j] = temp1;          
double temp2 = final_grade[i];     
final_grade[i] = final_grade[j];     
final_grade[j] = temp2;    
}   
}  
}    for(int i=0; i<10; i++){   
cout<<"Top "<<i+1<<" :"<<name[i]<<endl;  } }      

