#include <iostream> 
#include <conio.h> 
#include <cmath> 
 
using namespace std; 
 
int main () 
{  
double sidea, sideb, sidec, anglea, angleb, anglec, A, P, p, a, c;  const double pi = 3.14159265358979323846;                 
cout << "Enter the length of side A: "; cin >> sidea;   
cout << "Enter the length of side B: "; cin >> sideb;  
cout << "Enter the length of side C: "; cin >> sidec; 
 
anglea = ((acos((pow(sidec, 2) + pow(sidea, 2) - pow(sideb, 2)) / (2 * sidec * sidea)) *  180) / pi);  
angleb = ((acos((pow(sideb, 2) + pow(sidec, 2) - pow(sidea, 2)) / (2 * sideb * sidec)) * 180) / pi);   
anglec = ((acos((pow(sidea, 2) + pow(sideb, 2) - pow(sidec, 2)) / (2 * sidea * sideb)) * 180) / pi);  
 
 cout << "Angle A = " << anglea << endl << "Angle B = " << angleb << endl << "Angle C = " << anglec << endl;    
 cout << "Classification of the triangle by side:"; 
 
 if (sidea == sideb && sideb == sidec)     
 cout << " Equilateral Triangle"<<endl;    
 else if (sidea == sideb || sidea == sidec || sideb == sidec)     
 cout << " Isosceles Triangle"<<endl;    else      cout << " Scalene Triangle"<<endl;    
 
 P = sidea + sideb + sidec; 
p = P / 2;  
A = sqrt(p * ((p-sidea) * (p-sideb) * (p-sidec))); 
 
 cout << "Area of the triangle = " << A << endl << "Perimeter of the triangle = " << P << endl;    
 cout << "Classification of the triangle by angle: ";  
 if (anglea < 90 || angleb < 90 || anglec < 90)     
 cout << "Acute Triangle"<<endl;    
 
 else if (anglea == 90 && angleb == 90 && anglec == 90)     
 cout << "Right Triangle"<<endl;    
 else      
 cout << "Obtuse Triangle"<<endl;       
 
 a = 2 * A / P;  
 c = (sidea * sideb * sidec) / sqrt((sidea + sideb + sidec) * (sideb + sidec - sidea) * (sidea + sideb - sidec)); 
 
 cout << "Apothem of the triangle: " << a << endl << "Circumcenter of the triangle: " << c << endl;   
 
 _getch();  
 return 0; 
 
} 
