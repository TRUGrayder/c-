#include <iostream>
#include <math.h>
#include<string.h>
using namespace std; 
/*int main(){
    //S =1+2+3+4+...+n
    int n;
    cout <<"Nhap n: ";
    cin >>n;
    
    int sum =0;
    for (int i =1; i<=n; i++){
    
        sum +=i;
    }
    cout <<sum;
    return 0;
}*/
//Liệt kê tất cả các ước số của số nguyên dương n
/*int main (){
    int n;
    cout <<"Nhap n :";
    cin >>n;
    for (int i =1; i<=n; i++){
        if (n%i ==0){
            cout <<i<<endl;
        }
    }
    return 0;
}*/
// đếm lượng chữ số của sô nguyên dương n
/*int main(){
    int n;
    int k;
    int dem =0;
    cout <<"Nhap n: ";
    cin >>n;
    

    while(k!=0){
        dem++;
        k/=10;
    }
  
    cout <<dem;
    return 0;
        

}
*/
// Tìm số lớn nhất trong 3 số thực a, b, c;
/*int main(){
    int a,b,c;
    while(true){
    cout <<"\nNhap a: ";
    cin >>a;
    cout <<"\n Nhap b: ";
    cin >>b;
    cout <<"\nNHap c: ";
    cin >>c;
    
   if (a==b & b==c){
    cout <<"ca ba so bang nhau";

   }else if (a==b && b>c){
    cout <<a<<" la so lon nhat";
   }
   else if (a==c && c>b){
    cout << a<<" la so lon nhat";
   }
   else if (b==c&& c> a){
    cout <<b<<" la so lon nhat";

   }

   else if (a>b &&a>c ){
    cout <<a<<" la so lon nhat";
   }
   else if (b>c && b>a){
    cout <<b<< " la so lon nhat";
   }
   else if (c>a&&c>b){
    cout <<c<<" la so lon nhat";
   }
   else{
    cout <<"Ban nhap sai roi !";
   }
    }
    return 0;
}
*/
// nhap 2 so thuc kiem tra xem chung co cung dau hay ko
/*int main(){
    float a, b;
    while (true){
    cout <<"\nNhap a: ";
    cin >>a;
    cout <<"Nhap b: ";
    cin >>b;
    if (a*b>0){
        cout <<a<<";;"<<b<<" cung dau";

    }
    else {
         cout <<a<<";"<<b<<" trai dau";
    }}
    return 0;
}*/
// giai phuong trinh va bien luan ax +b =0
/*int main(){
    // ax+b=0;
    double a,b,x;
    cout <<"ax+b=0"<<endl;
    cout <<"Nhap a :"; cin >>a;
    cout <<"Nhap b : "; cin >>b;
    x= -b/a;
    if (a==0){
        if (b==0){
            cout <<"PHuong trinh vo so nghiem!"<<endl;
        }
        cout <<"Phuong trinh vo nghiem"<<endl;

    }
    else {
        cout<< "Phuong trinh co 1 nghiem la: x= "<<x<<endl;

    }
    return 0;
}
*/
// nhập vào tháng của 1 năm. cho biết tháng thuộc quý mấy trong năm;
// Một năm có 4 quý ; 1 quý có 3 tháng
/*int main(){
    int n;
    cout <<"Nhap thang ban muon xem: ";
    cin >>n;
    
    while(true){
    if (n >=1&& n<= 3){
        cout <<"Thang "<<n<< " thuoc quy 1!";
        break;
    }
    else if (n>=4&& n<=6)
    {
        cout <<"Thang "<<n<< " thuoc quy 2!";
        break;
    }
    else if (n>=7&& n<=9){
         cout <<"Thang "<<n<< " thuoc quy 3!";
         break;
    }
    else if (n>=10&& n<=12){
         cout <<"Thang "<<n<< " thuoc quy 4!";
         break;
    }
    else {
        cout <<"Ban nhap sai roi";
        break;
    }
    
}
    return 0;
    
}*/
// tim so nguyen duong n nho nhat sao cho 1+2+3+4+...+ n> 10000;
/*int main(){
    int sum =0;
    for (int i=1; i<100000;i++){
        sum += i;
        if (sum >10000){
            cout<<i;
            break;
        }
    }
}*/
/*int main(){
    int sum =0;
    int n =0;
    while (sum <10000){
        n++;
        sum = sum +n;
    }
    cout <<sum<<endl;
    cout <<n;
    return 0;
}*/
// Hay dung vong lap for hay xuat cac ky tu tu A den Z
/*int main(){
    char n;
    for (int i= 'A'; i<= 'Z'; i++){
        n=i;
        cout <<n<<"\t";
    }

}*/
// viet chuong trinh tinh tong cac gia tri le nguyen duong nho hon N;
/*int main(){
    int n;
    cout <<"Nhap n: ";
    cin >>n;
    int sum=0;
    for (int i =1; i<n; i++){
        if (i%2 !=0){
            cout <<i<<"\t";
            sum+=i;
          
        }}
    cout<<endl;
    cout <<sum;
    return 0;
}*/
// tim uoc chung lon nhat cauu 2 so nguyen duong;
/*int main (){
    int a,b;
    cout<<"Nhap a: ";
    cin>>a;
    cout <<"Nhap b: ";
    cin >>b;
    int max=0;
    for (int i =1; i<=a; i++){
        for (int j=1;j<=b; j++){
        if (a%i==0&&b%j==0&& i==j){
            max =i;
        }
        } }
        cout<<max;
            return 0;
}*/
// Viết chương trình kiểm tra 1 sô có phải sô nguyên tố không
/*int main()
{   while(true){
    int n;
    cout <<"Nhap so :";
    cin >>n;
    int dem =0;
    if(n<2){
    cout <<n<<" Khong phai so nguyen to"<<endl;
    }
    // số nguyên tố là số lớn hơn 1 và chỉ chia được cho 1 và chính nó
    for (int i=1; i<=n;i++){
        if(n%i==0){
            dem++;
        }
    }
    if (dem==2){
        cout <<n<<" la so nguyen to"<<endl;
    }
    else{
        cout <<n<<" khong phai la so nguyen to"<<endl;
    }
    }
    return 0;
}*/
//Bài 94: Viết chương trình in ra tất cả các số lẻ nhỏ hơn 100 trừ các số 5, 7, 93
/*int main(){
    for (int i=1; i<100;i++){
       
        if (i==5||i==7||i==93){
            continue;
        }
        if(i%2!=0){
            cout <<i<<"\t";
        }
        
    }
    return 0;
}*/
//Bài 95: Viết chương trình nhập 3 số thực. Hãy thay tất cả các số âm bằng trị tuyệt đối của nó
/*int main(){
    float a,b,c;
    cout <<"Nhap a: ";
    cin >>a; float a1= fabs(a);
    
     cout <<"Nhap b: ";
    cin >>b;  float b1 = fabs(b);
     cout <<"Nhap c: ";
    cin >>c;
   float c1 = fabs(c);
  
    
    cout <<a1<<" "<<b1<<" "<<c1<<" ";
    return 0;
}*/
//Bài 96: Viết chương trình nhập giá trị x sau tính giá trị của hàm số
//f(x) = 2x^2 + 5x + 9 khi x >= 5, f(x) = -2x^2 + 4x – 9 khi x < 5
/*int main(){
    float x; 
    cout <<"Nhap x: ";
    cin>>x;
    float kq=0;
    if (x>=5){
        kq = 2* pow(x,2)+5*x+9;
    }
    else{
        kq = -2* pow(x,2)+4*x-9;
    }
    cout <<kq;
    return 0;
}*/
//Bài 97: Viết chương trình nhập 3 cạnh của 1 tam giác, cho biết đó là tam giác gì
/*int main(){
    float a,b,c;
    cout <<"Nhap a: ";
    cin >>a;
     cout <<"Nhap b: ";
    cin >>b;
     cout <<"Nhap c: ";
    cin >>c;
    if( a<b+c && b<a+c && c<a+b ){
		if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
			cout<<"Day la tam giac vuong";
		else if(a==b && b==c)
			cout<<"Day la tam giac can";
		else if(a==b || a==c || b==c)
			cout<<"Day la tam giac deu";
		else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)	
			cout<<"Day la tam giac tu";
		else
			cout<<"Day la tam giac nhon";
	}
	else
		cout<<"Ba canh a, b, c khong phai la ba canh cua mot tam giac";
	return 0;

}*/
//Bài 98: Lập chương trình giải hệ: ax + by = c , Dx + ey = f. Các hệ số nhập từ bàn phím             
/*int main(){
    double a,b,c,d,e,f;
   long double x=0;
    long double y =0;
    cout<<"Nhap a:";
    cin>>a;
    cout<<"Nhap b: ";
    cin>>b;
    cout<<"Nhap c: ";
    cin>>c;
     cout<<"Nhap d: ";
    cin>>d;
     cout<<"Nhap e: ";
    cin>>e;
     cout<<"Nhap f: ";
    cin>>f;
         x= (b*f-e*c)/(b*d -a*e);
         y = (c-a*x)/b;

    cout <<"-------------------------------"<<endl;
    cout <<"|"<<a<<"x"<<" + "<<b<<"y"<<" = "<<c<<"|x= "<<x<<endl;
    cout <<"|"<<d<<"x"<<" + "<<e<<"y"<<" = "<<f<<"|y= "<<y;

    return 0;
}*/
//Bài 99: Viết chương trình nhập vào 3 số thực. Hãy in 3 số ấy ra màn hình theo thứ tự tangw dần mà chỉ dùng tối đa 1 biến phụ

