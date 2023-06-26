#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <iostream>
using namespace std;

struct tanggal{
  int hari, bln, thn;
};

struct tanggal pjm, bck, jt;


int charjadiint(char dt[10],int jd){
    jd=atoi(dt);
    return(jd);
}

char ulang(int *v,char u[10])
{

    printf("\n\n\n\tWant to borrow another book? [Y/N] ");
    gets(u);
    *v=strcmp(u,"Y");
    return(*v);
}

int main (){
    system ("cls");


    char nama[20], sin[20], dt[10], kode[10][10], jb[5][10], u[1], k[4], bayar[100],
    daftar[5][100]={"Mao Tse-Tung","Miguel de Cervantes","Charles Dickens","J.R.R. Tolkien","J.K Rowling"},
    judul[5][100]={"Quotation from Mao Zedong","Don Quixote","A Tale of Two Cities","Lord of The Rings","Harry Potter and the Philosopher's Stone"};

    int i, j, jd, a, b, c, d, e, jumlah[10],total[10],v,byr,kmbl;

    printf("\n\n\n\n\t\t     WELCOME TO PRESIDENT UNIVERSITY E-LIBRARY\n");
    printf("\n\t\t          ~Anytime and Everywhere Library~\n");

    printf("\n\n\n\t Steps:\n");
    printf("\n\t1. Register your self");
    printf("\n\t2. Enter the number of types of books you want to borrow");
    printf("\n\t3. Enter the type of book you want to borrow");
    printf("\n\t4. Enter the number of books you want to borrow");
    printf("\n\t5. Return the book you borrowed on time\n");

    printf("\n\tNote: If you do not return the borrowed book on time, you will be charged a fine of IDR 2,000.");

    printf("\n\n\n\n\n\t\t\t\tName              : ");
    gets(nama);
    strupr(nama);

    printf("\n\t\t\t\tStudent ID Number : ");
    gets(sin);
    strupr(sin);
    system ("cls");

    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("+                                  PRESIDENT UNIVERSITY LIBRARY                                       +\n");
    printf("+                                            BOOK LIST                                                +\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("|   BOOK CODE   |        AUTHOR         |                 BOOK TITLE                 |  RENTAL COSTS  |\n");
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("|     00001     |      Mao TseTung      |          Quotation from Mao Zedong         |   IDR 10.000   |\n");
    printf("|     00002     |  Miguel de Cervantes  |                 Don Quixote                |    IDR 8.000   |\n");
    printf("|     00003     |    Charles Dickens    |            A Tale of Two Cities            |    IDR 7.000   |\n");
    printf("|     00004     |     J.R.R. Tolkien    |              Lord of The Rings             |    IDR 9.000   |\n");
    printf("|     00005     |      J.K Rowling      |  Harry Potter and the Philosopher's Stone  |    IDR 8.000   |\n");
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

    printf("Name              : %s \n", nama);
    printf("Student ID Number : %s \n", sin);

    printf("Number of types of books you want to borrow : ");
    gets(dt);

    jd=charjadiint(dt,jd);
    for (i=0;i<jd;i++){
        printf("\n\tBook-%d ",i+1);
        printf("\n\tBook Code\t                 : "); gets(kode[i]);
        printf("\n\tNumber of borrowed books\t : "); gets(jb[i]);
        jumlah[i]=atoi(jb[i]);

        a=strcmp(kode[i],"00001");
        if(a==0){
            total[i]=jumlah[i]*10000;
            k[i]=0;
         }

         b=strcmp(kode[i],"00002");
         if(b==0){
            total[i]=jumlah[i]*8000;
            k[i]=1;
        }
        c=strcmp(kode[i],"00003");
         if(c==0){
            total[i]=jumlah[i]*7000;
            k[i]=2;
        }
        d=strcmp(kode[i],"00004");
         if(d==0){
            total[i]=jumlah[i]*9000;
            k[i]=3;
        }
        e=strcmp(kode[i],"00005");
         if(e==0){
            total[i]=jumlah[i]*8000;
            k[i]=4;
        }
        else if(a<0, a>0, b<0,b>0, c<0, c>0, d<0, d>0, e<0, e>0){
            system ("cls");
            printf("\n\n\n\n\n\n\n\n\tSorry, the book code is not available. Please enter the appropriate book code!\n\n");
            system ("pause");
            system ("cls");
            main();
            }
        }

    cout<<"\nBorrow Date\n";
  while(1){
    cout<<"Date     [DD]             : "; cin>>pjm.hari;
    if(pjm.hari<=0||pjm.hari>30){
      cout<<" Isikan data..\n";
    }else{break;}
  }
  while(1){
    cout<<"Month    [MM]             : "; cin>>pjm.bln;
    if(pjm.bln<=0||pjm.bln>12){
      cout<<" Isikan data..\n";
    }else{break;}
  }
  while(1){
    cout<<"Year     [YYYY]           : "; cin>>pjm.thn;
    if(pjm.thn<=0){
      cout<<" Isikan data..\n";
    }else{break;}
  }


    cout<<"\nReturn Date\n";
  while(1){
    cout<<"Date     [DD]             : "; cin>>bck.hari;
    if(bck.hari<=0||bck.hari>30){
      cout<<" Isikan data..\n";
    }else{break;}
  }
  while(1){
    cout<<"Month    [MM]             : "; cin>>bck.bln;
    if(bck.bln<=0||bck.bln>12){
      cout<<" Isikan data..\n";
    }else{break;}
  }
  while(1){
    cout<<"Year     [YYYY]           : "; cin>>bck.thn;
    if(bck.thn<=0){
      cout<<" Isikan data..\n";
    }else{break;}
  }


  int lamaPinjam=(bck.hari-pjm.hari)+((bck.bln-pjm.bln)*30)+((bck.thn-pjm.thn)*360);
  int terlambat=lamaPinjam-7;
  int denda=0;
  if(lamaPinjam>7){
    denda =terlambat*2000;
  }

  jt.hari = pjm.hari+7;
  jt.bln = pjm.bln+(jt.hari/31);
  jt.thn = pjm.thn+(jt.bln/13);
  if(jt.hari>30){
    jt.hari-=30;
  }
  if(jt.bln>12){
    jt.bln-=12;
  }


    system("cls");

    printf("\n\tName                : %s", nama);
    printf("\n\tStudent id Number   : %s\n\n", sin);


    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("| BOOK CODE |       AUTHOR       |          BOOK TITLE          |  BOOKS TOTAL  |  SUBTOTAL  |\n");
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");

    for (i=0;i<jd;i++){
    printf("|%s      |%s        |%s             |%d             |%d    \n\n",&kode[i],&daftar[k[i]],&judul[k[i]],jumlah[i],total[i]);
    }


  cout<<"\n Borrow Date     : "<<pjm.hari<<" - "<<pjm.bln<<" - "<<pjm.thn;
  cout<<"\n Return Date     : "<<bck.hari<<" - "<<bck.bln<<" - "<<bck.thn;
  cout<<"\n Due Date        : "<<jt.hari<<" - "<<jt.bln<<" - "<<jt.thn;
  cout<<"\n Borrow Duration : "<<lamaPinjam<<" day";
  cout<<"\n Long Delay      : "<<terlambat<<" day";
  cout<<"\n Fine            : IDR "<<denda;



    printf("\n\n\n\t\tThank You %s For Your Visit!\n",nama);

    v=ulang(&v,u);
    if(v==0){
        main();
    }

    getch ();
    return 0;

}
