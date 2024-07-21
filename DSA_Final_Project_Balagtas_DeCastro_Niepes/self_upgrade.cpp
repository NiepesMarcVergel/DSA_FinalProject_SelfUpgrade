#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

struct UserInfo {
    string name;
    int age;
    string gender;
    string mbti;
};

struct DiaryEntry {
    string date;
    string entry;
};

void getUserInfo(UserInfo &user) {
    cout << "Enter your name: ";
    getline(cin, user.name);
    cout << "Enter your age: ";
    cin >> user.age;
    cin.ignore();
    cout << "Enter your gender: ";
    getline(cin, user.gender);
    cout << "Enter your MBTI: ";
    getline(cin, user.mbti);
}

void showMenu() {
    cout << "\nMain Menu:\n";
    cout << "1. What is my Mood Today?\n";
    cout << "2. Uplift me\n";
    cout << "3. Let's work out!\n";
    cout << "4. Write diary\n";
    cout << "5. Check diary\n";
    cout << "6. Today's challenge\n";
    cout << "7. Today's reward\n";
    cout << "8. Exit\n";
    cout << "Select an option: ";
}

void printMBTIFeedback(const string &mbti) {
    if (mbti == "ESTJ") {
        cout << "Being in an environment that is in disarray\n"
                "Frequent disruptions\n"
                "Irrational behavior\n"
                "Being surrounded by (or guilty of) incompetence\n"
                "Unexpected changes\n"
                "Lack of control\n"
                "Laziness in others\n"
                "Not having their strongly held values validated\n"
                "Guilt over being critical towards others\n"
                "Dealing too long with abstract or theoretical concepts\n"
                "Being in a highly-charged emotional environment for too long\n";
    } else if (mbti == "ISFJ") {
        cout << "Overexerting themselves by saying “yes” to too many projects.\n"
                "Conflict or criticism\n"
                "Lack of positive feedback\n"
                "Environments filled with tension\n"
                "Looming deadlines\n"
                "Being asked to do things in a way that isn’t clearly defined\n"
                "Having to overuse their type by having to constantly act as “the responsible one”\n"
                "Dealing too long with abstract or theoretical concepts.\n"
                "Unfamiliar territory or an uncertain future\n";
    } else if (mbti == "ESFJ") {
        cout << "Unstructured environments\n"
                "Having to do things that involve abstract, theoretical concepts\n"
                "Environments that have tension or conflict\n"
                "Unexpected change\n"
                "Inadequate time to complete work to their standards\n"
                "Tense, or confrontational relationships or situations\n"
                "Situations that don’t meld with their values\n"
                "Lack of trust in someone or something they’re involved with\n"
                "Criticism\n"
                "Feeling unappreciated\n";
    } else if (mbti == "ESTP") {
        cout << "Rigidly enforced rules\n"
                "Having to plan far into the future\n"
                "Feeling out of control\n"
                "Being asked to complete tasks without detailed directions or processes\n"
                "Large amounts of book work, theory, or writing\n"
                "Being forced to make commitments or plans before they’re ready\n"
                "Being forced to make decisions or eliminate options before they’re ready\n"
                "Having to spend a lot of time following someone else’s rules or schedule\n"
                "Being in a situation where they have to use a lot of theoretical or intuitive concepts\n"
                "Being around people who are excessively serious\n";
    } else if (mbti == "ISTP") {
        cout << "Tight restrictions and a rigid structure.\n"
                "Being in controlling relationships.\n"
                "Dealing with irrational people.\n"
                "Having to focus on theories rather than real life for too long.\n"
                "Being in an emotionally charged environment.\n"
                "Not getting enough alone time.\n"
                "Being in a non-challenging work environment.\n"
                "Doing repetitive, mundane tasks.\n"
                "Not having their personal values respected or validated.\n";
    } else if (mbti == "ISFP") {
        cout << "Rigid structure and rules\n"
                "Having to violate their deeply held values\n"
                "Not getting enough alone time.\n"
                "Too many demands or obligations.\n"
                "Having to deal with excessive data\n"
                "Long-term planning\n"
                "Criticism\n"
                "Lack of appreciation from others\n"
                "Feeling that they are about to lose something (relationship/task, etc,..)\n";
    } else if (mbti == "ESFP") {
        cout << "An environment of rigidly enforced rules\n"
                "Long-term planning\n"
                "Having to think far into the future\n"
                "Being forced to make commitments and plans\n"
                "Criticism or confrontation\n"
                "Feeling out of control\n"
                "Being asked to complete tasks without detailed directions or processes\n"
                "Lack of hands-on experiences\n"
                "Too much time alone\n"
                "Too much book work, theory, or writing\n"
                "Having to sit still for too long\n";
    } else if (mbti == "INFP") {
        cout << "Rigidity in rules and timelines\n"
                "Having their values violated\n"
                "Not getting enough time alone.\n"
                "Too many demands on their time\n"
                "Small-talk\n"
                "A lack of authenticity from others\n"
                "Having their creativity stifled\n"
                "Having to focus too extensively on sensory/concrete details\n"
                "Criticism or confrontation\n"
                "Fear that they might lose someone or something (relationship/task, etc,..)\n";
    } else if (mbti == "ENFP") {
        cout << "Environments where rules are rigidly enforced\n"
                "Focusing on repetitive, detailed tasks\n"
                "Having to focus too much on sensory details\n"
                "Having to focus too much on the past or present\n"
                "Not being able to use their intuition\n"
                "Constraints on brainstorming or envisioning\n"
                "A lack of outside stimulation\n"
                "Being micromanaged\n"
                "Having creativity stifled\n"
                "Having to complete projects before they’re ready\n"
                "Criticism\n"
                "Lack of appreciation\n"
                "Having their values violated\n"
                "Overextending themselves for others\n";
    } else if (mbti == "INFJ") {
        cout << "Having to focus too much on sensory/concrete details\n"
                "An overload of sensory stimulation or noise\n"
                "Interruptions\n"
                "Distress within a close relationship\n"
                "Having their values violated\n"
                "Not enough alone time.\n"
                "Working with closed-minded people\n"
                "Lack of appreciation or understanding\n"
                "Unfamiliar environments with overwhelming amounts of details\n"
                "Having plans disrupted\n"
                "Not having a clear direction\n"
                "Lack of harmony\n"
                "Criticism and conflict\n"
                "Not being able to use their intuition or envision the future\n"
                "Having to focus too much on the present\n";
    } else if (mbti == "ENFJ") {
        cout << "Being in critical or confrontational environments\n"
                "Lack of appreciation or affirmation\n"
                "Lack of harmony\n"
                "Unexpected change\n"
                "Inadequate time to complete work to their standards\n"
                "Tense relationships or environments\n"
                "Having to do mundane, repetitive tasks\n"
                "Having to conform to something that goes against their values\n"
                "Over-empathizing with others to the point of losing track of their own needs\n"
                "Being misunderstood or not trusted\n"
                "People not living up to their idealized expectations\n";
    } else if (mbti == "INTJ") {
        cout << "Being in an environment that doesn’t appreciate their skills, visions, or ideas.\n"
                "Not getting enough alone time.\n"
                "Too much noise or sensory input.\n"
                "Working with those they see as lazy, incompetent, or ignorant.\n"
                "Having to pay attention to too many details at once.\n"
                "Being in unfamiliar environments.\n"
                "Having their well-settled plans disrupted.\n"
                "Having to focus extensively on the here-and-now.\n"
                "Not being able to use their intuition to envision the future.\n";
    } else if (mbti == "ENTJ") {
        cout << "Being in an environment that lacks vision or ideas for the future.\n"
                "Being in an environment where others don’t appreciate their vision.\n"
                "Being interrupted.\n"
                "Being surrounded by (or guilty of) incompetence.\n"
                "Poorly managed change.\n"
                "Laziness.\n"
                "Having to be a follower instead of a leader.\n"
                "Not being able to make their goals come to fruition.\n"
                "Having to deal with intense emotions from others.\n"
                "Feeling guilt over being critical towards others.\n"
                "Not having their strongly held values validated or respected.\n"
                "Small talk or frivolous conversations.\n";
    } else if (mbti == "INTP") {
        cout << "Being in an environment where they feel controlled by others.\n"
                "Not being allowed to go with the flow of the moment.\n"
                "Being required to do simple and repetitive tasks.\n"
                "Being surrounded by individuals they see as incompetent.\n"
                "A lack of autonomy.\n"
                "Being in charge of the quality of another person’s work.\n"
                "Not getting enough alone time.\n"
                "Being immersed in emotionally charged environments.\n"
                "Being in a place where their expertise is not appreciated.\n"
                "People “barging in” on their space.\n"
                "Not having their strongly held values validated.\n";
    } else if (mbti == "ENTP") {
        cout << "An environment where rules are rigidly enforced\n"
                "A lack of change or progression\n"
                "A lack of outside stimulation\n"
                "Being micromanaged\n"
                "Having their creativity stifled\n"
                "Being forced to make decisions or complete projects before they’re ready\n"
                "Working with individuals they view as incompetent\n"
                "Not having their visions appreciated\n"
                "Having their principles violated\n"
                "Having to focus too long on mundane details\n"
                "Overextending themselves\n";
    } else {
        cout << "No specific stressors available for your MBTI type.\n";
    } 
}

