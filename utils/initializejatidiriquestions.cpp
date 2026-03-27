// Jati Diri Quiz Questions - Personal Development & Self-Awareness
#include "structs.hpp"
#include <iostream>

using namespace std;

Question* initializeJatiDiriQuestions(GameState gameState) {
        switch (gameState.week) {
            case 0: // Week 1: Understanding Self-Identity
            {
                Question Q1 = {
                    "What is the foundation of self-awareness?",
                    {"Knowing your strengths", "Understanding your emotions and thoughts", "Comparing yourself to others", "Avoiding self-reflection"},
                    2
                };

                Question Q2 = {
                    "Which of the following best describes 'jati diri'?",
                    {"Physical appearance", "Social status", "The recognition and understanding of one's own identity and worth", "Academic achievements"},
                    3
                };

                Question Q3 = {
                    "A person with high self-esteem typically:",
                    {"Brags about their accomplishments", "Recognizes their worth without putting others down", "Ignores criticism completely", "Never makes mistakes"},
                    2
                };

                Question Q4 = {
                    "Which is NOT a component of healthy self-identity?",
                    {"Knowing your values", "Setting personal boundaries", "Constantly comparing yourself to others", "Accepting your imperfections"},
                    3
                };

                Question Q5 = {
                    "When facing criticism, a self-aware person would:",
                    {"Ignore it completely", "Reflect on whether it has merit while maintaining self-worth", "Become defensive immediately", "Change everything about themselves"},
                    2
                };

                Question Q6 = {
                    "Personal values guide our decisions by:",
                    {"Following what others dictate", "Providing a framework for choices aligned with our beliefs", "Ensuring we never face challenges", "Making decisions for us"},
                    2
                };

                Question Q7 = {
                    "Self-acceptance means:",
                    {"Giving up on improvement", "Acknowledging your weaknesses while recognizing your worth", "Being satisfied with all your habits", "Ignoring feedback from others"},
                    2
                };

                Question Q8 = {
                    "Which habit strengthens self-identity?",
                    {"Trying to be someone you're not", "Consistent self-reflection and journaling", "Avoiding all conflict", "Following the crowd"},
                    2
                };

                Question Q9 = {
                    "A person's identity is MOST influenced by:",
                    {"Social media trends", "Their own experiences, values, and choices", "What others think of them", "Material possessions"},
                    2
                };

                Question Q10 = {
                    "Resilience in maintaining your identity requires:",
                    {"Isolation from others", "Emotional strength and adaptability while staying true to values", "Never changing your opinions", "Avoiding difficult situations"},
                    2
                };
                Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                return questions;
                break;
            }
        }
    Question *questions = new Question[10];
    return questions;
}
