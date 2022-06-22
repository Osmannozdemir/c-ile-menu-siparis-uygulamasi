#include <stdio.h>

int main()
{
printf("Menü\t\tSipariþ No\tFiyat\n");
    printf("Sýcaklar\t1\t\t7.25\n");
    printf("Ana Yemek\t2\t\t12.50\n");
    printf("Tatlýlar\t3\t\t9.75\n");
    printf("Ýçecekler\t4\t\t3.50\n");
    printf("Salatalar\t5\t\t6.50\n");
    printf("Çýkýþ = 6\n");
    
    int siparisno;
    float toplamtutar, porsiyon;
menu:   printf("Lütfen almak istediðiniz ürünün sipariþ kodlarýný giriniz: ");
        scanf("%d",&siparisno);
    if(siparisno==6){
        goto cikis;
    }
    if(siparisno >0 && siparisno<6){
        tekrar: printf("Kaç Adet Ýstiyorsunuz? = ");
        scanf("%f",&porsiyon);
    }
    switch(siparisno){
        case 1:if(porsiyon>0){
            toplamtutar += porsiyon*7.25;
            printf("Toplam Tutar: %.2f\n", toplamtutar);
        }
        else{
            printf("Lütfen sýfýrdan büyük bir porsiyon giriniz..\n");
            goto tekrar;
        }
            break;
        case 2:
        if(porsiyon>0){
            toplamtutar += porsiyon*12.50;
            printf("Toplam Tutar: %.2f\n", toplamtutar);
        }
        else{
            printf("Lütfen sýfýrdan büyük bir porsiyon giriniz..\n");
            goto tekrar;
        }
            break;
        case 3:
        if(porsiyon>0){
            toplamtutar += porsiyon*9.75;
            printf("Toplam Tutar: %.2f\n", toplamtutar);
        }
        else{
            printf("Lütfen sýfýrdan büyük bir porsiyon giriniz..\n");
            goto tekrar;
        }
            break;
        case 4:
        if(porsiyon>0){
            toplamtutar += porsiyon*3.50;
            printf("Toplam Tutar: %.2f\n", toplamtutar);
        }
        else{
            printf("Lütfen sýfýrdan büyük bir porsiyon giriniz..\n");
            goto tekrar;
        }
            break;
        case 5:
        if(porsiyon>0){
            toplamtutar += porsiyon*6.50;
            printf("Toplam Tutar: %.2f", toplamtutar);
        }
        else{
            printf("Lütfen sýfýrdan büyük bir porsiyon giriniz..\n");
            goto tekrar;
        }
        break;
        default: 
        printf("Lütfen 1 ile 5 arasýnda bir deðer giriniz..\n");
        break;
    }
    
    goto menu;
    cikis:
    printf("Alýþveriþ Tamamlandý..\nToplam Ödenecek Tutar: %.2f\nIyi Günler Dileriz..", toplamtutar);
   return 0;
}