void moodToday(vector<int> &moodRatings, const UserInfo &user) {
    int mood;
    cout << "Rate your mood today on a scale of 1 to 10: ";
    cin >> mood;
    moodRatings.push_back(mood);

    if (mood >= 1 && mood <= 3) {
        cout << "\nLooks like you're feeling down today, no worries let us fix that together.\n\n";
        cout << "This might be some of the cause of your stress: \n";
        printMBTIFeedback(user.mbti);
    } else if (mood >= 4 && mood <= 6) {
        cout << "\nNot bad but not the best of feels, huh? Now let us make that poker face into a big smile!\n\n";
        cout << "This might be some of the cause of your stress: \n";
        printMBTIFeedback(user.mbti);
    } else if (mood >= 7 && mood <= 10) {
        cout << "\nWow, now look at that happiness of yours!\n";
    } else {
        cout << "\nInvalid mood rating.\n";
    }
}

void upliftMe(const UserInfo &user) {
    vector<string> messages;

    if (user.mbti == "ISTJ") {
        messages = {
            "Your meticulous attention to detail ensures nothing is overlooked.",
            "Your reliability is a cornerstone for our team's success.",
            "Your dedication to upholding traditions is truly commendable.",
            "Your thoroughness guarantees quality in everything you do.",
            "Your commitment to duty is unparalleled.",
            "Your consistency and dependability are invaluable."
        };
    } else if (user.mbti == "ISFJ") {
        messages = {
            "Your compassion and empathy make everyone feel valued.",
            "Your dedication to helping others is inspiring.",
            "Your loyalty and support strengthen our community.",
            "Your attention to others' needs is exceptional.",
            "Your gentle and caring nature brings comfort to those around you.",
            "Your kindness and generosity leave a lasting impact."
        };
    } else if (user.mbti == "INFJ") {
        messages = {
            "Your vision and insight inspire us to think deeper.",
            "Your dedication to making a positive impact is admirable.",
            "Your empathy helps create a more understanding world.",
            "Your ability to see the bigger picture guides us forward.",
            "Your passion for helping others drives meaningful change.",
            "Your wisdom and guidance are invaluable to those around you."
        };
    } else if (user.mbti == "INTJ") {
        messages = {
            "Your strategic thinking propels us toward our goals.",
            "Your innovative ideas lead us to new heights.",
            "Your determination ensures success in even the most challenging tasks.",
            "Your ability to see the big picture is a true asset.",
            "Your intellectual rigor sets a high standard for all.",
            "Your independent thought drives progress."
        };
    } else if (user.mbti == "ISTP") {
        messages = {
            "Your problem-solving skills are unparalleled.",
            "Your hands-on approach gets things done efficiently.",
            "Your adaptability allows us to overcome any obstacle.",
            "Your resourcefulness finds solutions where others see none.",
            "Your ability to stay calm under pressure is admirable.",
            "Your practical ingenuity is invaluable."
        };
    } else if (user.mbti == "ISFP") {
        messages = {
            "Your creativity brings beauty into our world.",
            "Your kindness touches everyone you meet.",
            "Your authenticity is refreshing and inspiring.",
            "Your dedication to living your values is admirable.",
            "Your ability to see beauty in the everyday is a gift.",
            "Your compassion for others makes the world a better place."
        };
    } else if (user.mbti == "INFP") {
        messages = {
            "Your empathy and understanding foster harmony.",
            "Your idealism inspires us to strive for a better world.",
            "Your creativity adds a unique perspective to our projects.",
            "Your dedication to your values is unwavering.",
            "Your compassion helps heal and bring peace.",
            "Your introspective nature provides profound insights."
        };
    } else if (user.mbti == "INTP") {
        messages = {
            "Your analytical mind uncovers new possibilities.",
            "Your curiosity leads us to groundbreaking discoveries.",
            "Your logical approach ensures clarity and precision.",
            "Your innovative thinking pushes boundaries.",
            "Your intellectual rigor is inspiring.",
            "Your quest for knowledge drives progress."
        };
    } else if (user.mbti == "ESTP") {
        messages = {
            "Your energy and enthusiasm are contagious.",
            "Your quick thinking helps us navigate challenges.",
            "Your adaptability makes you an invaluable team player.",
            "Your resourcefulness gets things done efficiently.",
            "Your confidence inspires others to take action.",
            "Your ability to think on your feet is impressive."
        };
    } else if (user.mbti == "ESFP") {
        messages = {
            "Your positive energy brightens every room.",
            "Your spontaneity brings excitement to our lives.",
            "Your ability to connect with others is remarkable.",
            "Your enthusiasm is infectious and uplifting.",
            "Your zest for life inspires us all.",
            "Your generosity and kindness create lasting joy."
        };
    } else if (user.mbti == "ENFP") {
        messages = {
            "Your enthusiasm ignites creativity in all of us.",
            "Your optimism helps us see the potential in every situation.",
            "Your ability to inspire others is truly remarkable.",
            "Your passion for life is contagious.",
            "Your creativity knows no bounds.",
            "Your genuine interest in others creates meaningful connections."
        };
    } else if (user.mbti == "ENTP") {
        messages = {
            "Your innovative ideas challenge us to think differently.",
            "Your quick wit keeps us on our toes.",
            "Your intellectual curiosity drives progress.",
            "Your ability to see multiple perspectives is invaluable.",
            "Your enthusiasm for debate sparks new insights.",
            "Your fearless approach to challenges is inspiring."
        };
    } else if (user.mbti == "ESTJ") {
        messages = {
            "Your leadership ensures we stay on course.",
            "Your organizational skills keep everything running smoothly.",
            "Your dedication to efficiency is invaluable.",
            "Your ability to make tough decisions is admirable.",
            "Your reliability sets a standard for us all.",
            "Your straightforward approach gets results."
        };
    } else if (user.mbti == "ESFJ") {
        messages = {
            "Your warmth and friendliness make everyone feel welcome.",
            "Your commitment to others creates a supportive environment.",
            "Your organizational skills ensure everything runs smoothly.",
            "Your dedication to helping others is heartwarming.",
            "Your ability to bring people together is invaluable.",
            "Your generosity and kindness are deeply appreciated."
        };
    } else if (user.mbti == "ENFJ") {
        messages = {
            "Your leadership inspires and motivates us all.",
            "Your ability to understand and connect with others is exceptional.",
            "Your dedication to making a positive impact is admirable.",
            "Your enthusiasm and energy uplift everyone around you.",
            "Your vision guides us toward a brighter future.",
            "Your compassion makes the world a better place."
        };
    } else if (user.mbti == "ENTJ") {
        messages = {
            "Your strategic vision drives us toward success.",
            "Your confidence and decisiveness are inspiring.",
            "Your leadership ensures we achieve our goals.",
            "Your ability to see the big picture is invaluable.",
            "Your relentless pursuit of excellence sets a high standard.",
            "Your ability to take charge and lead effectively is commendable."
        };
    }

    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < 3; ++i) {
        int randomIndex = rand() % messages.size();
        cout << messages[randomIndex] << endl;
    }
}

