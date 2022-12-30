#include <iostream.h>
#include <conio.h>

class Date{
    public:
    int month,day,year,i;
    
public:
    Date(){
        
    }
    Date(int m, int d, int y){
        
        month=m;
        day=d;
        year=y;
        
    }
    
    void operator + (int b){
        
        for(i=b ;i >= 1 ;i--){
            
            if(day == 30){
                day=1;
                if(month == 12){
                    
                    month = 1;
                    year++;
                    
                }else{
                    month++;
                }
                
            }else{
                day++;
            }
            
        }
    }
    
    void operator -(int b){
    
        for(i=b ;i >= 1 ;i--){
            
            if(day == 1){
                day=30;
                
                if(month == 1){
                    
                    month = 12;
                    year--;
                    
                }else{
                    month--;
                }
                
            }else{
                day--;
            }
            
        }
        
        
    }
    
	void operator<(Date a){
        if(day < a.day){
            cout<<"a day is less then b"<<endl;
        }else{
            cout<<"a day is not less then b"<<endl;
        }
        
        if(month < a.month){
            cout<<"a month is less then b"<<endl;
        }else{
            cout<<"a month is not less then b"<<endl;
        }
        
        if(year < a.year){
            cout<<"a year is less then b"<<endl;
        }else{
            cout<<"a year is not less then b"<<endl;
        }
        
        
        
        
    }
    
	void operator<=(Date a){
    
       
        if(day <= a.day){
            cout<<"a day is less then or Equal to b"<<endl;
        }else{
            cout<<"a day is not less then b"<<endl;
        }
        
        if(month <= a.month){
            cout<<"a month is less then or Equal to b"<<endl;
        }else{
            cout<<"a month is not less then b"<<endl;
        }
        
         if(year <= a.year){
            cout<<"a year is less then or Equal to b"<<endl;
        }else{
            cout<<"a year is not less then b"<<endl;
        }
    }
    
	void operator>(Date a){
        
            
            if(day >= a.day){
                cout<<"a day is Greater then b"<<endl;
            }else{
                cout<<"a day is not Greater then b"<<endl;
            }
            
            if(month >= a.month){
                cout<<"a month is Greater then b"<<endl;
            }else{
                cout<<"a month is not Greater then b"<<endl;
            }
            
            if(year >= a.year){
                cout<<"a year is Greater then b"<<endl;
            }else{
                cout<<"a year is not Greater then b"<<endl;
            }
    }
    
	void operator>=(Date a){
            
            if(day >= a.day){
                cout<<"a day is Greater then or Equal to"<<endl;
            }else{
                cout<<"a day is not Greater then or Equal to"<<endl;
            }
            
            if(month >= a.month){
                cout<<"a month is Greater then or Equal to"<<endl;
            }else{
                cout<<"a month is not Greater then or Equal to"<<endl;
            }
            
            if(year >= a.year){
                cout<<"a year is Greater then or Equal to b"<<endl;
            }else{
                cout<<"a year is not Greater then or Equal to"<<endl;
            }
    
    }
    
    void operator++(){
        if(day == 30){
            day=1;
            if(month == 12){
                month=1;
                ++year;
            }else{
                month++;
            }
        }else{
            day++;
        }
    }
    
    void operator++(int){
        
        if(day == 30){
            day=1;
        }else{
            day++;
        }
        
        if(month == 12){
            month = 1;
            year++;

        }else{
            month++;
        }

        
    }
    
    void operator--(){
        if(day == 1){
            day=30;
        }else{
            --day;
        }
        
        if(month == 1){
            --year;
            month = 12;
        }else{
            --month;
        }
    
    }
    
    void operator--(int){
        if(day == 1){
            day=30;
        }else{
            day--;
        }
        
        if(month == 1){
            month = 12;
            year--;
        }else{
            month--;
        }

    
    }
	
	Date &operator =(const Date& a){
		day=a.day;
		month=a.month;
		year=a.year;

		return *this;
	}
	
    void display(){
        cout<<"Date :" <<day << endl;
        
        cout<<"Month :" <<month << endl;
        
        cout<<"Year :" <<year << endl;
        
    }
};



int main() {
    
    Date a(12,25,2021), b(11,26,2021),c(06,29,2022),d(12,05,2022);
    
    clrscr();
    cout<<"+ Operator"<<endl;
    a+5;
    a.display();
    
    cout<<"Press enter For next Operation"<<endl;
    getch();
    
    cout<<"- Operator"<<endl;
    a-6;
    a.display();
    
    cout<<"Press enter For next Operation"<<endl;
    getch();
    
    cout<<"= Operator"<<endl;
    a=b=c=d;
    a.display();
    b.display();
    c.display();
    d.display();
    
    cout<<"Press enter For next Operation"<<endl;
    getch();

    cout<<"< Operator"<<endl;
    a<b;

    cout<<"Press enter For next Operation"<<endl;
    getch();

    cout<<"<= Operator"<<endl;
    a<=b;

    cout<<"Press enter For next Operation"<<endl;
    getch();

    cout<<">= Operator"<<endl;
    a>b;
    
    cout<<"Press enter For next Operation"<<endl;
    getch();
    
    cout<<">= Operator"<<endl;
    a>=b;
    
	cout<<"Press enter For next Operation"<<endl;
    getch();
    
    cout<<"Pre ++ Operator"<<endl;
    ++a;
    a.display();
    
    cout<<"Press enter For next Operation"<<endl;
    getch();
    
    cout<<"Post ++ Operator"<<endl;
    a++;
    a.display();
    
    cout<<"Press enter For next Operation"<<endl;
    getch();
    
    cout<<"Pre -- Operator"<<endl;
    --a;
    a.display();

    cout<<"Press enter For next Operation"<<endl;
    getch();

	cout<<"Post -- Operator"<<endl;
    a--;
    a.display();
    
    cout<<"Press enter For next Operation"<<endl;
    getch();
    return 0;
}

