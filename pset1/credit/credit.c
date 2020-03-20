#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function declaration
int char_to_number(char chaar);
int multiply(int numb);

int main(void)
{
    long long card_number;
    char card_number_arr[16];
    int length_card;
    int check_sum_card = 0;
    bool is_need_multiply;
    int numb = 0;
    int second_numb = 0;
    string result = "INVALID\n";
    // Cycle before uset enter card number
    do
    {
        printf("Number: ");
        card_number = get_long_long();
    }
    while (card_number < 0);
    // Convert card number to char[]
    sprintf(card_number_arr, "%lld", card_number);
    length_card = strlen(card_number_arr);
    if (length_card == 16 || length_card == 15 || length_card == 13)
    {
        // If length card is even, start multiply by 1, 3, 5 ,7 ... n
        // if odd 2, 4, 6, 8 ... n
        is_need_multiply = length_card % 2 == 0;
        // Calculation card check summ
        for (int i = 0; i < length_card; i++)
        {
            numb = is_need_multiply ? multiply(char_to_number(card_number_arr[i])) : char_to_number(card_number_arr[i]);
            is_need_multiply = !is_need_multiply;
            check_sum_card += numb;
        }
        // If check sum divide on 10 it is real card number
        if (check_sum_card % 10 == 0)
        {
            numb = char_to_number(card_number_arr[0]);
            second_numb = char_to_number(card_number_arr[1]);
            switch (length_card)
            {
                case 16: // MASTER CARD OR VISA
                    if (numb == 5 && (second_numb >= 1 && second_numb <= 5))
                    {
                        result = "MASTERCARD\n";
                    }
                    else if (numb == 4)
                    {
                        result = "VISA\n";
                    }
                    break;
                case 15: // AMEX
                    if (numb == 3 && (second_numb == 4 || second_numb == 7))
                    {
                        result = "AMEX\n";
                    }
                    break;
                case 13: // VISA
                    if (numb == 4)
                    {
                        result = "VISA\n";
                    }
                    break;
            }
        }
    }
    printf("%s", result);
}

// Function to convert char to number
int char_to_number(char chaar)
{
    // ASCII number start in 0, need minus 48
    return (int)chaar - 48;
}

// Function to multiplication by two
int multiply(int numb)
{
    numb *= 2;
    // Minus 9 if number larger 9
    if (numb > 9)
    {
        numb -= 9;
    }
    return numb;
}