#include <stdio.h> 
#include <signal.h> 
#include <unistd.h> 
                    
void signal_handler(int sig) { 
  printf("Signal %d received! Process is now resuming...\n", sig); 
int main() { 
                    // Set up the signal handler for SIGUSR1                             
signal(SIGUSR1, signal_handler); 
printf("Process suspended. Waiting for SIGUSR1...\n");                            
// Suspend the process and wait for the signal                            
sigsuspend(NULL);  
// Pauses the process until a signal is received 
 
                         
 // This part will execute after the signal is handled                       
printf("Process resumed after receiving SIGUSR1!\n");     
return 0; 
} 
