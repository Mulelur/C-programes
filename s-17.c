/**
 * @author michael
 * @date 2020/7/23
 * @description s-17.c
 * @link https://www.acwing.com/solution/content/10/

 * @Given
 * If the code is A, then the boiling point of the item is at 100 degrees Celcius.
 * If the code is B, then the boiling point of the item is at 80 degrees Celcius.
 * If the code is C, then the boiling point of the item is at 90 degrees Celcius.
 * If the code is D, then the boiling point of the item is at 120 degrees Celcius
 */


 
/** 
* @instractions
* Accept the temperature of the item and the code of an item.  Determine if the item is below, equal to or above boiling point. 
  Display a message with this information.  Only display the output ONCE at the end of the program.  
  Take note that the dispay statement(s) must be placed in the program AFTER the selection statement 
  (do not display output IN the if statement).

*/

/**
 * @param {int} temp
 * @param {char} code
 * @return {void}
 */


#include <stdio.h>


int main(void) {
    int temp;
    char code;

    char *display_msg;
    printf("Enter the temperature: ");
    scanf("%d", &temp);
    printf("Enter the code: ");
    scanf(" %c", &code);
    if (code == 'A') {
        // If the code is A, then the boiling point of the item is at 100 degrees Celcius.
        if (temp < 100) {
            display_msg = "below";
           
        } else if (temp == 100) {
            display_msg = "equal to";
        } else {
            display_msg = "above";
        }
    } else if (code == 'B') {
        // If the code is B, then the boiling point of the item is at 80 degrees Celcius.
        if (temp < 80) {
            display_msg = "below";
        } else if (temp == 80) {
            display_msg = "equal to";
        } else {
            display_msg = "above";
        }
    } else if (code == 'C') {
        // If the code is C, then the boiling point of the item is at 90 degrees Celcius.
        if (temp < 90) {
            display_msg = "below";
        } else if (temp == 90) {
            display_msg = "equal to";
        } else {
            display_msg = "above";     
        }
    } else if (code == 'D') {
        // If the code is D, then the boiling point of the item is at 120 degrees Celcius.
        if (temp < 120) {
            display_msg = "below";
        } else if (temp == 120) {
            display_msg = "equal to";
        } else {
            display_msg = "above";
        }
    } else {
        display_msg = "Invalid code";
        
        // show the valid codes
        printf("Valid codes are A, B, C, D\n");
    }

    // Display the message 

    printf("The temperature is %s the boiling point of the item.\n", display_msg);

    return 0;
}