/*int main(){
    int a,b,c,temp;
    cout<<"Nhap a:";
    cin>>a;
    cout<<"Nhap b: ";
    cin>>b;
    cout<<"Nhap c: ";
    cin>>c;//6  2  5
    if (a>b){
         temp= a;
        a=b;
        b=temp;
    }
    if (a>c){
        temp =a;
        a=c;
        c=temp;
        
    }
    if (b>c){
        temp=b;
        b=c;
        c= temp;
    }
cout <<a<<"\t"<<b<<"\t"<<c;
return 0;
}
*/
//Bài 100: Viết chương trình giải phương trình bậc 2
/*int main(){
    // ax2+bx+c=0
    double a,b,c,delta;
    cout <<"Nhap a: ";
    cin >>a;
    cout <<"Nhap b:";
    cin>>b;
    cout <<"Nhap c: ";
    cin>>c;
    delta = pow(b,2)-4*a*c;
    if (a==0){
        if (b==0&&c==0){
            cout <<"Phuong trinh vo so nghiem!";
        }
        else if (b==0&& c!=0){
            cout <<"Phuong trinh vo nghiem!";
        }
        else {
            cout <<"Phuong trinh co nghiem duy nhat x= "<<-c/b;
        }
    }
    else {
        if (delta<0){
            cout <<"Phuong trinh vo nghiem!";
        }
        else if (delta ==0){
            cout <<"Phuong trinh co nghiem kep x1=x2= "<< -b/2*a;
        }
        else {
            cout <<"Phuong trinh co hai nghiem phan biet: x1= "<<(-b+sqrt(delta))/2*a<<"\t"<<"x2= "<<(-b-sqrt(delta))/2*a;
        }

    }
    return 0;
}*/
//Bài 101: Viết chương trình nhập tháng, năm. Hãy cho biết tháng đó có bao nhiêu ngày
/*int main(){
    int month;
    int year;
    cout <<"Nhap thang: ";
    cin >>month;
    cout <<"Nhap nam: ";
    cin >>year;*/
    /*if (year %4==0 && year % 100!= 0 || year &400==0){
        cout << "Nam "<<year<<" la nam nhuan";
    }
    else {
        cout << "Nam "<<year<<" khong phai la nam nhuan";
    }*/
    
   /* switch (month)
    {
    case 1:
        cout <<"Thang 1 co 31 ngay!"<<endl;
        break;
    case 2:
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0  ){
        cout << "Thang "<<month<< " co 29 ngay"<<endl;
         cout << "Trong nam nay, thang 2 co 29 ngay thay cho 28 ngay!" << endl;
        
    }
    else{
        cout <<"Thang 2 co 28 ngay!"<<endl;
    }
        break;
    case 3:
        cout <<"Thang 3 co 31 ngay!"<<endl;
        break;        
    case 4:
        cout <<"Thang 4 co 30 ngay!"<<endl;
        break;
    case 5:
        cout <<"Thang 5 co 31 ngay!"<<endl;
        break;
    case 6:
        cout <<"Thang 6 co 30 ngay!"<<endl;
        break;
    case 7:
        cout <<"Thang 7 co 31 ngay!"<<endl;
        break;
    case 8:
        cout <<"Thang 8 co 31 ngay!"<<endl;
        break;
    case 9:
        cout <<"Thang 9 co 30 ngay!"<<endl;
        break;
    case 10:
        cout <<"Thang 10 co 31 ngay!"<<endl;
        break;
    case 11:
        cout <<"Thang 11 co 30 ngay!"<<endl;
        break;
    case 12:
        cout <<"Thang 12 co 31 ngay!"<<endl;
        break;                                
    default:
    cout <<"Loi vui long nhap lai!"<<endl;
        break;
    }
    return 0;

}*/
//Bài 102: Viết chương trình nhập vào 1 ngày ( ngày, tháng, năm). Tìm ngày kế ngày vừa nhập (ngày, tháng, năm)
/*int main(){  
    while (true){   
    int days, months,years;
    cout <<"Nhap ngay : ";
    cin >>days;
    cout <<"Nhap thang : ";
    cin >>months;
    cout <<"Nhap nam: ";
    cin >>years;
   switch (months)
    {
    case 1:
        if (days>0&& days <31){
             int day= days +1;
          cout<<day<<"\t";
        }
        break;
    case 2:
    if (years % 4 == 0 && years % 100 != 0 || years % 400 == 0  ){
        if (days>0 && days<29){
               int day= days +1;
          cout<<day<<"\t";
        }
    }
    else if (days>0 && days <28){
             int day= days +1;
          cout<<day<<"\t";
    }
    else{
        days=1;
            cout <<days<<"\t";
    }
        break;
    case 3:
        
        if (days>0&& days <31){
             int day= days +1;
          cout<<day<<"\t";
        }
        break;      
    case 4:
        if (days>0&& days <30){
            int day= days +1;
          cout<<day<<"\t";
        }
        else {
            days=1;
            cout <<days<<"\t";
    }
        break;
    case 5:
         if (days>0&& days <31){
            int day= days +1;
          cout<<day<<"\t";
        }
        else{
            days=1;
            cout <<days<<"\t";
        }
        
        break;
    case 6:
         if (days>0&& days <30){
             int day= days +1;
          cout<<day<<"\t";
        }
        else{
            days=1;
            cout <<days<<"\t";
        }
        break;
    case 7:
          if (days>0&& days <31){
             int day= days +1;
          cout<<day<<"\t";
        }
        else{
            days=1;
            cout <<days<<"\t";
        }
        break;
    case 8:
         if (days>0&& days <31){
           int day= days +1;
          cout<<day<<"\t";
        }
        else {
            days=1;
            cout <<days<<"\t";
        }
        break;
    case 9:
          if (days>0&& days <30){
            int day= days +1;
          cout<<day<<"\t";
        }
        else{
            days=1;
            cout <<days<<"\t";
        }
        break;
    case 10:
        if (days>0&& days <31){
             int day= days +1;
          cout<<day<<"\t";
        }
        else{
            days=1;
            cout <<days<<"\t";
        }
        break;
    case 11:
         if (days>0&& days <30){
              int day= days +1;
          cout<<day<<"\t";
        }
        else{
            days=1;
            cout <<days<<"\t";
        }
        break;
    case 12:
          if (days>0&& days <31){
             int day= days +1;
          cout<<day<<"\t";
        }
        else{
            days=1;
            cout <<days<<"\t";
        }
        break;                               
    default:
    cout <<"Loi vui long nhap lai!"<<endl;
        break;
    }
 
    if (months >0 && months<12){
        int month = months+1;
       cout<< month<<"\t";

    }
    else if (months ==12){
        cout << months<<"\t";
    }
    else {
        cout <<"Nhap sai";
    }

    if (years>0 ){
        int year= years +1;
        cout <<year<<endl;
    }
    }
   return 0;

    
}*/
/*#include<stdio.h>
#include<conio.h>

const int minYear = 1900, maxYear = 10000;
int KiemTraNamNhuan(int nam)
{
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}
int TimSoNgayTrongThang(int thang, int nam)
{
    int NgayTrongThang;
    switch(thang)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        NgayTrongThang = 31;
        break;
    case 4: case 6: case 9 : case 11:
        NgayTrongThang = 30;
        break;
    case 2:
        int Check = KiemTraNamNhuan(nam);
        if(Check == 1)
        {
            NgayTrongThang = 29;
        }
        else
        {
            NgayTrongThang = 28;
        }
    }
    return NgayTrongThang;
}

void TimNgayKeTiep(int Ngay, int Thang, int Nam)
{
    int NgayTrongThang = TimSoNgayTrongThang(Thang, Nam);
    if (Ngay < NgayTrongThang)  // Tăng ngày lên
    {
        Ngay++;
    }
    else if (Thang < 12)     // Ngày kế tiếp là đầu tháng
    {
        Ngay = 1; Thang++;
    }
    else                      // Ngày kế là đầu năm mới tức là hiện tai đang là tháng 12
    {
        Ngay = Thang = 1;
        Nam++;
    }
    printf("\nNgay ke tiep la: %d - %d - %d ", Ngay, Thang, Nam);
}
int main()
{
    int Ngay, Thang, Nam;

    do
    {
        printf("\nNhap vao nam: ");
        scanf("%d", &Nam);
        if(Nam < minYear || Nam > maxYear)
        {
            printf("\nDu lieu nam khong hop le. Xin kiem tra lai!");
        }
    }while(Nam < minYear || Nam > maxYear);

    do
    {
        printf("\nNhap vao thang: ");
        scanf("%d", &Thang);
        if (Thang < 1 || Thang > 12)
            printf("\nDu lieu thang khong hop le. Xin kiem tra lai!");
    }while(Thang < 1 || Thang > 12);

    int NgayTrongThang = TimSoNgayTrongThang(Thang, Nam);
    do
    {
        printf("\nNhap vao ngay: ");
        scanf("%d",&Ngay);
        if(Ngay < 1 || Ngay > NgayTrongThang)
        {
            printf("\nDu lieu ngay khong hop le. Xin kiem tra lai!");
        }
    }while(Ngay < 1 || Ngay > NgayTrongThang);
    
    TimNgayKeTiep(Ngay, Thang, Nam);

    getch();
    return 0;
}*/
//Bài 105: Viết chương trình nhập 1 số nguyên có 2 chữ số.  Hãy in ra cách đọc của số nguyên này
/*
int main(){
    while(true){
    int n;
  
    cout <<"\nNhap n: ";
    cin >>n;
    int chuc= n/10;
    int donvi= n%10;
        if (n<0||n>99){
            cout<<"Khong hop le!";
        }
else {
     if (chuc==2){
            cout<<"Hai ";
     }
        
        else if (chuc==3){
            cout<<"ba ";
        
        } else if (chuc==4){
            cout<<"bon ";
        }
         else if (chuc==5){
            cout<<"nam ";
        
        } else if (chuc==6){
            cout<<"sau ";

        } else if (chuc==7){
            cout<<"bay ";
        } else if (chuc==8){
            cout<<"tam ";
        } else if (chuc==9){
            cout<<"chin ";
        }
        cout <<"Muoi ";
        if (donvi==1){
            cout <<"mot";
        }
        else if (donvi==2){
            cout<<"Hai ";
        } else if (donvi==3){
            cout<<"ba ";
        } else if (donvi==4){
            cout<<"bon ";
        } else if (donvi==5){
            cout<<"nam ";
        } else if (donvi==6){
            cout<<"sau ";
        } else if (donvi==7){
            cout<<"bay ";
        } else if (donvi==8){
            cout<<"tam ";
        } else if (donvi==9){
            cout<<"chin ";
        }

}
    }
   return 0;
}*/
//Bài 106 Viết chương trình nhập 1 số nguyên có 3 chữ số.  Hãy in ra cách đọc của số nguyên này
/*int main(){
    while(true){
    int n; 
    cout <<"\nNhap n: ";
    cin >>n;
    if (n<99||n>999){
        cout <<"Nhap du lieu sai roi! "<<endl;

    }
    else{
        int hangtram = n/100;
        int hangchucdonvi = n%100;
        int chuc= hangchucdonvi/10;
        int donvi = hangchucdonvi%10;
        if (hangtram==1){
            cout <<"Mot tram ";
        }
        else if (hangtram==2){
            cout<<"Hai tram ";
        } else if (hangtram==3){
            cout<<"ba tram ";
        } else if ( hangtram==4){
            cout<<"bon tram ";
        } else if (hangtram==5){
            cout<<"nam tram ";
        } else if (hangtram==6){
            cout<<"sau tram";
        } else if (hangtram==7){
            cout<<"bay tram";
        } else if (hangtram==8){
            cout<<"tam tram ";
        } else if (hangtram==9){
            cout<<"chin tram ";
        
        }
        if (chuc==2){
            cout<<"Hai ";
        } else if (chuc==3){
            cout<<"ba ";
        } else if (chuc==4){
            cout<<"bon ";
        } else if (chuc==5){
            cout<<"nam ";
        } else if (chuc==6){
            cout<<"sau ";
        } else if (chuc==7){
            cout<<"bay ";
        } else if (chuc==8){
            cout<<"tam ";
        } else if (chuc==9){
            cout<<"chin ";
        }
        cout <<"muoi ";
            if (donvi==1){
            cout <<"mot";
        }
        else if (donvi==2){
            cout<<"Hai ";
        } else if (donvi==3){
            cout<<"ba ";
        } else if (donvi==4){
            cout<<"bon ";
        } else if (donvi==5){
            cout<<"lam ";
        } else if (donvi==6){
            cout<<"sau ";
        } else if (donvi==7){
            cout<<"bay ";
        } else if (donvi==8){
            cout<<"tam ";
        } else if (donvi==9){
            cout<<"chin ";
        }

    }
    }
    return 0;

}
*/
//Bài 108:  Viết hàm tính S = x^y
/*int main(){
    double s =0;
    double x,y;
    cout <<"NHap x: ";
    cin >>x;
    cout <<"Nhap y: ";
    cin >>y;
    s = pow(x,y);
    cout <<s;
    return 0;
}*/
//Bài 109: Viết chương trình in bảng cửu chương ra màn hình
/*int main(){
    
   cout <<"Day la bang cuu chuong: "<<endl;
   cout <<"------------------------"<<endl;
    
    for (int i =1; i<=10; i++){
        for (int j =1; j<=10;j++)
        cout <<i<<" x "<<j<<" = "<<i*j<<endl;
        cout <<endl;
    }

    return 0;
}*/
//Bài 111: Viết chương trình in ra tam giác cân có độ cao h
//Tam giác  vuông cân đặc
/*int main()
{
    int i, j, n;

    printf("\nNhap n: ");
    scanf("%d", &n);

    // Câu a:
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n + i - 1; ++j)
        {
            printf((j < n - i + 1) ? " " : "*");
        }
        putchar('\n');
    }
}*/
//Bài 115: Viết chương trình nhập họ tên, điểm toán, điểm văn của 1 học sinh. Tính điểm trung bình và xuất ra kết quả
/*int main (){
    char ten[30];
    float diemtoan, diemvan;
    float dtb;
    cout <<"Nhap ten :";
    gets (ten);
    cout <<"Nhap diem toan: ";
    cin >>diemtoan;
    cout <<"Nhap diem van: ";
    cin >>diemvan;
    dtb = (diemtoan +diemvan)/2;
    cout <<"Ten cua ban la: ";
    puts(ten);
    cout <<"Diem trung binh la: ";
    cout <<dtb;
    return 0;
}*/
//Bài 116: Viết chương trình nhập n và tính tổng S = 1 + 2 + 3 + … + n

