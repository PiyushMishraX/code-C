#include<stdio.h>
#include<string.h>
int main(){
//     char str[]="archiii";
//     char nstr[25];
//     int j=0;
//     int ln=strlen(str);

//     char target='r';
//     for(int i=0;i<ln;i++){
//         if(str[i]!=target){
//           nstr[j]=str[i];
//           j++;
//         }
//          nstr[j]='\0';
//     }
   
//     printf("%s",nstr);
//     // for(int j=0;j<ln;j++){
//     //     printf("%c",nstr[j]);
//     // }

// }
// char str[]="strstrmf";
// int ln=strlen(str);
// int freq[256]={0};
//  for(int i=0;i<ln;i++){
//     freq[str[i]]++;
//  }
//  for(int i=0;i<ln;i++){
//     if(freq[str[i]]==1){
//         printf("%c",str[i]);
//         break;
//     }
//  }
char str1[]="apple";
char str2[]="tomaeo";
int j=0;
int nstr[100];
int ln=strlen(str1);
int ll=strlen(str2);
for(int i=0;i<ln;i++){
    for(int j=0;j<ll;j++){
        if(str1[i]==str2[j]){
          printf("%c",str1[i]);
        }
    }
}
 }
