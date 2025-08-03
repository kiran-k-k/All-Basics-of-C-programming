/*This is a basic C program that asks the user multiple-choice questions, takes input as answers 
(A/B/C/D), checks correctness, and displays the final score. It uses arrays, strings, loops, 
and conditionals to manage questions and evaluate answers. This project helps beginners practice 
logical thinking and C fundamentals.*/

#include <stdio.h>
#include <string.h>

#define MAX_QUESTIONS 5  // Define the total number of questions

int main() {
    // Array of questions with multiple-choice options
    char questions[MAX_QUESTIONS][256] = {
        "1. What is the capital of India?\nA. Delhi\nB. Mumbai\nC. Kolkata\nD. Chennai",
        "2. Who is known as the father of C language?\nA. Bjarne Stroustrup\nB. Dennis Ritchie\nC. James Gosling\nD. Ken Thompson",
        "3. What is the output of 2 + 2 * 2 in C?\nA. 8\nB. 6\nC. 4\nD. 10",
        "4. Which data type is used to store text?\nA. int\nB. float\nC. char\nD. string",
        "5. Which header file is required to use printf?\nA. stdlib.h\nB. math.h\nC. stdio.h\nD. conio.h"
    };

    // Array holding correct answers for the questions
    char correctAnswers[MAX_QUESTIONS] = {'A', 'B', 'B', 'C', 'C'};
    char userAnswer;  // Variable to store user's answer
    int score = 0;    // Variable to store total score

    printf("📝 Welcome to the Quiz!\n\n");

    // Loop through all questions
    for (int i = 0; i < MAX_QUESTIONS; i++) {
        printf("%s\n", questions[i]);  // Display question
        printf("Your Answer (A/B/C/D): ");
        scanf(" %c", &userAnswer);     // Read user input (with space to consume newline)

        // Convert lowercase to uppercase if entered
        if (userAnswer >= 'a' && userAnswer <= 'z') {
            userAnswer = userAnswer - 32;
        }

        // Check if user's answer is correct
        if (userAnswer == correctAnswers[i]) {
            printf("✅ Correct!\n\n");
            score++;  // Increment score for correct answer
        } else {
            printf("❌ Wrong! Correct Answer: %c\n\n", correctAnswers[i]);
        }
    }

    // Display final score and feedback
    printf("🎉 You scored %d out of %d.\n", score, MAX_QUESTIONS);

    // Give performance message based on score
    if (score == MAX_QUESTIONS) {
        printf("🏆 Excellent work!\n");
    } else if (score >= 3) {
        printf("👍 Good job, but you can do better!\n");
    } else {
        printf("📚 Keep practicing. You'll improve!\n");
    }

    return 0;
}