/*int main(){
    int n;
    int s=0;
    cout <<"Nhap n: ";
    cin >>n;
    for (int i =1; i<=n; i++){
        s+=i;
    }
    cout <<s;
}*/
//Tam giác cân đặc nằm giữa màn hình
//        *          0 (space +1)=13;;;;space =12  *                 6          0  0+space     =11  
//       * *          (2+space)=13 //11           * *               5 7         1  1+space  =11        2*2 +1 
//      * * *                                    * * *             4 6 8        2   
//     * * * *                                  * * * *           3 5 7 9       3
//    * * * * *                                * * * * * =9;     2 4 6 8 10     4
//   * * * * * *                                    h= 5;       1 3 5 7 9 11    5
//  * * * * * * *  =13         space =0                       
// chiều cao h= 7;
/*int main (){
    int h;
    cout <<"Nhap chieu cao: ";
    cin >>h;


    for (int i = 0 ; i <h; i++){
        for (int j = 1; j <= (2*h-1); j++){
                if (){
                    cout <<"*";
                }
                else {
                    cout <<" ";
                }

        }
        cout <<endl;
    }
}
*/
//Bài 113: Lập chương trình tính sin(x) với độ chính xác 0.00001 theo công thức: 
//Bài 122: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực
/*float lonnhat(float arr[], int n);
float nhonhat(float arr[], int n);
float nhapmang(float arr[], int n);
float xuatmang(float arr[], int n);
int main (){
    int n;
    
    cout  <<"Moi ban nhap so phan tu trong mang: ";
    cin >>n;
    float arr[n];
    cout <<"\nMang co so phan tu sau: ";
    nhapmang(arr,n);
    xuatmang(arr,n);
    cout <<"\nPhan tu lon nhat trong mang la: ";
    float max =lonnhat(arr,n);
    cout <<max;
    cout <<"\nPhan tu nho nhat trong mang la: ";
    float min =nhonhat(arr,n);
    cout <<min;
    
   return 0;
}
float nhapmang(float arr[], int n ){
    srand(time(NULL));
    for (int i =0; i<=n; i++){
        arr[i]= rand()%100;
    }
}
float xuatmang(float arr[], int n){
    for (int i =0; i<=n; i++){
        cout <<arr[i]<<"\t";
    }
}
float lonnhat(float arr[], int n){
    float max = arr[0];
    for (int i =0 ; i<=n; i++){
       if (arr[i]>max){
        max = arr[i];
      
       } 
    }
    return max;
 
}
float nhonhat(float arr[], int n){
        float  min = arr[0];
        for (int i =1; i<=n; i++){
            if (min>arr[i]){
                min =arr[i];
            
            }
        }
        return min;
}*/
//Bài 143: Viết hàm tìm số chẵn đầu tiên trong mảng các số nguyên. Nếu mảng không có giá trị chẵn thì trả về  -1
/* void xuatmang (int arr[], int n);
 void nhapmang (int arr[], int n);
 int timsochan (int arr[], int n);
 
int main(){
    int n;
    cout <<"Nhap so phan tu trong mang: ";
    cin >>n;
    int arr[n];
    nhapmang(arr, n);
    xuatmang(arr,n);
    cout <<"\nSo chan dau tien trong mang so nguyen la: ";
   int num1= timsochan(arr,n);
   cout <<num1;
}
void nhapmang (int arr[], int n){
      srand(time(NULL));
    for (int i=0; i<=n; i++){
     arr[i] = rand()%100;
    }
}
void xuatmang (int arr[], int n){
    for (int i =0; i<=n; i++){
        cout <<arr[i]<<"\t";
    }
}
int timsochan (int arr[], int n){
    for (int i=0; i<=n; i++){
        if (arr[i]%2==0){
            return arr[i];
        }
    }
    return -1;
}
*/

 

