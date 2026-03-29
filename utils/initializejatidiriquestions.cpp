// Purpose: Returns the jati diri questions for the current week
// Why it works: Switches on the week number to return the appropriate set of questions.
// Weeks 0-7 are fully implemented covering: self-identity, self-esteem, emotional
// intelligence, personal values and ethics, relationships and social identity, goal
// setting and motivation, stress management and resilience, and personal growth.
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
            case 1: // Week 2: Self-Esteem & Confidence
            {
                Question Q1 = {
                    "Self-esteem primarily refers to:",
                    {"How others view you", "Your overall evaluation of your own worth", "Your academic performance", "Your physical appearance"},
                    2
                };

                Question Q2 = {
                    "Which behavior indicates healthy self-esteem?",
                    {"Needing constant approval from others", "Setting personal boundaries and saying no when necessary", "Comparing yourself unfavorably to others", "Giving up easily when facing challenges"},
                    2
                };

                Question Q3 = {
                    "A person with low self-esteem might:",
                    {"Celebrate others' achievements", "Recognize their own strengths", "Consistently self-criticize and feel inadequate", "Set realistic personal goals"},
                    3
                };

                Question Q4 = {
                    "Building confidence most effectively involves:",
                    {"Avoiding all situations that cause anxiety", "Taking small steps outside your comfort zone", "Waiting for others to validate you", "Comparing yourself to those who are more capable"},
                    2
                };

                Question Q5 = {
                    "Positive self-talk helps confidence by:",
                    {"Ignoring real problems", "Reinforcing a realistic and supportive inner dialogue", "Creating unrealistic expectations", "Eliminating all negative emotions"},
                    2
                };

                Question Q6 = {
                    "Which is NOT a healthy way to build self-esteem?",
                    {"Acknowledging your accomplishments", "Practicing self-compassion", "Seeking validation through material possessions", "Setting achievable personal goals"},
                    3
                };

                Question Q7 = {
                    "Imposter syndrome refers to:",
                    {"Feeling like a fraud despite evidence of competence", "Having a medical condition", "Being new to a social group", "Lack of confidence in physical abilities"},
                    1
                };

                Question Q8 = {
                    "Self-efficacy differs from self-esteem in that self-efficacy is about:",
                    {"Your overall worth as a person", "Your belief in your ability to accomplish specific tasks", "How much you like yourself", "Your social status among peers"},
                    2
                };

                Question Q9 = {
                    "Failure can actually build confidence when you:",
                    {"Ignore it completely", "View it as a learning opportunity and extract lessons", "Use it as proof you are inadequate", "Share it publicly to gain sympathy"},
                    2
                };

                Question Q10 = {
                    "Which habit most damages self-esteem over time?",
                    {"Occasional self-reflection", "Consistent self-deprecating thoughts and harsh self-criticism", "Accepting compliments gracefully", "Recognizing personal growth"},
                    2
                };
                Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                return questions;
                break;
            }
            case 2: // Week 3: Emotional Intelligence
            {
                Question Q1 = {
                    "Emotional intelligence primarily involves:",
                    {"Being highly emotional at all times", "Understanding and managing your own emotions and those of others", "Suppressing all negative feelings", "Having a high IQ score"},
                    2
                };

                Question Q2 = {
                    "The first step in emotional awareness is:",
                    {"Giving advice to others", "Recognizing and labeling your own emotions", "Ignoring uncomfortable feelings", "Focusing on others' emotions"},
                    2
                };

                Question Q3 = {
                    "When you experience strong emotions, the best initial response is:",
                    {"Act immediately on those feelings", "Pause and identify what you are feeling", "Share them with everyone around you", "Suppress them until they disappear"},
                    2
                };

                Question Q4 = {
                    "Empathy differs from sympathy in that empathy involves:",
                    {"Feeling sorry for someone", "Understanding and sharing another person's perspective", "Avoiding difficult conversations", "Giving unsolicited advice"},
                    2
                };

                Question Q5 = {
                    "Emotional regulation refers to:",
                    {"Eliminating all emotions", "The ability to modulate emotional responses appropriately", "Showing no emotion in public", "Letting emotions control your actions"},
                    2
                };

                Question Q6 = {
                    "Which is a sign of high emotional intelligence?",
                    {"Reacting aggressively when stressed", "Adapting your communication style to different social situations", "Ignoring others' non-verbal cues", "Taking criticism personally and dwelling on it"},
                    2
                };

                Question Q7 = {
                    "Non-verbal emotional cues include:",
                    {"Only spoken words", "Facial expressions, body language, and tone of voice", "Written emails only", "Social media posts"},
                    2
                };

                Question Q8 = {
                    "When a friend shares bad news, responding with 'I understand this is difficult for you' demonstrates:",
                    {"Problem-solving", "Emotional validation", "Changing the subject", "Giving advice immediately"},
                    2
                };

                Question Q9 = {
                    "Emotional intelligence can be developed through:",
                    {"Avoiding all emotional situations", "Mindful self-reflection and seeking feedback", "Only reading about emotions theoretically", "Letting time pass without processing"},
                    2
                };

                Question Q10 = {
                    "The ability to delay gratification is most closely related to:",
                    {"Immediate emotional reactions", "Emotional regulation and self-control", "Expressing emotions freely at all times", "Ignoring long-term consequences"},
                    2
                };
                Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                return questions;
                break;
            }
            case 3: // Week 4: Personal Values & Ethics
            {
                Question Q1 = {
                    "Personal values serve as:",
                    {"External rules imposed by society", "Internal principles that guide our decisions and behavior", "Goals that change based on circumstances", "What others expect from us"},
                    2
                };

                Question Q2 = {
                    "A value is different from a preference in that a value:",
                    {"Is less important than preferences", "Involves judgments of right and wrong", "Can be easily changed", "Only relates to material things"},
                    2
                };

                Question Q3 = {
                    "When your actions align with your values, you typically experience:",
                    {"Greater confusion", "Increased sense of authenticity and inner peace", "More external criticism", "Less personal responsibility"},
                    2
                };

                Question Q4 = {
                    "Which scenario best represents living according to your values?",
                    {"Cheating on an exam because everyone else does", "Choosing an unpopular stance on an issue because it aligns with your beliefs", "Doing whatever brings the most money regardless of ethics", "Following the crowd to avoid conflict"},
                    2
                };

                Question Q5 = {
                    "Ethical dilemmas occur when:",
                    {"There is a clear right and wrong answer", "Values or principles conflict in a situation", "Someone disagrees with you", "You face an easy decision"},
                    2
                };

                Question Q6 = {
                    "Core values typically remain stable across situations, while:",
                    {"All values should change depending on circumstances", "Circumstantial priorities may shift while core values stay constant", "Personal values are irrelevant to daily life", "Values should be abandoned under pressure"},
                    2
                };

                Question Q7 = {
                    "A person demonstrates integrity when they:",
                    {"Do good things only when being watched", "Act consistently with their stated values even when no one is watching", "Change their values based on what's convenient", "Hide their true beliefs to fit in"},
                    2
                };

                Question Q8 = {
                    "Respect for others is demonstrated by:",
                    {"Forcing your values on others", "Acknowledging others' autonomy and differing perspectives", "Only respecting those who agree with you", "Avoiding all conflict at any cost"},
                    2
                };

                Question Q9 = {
                    "When making difficult decisions, considering your values helps by:",
                    {"Guaranteeing others will agree with you", "Providing a framework for evaluating options", "Eliminating all possible negative outcomes", "Making decisions without thinking"},
                    2
                };

                Question Q10 = {
                    "Values clarification helps you understand:",
                    {"What others want you to believe", "What you genuinely care about and prioritize", "Exactly what will make you happy forever", "The answer to every moral question"},
                    2
                };
                Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                return questions;
                break;
            }
            case 4: // Week 5: Relationships & Social Identity
            {
                Question Q1 = {
                    "Social identity refers to:",
                    {"Your academic achievements only", "The part of your self-concept derived from group memberships", "Your physical appearance", "Only your personal characteristics"},
                    2
                };

                Question Q2 = {
                    "Healthy relationships are characterized by:",
                    {"Complete dependence on the other person", "Mutual respect, trust, and honest communication", "One person having all the control", "Avoiding all disagreements"},
                    2
                };

                Question Q3 = {
                    "Setting boundaries in relationships means:",
                    {"Building walls to keep everyone out", "Communicating your limits and expectations clearly", "Being selfish and not caring about others", "Ending all relationships"},
                    2
                };

                Question Q4 = {
                    "A sign of a toxic relationship is when you:",
                    {"Occasionally disagree with each other", "Feel constantly criticized, drained, orunsafe", "Support each other's personal growth", "Can be honest without fear"},
                    2
                };

                Question Q5 = {
                    "Your identity should be:",
                    {"Defined entirely by your relationships", "A balance of your own self-perception and your social roles", "Based solely on what others think of you", "Fixed and unchanging throughout life"},
                    2
                };

                Question Q6 = {
                    "Maintaining your identity within a group requires:",
                    {"Always agreeing with the group", "Preserving your individual values and opinions while being part of the group", "Isolating yourself from all social groups", "Changing your personality to fit in"},
                    2
                };

                Question Q7 = {
                    "Healthy dependency in relationships involves:",
                    {"Needing another person to function at all", "Being able to stand on your own while also supporting each other", "Having someone else make all your decisions", "Relying on others for your entire self-worth"},
                    2
                };

                Question Q8 = {
                    "Cultural identity influences your self-identity by:",
                    {"Having no real effect on who you are", "Providing heritage, traditions, and a sense of belonging that shape your perspective", "Forcing you to conform to all cultural norms", "Being the only factor that determines your identity"},
                    2
                };

                Question Q9 = {
                    "When friends pressure you to do something against your values, you should:",
                    {"Comply to maintain the friendship", "Communicate your boundaries and possibly reassess the friendship", "End the friendship immediately without explanation", "Give in partially to compromise"},
                    2
                };

                Question Q10 = {
                    "Authentic relationships involve:",
                    {"Pretending to be someone you're not", "Showing your true self while accepting others as they are", "Only connecting with people who are exactly like you", "Hiding your flaws completely"},
                    2
                };
                Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                return questions;
                break;
            }
            case 5: // Week 6: Goal Setting & Motivation
            {
                Question Q1 = {
                    "Intrinsic motivation comes from:",
                    {"External rewards like money or praise", "Internal satisfaction and personal enjoyment of the activity itself", "Pressure from others", "Fear of failure"},
                    2
                };

                Question Q2 = {
                    "SMART goals are specific, measurable, achievable, relevant, and:",
                    {"Time-bound", "Dream-oriented", "Fixed permanently", "Independent of reality"},
                    1
                };

                Question Q3 = {
                    "An effective way to stay motivated when facing setbacks is to:",
                    {"Give up immediately when facing obstacles", "Reframe setbacks as learning experiences and adjust your approach", "Compare yourself to others who succeed", "Lower your standards significantly"},
                    2
                };

                Question Q4 = {
                    "Short-term goals are valuable because they:",
                    {"Replace the need for long-term planning", "Provide immediate feedback and maintain momentum toward larger goals", "Are less important than long-term goals", "Should be the only type of goals you set"},
                    2
                };

                Question Q5 = {
                    "When your goals align with your values, motivation tends to:",
                    {"Decrease because it's too easy", "Increase because you feel more authentic and committed", "Have no correlation with effort", "Disappear once the novelty wears off"},
                    2
                };

                Question Q6 = {
                    "Which statement best describes external motivation?",
                    {"Studying because you genuinely love learning", "Exercising because it makes you feel good", "Working hard to earn a salary and recognition", "Reading because you're curious about a topic"},
                    3
                };

                Question Q7 = {
                    "Self-motivation requires:",
                    {"Always feeling confident and energized", "The ability to take action even when you don't feel like it", "Constant external encouragement", "Avoiding all difficult tasks"},
                    2
                };

                Question Q8 = {
                    "Breaking a large goal into smaller steps helps because it:",
                    {"Makes the goal less important", "Makes progress more visible and manageable", "Guarantees immediate success", "Eliminates the need for planning"},
                    2
                };

                Question Q9 = {
                    "Celebrating small achievements along the way:",
                    {"Is unnecessary and wastes time", "Reinforces positive behavior and builds momentum", "Should only happen at the very end", "Leads to complacency"},
                    2
                };

                Question Q10 = {
                    "A person with high achievement motivation would likely:",
                    {"Avoid challenges to stay comfortable", "Set challenging but attainable goals and work persistently toward them", "Only do the minimum required", "Give up easily when tasks become difficult"},
                    2
                };
                Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                return questions;
                break;
            }
            case 6: // Week 7: Stress Management & Resilience
            {
                Question Q1 = {
                    "Resilience is best defined as:",
                    {"Never experiencing stress or difficulties", "The ability to adapt and recover from adversity", "Being emotionally numb to problems", "Avoiding all challenging situations"},
                    2
                };

                Question Q2 = {
                    "The first step in managing stress is:",
                    {"Immediately removing all sources of stress", "Recognizing and acknowledging that you are stressed", "Pretending everything is fine", "Turning to unhealthy coping mechanisms"},
                    2
                };

                Question Q3 = {
                    "Healthy stress management includes:",
                    {"Procrastination and avoidance", "Regular exercise, adequate sleep, and social support", "Working without breaks until the stress disappears", "Using substances to relax"},
                    2
                };

                Question Q4 = {
                    "Mindfulness helps with stress by:",
                    {"Eliminating all future problems", "Helping you stay present and observe thoughts without judgment", "Forcing you to think positive thoughts only", "Removing all uncomfortable emotions"},
                    2
                };

                Question Q5 = {
                    "A resilient person facing failure would:",
                    {"Dwell on the failure indefinitely", "Learn from the experience and adapt their approach", "Blame others for the outcome", "Give up on any similar endeavors"},
                    2
                };

                Question Q6 = {
                    "Which is an unhealthy coping mechanism for stress?",
                    {"Talking to a trusted friend", "Engaging in regular physical activity", "Excessive alcohol consumption to numb feelings", "Practicing deep breathing exercises"},
                    3
                };

                Question Q7 = {
                    "Building resilience requires:",
                    {"A completely stress-free life", "Facing challenges and developing effective coping strategies over time", "Never asking for help from others", "Being born with a certain personality type"},
                    2
                };

                Question Q8 = {
                    "The fight-or-flight response is:",
                    {"Always harmful and should be suppressed", "A natural physiological response that can become maladaptive when chronically activated", "Only present in dangerous situations", "A sign of weakness"},
                    2
                };

                Question Q9 = {
                    "Social support contributes to resilience by providing:",
                    {"Someone to rely on entirely", "Emotional comfort, practical assistance, and different perspectives during difficult times", "A way to avoid personal responsibility", "Unlimited resources to solve all problems"},
                    2
                };

                Question Q10 = {
                    "Self-care is important for stress management because it:",
                    {"Is selfish and ignores others' needs", "Helps maintain physical, emotional, and mental well-being to better handle life's challenges", "Should only happen after everything else is done", "Eliminates the need for professional help"},
                    2
                };
                Question *questions = new Question[10]{Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10};
                return questions;
                break;
            }
            case 7: // Week 8: Personal Growth & Reflection
            {
                Question Q1 = {
                    "Personal growth is best described as:",
                    {"A destination you reach once and maintain forever", "An ongoing process of developing your abilities, awareness, and potential", "Only relevant during your school years", "Something that happens without effort"},
                    2
                };

                Question Q2 = {
                    "Self-reflection contributes to personal growth by:",
                    {"Making you dwell on past mistakes", "Helping you understand your patterns, values, and areas for development", "Being the same as procrastination", "Requiring extensive time alone with no action"},
                    2
                };

                Question Q3 = {
                    "A growth mindset means believing that:",
                    {"Your abilities are fixed and cannot change", "Your abilities and intelligence can be developed through effort and learning", "Success depends entirely on innate talent", "Challenges should be avoided at all costs"},
                    2
                };

                Question Q4 = {
                    "Feedback from others can aid personal growth when you:",
                    {"Dismiss all criticism as invalid", "Listen openly, evaluate it objectively, and identify useful insights", "Only seek feedback that confirms what you already believe", "Take all feedback personally and become defensive"},
                    2
                };

                Question Q5 = {
                    "Comfort zones hinder growth because they:",
                    {"Are essential for maintaining mental health", "Limit your exposure to new experiences and challenges that foster development", "Provide the ideal conditions for learning", "Are places where you can truly be yourself"},
                    2
                };

                Question Q6 = {
                    "Personal growth often involves experiencing:",
                    {"Immediate and visible results every day", "Discomfort as you develop new skills and perspectives", "Only positive emotions and validation", "Perfection in all areas of life"},
                    2
                };

                Question Q7 = {
                    "Habits that support personal growth include:",
                    {"Blaming external circumstances for failures", "Continuous learning, seeking new experiences, and regular self-assessment", "Avoiding all risks and staying in familiar patterns", "Comparing yourself negatively to others"},
                    2
                };

                Question Q8 = {
                    "Knowing your strengths contributes to personal development by allowing you to:",
                    {"Become complacent about weaknesses", "Leverage them effectively while working on areas for improvement", "Avoid developing any new skills", "Only do things you are already good at"},
                    2
                };

                Question Q9 = {
                    "A balanced approach to personal growth considers:",
                    {"Only career advancement", "Intellectual, emotional, social, and physical dimensions of well-being", "Ignoring physical health for academic success", "Perfection in every area simultaneously"},
                    2
                };

                Question Q10 = {
                    "Personal accountability for growth means:",
                    {"Blaming yourself for all setbacks", "Taking ownership of your choices and their outcomes while remaining open to learning", "Never accepting help from others", "Setting impossible standards and punishing yourself for failing"},
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
