//
//  main.c
//  semantic_analysis
//
//  Created by parkhojeong on 2019/11/26.
//  Copyright © 2019 parkhojeong. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "type.h"

extern int syntax_err;
extern A_NODE *root;
extern FILE *yyin;
void initialize();
void print_ast();
void main(int argc, char *argv[])
{
    if (argc<2){
        printf("source file not given\n");
        exit(1);}
    if ( (argc==2) && (yyin=fopen(argv[argc-1],"r"))==NULL ) {
        printf("can not open input file: %s\n",argv[argc-1]);
        exit(1);}
    printf("\nstart syntax analysis\n");
    initialize();
    yyparse();
    if (syntax_err) exit(1);
    print_ast(root);
    exit(0);
}