//Bài 145: Tìm số hoàn thiện đầu tiên trong mảng 1 chiều số nguyên. Nếu mảng không có số hoàn thiện thì trả về  -1
/*
void nhapmang(int arr[], int n);
void xuatmang(int arr[], int n);
bool kiemtrasoht(int n);
int timsoht(int arr[], int n);
int main(){
    int n;
    cout<<"Nhap phan tu trong mang: ";
    cin >>n;
    int arr[n];
    nhapmang(arr,n);
    xuatmang(arr,n);
    
    int number= timsoht(arr,n);
    cout <<"\nSo hoan thien dau tien trong mang 1 chieu so nguyen la: "<<number;



}
void nhapmang(int arr[], int n){
    srand(time(NULL));
    for (int i=0; i<=n; i++){
        arr[i]= rand()%100;
    }
}
void xuatmang(int arr[], int n){
    for (int i=0; i<=n; i++){
        cout <<arr[i]<<"\t"; 
    }
}
bool kiemtrasoht(int n){
    int sum =0;
        if (n<0){
            return false;
        }
        for ( int i =1; i<n; i++){
            if (n%i ==0){
                sum+=i; 
            }  }
            if (n==sum)
            {
                return true;
            }
      
        return false;
}
int timsoht(int arr[], int n){
    for (int i=0; i<=n; i++){
        if (kiemtrasoht(arr[i])==true){
            return arr[i];
        }
    }
    return -1;
}
*/
//Bài 146: Tìm giá trị âm đầu tiên trong mảng 1 chiều các số thực. Nếu mảng không có giá trị âm thì trả về -1