void workout() {
    cout << "\nLet's do a quick workout! Here are some exercises:\n";
    cout << "1. 20 push-ups\n";
    cout << "2. 30 squats\n";
    cout << "3. 15 burpees\n";
    cout << "4. 20 lunges\n";
    cout << "5. 1-minute plank\n";
}

void writeDiary(vector<DiaryEntry> &diary) {
    DiaryEntry newEntry;
    cout << "Enter today's date (e.g., 2024-07-14): ";
    cin.ignore();
    getline(cin, newEntry.date);
    cout << "Write your diary entry: ";
    getline(cin, newEntry.entry);
    diary.push_back(newEntry);
}

void checkDiary(const vector<DiaryEntry> &diary) {
    cout << "\nYour Diary Entries:\n";
    for (const auto &entry : diary) {
        cout << entry.date << ": " << entry.entry << endl;
    }
}

void todaysChallenge() {
    vector<string> challenges = {
        "30-Minute Walk: Take a walk in your neighborhood or a nearby park.",
        "Try a New Recipe: Cook a dish you've never made before.",
        "Read a Chapter: Read a chapter from a book you’ve been meaning to start.",
        "10-Minute Meditation: Spend 10 minutes meditating or practicing mindfulness.",
        "Random Act of Kindness: Do something kind for a stranger.",
        "Write a Letter: Write a letter or a heartfelt email to a friend or family member.",
        "Learn a New Word: Learn and use a new word in conversation.",
        "Practice Gratitude: Write down three things you’re grateful for.",
        "Declutter: Clean and organize a small area of your home.",
        "Try a New Exercise: Do a workout you’ve never tried before.",
        "Draw or Paint: Create a piece of art.",
        "Listen to a Podcast: Find and listen to a new podcast episode.",
        "DIY Project: Start a small DIY project or craft.",
        "Watch a Documentary: Watch a documentary on a topic you’re interested in.",
        "Explore Nature: Visit a local park or nature reserve.",
        "Journal: Spend 15 minutes journaling about your day or thoughts.",
        "Learn a Skill: Watch a tutorial and learn a new skill (e.g., knitting, juggling).",
        "No Screens: Spend an hour without any screens (phone, TV, computer).",
        "Try a New Hobby: Start a new hobby or revisit an old one.",
        "Language Practice: Learn basic phrases in a new language.",
        "Photography: Take photos of interesting things you see throughout the day.",
        "Visit a Museum: Explore a local museum or art gallery.",
        "Board Games: Play a board game with family or friends.",
        "Puzzles: Complete a puzzle (jigsaw, crossword, Sudoku).",
        "Virtual Tour: Take a virtual tour of a famous landmark.",
        "Cook for Someone: Prepare a meal for a friend or family member.",
        "Dance Party: Have a solo dance party with your favorite music.",
        "Read an Article: Read an interesting article on a topic you’re curious about.",
        "Plant Something: Plant a flower, herb, or small garden.",
        "Volunteer: Spend time volunteering for a local organization.",
        "Mindfulness Walk: Take a walk and focus on the sights, sounds, and smells.",
        "Movie Night: Watch a movie you’ve never seen before.",
        "Compliment Someone: Give genuine compliments to three people.",
        "DIY Spa Day: Treat yourself to a spa day at home.",
        "Storytelling: Write a short story or poem.",
        "Gratitude Jar: Start a gratitude jar and add a note each day.",
        "Picnic: Have a picnic in your backyard or a local park.",
        "Mindfulness Coloring: Spend time coloring in an adult coloring book.",
        "Learn a Dance: Learn a dance routine from an online video.",
        "Explore Local History: Research and visit a local historical site.",
        "Try a New Drink: Make a new smoothie or coffee recipe.",
        "Sing Karaoke: Sing your favorite songs with a karaoke app or YouTube.",
        "Stargazing: Spend time stargazing and identifying constellations.",
        "Mindful Eating: Eat a meal slowly, savoring each bite.",
        "Write a Review: Write a review for a book, movie, or restaurant you enjoyed.",
        "Digital Detox: Have a digital detox day with no social media.",
        "Learn Origami: Make simple origami creations.",
        "Memory Lane: Look through old photos and reminisce.",
        "Podcasts Swap: Exchange podcast recommendations with a friend.",
        "Morning Stretch: Start your day with a morning stretch routine."
    };

    srand(static_cast<unsigned int>(time(0)));
    int randomIndex = rand() % challenges.size();
    cout << "\nToday's challenge: " << challenges[randomIndex] << endl;
}

