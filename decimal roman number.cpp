#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	const int s=8;
	int rom,i;
        cout<<setw(47)<<"Decimal Roman Numeral\n";
        cout<<setw(48)<<"---------------------\n\n";
 
    for (rom =1; rom<=100;rom++){
        if(rom == 1)
        	cout<<"I"<<setw(7);
        else if(rom==2)
        	cout<<"II"<<setw(8);
        else if(rom==3)
        	cout<<"III"<<setw(8);
    	else if (rom==4)
        	cout<<"IV"<<setw(8);
        else if(rom == 5)
        	cout<<"V"<<setw(8);
       	else if (rom == 6)
        	cout<<"VI"<<setw(8);
       	else if (rom == 7)
        	cout<<"VII"<<setw(9);
       	else if (rom == 8)
        	cout<<"VIII"<<setw(8);
        else if(rom==9)
        	cout<<"IX"<<setw(8);
 		else if(rom==10)
 			cout<<"X"<<endl<<endl;
 		else if(rom==11)
 			cout<<"XI"<<setw(7);
 		else if(rom==12)
 			cout<<"XII"<<setw(s);
 		else if(rom==13)
 			cout<<"XIII"<<setw(s);
 		else if(rom==14)
 			cout<<"XIV"<<setw(s);
 		else if(rom==15)
 			cout<<"XV"<<setw(s);
 		else if(rom==16)
 			cout<<"XVI"<<setw(s);
 		else if(rom==17)
 			cout<<"XVII"<<setw(9);
 		else if(rom==18)
 			cout<<"XVIII"<<setw(s);
 		else if(rom==19)
 			cout<<"XIX"<<setw(s);
 		else if(rom==20)
 			cout<<"XX"<<endl<<endl;
 		else if(rom==21)
 			cout<<"XXI"<<setw(7);
 		else if(rom==22)
 			cout<<"XXII"<<setw(s);
 		else if(rom==23)
 			cout<<"XXIII"<<setw(s);
 		else if(rom==24)
 			cout<<"XXIV"<<setw(s);
 		else if(rom==25)
 			cout<<"XXV"<<setw(8);
 		else if(rom==26)
 			cout<<"XXVI"<<setw(s);
 		else if(rom==27)
 			cout<<"XXVII"<<setw(9);
 		else if(rom==28)
 			cout<<"XXVIII"<<setw(s);
 		else if(rom==29)
 			cout<<"XXIX"<<setw(s);
 		else if(rom==30)
 			cout<<"XXX"<<endl<<endl;
 		else if(rom==31)
 			cout<<"XXXI"<<setw(7);
 		else if(rom==32)
 			cout<<"XXXII"<<setw(s);
 		else if(rom==33)
 			cout<<"XXXIII"<<setw(s);
 		else if(rom==34)
 			cout<<"XXXIV"<<setw(s);
 		else if(rom==35)
 			cout<<"XXXV"<<setw(s);
 		else if(rom==36)
 			cout<<"XXXVI"<<setw(s);
 		else if(rom==37)
 			cout<<"XXXVII"<<setw(9);
 		else if(rom==38)
 			cout<<"XXXVIII"<<setw(s);
 		else if(rom==39)
 			cout<<"XXXIX"<<setw(6);
 		else if(rom==40)
 			cout<<"XL"<<endl<<endl;
 		else if(rom==41)
 			cout<<"XLI"<<setw(7);
 		else if(rom==42)
 			cout<<"XLII"<<setw(s);
 		else if(rom==43)
 			cout<<"XLIII"<<setw(s);
 		else if(rom==44)
 			cout<<"XLIV"<<setw(s);
 		else if(rom==45)
 			cout<<"XLV"<<setw(s);
 		else if(rom==46)
 			cout<<"XLVI"<<setw(s);
 		else if(rom==47)
 			cout<<"XLVII"<<setw(9);
 		else if(rom==48)
 			cout<<"XLVIII"<<setw(s);
 		else if(rom==49)
 			cout<<"XLIX"<<setw(6);
 		else if(rom==50)
 			cout<<"L"<<endl<<endl;
 		else if(rom==51)
 			cout<<"LI"<<setw(7);
 		else if(rom==52)
 			cout<<"LII"<<setw(s);
 		else if(rom==53)
 			cout<<"LIII"<<setw(s);
 		else if(rom==54)
 			cout<<"LIV"<<setw(s);
 		else if(rom==55)
 			cout<<"LV"<<setw(s);
 		else if(rom==56)
 			cout<<"LVI"<<setw(s);
 		else if(rom==57)
 			cout<<"LVII"<<setw(9);
 		else if(rom==58)
 			cout<<"LVIII"<<setw(s);
 		else if(rom==59)
 			cout<<"LIX"<<setw(s);
 		else if(rom==60)
 			cout<<"LX"<<endl<<endl;
 		else if(rom==61)
 			cout<<"LXI"<<setw(7);
 		else if(rom==62)
 			cout<<"LXII"<<setw(s);
 		else if(rom==63)
 			cout<<"LXIII"<<setw(s);
 		else if(rom==64)
 			cout<<"LXIV"<<setw(s);
 		else if(rom==65)
 			cout<<"LXV"<<setw(s);
 		else if(rom==66)
 			cout<<"LXVI"<<setw(s);
 		else if(rom==67)
 			cout<<"LXVII"<<setw(9);
 		else if(rom==68)
 			cout<<"LXVIII"<<setw(s);
 		else if(rom==69)
 			cout<<"LXIX"<<setw(s);
 		else if(rom==70)
 			cout<<"LXX"<<endl<<endl;
 		else if(rom==71)
 			cout<<"LXXI"<<setw(7);
 		else if(rom==72)
 			cout<<"LXXII"<<setw(s);
 		else if(rom==73)
 			cout<<"LXXIII"<<setw(s);
 		else if(rom==74)
 			cout<<"LXXIV"<<setw(s);
 		else if(rom==75)
 			cout<<"LXXV"<<setw(s);
 		else if(rom==76)
 			cout<<"LXXVI"<<setw(s);
 		else if(rom==77)
 			cout<<"LXXVII"<<setw(9);
 		else if(rom==78)
 			cout<<"LXXVIII"<<setw(s);
 		else if(rom==79)
 			cout<<"LXXIX"<<setw(s);
 		else if(rom==80)
 			cout<<"LXXX"<<endl<<endl;
 		else    if(rom==81)
 			cout<<"LXXXI"<<setw(7);
 		else if(rom==82)
 			cout<<"LXXXII"<<setw(s);
 		else if(rom==83)
 			cout<<"LXXXIII"<<setw(s);
 		else if(rom==84)
 			cout<<"LXXXIV"<<setw(s);
 		else if(rom==85)
 			cout<<"LXXXV"<<setw(s);
 		else if(rom==86)
 			cout<<"LXXXVI"<<setw(s);
 		else if(rom==87)
 			cout<<"LXXXVII"<<setw(9);
 		else if(rom==88)
 			cout<<"LXXXVIII"<<setw(s);
 		else if(rom==89)
 			cout<<"LXXXIX"<<setw(5);
 		else if(rom==90)
 			cout<<"XC"<<endl<<endl;
 		else if(rom==91)
 			cout<<"XCI"<<setw(7);
 		else if(rom==92)
 			cout<<"XCII"<<setw(s);
 		else if(rom==93)
 			cout<<"XCIII"<<setw(s);
 		else if(rom==94)
 			cout<<"XCIV"<<setw(s);
 		else if(rom==95)
 			cout<<"XCV"<<setw(s);
 		else if(rom==96)
 			cout<<"XCVI"<<setw(s);
 		else if(rom==97)
 			cout<<"XCVII"<<setw(9);
 		else if(rom==98)
 			cout<<"XCVIII"<<setw(s);
 		else if(rom==99)
 			cout<<"XCIX"<<setw(6);
 		else if(rom==100)
 			cout<<"C";
	} //end of for    
    return 0;
}

