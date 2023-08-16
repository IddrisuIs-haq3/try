 #include <iostream>
 using namespace std;
 			
 		//RASHID PASSWORD//
 string password[2]={"rashid123","rash"};
  string r_pass,user;
  	
class Rashid{
	public:
		//RASHID PERFORMANCE INFO
		void rashid_perfomance(){
			cout<<"**********************\n";
			cout<<"The performance of rashid 70%";
		}
		//RASHID'S ATTENDANCE INFOR
		void rashid_attendance(){
			cout<<"**********************";
			cout<<"30 out of 40";
		}
		
		//RASHID GRADE INFOR
		void rashid_grade(){
	cout<<"\nCOURSE"<<"   "<<"    CREDIT"<<" "<<"     GRADE"<< " "<<"           CGPA"<<endl;
	cout<<"\nMathematics"; cout<<"|    3";cout<<"   |           A"<<"   |       3.17";
	cout<<"\nProbability"; cout<<"|    3";cout<<"   |           B+"<<"  | ";
	cout<<"\nEletronics"; cout<<" |    3";cout<<"   |           B"<<"   | ";
	cout<<"\nFrench "; cout<<"    |    3";cout<<"   |           C+"<<"  | ";
		}
	 
	 };
		
 	 

 					// CLASS FOR DAVID 
 
 string password1="bronya123";
 string d_pass;
  class David{
	public:
				//DAVID'S PERFORMANCE
		void david_perfomance(){
			cout<<"\n**************************\n";
			cout<<"The performance of rashid 70%";
		}
		
				//DAVID ATTENDANCE
		void david_attendance(){
		cout<<"\n**************************\n";
			cout<<"32 out of 40";
		}
		
				// DAVID'S GRADES
		void david_grade(){
	cout<<"\nCOURSE"<<"   "<<"    CREDIT"<<" "<<"     GRADE"<< " "<<"           CGPA"<<endl;
	cout<<"\nMathematics"; cout<<"|    3";cout<<"   |           A"<<"   |       3.43";
	cout<<"\nProbability"; cout<<"|    3";cout<<"   |           B+"<<"  | ";
	cout<<"\nEletronics"; cout<<" |    3";cout<<"   |           B"<<"   | ";
	cout<<"\nFrench "; cout<<"    |    3";cout<<"   |           A"<<"  | ";
		}
	 
	 };
		
 	 

 					// CLASS FOR IDDRISU
 
 // IDDRISU PASSWORD
 string password2="iddrisu123";
  string i_pass;
 class Iddrisu{
	public:
		
	//IDDRISU PERFORMANCE
		void iddrisu_performance(){
			cout<<"\n****************************\n";
			cout<<"The performance of Iddrisu  70%";
		}
		
		//IDDRISU ATTENDANCE
		void iddrisu_attendance(){
		cout<<"**********************";
		cout<<"38 out of 40";
		}
			
		//  IDDRISU GRADE
		void iddrisu_grade(){
	cout<<"\nCOURSE"<<"   "<<"    CREDIT"<<" "<<"     GRADE"<< " "<<"           CGPA"<<endl;
	cout<<"\nMathematics"; cout<<"|    3";cout<<"   |           A"<<"   |       3.55";
	cout<<"\nProbability"; cout<<"|    3";cout<<"   |           B+"<<"  | ";
	cout<<"\nEletronics"; cout<<" |    2";cout<<"   |           A"<<"   | ";
	cout<<"\nFrench "; cout<<"    |    3";cout<<"   |           C+"<<"  | ";
		}
	 
	 };
		
 	 
  
//  
 
