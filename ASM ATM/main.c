#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int login(int a, int b);
int main(){
	int ruttien, chuyentien, id, sodu, luachon, num, mon= 10000000,ketthuc, count =0,typeExitMenu;
 	char username [] = ("tuanvu");
	char password [] = ("abc123");
	int dieukienrut = 1;
	int loginNum = 0;
	int checkWithDraw = 0;
	int luachonWithDraw = 0;
	int checkTransfer = 0;
	int checkTransfer1 = 0;
	int checkcheck = 0, checkcheck1 =0;
	//char user[50], pass[50];
	
	// dang nhap
	int chuongtrinh = 0;
	
	while(chuongtrinh == 0){
		printf("------------------\n");
		printf("Wellcome to My ATM\n");
		printf("Username: ");
		scanf("%s",&username);
		printf ("Password: ");
		scanf ("%s",&password);
		system("cls");
		
		if ( strcmp(username,"tuanvu") == 0 && strcmp(password,"abc123") == 0){
			printf ("Login success!!!\n");
			int menu = 0;
			while(menu == 0){
				printf("-----Menu-----\n");
				printf("1.With draw\n");
				printf("2.Transfer\n");
				printf("3.Check \n");
				printf("4.Logout \n");
				printf("Enter your select: ");
				scanf("%d",&luachon);
				system("cls");
				switch(luachon){
					case 1:
						checkWithDraw = 0;
						while(checkWithDraw == 0){
							printf("-----With draw-----\n");
							printf("Enter your with draw: \n");
							printf("0.Exit\n");
							scanf("%d",&ruttien);
							if(ruttien == 0){
								checkWithDraw = 1;
								system("cls");
							}
							if(ruttien %50 ==0 && ruttien <= 3000000 && ruttien <= mon){
								sodu = mon - ruttien ;
								printf("So tien con lai :%d\n",sodu);
								mon = sodu;
								
							}else{	
									printf("Boi so cua 50, <= 3M, <= So du \n ");
							}
							
						}
						
						break;
						
					case 2:
						checkTransfer = 0;
						while (checkTransfer ==0){
							printf("Nhap ID nguoi nhan: \n");
							scanf("%d", &id);
							printf (" So tien can chuyen: \n");
							scanf("%d",&chuyentien);
							sodu = mon - chuyentien;
							printf("So tien GD: %d So tai khoan thu huong: %d \n",chuyentien,id);
							printf("So du tai khoan con %d \n",sodu);
							mon = sodu;
							printf("Do you want exit? (1)Yes|(0)No\n");
							scanf("%d",&checkTransfer1);
							if(checkTransfer1 == 1 ){
							checkTransfer = 1;
							
							}
						}
						system("cls");
						break;
					case 3:
						checkcheck = 0;
						while (checkcheck ==0){
						printf("Your in Check\n");
						sodu = mon;
						printf("So du trong tai khoan: %d\n", sodu);
						printf("Do you want exit? (1)Yes|(0)No\n");
							scanf("%d",&checkcheck1);
							if(checkcheck1 == 1 ){
							checkcheck = 1;
						}
						
					}
						break;
					case 4:
						
						printf("Do you want exit? (1)Yes|(0)No\n");
						scanf("%d",&typeExitMenu);
						if(typeExitMenu == 1 ){
							menu = 1;
							printf("Logout Success!!!\n");
						}
						break;
				}
				return 0;
			}
			
		}else{
			count ++;
				printf("Moi ban nhap lai\n");
				printf("Ban da nhap sai %d lan\n",count);
			if (count ==3){
				printf("Nhap sai mat khau\n");
				chuongtrinh =1;
			}			
				
		}
	}
	

	return 0;
}
