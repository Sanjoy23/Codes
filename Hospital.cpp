// C++ program to implement the Hospital
// Management System
#include <bits/stdc++.h>
using namespace std;

// Store the data of Hospital
class Hospital {
public:
	string Hospital_name;
    string Physician_name;
	string speciality;
	string Indoor_physician_category; // indoor, outdoor or emergency;
	int Phy_id;
	int Physician_limit;


};


 bool admit(Patient & p, Indoor & I){
        if(I.Physician_limit)return true;
        else return false;
    }


// Stores the data of Patient
class Patient : public Hospital {
public:
	string Patient_name;
	int Patient_id;
};

// Stores the data of Physician

class Physician : public Hospital {
public:
	string Physician_name;
	string speciality;
	string physician_category; // indoor, outdoor or emergency;
	int Phy_id;
	int Physician_limit;

};

 void showStatus(string hospital_name[], string Patient_name[], string Indoor_Physician_Name[]){


            freopen("out.txt","w",stdout);

            for(int i=0; i<hospital_name.size(); i++){
                cout<<hospital_name[i]<<endl;
                cout<<"Total Admitted Patient: ", Patient_Name.size()<<endl;
                cout<<"Total Indoor Physician: ", Indoor_Physician_Name.size()<<endl;
            }

            for(int i=0; i<Indoor_Physician_Name.size(); i++){


                    cout<<"Dr "<< Indoor_Physician_Name[i]<<"has following patients:";

                    for(int j =0; j<Patient_name.size(); j++){
                        cout<<"Mr. "<<Patient_name[j]<<endl;
                    }


            }


 }

 map<string, string> allocated;
void allocated_physician(Patient & p, indoorPhysician & i){


    if(admit(Patient & p, indoorPhysician & i)){
        allocated[i] = p;
    }

}


void read_file(string file_name){
    freopen("in.txt",stdin, 'r');

    string Hospital_name;
    string Physician_name;
	string speciality;
	string Indoor_physician_category; // indoor, outdoor or emergency;
	int Phy_id;
	int Physician_limit;


	cin >> Hospital_name >> Physician_name >> speciality >> Indoor_physician_category;
	cin >> phy_id >> Physician_limit;
}




// Function to implement Hospital
// Management System
void HospitalManagement(
	string patient_Name[], int patient_Id[],
int indoor[],
	string hospital_Name[],
	string Physician_Name[], int Physician_ID[])
{
	// Stores the Hospital data
	// and user data
	vector<Hospital> hospitals;

	// Create Objects for hospital
	// and the users
	Hospital h;

	// Initialize the data
	for (int i = 0; i < 4; i++) {
		h.Hospital_name = hospital_Name[i];
		h.indor_physician_name = indoor_Physician_Name[i];
		h.Physician_limit = limit[i];
		hospitals.push_back(h);
	}

	// Stores the patient data
	vector<Patient> patients;
	Patient p;

	// Initialize the data
	for (int i = 0; i < 4; i++) {
		p.P_name = patient_Name[i];
		p.P_id = patient_Id[i];
		patients.push_back(p);
	}

	cout << endl;
	printsDetails(string patient_Name[], int patient_Id[],
int indoor[],
	string hospital_Name[],
	string Physician_Name[], int Physician_ID[])


}
