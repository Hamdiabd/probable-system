#include <iostream.h>
#include <fstream.h>
#include <string.h>
void st(){ofstream con;
ofstream kcon;
ofstream su; 
ofstream mod;	
ofstream stu; const int w=80000;
stu.open("ffi",std::ios::app);
int mo;

string name,t,sec,le,da,ye,moo,ro;
getline(cin,name);
     cout << "الاسم: ";   getline(cin,name);	
   	stu<< "الاسم:"<<name<<endl;	
	cout << "التلفون:"; getline(cin,t);	
   	stu<< "رقم التلفون"<<t<<endl;	
	cout << "القسم:"; getline(cin,sec);	
   	stu<< "القسم:"<<sec<<endl;
	cout << "المستوى:"; getline(cin,le);	
   	stu<< "المستوى:"<<le<<endl;
	cout << "تاريخ التسجيل باليوم"; 
              	getline(cin,da);
   	stu<< "تاريخ التسجيل باليوم"<<da<<endl;
	cout << "تاريخ التسجيل بالشهر:";
		         getline(cin,moo);	
	stu<< ":تاريخ التسجيل بالشهر:"<<moo<<endl;
 cout << "تاريخ التسجيل بالسنه"; 
	              getline(cin,ye);	
	stu<< "تاريخ التسجيل بالسنه"<<ye<<endl;
	cout << "المبلغ المدفوع:"; cin>>mo;	
	stu<< "المبلغ المدفوع:"<<mo<<endl;
	 getline(cin,ro);
	cout << "رقم الغرفه:"; getline(cin,ro);	
	stu<< "رقم الغرفه:"<<ro<<endl;
                  	//ملف لتخزين الطلاب اسم الملف su
	if(mo){su.open("ss",std::ios::app);
		if(su.is_open()){
		su<<name<<endl;
	}else cout<<"error";
	su.close();}		int zp;
	zp=w-mo;
	//الذين اكملو التسديد
	if(w==mo){
	 kcon.open("ttp",std::ios::app);
	if(kcon.is_open()){
	kcon<<"الاسم"<<name<<endl;
		kcon<<"المدفوع:"<<mo<<endl;}
	kcon.close();}

//ملف لتخزين المبلغ المدفوع اسم الملف con
	 con.open("ttt",std::ios::app);
	if(con.is_open()){
	con<<mo<<endl;}
	con.close();
		int z=w-mo;
		//لحساب الذين لم يكملوا التسديد
	
			mod.open("moo",std::ios::app);
	if(mod.is_open()){
		mod<<"اسم الطالب:"<<name<<endl;
		mod<<"المبلغ المدفوع :"<<mo<<endl;
		mod<<"المبلغ المتبقي هو"<<z<<endl;
	}	else cout<<"error";
	mod.close();	
	
}// دالة لإضافة قسم
void cse() {hh:
        ofstream sec("sect.txt", std::ios::app); 
 if (sec.is_open()) {
        string sectionName, departmentHead, numberOfStudents, roomNumber;
  cout << "اسم القسم: ";
        cin.ignore();
        getline(cin, sectionName);
        cout << "رئيس القسم: ";
        getline(cin, departmentHead);
       cout << "عدد الطلاب: ";
        getline(cin, numberOfStudents);
     cout << "رقم الغرفة: ";
        getline(cin, roomNumber);
 sec << "اسم القسم: " << sectionName <<endl;
 sec <<"رئيس القسم: " << departmentHead<<endl;sec <<"عدد الطلاب:" << numberOfStudents << endl;sec << "رقم الغرفة: " << roomNumber <<endl;
cout << "--تمت إضافة القسم بنجاح--" <<endl;
    } else {
    cout << "حدث خطأ في فتح الملف" << endl;
    }cout<<"-للرجوع للصفحه الرئيسيه1--";
    cout<<"--لاضافه قسم اخر 2-";
    int x;cin>>x;
    if(x==2)goto hh;
    sec.close();
}
void stud() {//ملف قراءة الطلاب
    ifstream st("ffi"); // فتح ملف  للقراءة
    if (st.is_open()) {
        string line;
        cout << "بيانات الأقسام:" << endl;
        while (getline(st, line)) {
           cout<< line << endl;
 }} else {cout << "حدث خطأ في فتح الملف" <<endl;
    }  st.close();
    cout<<"-للرجوع للصفحه الرئيسيه1--";
    cout<<"--لاضافه قسم اخر 2-";
}