int main(){
	
  
	int choice;
	string errormess="Account block contact IT directorial for more information";
  int chioce,select;
  string username;
 
cout<<"    UENR INFORMATICS SCHOOL MANAGEMENT SYS!\n";
cout<<"    ______________________________________"<<endl<<endl;	 
cout<<"  1.Check Student Performance"<<endl;
cout<<"  2.Check Student attendance"<<endl;
cout<<"  3.Check Student grades\n"<<endl;
cout<<"  Select your option: ";
cin>>choice;
	switch(choice){
		
	// PERFORMANCE FOR ALL STUDENT	
	 case 1:
	 			restart:
	 	cout<<"\n   STUDENTS IN  UENR INFORMATICS"<<endl;
	 	cout<<"   _____________________________"<<endl;
	    cout<<"  1.Rashid Emoro "<<endl;
	    cout<<"  2.Bronya David "<<endl;
	    cout<<"  3.Iddrisu Ishaq "<<endl<<endl;
	    cout<<"  Select a Student From The List To See His/Her Performance: ";
	    cin>>select;
	    
	    	switch(select){
	    	 case 1:
	    	  			// RASHID PERFORMANCE
 	    		for(int attempt=1;attempt<=3;attempt++){
   	    		 	cout<<"  Enter Rashid's Password: "; 
	    		 	cin>>r_pass;
	    		 	
	    		 if(r_pass==password[0]){
	    		 	// object for rashid class 
						Rashid infor1;
	    		 	 infor1.rashid_perfomance();
	    		 	 break;
				 }
		
			else{
			cout<<"  Invalid Password. Tryagain\n";
		}
	   	
 	}
  			 if(r_pass!=password[0]){
 	    		 	cout<<"\n"<<errormess;
 	    		 	return 0;
				 }
				 break;
		case 2:
			// Bronya's performance
			for(int attempt=1;attempt<=3;attempt++){
   	    		 	cout<<"  Enter Bronya's Password: "; 
	    		 	cin>>d_pass;
	    		 	
	    		 if(d_pass==password1){
	    		 	// object for David class 
						David david;
	    		 	   david.david_perfomance();
	    		 	 break;
				 }
		
			else{
			cout<<"  Invalid Password. Tryagain\n";
		}
	   	
 	}
  			 if(d_pass!=password1){
 	    		 	cout<<"\n "<<errormess;
 	    		 	return 0;
				 }
			break;
		
				 
		// Iddrisu Performance 
	   case 3:
	      for(int attempt=1;attempt<=3;attempt++){
   	    		 	cout<<"  Enter Iddrisu's Password: "; 
	    		 	cin>>i_pass;
	    		 	
	    		 if(i_pass==password2){
	    		 	// object for Iddrisu class 
						Iddrisu iddrisu;
						iddrisu.iddrisu_performance();
 	    		 	 break;
				 }
		
			else{
			cout<<"  Invalid Password. Tryagain\n";
		}
	   	
 	   }
  			 if(i_pass!=password2){
 	    		 	cout<<"\n"<<errormess;
 	    		 	return 0;
				 }
		default:
			 cout<<"Invalid Option";
 				}
	
        		return 0;

 // student's attendance
   case 2:
  	 	cout<<"\n   STUDENTS IN  UENR INFORMATIS"<<endl;
	 	cout<<"   _____________________________"<<endl;
	    cout<<"  1.Rashid Emoro "<<endl;
	    cout<<"  2.Bronya David "<<endl;
	    cout<<"  3.Iddrisu Ishaq "<<endl<<endl;
	    cout<<"  Select a Student From The List: ";
	    cin>>select;
	    
	    	switch(select){
	     case 1:
	    	  // Rashid Attendance
 	    		for(int attempt=1;attempt<=3;attempt++){
   	    		 	cout<<"  Enter Rashid's Password: "; 
	    		 	cin>>r_pass;
	    		 	
	    		 if(r_pass==password[0]){
	    		 	// object for rashid class 
						Rashid infor1;
	    		 	 infor1.rashid_attendance();
	    		 	 break;
				 }
		
			else{
			cout<<"  Invalid Password. Tryagain\n";
		}
	   	
 	}
  			 if(r_pass!=password[0]){
 	    		 	cout<<"\n"<<errormess;
 	    		 	return 0;
				 }
				 break;
		
		 // Bronya's Attendance		 
		case 2:
			for(int attempt=1;attempt<=3;attempt++){
   	    		 	cout<<" Enter Bronya's Password: "; 
	    		 	cin>>d_pass;
	    		 	
	    		 if(d_pass==password1){
	    		 	// object for David class 
						David david;
	    		 	   david.david_attendance();
	    		 	 break;
				 }
		
			else{
			cout<<"  Invalid Password. Tryagain\n";
		}
	   	
 	}
  			 if(d_pass!=password1){
 	    		 	cout<<"\n "<<errormess;
 	    		 	return 0;
				 }
			break;
				 
		// Iddrisu Atttendance 
	   case 3:
	      for(int attempt=1;attempt<=3;attempt++){
   	    		 	cout<<"   Enter Iddrisu's Password: "; 
	    		 	cin>>i_pass;
	    		 	
	    		 if(i_pass==password2){
	    		 	// object for Iddrisu class 
						Iddrisu iddrisu;
						iddrisu.iddrisu_performance();
 	    		 	 break;
				 }
		
			else{
			cout<<" Invalid Password. Tryagain\n";
		}
	   	
 	   }
  			 if(i_pass!=password2){
 	    		 	cout<<"\n"<<errormess;
 	    		 	return 0;
				 }
		default :
			 cout<<"Invalid Option.\n";
			   goto restart;
				}
				
	// student grades details
	case 3:
 		cout<<"\n   STUDENTS IN  UENR INFORMATICS"<<endl;
	 	cout<<"   _____________________________"<<endl;
	    cout<<"  1.Rashid Emoro "<<endl;
	    cout<<"  2.Bronya David "<<endl;
	    cout<<"  3.Iddrisu Ishaq "<<endl<<endl;
	    cout<<"  Select a Student From The List: ";
	    cin>>select;
	    
	    	switch(select){
	     case 1:
	    	  // Rashid Grade
 	    		for(int attempt=1;attempt<=3;attempt++){
   	    		 	cout<<"  Enter Rashid's Password: "; 
	    		 	cin>>r_pass;
	    		 	
	    		 if(r_pass==password[0]){
	    		 	// object for rashid class 
						Rashid infor1;
	    		 	 infor1.rashid_grade();
	    		 	 break;
				 }
		
			else{
			cout<<"  Invalid Password. Tryagain\n";
		}
	   	
 	}
  			 if(r_pass!=password[0]){
 	    		 	cout<<"\n"<<errormess;
 	    		 	return 0;
				 }
				 break;
		
		 // Bronya's Grade		 
		case 2:
			for(int attempt=1;attempt<=3;attempt++){
   	    		 	cout<<"  Enter Bronya's Password: "; 
	    		 	cin>>d_pass;
	    		 	
	    		 if(d_pass==password1){
	    		 	// object for David class 
						David david;
	    		 	   david.david_grade();
	    		 	 break;
				 }
		
			else{
			cout<<"  Invalid Password. Tryagain\n";
		}
	   	
 	}
  			 if(d_pass!=password1){
 	    		 	cout<<"\n"<<errormess;
 	    		 	return 0;
				 }
			break;
				 
		// Iddrisu Grades 
	   case 3:
	      for(int attempt=1;attempt<=3;attempt++){
   	    		 	cout<<"  Enter Iddrisu's Password: "; 
	    		 	cin>>i_pass;
	    		 	
	    		 if(i_pass==password2){
	    		 	// object for Iddrisu class 
						Iddrisu iddrisu;
						iddrisu.iddrisu_grade();
 	    		 	 break;
				 }
		
			else{
			cout<<"  Invalid Password. Tryagain\n";
		}
	   	
 	   }
  			 if(i_pass!=password2){
 	    		 	cout<<"\n"<<errormess;
 	    		 	return 0;
				 }
		return 0;
		
		default:
			 cout<<"Invalid Option";
			  goto restart;
				}
	
}
	return 0;
}
 
	
	

	  