/*void xuatmang (float arr[], float n);
void nhapmang (float arr[], float n);
float timsoam( float arr[], float n);
 int main(){
     int n;
    cout<<"Nhap phan tu trong mang: ";
    cin >>n;
    float arr[n];
    nhapmang(arr,n);
    xuatmang(arr,n);
    float num= timsoam(arr,n);
    cout <<"\nSo am dau tien trong mang 1 chieu la:"<< num<<endl;
 }
 void nhapmang(float arr[], float n){
    srand(time(NULL));
    for (int i=0; i<=n; i++){
        arr[i]=-10+ rand()%100;
    }
}
void xuatmang(float arr[], float n){
    for (int i=0; i<=n; i++){
        cout <<arr[i]<<"\t"; 
    }
}
float timsoam(float arr[], float n){
    for (int i =0 ; i<= n; i++){
        if (arr[i]<0){
            return arr[i];
        }
    }
 return -1;
 }
*/


////Bài 144: Tìm số nguyên tố đầu tiên trong mảng 1 chiều các số nguyên. Nếu mảng không có số nguyên tố thì trả về  – 1
/*void nhapmang(int arr[], int n);
void xuatmang(int arr[], int n);
bool kiemtrasont( int n);
int timsont (int arr[], int n);
int main(){
    int n;
    cout <<"Moi ban nhap so phan tu trong mang: ";
    cin >>n;
    int arr[n];
    nhapmang(arr,n);
    xuatmang(arr,n);
    int num1 = timsont(arr,n);
    cout <<"\nSo nguyen to dau tien trong mang 1 chieu la :"<<num1;
    return 0;
}
void nhapmang(int arr[], int n){
    srand(time(NULL));
    for (int i =0; i<=n; i++){
        arr[i]=rand()%100;
    }
}
void xuatmang(int arr[], int n){
        for (int i =0; i<=n; i++){
            cout <<arr[i]<<"\t";
        }
}
bool kiemtrasont(int n){
    if (n<2){
        return false;
    }
    for (int i =2; i<= n-1;i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}
int timsont(int arr[], int n)
{
    for (int i =0; i<=n; i++){
        if (kiemtrasont(arr[i])==true){
            return arr[i];
        }
    }
    return -1;
}
*/
//Bài 147: Tìm số dương cuối cùng trong mảng số thực. Nếu mảng không có giá trị dương thì trả về  -1