void sec() {
    ifstream sec("sect.txt"); 
    if (sec.is_open()) {//بيانات الاقسام
        string line;
        cout << "بيانات الأقسام:" << std::endl;
        while (getline(sec, line)) {
           cout << line << endl;
 }} else {cout << "حدث خطأ في فتح الملف" <<endl;
    }  sec.close();}
    
    void pcp() {//الذين اكملوا التسديد
    ifstream pip("ttp"); // فتح ملف  للقراءة
    if (pip.is_open()) {
        string line;
        cout << "بيانات الذين ا كملوا التسديد:";
        cout<<endl;
        while (getline(pip, line)) {
           cout<< line << endl;
 }} else {cout << "حدث خطأ في فتح الملف" <<endl;
    }  pip.close();}
    
void mood() {//الذين لم يكملوا التسديد
    ifstream pp("moo"); // فتح ملف  للقراءة
    if (pp.is_open()) {
        string line;
        cout << "بيانات الذين لم يكملوا التسديد:" << std::endl;
        while (getline(pp, line)) {
           cout<< line << endl;
 }} else {cout << "حدث خطأ في فتح الملف" <<endl;
    }  pp.close();}

//لعرض الحسابات مع الاجمالي 
            void sume() { 	
ifstream kik("moo");
     if (kik.is_open()) {
        string line;
                     while (getline(kik,line)) {
           cout<< line << endl;
          }           } else {
          cout << "حدث خطأ في فتح الملف" <<endl;}
          ifstream comm("ttt");
if(comm.is_open()){
  	int suum=0,line,mode=80000,lop,oop=0;
 	while(comm>>line){
     suum=suum+line; 
     lop=mode-line;
    oop+=lop;
 	}
 	cout<<"المجموع هو ::"<<suum<<endl;
 	cout<<"الباقي هو:"<<oop<<endl;}
     comm.close();
      kik.close();
    }
       //داله خاصه بالبحث
    void sea(const string& name) {
    ifstream sttu("fi"); // فتح ملف الطلاب للبحث
    if (sttu.is_open()) {
        string line;
        bool found = false;        
        while (getline(sttu, line)) {
            if (line.find(name) != std::string::npos) {
                found = true;
                cout << "بيانات الطالب:" << endl;
                cout << line << endl;
                getline(sttu, line);              
                cout << line << endl;
                 getline(sttu, line);
                cout << line << endl;
                 getline(sttu, line);
                cout << line << endl;
                 getline(sttu, line);
                cout << line << endl;
                 getline(sttu, line);
                cout << line << endl;
                 getline(sttu, line);
                cout << line << endl;
                 getline(sttu, line);
                cout << line << endl;
                 getline(sttu, line);
                cout << line << endl;
                cout<<"---               --"<<endl;
            }}

        if (!found) {
            cout << "لم يتم العثور على الطالب بالاسم: " << name <<endl;
        }
    } else {
        cout << "حدث خطأ في فتح الملف" <<endl;
    }    sttu.close();}
  
  	
  		
  				
int main(){int x;
while (true) {
 cout<<endl << "مرحبآ بك في مؤسسة اصيل♥★\n";
        cout << "---اضافة 1---\n";
        cout << "----عرض 2----\n";
        cout << "----بحث 3--\n";
        cout << "---الحسابات4--\n";
    cin >> x;
        
ifstream se;
ham:
        switch (x) {
            case 1: {cout<<"اختار الاضافه ♠︎"<<endl;
                     cout<<"اضافه طالب--1"<<endl;
                     cout<<"اضافه قسم--2"<<endl;int n;
                     cin>>n;
                     if(n==1) st();
                     else if(n==2)cse(); 
                      break;}
          case 2:{cout<<"اختار العرض:"<<endl;
                     cout<<"عرض الاقسام1"<<endl;
                     cout<<"عرض الطلاب 2"<<endl;
              cout<<"عرض مستكملين المبلغ:3\n";
           cout<<"عرض الذين لم يكملوا التسديد4:\n";
               cout<<"عرض اجمالي الدفع~5:\n";
                     int c;           cin>>c;
                     if(c==1) sec();
                 if(c==2) stud();
               if(c==3)pcp();
               if(c==4)mood();
            if(c==5)sume();
                break;}
        case 3:{
            string studentName;
  cout << "أدخل اسم الطالب لعرض المعلومات الكاملة: ";
             cin >> studentName;
             sea(studentName);

                break;}
         case 4:{
               sume();
        }
       
                break;
            default:
                std::cout << "الرجاء ادخال رقم صحيح\n";
                break;
        }
    }
}

