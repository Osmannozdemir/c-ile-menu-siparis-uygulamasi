#include <stdio.h>

int main()
{
printf("Men�\t\tSipari� No\tFiyat\n");
    printf("S�caklar\t1\t\t7.25\n");
    printf("Ana Yemek\t2\t\t12.50\n");
    printf("Tatl�lar\t3\t\t9.75\n");
    printf("��ecekler\t4\t\t3.50\n");
    printf("Salatalar\t5\t\t6.50\n");
    printf("��k�� = 6\n");
    
    int siparisno;
    float toplamtutar, porsiyon;
menu:   printf("L�tfen almak istedi�iniz �r�n�n sipari� kodlar�n� giriniz: ");
        scanf("%d",&siparisno);
    if(siparisno==6){
        goto cikis;
    }
    if(siparisno >0 && siparisno<6){
        tekrar: printf("Ka� Adet �stiyorsunuz? = ");
        scanf("%f",&porsiyon);
    }
    switch(siparisno){
        case 1:if(porsiyon>0){
            toplamtutar += porsiyon*7.25;
            printf("Toplam Tutar: %.2f\n", toplamtutar);
        }
        else{
            printf("L�tfen s�f�rdan b�y�k bir porsiyon giriniz..\n");
            goto tekrar;
        }
            break;
        case 2:
        if(porsiyon>0){
            toplamtutar += porsiyon*12.50;
            printf("Toplam Tutar: %.2f\n", toplamtutar);
        }
        else{
            printf("L�tfen s�f�rdan b�y�k bir porsiyon giriniz..\n");
            goto tekrar;
        }
            break;
        case 3:
        if(porsiyon>0){
            toplamtutar += porsiyon*9.75;
            printf("Toplam Tutar: %.2f\n", toplamtutar);
        }
        else{
            printf("L�tfen s�f�rdan b�y�k bir porsiyon giriniz..\n");
            goto tekrar;
        }
            break;
        case 4:
        if(porsiyon>0){
            toplamtutar += porsiyon*3.50;
            printf("Toplam Tutar: %.2f\n", toplamtutar);
        }
        else{
            printf("L�tfen s�f�rdan b�y�k bir porsiyon giriniz..\n");
            goto tekrar;
        }
            break;
        case 5:
        if(porsiyon>0){
            toplamtutar += porsiyon*6.50;
            printf("Toplam Tutar: %.2f", toplamtutar);
        }
        else{
            printf("L�tfen s�f�rdan b�y�k bir porsiyon giriniz..\n");
            goto tekrar;
        }
        break;
        default: 
        printf("L�tfen 1 ile 5 aras�nda bir de�er giriniz..\n");
        break;
    }
    
    goto menu;
    cikis:
    printf("Al��veri� Tamamland�..\nToplam �denecek Tutar: %.2f\nIyi G�nler Dileriz..", toplamtutar);
   return 0;
}