/*
void nhapmang(int arr[], int n);
void xuatmang(int arr[], int n);
bool kiemtrasont( int n);
int timsont (int arr[], int n);
int main(){
    int n;
    cout <<"Moi ban nhap so phan tu trong mang: ";
    cin >>n;
    int arr[n];
    nhapmang(arr,n);
    xuatmang(arr,n);
    int num1 = timsont(arr,n);
    cout <<"\nSo nguyen to dau tien trong mang 1 chieu la :"<<num1;
    return 0;
}
void nhapmang(int arr[], int n){
    srand(time(NULL));
    for (int i =0; i<=n; i++){
        arr[i]=rand()%100;
    }
}
void xuatmang(int arr[], int n){
        for (int i =0; i<=n; i++){
            cout <<arr[i]<<"\t";
        }
}
bool kiemtrasont(int n){
    if (n<2){
        return false;
    }
    for (int i =2; i<= n-1;i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}
int timsont(int arr[], int n)
{
    for (int i =n; i>=0; i--){
        if (kiemtrasont(arr[i])==true){
            return arr[i];
        }
    }
    return -1;
}
*/
//Bài 150: Hãy tìm giá trị âm lớn nhất trong mảng 1 chiều các số thực. Nếu mảng không có giá trị âm thì trả về  -1
/*float xuatmang(float arr[], int n);
float nhapmang(float arr[], int n);
bool kiemtraam(float n);
float timsoam(float arr[], int n);
float soamlon(  float arr[], int n);


int main(){
    int n; 
    cout <<"NHap so gia tri trong mang 1 chieu cac so thuc :";
    cin >>n;
    float arr[n];
    nhapmang(arr,n);
    xuatmang(arr,n);
    cout<<endl;
   
    float num1= timsoam(arr,n);
     cout <<"\n So am: \n";
    cout <<num1;
    return 0;
}
float nhapmang(float arr[], int n){
    srand(time(NULL));
    for (int i =0; i<=n; i++){
        arr[i]=-50+rand()%100;

    }
}
float  xuatmang(float arr[], int n){
    for (int i =0 ; i<=n;i++){
        cout <<arr[i]<<"\t";
    }
}
bool kiemtraam(float n){
    if (n>=0){
        return false;
    }
    return true;
}
float timsoam( float arr[],float arr1[], int n){
    
    for (int i= 0; i<=n; i++){
        if (kiemtraam(arr[i])==true){
              arr1[n]=arr[i];
        }
    }
    
}
*/
//Bài 161: Cho mảng 1 chiều các số nguyên, hãy tìm giá trị đầu tiên nằm trong khoảng [x, y] cho trước. 
//Nếu mảng không có giá trị thỏa điều kiện trên thì trả về -1

/*void xuatmang(int arr[], int n);
void nhapmang(int arr[],  int n);
int giatridau (int arr[], int n, int min, int max);

int main(){
    int n, min,max;
    cout <<"Nhap n: ";
    cin>>n;
    cout <<"\nNhap min: ";
    cin >>min;
    cout <<"\nNhap max: ";
    cin >>max;

    int arr[n];
    nhapmang(arr,n);
    xuatmang(arr,n);
    int num1 = giatridau(arr,n,min,max);
    cout <<"\nGia tri dau trong khoang ban chon: "<<num1;


    
    return 0;
}
void nhapmang(int arr[], int n){
    srand(time(NULL));
    for (int i =0; i<=n; i++){
        arr[i]=rand()%100;
    }
}
void xuatmang(int arr[],  int n){
    for (int i =0; i<=n; i++){
        cout <<arr[i]<<"\t";
    }
}
int giatridau (int arr[], int n, int min , int max){
    
    for (int i=0; i<=n; i++){
        if (arr[i]>= min&& arr[i]<= max){
            return arr[i];
        }
    }
    return -1;
}
*/
//Bài 162: Cho mảng 1 chiều các số thực. 
//Hãy viết hàm tìm một vị trí trong mảng thỏa 2 điều kiện: có 2 giá trị lân cận và giá trị tại đó bằng tích 2 giá trị lân cận.
//  Nếu mảng không tồn tại giá trị như vậy thì trả về giá trị -1
//bai 163 Bài 163: Tìm số chính phương đầu tiên trong mảng 1 chiều các số nguyên
//Số chính phương là số bằng bình phương đúng của một số nguyên. 
//Hay hiểu đơn giản, số chính phương là một số tự nhiên có căn bậc hai cũng là một số tự nhiên.

/*
void nhapmang(int arr[], int n);
void xuatmang(int arr[], int n);
int timsochp(int arr[],int n);
bool ktrsochp(int n);
int main(){
    int n;
    cout <<"Nhap n: ";
    cin >>n;
    int arr[n];
    nhapmang(arr,n);
    xuatmang(arr,n);
    int num = timsochp(arr,n);
    cout <<"\nSo chinh phuong dau tien trong mang 1 chieu: "<<num;

    return 0;
}
void nhapmang(int arr[], int n){
    srand(time(NULL));
    for (int i = 0; i<=n; i++){
        arr[i]= rand()%100;
    }
}
void xuatmang(int arr[], int n){
    for (int i =0; i<=n; i++){
        cout <<arr[i]<<"\t";
    }
}
bool ktrsochp(int n){
    for (int i =0; i<=n-1; i++){
        if (n == pow(i,2)){
            return true;
        }
    }
    return false;
}
int timsochp(int arr[],int n){
    for (int i =0; i<=n; i++){
        if (ktrsochp(arr[i])==true){
            return arr[i];
        } 
    }
    return -1;
}
*/
//Bài 164: Cho mảng 1 chiều các số nguyên. Hãy tìm giá trị đầu tiên thỏa mãn tính chất số gánh
//Số gánh một là số có từ ba chữ số trở lên mà giá trị của chữ số đầu bằng giá trị của chữ số cuối; 
//số gánh hai là số có từ năm chữ số trở lên mà giá trị của79 hai chữ số đầu bằng giá trị của hai chữ số cuối; 
//số gánh ba là số có từ bảy chữ số trở lên mà giá trị của ba chữ số đầu bằng giá trị của ba chữ số cuối;…
/*
void nhapmang (int arr[], int n);
void xuatmang( int arr[], int n);
int kiemtrasoganh( int n);
int timsoganh(int arr[], int n);
int main(){
    int n;
    cout<<"Nhap n: "<<endl;
    cin >>n;
    int arr[n];
    cout<<"\nphan tu trong mang la: \n";
    nhapmang(arr,n);
    xuatmang(arr,n);
    cout<<"\nSo ganh dau tien trong mang: ";
    int sganh = timsoganh(arr,n);
    cout<<sganh;
    

    return 0;
}
void nhapmang (int arr[], int n){
    
        for (int i =0; i<=n; i++){
            cin >>arr[i];
        }
}
void xuatmang( int arr[], int n){
    for(int i =0;i<=n; i++){
        cout <<arr[i]<<"\t";
    }
}
int kiemtrasoganh(int n){
    int themang = n;
    int sodau =0;
    while (themang!=0){
        sodau = 10*sodau + themang%10;
        themang/=10;
    }
    if(n ==sodau) {
        return 1;
    }else{
        return 0;
    }
}
int timsoganh(int arr[], int n){
    for (int i =0; i<=n;i++){
        if (kiemtrasoganh(arr[i])==1){
            return arr[i];
        }
    }
    return -1;
}
*/
//Bài 165: Cho mảng 1 chiều các số nguyên. Hãy tìm giá trị đầu tiên có chữ số đầu tiên là chữ số lẻ

