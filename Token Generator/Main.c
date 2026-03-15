#include <stdio.h>
#include "token.h"
// use this commnad to run the c file -  gcc main.c token.c -o token_program;  
int main(){
    

        struct token_list list;
        initialize_token_list(&list);
        create_tokens_1_100(&list);
    
        
    
        char is_continue = question_answer("Start the Program? (y/n): ");
        
        while(is_continue=='y'){
    
            char issue = question_answer("Issue a Token? (y/n): ");;
    
    
            if(issue=='y'){
                struct token *token = issue_token(&list);
                
            }
    
            is_continue = question_answer("Continue the Program? (y/n): ");
            
        }
    
    }

