#include <iostream>
#include<string>
#include<iomanip>
#include<fstream>
#define GSt 12.5
 
using namespace std;

 
int
main ()
{
 
ofstream report;
 
 
string fullname = " ";
 
 
string birthday = " ";
 
 
string gender = " ";
 
 
string social = " ";
 
 
string nationality = " ";
 
 
string pregstatus = " ";
 
 
int age = 0;
 
 
string L1, L2, L3, L4, L5, L6, L7, L8, L9, L10, L11, L12, L13, L14;
 
double L1C, L2C, L3C, L4C, L5C, L6C, L7C, L8C, L9C, L10C, L11C, L12C, L13C,
    L14C;
 
double L1T, L2T, L3T, L4T, L5T, L6T, L7T, L8T, L9T, L10T, L11T, L12T, L13T,
    L14T;
 
 
string D1, D2, D3, D4, D5, D6, D7, D8;
 
double D1C, D2C, D3C, D4C, D5C, D6C, D7C, D8C;
 
double D1T, D2T, D3T, D4T, D5T, D6T, D7T, D8T;
 double total=0;
 
cout << "**** Welcome to  National Health Insurance****" << endl << endl;
 
 
 
cout << "Enter Full Name:" << endl;
 
 
getline (cin, fullname);
 
 
cout << "Enter Date of Birth (DD/MM/YYYY):" << endl;
 
 
getline (cin, birthday);
 
 
cout << "Enter Social Security Number:" << endl;
 
 
getline (cin, social);
 
 
cout << "Enter Nationality:" << endl;
 
 
getline (cin, nationality);
 
 
cout << "Enter Gender (F for Female or M for Male):" << endl;
 
 
getline (cin, gender);
 
 
 
if (gender == "F")
   
 
    {
     
 
cout << "Are you pregnant? (Y for pregnant or N for not pregnant):"
<<
endl;
     
 
getline (cin, pregstatus);
     
 
if (pregstatus == "Y")

 
{
 
 
pregstatus = "Pregnant";

 
}
     
 
      else

 
 
{
 
 
pregstatus = "Not Pregnant";

 
}
   
 
}
 
 
 
 
cout << "Enter Age:" << endl;
 
 
cin >> age;
 
 
 
 
 
 
if (age <= 5 or age >= 60 or pregstatus == "Pregnant")
   
 
    {
     
 
 
cout << "**** National Health Insurance Receipt ****" << endl <<

endl;
     
 
cout << "****Patient's Personal Information****" << endl;
     
 
cout << "Name: " << fullname << endl;
     
 
cout << "Birthday: " << birthday << endl;
     
 
cout << "Gender: " << gender << endl;
     
 
if (gender == "F")

 
{
 
 
cout << "Status: " << pregstatus << endl;

 
}
     
 
 
cout << "Nationality: " << nationality << endl << endl;
     
 
 
cout << "****Patient's Bill****" << endl << endl;
     
 
cout << "PATIENT IS QUALIFIED FOR FREE TREATMENT! " << endl;
   
 
}
 
 
  else
   
 
    {
     
 
cout << "Select Appropriate Laboratory and Diognostics Test." <<
endl;
     
cout << "Type Y if test is to be done or N for test not to be done." <<
endl << endl;
     
 
 
cout << "Laboratory Test List:" << endl;
     
 
cout << "Fasting Blood Glucose?" << endl;
     
cin >> L1;
     
 
cout << "Platelets?" << endl;
     
cin >> L2;
     
 
cout << "Triglycerides?" << endl;
     
cin >> L3;
     
 
cout << "CBC?" << endl;
     
cin >> L4;
     
 
cout << "CBC differential?" << endl;
     
cin >> L5;
     
 
cout << "AbO grouping?" << endl;
     
cin >> L6;
     
 
cout << "Coronary risk?" << endl;
     
cin >> L7;
     
 
cout << "Urinalysis?" << endl;
     
cin >> L8;
     
 
cout << "TSH?" << endl;
     
cin >> L9;
     
 
cout << "STI?" << endl;
     
cin >> L10;
     
 
cout << "Electrolyte Panel?" << endl;
     
cin >> L11;
     
 
cout << "Pap Smear?" << endl << endl << endl << endl;
     
cin >> L12;
     
 
 
cout << "Diagnostics Test List:" << endl;
     
 
cout << "Chest Xray?" << endl;
     
cin >> D1;
     
 
cout << "Limb Xray?" << endl;
     
cin >> D2;
     
 
cout << "Head Xray? " << endl;
     
cin >> D3;
     
 
cout << "Thyroid Ultrasound?" << endl;
     
cin >> D4;
     
 
cout << "Pan Abdominal Ultrasound?" << endl;
     
cin >> D5;
     
 
cout << "Abdominal Ultrasound?" << endl;
     
cin >> D6;
     
 
cout << "Transabdominal Ultrasound?" << endl;
     
cin >> D7;
     
 
cout << "Mammogram?" << endl;
     
cin >> D8;
     
 
 
cout << "**** National Health Insurance Receipt ****" << endl <<
endl;
     
 
cout << "****Patient's Personal Information****" << endl;
     
 
cout << "Name: " << fullname << endl;
     
 
cout << "Birthday: " << birthday << endl;
     
 
cout << "Gender: " << gender << endl;
     
 
if (gender == "F")

 
{
 
 
cout << "Status: " << pregstatus << endl;

 
}
     
 
 
cout << "Nationality: " << nationality << endl << endl;
     
 
 
cout << "****Patient's Bill****" << endl << endl;
     
 
 
cout << "~~~~~~LABORATORY TEST~~~~~~" << endl << endl;
     
if (L1 == "Y")

{
 
L1C = ((10.00 * 10) / 100);
 
L1T = ((L1C * 12.5) / 100) + L1C;
 
cout << "Fasting Blood Glucose Test ($10.00)" << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   L1C << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed << L1T
   << endl << endl << endl;

}
     
if (L2 == "Y")

{
 
L2C = ((10.00 * 10) / 100);
 
L2T = ((L2C * 12.5) / 100) + L2C;
 
cout << "Platelets ($10.00): " << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   L2C << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed << L2T
   << endl << endl << endl;

}
     
if (L3 == "Y")

{
 
L3C = ((15.00 * 10) / 100);
 
L3T = ((L3C * 12.5) / 100) + L3C;
 
cout << "Triglycerides($15.00): " << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   L3C << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed << L3T
   << endl << endl << endl;

}
     
if (L4 == "Y")

{
 
L4C = ((21.00 * 10) / 100);
 
L4T = ((L4C * 12.5) / 100) + L4C;
 
cout << "CBC($21.00): " << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   L4C << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed << L4T
   << endl << endl << endl;

}
     
if (L5 == "Y")

{
 
L5C = ((35.00 * 10) / 100);
 
L5T = ((L5C * 12.5) / 100) + L5C;
 
cout << "CBC Differential ($35.00): " << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   L5C << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed << L5T
   << endl << endl << endl;

}
     
if (L6 == "Y")

{
 
L6C = ((10.00 * 10) / 100);
 
L6T = ((L6C * 12.5) / 100) + L6C;
 
cout << "AbO Grouping ($10.00): " << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   L6C << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed << L6T
   << endl << endl << endl;

}
     
if (L7 == "Y")

{
 
L7C = ((12.00 * 10) / 100);
 
L7T = ((L7C * 12.5) / 100) + L7C;
 
cout << "Coronary risk  ($12.00): " << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   L7C << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed << L7T
   << endl << endl << endl;

}
     
if (L8 == "Y")

{
 
L8C = ((25.00 * 10) / 100);
 
L8T = ((L8C * 12.5) / 100) + L8C;
 
cout << "Urinalysis  ($25.00): " << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   L8C << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed << L8T
   << endl << endl << endl;

}
     
if (L9 == "Y")

{
 
L9C = ((45.00 * 10) / 100);
 
L9T = ((L9C * 12.5) / 100) + L1C;
 
cout << "TSH  ($45.00): " << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   L9C << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed << L9T
   << endl << endl << endl;

}
     
if (L10 == "Y")

{
 
L10C = ((60.00 * 10) / 100);
 
L10T = ((L10C * 12.5) / 100) + L1C;
 
cout << "STI  ($60.00): " << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   L10C << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed <<
   L10T << endl << endl << endl;

}
     
if (L11 == "Y")

{
 
L11C = ((30.00 * 10) / 100);
 
L11T = ((L11C * 12.5) / 100) + L1C;
 
cout << "ESR  ($30.00): " << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   L11 << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed <<
   L11T << endl << endl << endl;

}
     
if (L12 == "Y")

{
 
L12C = ((40.00 * 10) / 100);
 
L12T = ((L12C * 12.5) / 100) + L1C;
 
cout << "Electrolyte Panel ($40.00): " << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   L12C << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed <<
   L12T << endl << endl << endl;

}
     
if (L13 == "Y")

{
 
L13C = ((50.00 * 10) / 100);
 
L13T = ((L13C * 12.5) / 100) + L1C;
 
cout << "Pap Smear ($50.00): " << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   L13C << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed <<
   L13T << endl << endl << endl;

}
     
 
 
cout << "~~~~~~DIAGNOSTICS TEST~~~~~~" << endl << endl;
     
if (D1 == "Y")

{
 
D1C = ((45.00 * 10) / 100);
 
D1T = ((D1C * 12.5) / 100) + D1C;
 
cout << "Chest Xray Test ($45.00)" << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   D1C << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed << D1T
   << endl << endl << endl;

}
     
if (D2 == "Y")

{
 
D2C = ((45.00 * 10) / 100);
 
D2T = ((D2C * 12.5) / 100) + D2C;
 
cout << "Limb Xray ($45.00): " << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   D2C << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed << D2T
   << endl << endl << endl;

}
     
if (D3 == "Y")

{
 
D3C = ((50.00 * 10) / 100);
 
D3T = ((D3C * 12.5) / 100) + D3C;
 
cout << "Head Xray($50.00): " << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   D3C << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed << D3T
   << endl << endl << endl;

}
     
if (D4 == "Y")

{
 
D4C = ((150.00 * 10) / 100);
 
D4T = ((D4C * 12.5) / 100) + D4C;
 
cout << "Thyroid Ultrasound($150.00): " << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   D4C << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed << D4T
   << endl << endl << endl;

}
     
if (D5 == "Y")

{
 
D5C = ((155.00 * 10) / 100);
 
D5T = ((D5C * 12.5) / 100) + D5C;
 
cout << "Pan Abdominal Ultrasound  ($155.00): " << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   D5C << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed << D5T
   << endl << endl << endl;

}
     
if (D6 == "Y")

{
 
D6C = ((175.00 * 10) / 100);
 
D6T = ((D6C * 12.5) / 100) + D6C;
 
cout << "Abdominal Ultrasound ($175.00): " << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   D6C << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed << D6T
   << endl << endl << endl;

}
     
if (D7 == "Y")

{
 
D7C = ((250.00 * 10) / 100);
 
D7T = ((D7C * 12.5) / 100) + D7C;
 
cout << "Transabdominal Ultrasound  ($250.00): " << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   D7C << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed << D7T
   << endl << endl << endl;

}
     
if (D8 == "Y")

{
 
D8C = ((75.00 * 10) / 100);
 
D8T = ((D8C * 12.5) / 100) + D8C;
 
cout << "Mammogram   ($75.00): " << endl;
 
cout << "Total without GST @ 10%: " << setprecision (2) << fixed <<
   D8C << endl;
 
cout << "Total @10% with GST: " << setprecision (2) << fixed << D8T
   << endl << endl << endl;

}
     
 
//BEFORE GST
      double LCT1 =
L1C + L2C + L3C + L4C + L5C + L6C + L7C + L8C + L9C + L10C + L11C +
L12C + L13C;
     
double DCT1 = D1C, D2C, D3C, D4C, D5C, D6C, D7C, D8C;
     
double TotalBill1 = LCT1 + DCT1;
     
 
//WITH GST
      double LCT2 =
L1T + L2T + L3T + L4T + L5T + L6T + L7T + L8T + L9T + L10T + L11T +
L12T + L13T;
     
double DCT2 = D1T, D2T, D3T, D4T, D5T, D6T, D7T, D8T;
     
double TotalBill2 = LCT2 + DCT2;
     
 
//GST TOTAL
      double GST = TotalBill1 - TotalBill2;
     
 
cout <<
"--------------------------------------------------------------------------------------"
<< endl;
     
 
cout << "TOTAL BEFORE GST: " << setprecision (2) << fixed <<
TotalBill2 << endl;
     
cout << "GST TOTAL: " << setprecision (2) << fixed << GST << endl;
     
cout << "TOTAL WITH GST: " << setprecision (2) << fixed << TotalBill1
<< endl;
   
 
}
 report.open("Userdata.txt");
report <<"Patient name: " <<fullname <<endl;
report <<"Date of birth" <<birthday <<endl;

report <<"Social Security number:" <<social <<endl;

report <<"Nationality:" <<nationality <<endl;

report << "gender:" <<gender <<endl;
report <<"Status:" <<pregstatus <<endl;
report <<"Age: " <<age <<endl;

report.close();

report.open("LABORATORYTest.txt");
report << "Fasting Blood Glucose:" <<L1 <<endl;
 report << "Platelets:" <<L2 <<endl;
     
report << "Triglycerides:" << L3 <<endl;
         
report << "CBC:" << L4 <<endl;
   
report << "CBC differential:" <<L5 <<endl;
     
report << "AbO grouping" << L6 <<endl;
     
report << "Coronary risk?" <<L7 <<endl;
   
report << "Urinalysis?" <<L8 <<endl;
 
report << "TSH:" <<L9 <<endl;
     
report << "STI" <<L10 <<endl;
 
report << "Electrolyte Panel:" << L11 <<endl;
     
report << "Pap Smear?" << L12  << endl;

report.close();

report.open("DiagnosticsTest.txt");
report << "Chest Xray?" <<D1 <<endl;
report << "Limb Xray?" <<D2 <<endl;
report << "Head Xray? " <<D3 <<endl;
report << "Thyroid Ultrasound?" <<D4 <<endl;
report << "Pan Abdominal Ultrasound?" <<D5<<endl;
report << "Abdominal Ultrasound?" <<D6 <<endl;
report<< "Transabdominal Ultrasound?" <<D7 <<endl;
report<< "Mammogram?" <<D8 <<endl;

report.close();

report.open("Allinfotoday.txt")
report <<"Patient name: " <<fullname <<endl;
report <<"Date of birth" <<birthday <<endl;
report <<"Social Security number:" <<social <<endl;
report <<"Nationality:" <<nationality <<endl;
report << "gender:" <<gender <<endl;
report <<"Status:" <<pregstatus <<endl;
report <<"Age: " <<age <<endl;
report << "Fasting Blood Glucose:" <<L1 <<endl;
 report << "Platelets:" <<L2 <<endl;
 report << "Triglycerides:" << L3 <<endl;
report << "CBC:" << L4 <<endl;
report << "CBC differential:" <<L5 <<endl;
report << "AbO grouping" << L6 <<endl;
report << "Coronary risk?" <<L7 <<endl;
report << "Urinalysis?" <<L8 <<endl;
report << "TSH:" <<L9 <<endl;
report << "STI" <<L10 <<endl;
report << "Electrolyte Panel:" << L11 <<endl;
report << "Pap Smear?" << L12  << endl;
report << "Chest Xray?" <<D1 <<endl;
report << "Limb Xray?" <<D2 <<endl;
report << "Head Xray? " <<D3 <<endl;
report << "Thyroid Ultrasound?" <<D4 <<endl;
report << "Pan Abdominal Ultrasound?" <<D5<<endl;
report << "Abdominal Ultrasound?" <<D6 <<endl;
report<< "Transabdominal Ultrasound?" <<D7 <<endl;
report<< "Mammogram?" <<D8 <<endl;

return 0;
}
