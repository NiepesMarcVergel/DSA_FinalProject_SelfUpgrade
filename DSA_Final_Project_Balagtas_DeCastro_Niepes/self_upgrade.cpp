#include <iostream>
#include <string>
#include <vector>

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
    cout << "Enter your MBTI(Please visit MYERS-BRIGGS personality test to get MBTI type): ";
    getline(cin, user.mbti);
}

void showMenu() {
    cout << "\nMain Menu\n";
    cout << "1. What is my Mood Today?\n";
    cout << "2. Uplift me\n";
    cout << "3. Let's work out!\n";
    cout << "4. Write diary\n";
    cout << "5. Check diary\n";
    cout << "6. Today's challenge~\n";
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
                "Criticism or confrontation\n""Fear that they might lose someone or something (relationship/task, etc,..)\n";
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
        cout << "Notice! You have inputted a invalid or unexisting MBTI. Please make sure to put a correct MBTI\n";
    }
}

void moodToday(vector<int> &moodRatings, const UserInfo &user) {
    int mood;
    cout << "Rate your mood today (1-10): ";
    cin >> mood;
    moodRatings.push_back(mood);

    if (mood >= 1 && mood <= 3) {
        cout << "Looks like you're feeling down today, no worries let us fix that together.\n\nThis might be the cause of your stress:\n\n";
        printMBTIFeedback(user.mbti);
    } else if (mood >= 4 && mood <= 6) {
        cout << "Not bad but not the best of feels, huh?\n\nThis might be the cause of your stress:\n\n";
        printMBTIFeedback(user.mbti);
    } else if (mood >= 7 && mood <= 10) {
        cout << "Wow, now look at that happiness of yours!\n";
    } else {
        cout << "Invalid mood rating. Please enter a number between 1 and 10.\n";
    }
}

void upliftMe() {
    cout << "You are amazing! Keep up the great work!\n";
}

void workout() {
    cout << "Let's do some push-ups and squats!\n";
}

void writeDiary(vector<DiaryEntry> &diary) {
    DiaryEntry entry;
    cout << "Enter today's date (YYYY-MM-DD): ";
    cin.ignore();
    getline(cin, entry.date);
    cout << "Write your diary entry: ";
    getline(cin, entry.entry);
    diary.push_back(entry);
    cout << "Diary entry saved!\n";
}

void checkDiary(const vector<DiaryEntry> &diary) {
    cout << "Your Diary Entries:\n";
    for (const auto &entry : diary) {
        cout << entry.date << ": " << entry.entry << "\n";
    }
}

void todaysChallenge() {
    cout << "Today's challenge: Learn a new word!\n";
}

void todaysReward() {
    cout << "Today's reward: Treat yourself to something nice!\n";
}

int main() {
    UserInfo user;
    getUserInfo(user);

    vector<DiaryEntry> diary;
    vector<int> moodRatings;
    int choice = 0;

    while (choice != 8) {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                moodToday(moodRatings, user);
                break;
            case 2:
                upliftMe();
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
                cout << "Goodbye!\n";
                break;
            default:
                cout << "Invalid option. Please try again.\n";
                break;
        }
    }

    return 0;
}