/*
void xuatmang (int arr[], int n);
void nhapmang(int arr[], int n);
int ktrsole(int n);
int timsole (int arr[], int n);

int main(){
    int n; 
    cout <<"Nhap phan tu: ";
    cin >>n;
    int arr[n];
    nhapmang(arr,n);
    cout <<"\nMang co cac gia tri: \n";
    xuatmang(arr,n);
    int num = timsole(arr,n);
    cout <<"\nSo le dau tien: "<<num;
    return 0;
}
void nhapmang(int arr[], int n){
    srand(time(NULL));
    for (int i =0; i<=n ; i++){
        arr[i]=rand()%100;
    }
}
void xuatmang (int arr[], int n){
    for (int i =0 ; i<=n; i++){
        cout <<arr[i]<<"\t";
    }
}
int ktrsole(int n){
    if ( n%2 != 0){
        return 1;
    }
    else{
    return -1;
    }
}
int timsole (int arr[], int n){
    for (int i =0; i<=n; i++){
        if (ktrsole(arr[i]) == 1 ){
            return arr[i];
        }
    }
    return -1;
}
*/
//Bài 166: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm giá trị đầu tiên trong mảng có dạng 2^k. Nếu mảng không có giá trị dạng 2k thì hàm sẽ trả về 0
/*

void xuatmang (int arr[], int n);
void nhapmang(int arr[], int n);
int timso2k(int n);
int gtridau (int arr[], int n);
;int main(){
    int n; 
    cout <<"Nhap phan tu: ";
    cin >>n;
    int arr[n];
    nhapmang(arr,n);
    cout <<"\nMang co cac gia tri: \n";
    xuatmang(arr,n);
    int num = gtridau(arr,n);
    cout <<"\nGia tri dau tien co dang 2^k la: \n";
    cout <<num;
    return 0;
}
void nhapmang(int arr[], int n){
    srand(time(NULL));
    for (int i =0; i<=n ; i++){
        arr[i]=rand()%100;
    }
}
void xuatmang (int arr[], int n){
    for (int i =0 ; i<=n; i++){
        cout <<arr[i]<<"\t";
    }
}
int timso2k(int n){
    if (n<1){
        return -1;
    }
    while (n>1){
        if (n%2 !=0){
            return 0;
        }
        n/=2;
    }
    return 1;
    
}
int gtridau (int arr[], int n){
    for (int i =0; i<=n ; i++){
        if (timso2k(arr[i])== 1){
            return arr[i];
        }
    }
    return -1;
}*/
//Bài 167: Hãy tìm giá trị thỏa điều kiện toàn chữ số lẻ và là giá trị lớn nhất thỏa điều kiện ấy trong mảng 1 chiều các số nguyên.
 //Nếu mảng không có giá trị thỏa điều kiện trên thì trả về 0
/*
 void nhapmang(int arr[], int n);
 void xuatmang(int arr[], int n);
 int timsole (int n);

 int maxsole(int arr[], int n);
 int main(){
    int n ; 
    cout <<"Nhap so phan tu trong mang: ";
    cin >>n;
    int arr[n];
    nhapmang(arr,n);
    cout <<"\nMang co gia tri la: \n";
    xuatmang(arr,n);
    cout <<"\ngia tri le max la: \n";
   // tsole(arr,n);
    int num =maxsole(arr,n);
    cout <<num;
    return 0;
 }
 void nhapmang(int arr[], int n){
        srand(time(NULL));
    for (int i =0; i<=n; i++){
        arr[i]=rand()%100;
      
    }

 }
 void xuatmang(int arr[], int n){
    for (int i =0; i<=n; i++){
        cout <<arr[i]<<"\t";
    }
 }
 int timsole (int n){
    if (n==0){
        return 0;
    }
    while (n!=0){
        int temp = n%10;
    if (temp%2==0){
        return 0;
    }
   
    n/=10;
    }
    return 1;
 }

int maxsole(int arr[], int n){
    int max;
    int dem=0;
    for (int i =0; i<=n; i++){
        if (timsole(arr[i])==1){
            max=arr[i];   // max luc nay la arr[i]
            dem++;
            break;
        }}
        if(dem==0){
            return 0;
        }
        for (int i=0; i<=n; i++){
            if (timsole(arr[i])==1){
            max=(max>arr[i])?max:arr[i];
            }
        }
    
       return max; 
 }
*/
//Bài 168: Cho mảng 1 chiều các số nguyên.
// Hãy viết hàm tìm giá trị lớn nhất trong mảng có dạng 5^k. Nếu mảng khong tồn tại giá trị 5^k thì hàm sẽ trả về 0
/*
void nhapmang(int arr[], int n);
void xuatmang(int arr[], int n);
int ktr5k (int n);
int max5k(int arr[], int n);
int main(){
    int n;
    cout <<"Nhap n: "<<endl;
    cin>>n;
    int arr[n];
    nhapmang(arr,n);
    xuatmang(arr,n);
    int num = max5k(arr,n);
    cout<<"\nGia tri co dang 5^K la: \n"<<num;
    
    return 0;
}
void nhapmang(int arr[], int n){
    srand(time(NULL));
    for (int i =0 ; i<=n ; i++){
        arr[i]=100+ rand()%100;
    }
}
void xuatmang(int arr[], int n){
    for (int i =0; i<=n; i++){
        cout <<arr[i]<<"\t";
    }

}
int ktr5k(int n){
    while(n>=5){
        if (n%5!=0){
            return 0;
        }
       
        
        if (n==5){
        return 1;
    }
        n=n/5;
    }
   
    return 0;
}
int max5k(int arr[], int n){
    for (int i =0; i<=n; i++){
        if (ktr5k(arr[i])==1)
        {
            return arr[i];
        }
    }
    return 0;
}*/

