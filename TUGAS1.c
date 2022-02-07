#include <stdio.h>

void main ()
{
	int a;
	printf("=================================\n");
	printf("Selamat Datang Di Menu Tugas 1!\n");
	printf("=================================\n");
	printf("Berikut Menu yang tersedia :\n");
	printf("1.Looping! \n");
	printf("2.Choice! \n");
	printf("Silahkan pilih menu anda : ");
	scanf("%d",&a);
	system("cls");
	switch (a)
	{
		case 1:
			looping();break;
		case 2:
			choice();break;
		default:
		printf("Kode Salah Harap ulangi lagi!\n");
		main();		
	}
}

void looping ()
{
    int a, b=1, c=1, d=0, e=0, f=0 ,g;
    printf("Input Angka: ");
    scanf("%d",&a);
    for(g=1;g<=a;g++)
    {
        d+=g;
    }
        printf("for = %d \n\n",d);

    while(b<=a)
    {
        e+=b;
        b++;
    }
        printf("while = %d \n\n",e);

    do{
        f+=c;
        c++;
    }
    while(c<=a);
        printf("do - while = %d \n",f);
	gate();
}

void choice ()
{
	int x;
	printf("==========================\n");
	printf ("Konversi Crypto To IDR : \n");
	printf("==========================\n");
	printf ("1.Konversi IDR To BTC\n");
	printf ("2.Konversi IDR To ETH\n");
	printf ("3.Konversi IDR To USDT\n");
	printf ("Masukan Kode : ");
	scanf ("%d",&x);
	system("cls");
	switch (x)
	{
		case 1:
			BTC();break;
		case 2:
			ETH();break;
		case 3:
			USDT();break;
		default:
		printf("Kode salah harap ulangi lagi!\n");
		choice();
	}
	
}

void BTC ()
{
	float x, coin;
	int y = 547974483;
	printf("===========================\n");
	printf ("Konversi Rupiah Ke BTC\n");
	printf("===========================\n");
	printf ("Masukan Mata Uang Rupiah : ");
	scanf ("%f", &x);
	coin = x / y;
	printf ("Berikut Hasilnya : %f \n",coin);
	gate();
}

void ETH ()
{
	float x, coin;
	int y = 37897476;
	printf("===========================\n");
	printf ("Konversi Rupiah Ke ETH\n");
	printf("===========================\n");
	printf ("Masukan Mata Uang Rupiah : ");
	scanf ("%f", &x);
	coin = x / y;
	printf ("Berikut Hasilnya : %f \n",coin);
	gate();
}

void USDT ()
{
	float x, coin;
	int y = 14342;
	printf("===========================\n");
	printf ("Konversi Rupiah Ke USDT\n");
	printf("===========================\n");
	printf ("Masukan Mata Uang Rupiah : ");
	scanf ("%f", &x);
	coin = x / y;
	printf ("Berikut Hasilnya : %f \n",coin);
	gate();
}

void gate ()
{
	int x;
	system("pause");
	system("cls");
	printf ("Mau liat program lain? (Y/N)");
	scanf("%s", &x);
	if (x == 'Y')
	{
		system ("cls");
		main();
	}
	else if (x == 'N')
	{
		printf ("Yahh Bye- Bye ");
	}
	else 
	{
		printf ("Salah Woe!\n");
		gate();
	}
	system ("cls");
}



