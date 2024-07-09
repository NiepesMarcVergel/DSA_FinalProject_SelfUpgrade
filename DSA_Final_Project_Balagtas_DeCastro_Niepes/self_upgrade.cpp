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
    cin.ignore(); // Clear the newline character from the input buffer
    cout << "Enter your gender: ";
    getline(cin, user.gender);
    cout << "Enter your MBTI: ";
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

void moodToday(vector<int> &moodRatings) {
    int mood;
    cout << "Rate your mood today (1-10): ";
    cin >> mood;
    
    if (mood >= 1 && mood <= 3) {
        cout << "Looks like you're feeling down today, no worries let us fix that together.\n";
    } else if (mood >= 4 && mood <= 6) {
        cout << "Not bad but not the best of feels, huh? Let's make that poker face into a big smile!\n";
    } else if (mood >= 7 && mood <= 10) {
        cout << "Wow, now look at that happiness of yours!\n";
    } else {
        cout << "Feeling confused? No worries (^-^).\n";
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
    cin.ignore(); // Clear the newline character from the input buffer
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
                moodToday(moodRatings);
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