//Bài 169 (*): Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm số chẵn lớn nhất nhỏ hơn mọi giá trị lẻ có trong mảng
//So chan lon nhat nho hon toan bo gia tri le trong mang la 
/*
void nhapmang(int arr[], int n);
void xuatmang(int arr[], int n);
int ktrso (int n);
int sochan1(int arr[], int n);

int main(){
    int n; 
    cout <<"Nhap so phan tu trong mang: ";
    cin>>n;
    int arr[n];
    nhapmang(arr,n);
    xuatmang(arr,n);
    cout <<endl;
    int num = sochan1(arr,n);
    cout <<"Cac gia tri chan co trong mang la: \n";
   cout <<num;

    return 0;
}
void nhapmang(int arr[], int n){
    srand(time(NULL));
    for (int i =0 ; i<=n; i++){
        arr[i]= rand()%100;
    }
}
void xuatmang(int arr[], int n){
    for (int i = 0; i<=n; i++){
        cout <<arr[i]<<"\t";
    }

}
int ktrso(int n){
    if (n%2 ==0){
        return 1;
    }
    return 0;
}
int sochan1(int arr[], int n){
    int num =0;
   
            for (int i =0; i<=n; i++){
                for (int j=i+1; j<n;j++){
                    if (arr[i]>arr[j]){
                        int temp = arr[j];
                        arr[j]=arr[i];
                        arr[i]=temp;
                    }
                }
            
        }
    
    for (int i =0; i<=n; i++){
        if (ktrso(arr[i])==1){
            
        num = arr[i];
        
        }
        if (num > (ktrso(arr[i]))==0){
            return num;
        }
       
} 
return 0;
}*/
/*
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int &n)
{
    do
    {
        printf("\nNhap so phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}

// Nếu không có lẻ thì trả về -1
int TimViTriLeDauTien(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            return i;
        }
    }
    return -1;
}
int TimSoLeNhoNhat(int a[], int n, int ViTriDauTien)
{
    int MinLe = a[ViTriDauTien];

    for (int i = ViTriDauTien + 1; i < n; i++)
    {
        if (a[i] % 2 != 0 && a[i] < MinLe)
        {
            MinLe = a[i];
        }
    }
    return MinLe;
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    
    int ViTriLeDauTien = TimViTriLeDauTien(a, n);
    if (ViTriLeDauTien == -1)
    {
        printf("\nMang khong ton tai so le");
    }
    else
    {
        int MinLe = TimSoLeNhoNhat(a, n, ViTriLeDauTien);
        int SoChanThoa = MinLe - 1;
        printf("\nSo chan lon nhat nho hon toan bo gia tri le trong mang la %d", SoChanThoa);
    }
    getch();
    return 0;
}
*/
/*
int tihbieu (int x, int y);
int main()
{
    int fx=2017;
    int x, y;
    cout<<"Nhap x:";

    cin>>x;
    cout<<"NHap n:";
    cin>>y;

    int sum=tihbieu(x,y);
    cout<<"GIa tri cua bieu thuc la: "<<sum+fx;
    return 0;
}
int tihbieu (int x, int n){

    if(n==0){
        return 0;
    }
    else{
        return pow(x,n) + tihbieu(x,n-1);
}
}*/
/*
int gthua(int a);
int main(){
    int a,b;
    cout<<"Nhap a:";
    cin>>a;
    cout<<"Nhap b: ";
    cin>>b;
    double sum = (gthua(a)+gthua(b))*1.0/(gthua(a+b));
    cout <<sum;

    return 0;
}
int gthua(int a){
    if(a==0){
        return 1;
    }
    else{
        return a*gthua(a-1);
    }
}*/


/*


void nhap(float &x){
    cin>>x;
}
float nhapt(int &n){
    cin>>n;
}
int tangg(int n){
  return n+=1;
}
int giamm(int n){
    return n-=1;

}
float tinhbt(float x, int n){
    if(n==1){
        return 0;
    }
    
    else{
        return (pow(x,n))/pow(3,n-1) + tinhbt(x, n-1);
    }
}
int tinhtongchan(int n, int m){
    int sum=0;                                                                                          
    for(int i =n; i<=m; i++){
        if(i>5&& i%2==0){
          sum+=i;
        }
    
    }
    return sum;
}
int main(){
    float x;
    int n,m1;
    cout <<"Nhap x: ";
    nhap(x);
    cout <<"\nNhap n: ";
    nhapt(n);
    cout <<"\nNhap m: ";
    nhapt(m1);
    cout<<"\nGia tri n sau khi tang len 1 don vi:"<<tangg(n);
    cout<<"\nGia tri m sau khi tanng xuong 1 don vi:"<<tangg(m1);
    float result = 2018*pow(x,n);
    cout<<"\nGia tri cua bieu thuc P la: "<<tinhbt(x,n)+result;
    cout<<"\nTong cac so chan lon hon 5 trong [n,..m] la "<<tinhtongchan(n,m1);

}*/
//Bài 170: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm số nguyên tố nhỏ nhất lớn hơn mọi giá trị có trong mảng

/*
void nhapmang(int arr[], int n);
void xuatmang(int arr[], int n);
bool kiemtra(int a);
int songuyentomax(int arr[], int n);
void xuatsnt(int arr[], int n);
int timsont(int arr[], int n);

int main(){
    int n;
    cout <<"Nhap so luong trong mang: ";
    cin>>n;
    int arr[n];
    nhapmang(arr,n);
    cout<<"\nMang co cac gia tri sau: ";
    xuatmang(arr,n);
    cout<<"\nCac so nguyen to co trong mang la: ";
    xuatsnt(arr,n);
    cout <<"\nSo lon nhat trong mang la: "<<songuyentomax(arr,n);

}
void nhapmang(int arr[], int n){
    //srand(time(NULL));
    for(int i =0 ; i<n ;i++){
       // arr[i]=rand()%100;
       cin>>arr[i];
    }
}
void xuatmang(int arr[], int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
}
bool kiemtra(int a){
    if(a<=1){
        return false;
    }
    if(a==2){
        return true;
    }
    int dem =0;

    for(int i =2; i<a; i++){
        if(a%i==0){
            dem++;
        }
    }
    if(dem==0){
        return true;
    }
    return false;
}
void xuatsnt(int arr[], int n){
    for (int i =0; i<n; i++){
        if(kiemtra(arr[i])==true){
            cout<<arr[i]<<"\t";
        }
        
    }
}
// 4 53 58 34 63 22 
// ket qua : 67

int songuyentomax(int arr[], int n){
    int max=0;
    for (int i =0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]<arr[j]){
                int temp = arr[j];
                arr[j]= arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i =0; i<n; i++){
         max = arr[0];
    }
    int max1 = max;
    while(kiemtra(max1)==false){
        max1+=1;
    
    }
    return max1;
}
*/

//Bài 171: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm ước chung lớn nhất của tất cả các phần tử trong mảng
/*
void nhap(int arr[], int n){
    for(int i =0; i<n; i++){
        cout<<"\narr["<<i<<"] = ";
        cin>>arr[i];
    }
}
void xuat(int arr[], int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
}
int TimUcln(int n,int n1){
    int num=0;
    for (int i=0; i<n; i++ ){
        for (int j=0; j<n; j++){
        if (n%i ==0&&n1%j ==0)
        {
            int temp =i;
            int temp2 =j;
        }
         if(temp ==temp2){
            
         }  
     }
       
     }
     return num;

}
int main(){
    int n;
    cout<<"Nhap so phan tu cua mang: ";
    cin>>n;
    int arr[n];
    cout<<"\nNhap cac phan tu cua mang: ";
    nhap(arr,n);
    cout<<"\nPhan tu sau khi duoc nhap: ";
    xuat(arr,n);
    //cout<<"\nUoc chung lon nhat cua cac phan tu trong mang la: "<<UCLN(arr,n);
    int a,b;
     cout<<"\nNhap a: ";
     cin>>a;
     cout<<"\nNhap b: ";
     cin>>b;
     cout<<"UCLN cua a va b la: "<<TimUcln(a,b);
     


}
*/