void todaysReward() {
    vector<string> rewards = {
        "Enjoy a movie night with your favorite snacks.",
        "Treat yourself to a dessert you love.",
        "Take a relaxing bath with essential oils.",
        "Buy yourself a small gift or treat.",
        "Spend time doing your favorite hobby.",
        "Have a lazy day with no obligations.",
        "Listen to your favorite music or album.",
        "Read a book you’ve been looking forward to.",
        "Take a nap or rest for a while.",
        "Order your favorite takeout meal.",
        "Go for a massage or spa treatment.",
        "Spend quality time with loved ones.",
        "Have a game night with friends or family.",
        "Go for a scenic drive or walk.",
        "Spend time in nature, like a park or beach.",
        "Have a picnic with your favorite foods.",
        "Watch a comedy show or movie.",
        "Spend time with a pet or visit an animal shelter.",
        "Indulge in a hobby like painting or crafting.",
        "Visit a local cafe or bakery.",
        "Take a yoga or meditation class.",
        "Spend the day exploring a new place.",
        "Have a digital detox day.",
        "Spend time gardening or in a botanical garden.",
        "Try a new restaurant or cafe.",
        "Have a solo dance party at home.",
        "Spend the day at a museum or art gallery.",
        "Cook a fancy meal for yourself.",
        "Have a themed movie marathon.",
        "Go shopping for a new outfit.",
        "Take a day trip to a nearby city.",
        "Spend time journaling or writing.",
        "Have a relaxing evening with a good book.",
        "Visit a farmer’s market or local fair.",
        "Have a photoshoot with friends or family.",
        "Go to a concert or live performance.",
        "Take a day off to do absolutely nothing.",
        "Visit a nearby tourist attraction.",
        "Spend the day baking and decorating treats.",
        "Have a spa day at home with face masks and pampering.",
        "Go to a sports game or event.",
        "Spend time at the beach or by a lake.",
        "Visit a new museum or exhibition.",
        "Take a cooking or baking class.",
        "Spend the day playing board games.",
        "Go hiking and enjoy the outdoors.",
        "Have a coffee date with a friend.",
        "Spend the day exploring your city.",
        "Go to an amusement park or fair.",
        "Try a new workout class or activity."
    };

    srand(static_cast<unsigned int>(time(0))); 
    int randomIndex = rand() % rewards.size();
    cout << "T\noday's reward: " << rewards[randomIndex] << endl;
}

int main() {
    UserInfo user;
    vector<int> moodRatings;
    vector<DiaryEntry> diary;
    int option;

    getUserInfo(user);

    do {
        showMenu();
        cin >> option;
        cin.ignore();

        switch (option) {
            case 1:
                moodToday(moodRatings, user);
                break;
            case 2:
                upliftMe(user);
                break;
            case 3:
                workout();
                break;
            case 4:
                writeDiary(diary);
                break;
            case 5:
                checkDiary(diary);
                break;
            case 6:
                todaysChallenge();
                break;
            case 7:
                todaysReward();
                break;
            case 8:
                cout << "\nExiting the program. Have a great day!\n";
                break;
            default:
                cout << "\nInvalid option. Please try again.\n";
                break;
        }
    } while (option != 8);

    return 0;
}
