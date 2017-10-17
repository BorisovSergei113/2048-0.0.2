#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int pole[4][4] = {0};
    int e[4]={0};
    int y[4]={0};
    int u,h=1;
    char operation;
    int ochki = 0;
    bool sluch,notres=false;
    int a,b;

    int array[100];
    for(int i =0; i<=91;i++)
    {
        array[i]=2;
    }
    for(int i =92; i<=100;i++)
    {
        array[i]=4;
    }

    for (int i = 0; i<4; i++) {
        for (int j =0 ; j<4; j++) {
            if(pole[i][j]==0)
            {cout<<"*"<<"    ";}
            else
            {cout<<pole[i][j]<<"    ";}
        }
        cout<<'\n';
    }



    while (notres==false) {

        cin>>operation;

        switch(operation) {
            case 'j':
                for (int i = 0; i < 4; i++) {
                    for (int j = 3; j >= 0; j--) {
                        if (pole[j][i] == 0) {
                            for (int k = j - 1; k >= 0; k--) {
                                if (pole[k][i] != 0) {
                                    pole[j][i] = pole[k][i];
                                    pole[k][i] = 0;
                                    break;
                                }
                            }
                        }
                    }
                }

                for (int i = 0; i < 4; i++) {
                    for (int j = 3; j > 0; j--) {
                        if (pole[j][i] == pole[j - 1][i]) {
                            pole[j][i] = pole[j][i] + pole[j - 1][i];
                            pole[j - 1][i] = 0;
                            ochki = ochki + pole[j][i];
                        }
                    }
                }

                for (int i = 0; i < 4; i++) {
                    for (int j = 3; j >= 0; j--) {
                        if (pole[j][i] == 0) {
                            for (int k = j - 1; k >= 0; k--) {
                                if (pole[k][i] != 0) {
                                    pole[j][i] = pole[k][i];
                                    pole[k][i] = 0;
                                    break;
                                }
                            }
                        }
                    }
                }

                while (sluch != true)
                {
                    srand(time(0));
                    a = e[rand() % 4];
                    b = y[rand() % 4];


                    if (pole[a][b] == 0)
                    {

                        pole[a][b] = array[rand() % 100];
                        sluch = true;
                    }
                    else
                    {
                        sluch = false;
                    }

                    for(int i =0;i<4;i++)
                    {
                        for(int j =0; j<4;j++)
                        {
                            if(pole[i][j] == 0)
                            {
                                e[i]=i;
                                y[i]=j;
                            }
                        }
                    }
                }

                sluch = false;




                for (int i = 0; i < 4; i++)
                {
                    for (int j = 3; j >0; j--)
                    {
                        if (pole[j][i]!=pole[j - 1][i])
                        {
                            u=u*1;
                        }
                        else
                        {
                            u=u*0;
                        }

                    }
                }
                for (int i = 0; i < 4; i++){
                    for(int j=3;j>=0;j--)
                    {
                        if(pole[i][j]!=pole[i][j-1])
                        {
                            h=h*1;
                        }
                        else
                        {
                            h=h*0;
                        }
                    }
                }
                if(u==1 && h==1)
                {
                    notres=true;
                }
                h=1;
                u=1;
                break;


            case 'k':
                for(int i=0;i<4;i++){
                    for(int j=0;j<4;j++){
                        if(pole[j][i]==0){
                            for(int k=j+1;k<4;k++){
                                if(pole[k][i]!=0){
                                    pole[j][i]=pole[k][i];
                                    pole[k][i]=0;
                                    break;
                                }
                            }
                        }
                    }
                }
                for(int i=0;i<4;i++){
                    for(int j=0;j<3;j++){
                        if(pole[j][i]==pole[j+1][i]){
                            pole[j][i]=pole[j][i] + pole[j+1][i];
                            pole[j+1][i]=0;
                            ochki=ochki+pole[j][i];
                        }
                    }
                }
                for(int i=0;i<4;i++){
                    for(int j=0;j<4;j++){
                        if(pole[j][i]==0){
                            for(int k=j+1;k<4;k++){
                                if(pole[k][i]!=0){
                                    pole[j][i]=pole[k][i];
                                    pole[k][i]=0;
                                    break;
                                }
                            }
                        }
                    }
                }
                while(sluch!=true)
                {
                    srand(time(0));
                    a = rand() % 4;
                    b = rand() % 4;
                    if (pole[a][b] == 0)
                    {
                        pole[a][b] = array[rand() % 100];
                        sluch=true;
                    }
                    else
                    {
                        sluch=false;
                    }
                }
                sluch=false;

                for (int i = 0; i < 4; i++)
                {
                    for (int j = 3; j >0; j--)
                    {
                        if (pole[j][i]!=pole[j - 1][i])
                        {
                            u=u*1;
                        }
                        else
                        {
                            u=u*0;
                        }

                    }
                }
                for (int i = 0; i < 4; i++){
                    for(int j=3;j>=0;j--)
                    {
                        if(pole[i][j]!=pole[i][j-1])
                        {
                            h=h*1;
                        }
                        else
                        {
                            h=h*0;
                        }
                    }
                }
                if(u==1 && h==1)
                {
                    notres=true;
                }
                h=1;
                u=1;
                break;


            case 'h':
                for(int i=0;i<4;i++){
                    for(int j=0;j<4;j++){
                        if(pole[i][j]==0){
                            for(int k=j+1;k<4;k++){
                                if(pole[i][k]!=0){
                                    pole[i][j]=pole[i][k];
                                    pole[i][k]=0;
                                    break;
                                }
                            }
                        }
                    }
                }
                for(int i=0;i<4;i++){
                    for(int j=0;j<3;j++){
                        if(pole[i][j]==pole[i][j+1]){
                            pole[i][j]=pole[i][j] + pole[i][j+1];
                            pole[i][j+1]=0;
                            ochki=ochki+pole[i][j];
                        }
                    }
                }
                for(int i=0;i<4;i++){
                    for(int j=0;j<4;j++){
                        if(pole[i][j]==0){
                            for(int k=j+1;k<4;k++){
                                if(pole[i][k]!=0){
                                    pole[i][j]=pole[i][k];
                                    pole[i][k]=0;
                                    break;
                                }
                            }
                        }
                    }
                }
                while(sluch!=true)
                {
                    srand(time(0));
                    a = rand() % 4;
                    b = rand() % 4;

                    if (pole[a][b] == 0)
                    {
                        pole[a][b] = array[rand() % 100];
                        sluch=true;
                    }
                    else
                    {
                        sluch=false;
                    }
                }
                sluch=false;

                for (int i = 0; i < 4; i++)
                {
                    for (int j = 3; j >0; j--)
                    {
                        if (pole[j][i]!=pole[j - 1][i])
                        {
                            u=u*1;
                        }
                        else
                        {
                            u=u*0;
                        }

                    }
                }
                for (int i = 0; i < 4; i++){
                    for(int j=3;j>=0;j--)
                    {
                        if(pole[i][j]!=pole[i][j-1])
                        {
                            h=h*1;
                        }
                        else
                        {
                            h=h*0;
                        }
                    }
                }
                if(u==1 && h==1)
                {
                    notres=true;
                }
                h=1;
                u=1;
                break;

            case 'l':
                for(int i=0;i<4;i++){
                    for(int j=3;j>=0;j--){
                        if(pole[i][j]==0){
                            for(int k=j-1;k>=0;k--){
                                if(pole[i][k]!=0){
                                    pole[i][j]=pole[i][k];
                                    pole[i][k]=0;
                                    break;
                                }
                            }
                        }
                    }
                }
                for(int i=0;i<4;i++){
                    for(int j=3;j>=0;j--){
                        if(pole[i][j]==pole[i][j-1]){
                            pole[i][j]=pole[i][j] + pole[i][j-1];
                            pole[i][j-1]=0;
                            ochki=ochki+pole[i][j];
                        }
                    }
                }
                for(int i=0;i<4;i++){
                    for(int j=3;j>=0;j--){
                        if(pole[i][j]==0){
                            for(int k=j-1;k>=0;k--){
                                if(pole[i][k]!=0){
                                    pole[i][j]=pole[i][k];
                                    pole[i][k]=0;
                                    break;
                                }
                            }
                        }
                    }
                }
                while(sluch!=true)
                {
                    srand(time(0));
                    a = rand() % 4;
                    b = rand() % 4;

                    if (pole[a][b] == 0)
                    {
                        pole[a][b] = array[rand() % 100];
                        sluch=true;
                    }
                    else
                    {
                        sluch=false;
                    }
                }
                sluch=false;


                for (int i = 0; i < 4; i++)
                {
                    for (int j = 3; j >0; j--)
                    {
                        if (pole[j][i]!=pole[j - 1][i])
                        {
                            u=u*1;
                        }
                        else
                        {
                            u=u*0;
                        }

                    }
                }
                for (int i = 0; i < 4; i++){
                    for(int j=3;j>=0;j--)
                    {
                        if(pole[i][j]!=pole[i][j-1])
                        {
                            h=h*1;
                        }
                        else
                        {
                            h=h*0;
                        }
                    }
                }
                if(u==1 && h==1)
                {
                    notres=true;
                }
                h=1;
                u=1;
                break;
            case 'q':
                cout<<"exit"<<endl;
                notres=true;
                break;
        }
        for (int i = 0; i<4; i++) {
            for (int j =0 ; j<4; j++) {
                if(pole[i][j]==0)
                {cout<<"*"<<"    ";}
                else
                {cout<<pole[i][j]<<"    ";}
            }
            cout<<'\n';
        }
        cout<<"score = "<<ochki<<'\n';
    }


    return 0;
}