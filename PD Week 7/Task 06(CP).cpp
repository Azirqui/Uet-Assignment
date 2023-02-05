#include <iostream>
using namespace std;
void hospital_management(int number);
main()
{
	int number;
	cout << "Enter the period for which you need to make calculations: ";
	cin >> number;
	hospital_management(number);
}
void hospital_management(int number)
{
	int current_patients;
	int treated_patients=0;
	int untreated_patients=0;
	int count_doctors = 7;
	int treated=0;
	int untreated=0;
	
	for (int i = 1; i <= number; i++)
	{
		cout << "Enter number of patients : ";
		cin >> current_patients;
		if ((i % 3 != 0) && (current_patients > count_doctors) )
		{
			treated_patients =  count_doctors;
			untreated_patients =current_patients - count_doctors;
		}
		if((current_patients  <= count_doctors) && (i % 3 != 0))
		{
			treated_patients =current_patients;
			untreated_patients = 0;
			

		}
		if ((i % 3 == 0) && (current_patients > count_doctors))
		{
			count_doctors++;
			treated_patients = count_doctors;
			untreated_patients = current_patients - count_doctors;
		}
		if ((i % 3 == 0) && (current_patients < count_doctors))
		{
			treated_patients =current_patients;
			untreated_patients = 0;
		}
		treated = treated+treated_patients;
		untreated = untreated + untreated_patients;
	}
	cout << "Treated Patients: " << treated<<endl;
	cout << "Untreated Patients: " << untreated;
}