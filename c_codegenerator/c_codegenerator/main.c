//
//  main.c
//  c_syntax_analysis
//
//  Created by PARKHOJUNG on 2019/11/03.
//  Copyright © 2019 PARKHOJUNG. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "type.h"

extern int syntax_err;
extern int semantic_err;
extern A_NODE *root;
FILE *fout;
extern FILE *yyin;
void initialize();
void print_ast();
void print_sem_ast();
void semantic_analysis();
void code_generation();
void main(int argc, char *argv[])
{
    
    char s[30]={'\0'};
	
    if (argc<2){
        printf("source file not given\n");
        exit(1);}
    if ( (argc==2) && (yyin=fopen(argv[1],"r"))==NULL ) {
        printf("can not open input file: %s\n",argv[argc-1]);
        exit(1);}
      
    printf("\nstart syntax analysis\n");
    initialize();
    yyparse();
    if (syntax_err) exit(1);
    
   /*print for check*/
    //print_ast(root);

    semantic_analysis(root);
    if(semantic_err)exit(1);

    /*print for check*/
    //print_sem_ast(root);
   

    // assembli result file open
    strcat(s,"result/"); // don't delete this line
    strcat(s,argv[1]);
    if((fout=fopen(s,"w"))==NULL){
        printf("can not open output file: %s\n",s);
        exit(1);
    }
    code_generation(root);
    exit(0);
}

