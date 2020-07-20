#include<windows.h>
#include<TlHelp32.h>
constexpr int entity_list = 0x4D5240C; //modify this
constexpr int detected_by_enemysensor_time = 0x3978; //and this

#define h1077260 entity_list
#define i4712 detected_by_enemysensor_time
#define y(h,j,k)h##ProcessMemory(b,(char*)j,&k,4,0)
                                      
													   int main()
					{MODULEENTRY32 d;DWORD a,c,g,h;void*b=0;char*\
		  e=0;      GetWindowThreadProcessId(FindWindow("Valve001",  /* ~'.-~~'.·::*/"Counter-Strike: Global Offensive"/*->*/\
			  ), &a); b = CreateToolhelp32Snapshot(8,a);d.dwSize=\
			  548;do{e          =d.szModule;if(e[1]-e[3]==7){c = \
			   (DWORD)d.         modBaseAddr;}}while(Module32Next\
			   (b,&d));;          b=OpenProcess(\
			 2097151,0,a);for(a=0;a<64;a++){\
			 float f=999999.0f;y(Read,c+\
			 h1077260+a*16,g);y(Write,\
			g+i4712,  f); } HANDLE han;
		  /*credits:..*/     han    =\
		 GetStdHandle(-11);      //.
		/*shwp*/WriteConsole(han,
		"bullet:)\n",0x9,
	   &h,0);while(\
	  true) {Sleep(1);
	 Sleep(133769);
	} return 0;} /*
	########
	##*/


/*int main(){MODULEENTRY32 d;DWORD a,c,g,h;void*b=0;char*e=0;GetWindowThreadProcessId(FindWindow("Valve001",0),&a);b=CreateToolhelp32Snapshot(8,a);d.dwSize=548;
do{e=d.szModule;if(e[1]-e[3]==7){c=(DWORD)d.modBaseAddr;}}while(Module32Next(b,&d));
b=OpenProcess(2097151,0,a);for(a=0;a<64;a++){float f=8<<16;y(Read,c+81077260+a*16,g);
y(Write,g+14712,f);}WriteConsole(GetStdHandle(-11),"bullet",6,&h,0);Sleep(c);}*/