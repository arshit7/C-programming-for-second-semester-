#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ---------------- USER CLASS ----------------
class User {
public:
    string username;
    string password;

    User(string u, string p) {
        username = u;
        password = p;
    }
};

// ---------------- COMMENT CLASS ----------------
class Comment {
public:
    string username;
    string text;

    Comment(string u, string t) {
        username = u;
        text = t;
    }
};

// ---------------- POST CLASS ----------------
class Post {
public:
    string content;
    string author;
    int likes;
    vector<Comment> comments;

    Post(string c, string a) {
        content = c;
        author = a;
        likes = 0;
    }

    void likePost() {
        likes++;
    }

    void addComment(string user, string text) {
        comments.push_back(Comment(user, text));
    }

    void displayPost() {
        cout << "\nAuthor: " << author;
        cout << "\nPost: " << content;
        cout << "\nLikes: " << likes << endl;

        if (!comments.empty()) {
            cout << "Comments:\n";
            for (auto &c : comments) {
                cout << "- " << c.username << ": " << c.text << endl;
            }
        }
        cout << "-------------------------\n";
    }
};

// ---------------- SYSTEM CLASS ----------------
class SocialMediaApp {
private:
    vector<User> users;
    vector<Post> posts;
    int currentUserIndex = -1;

public:
    // SIGNUP
    void signup() {
        string u, p;
        cout << "Enter username: ";
        cin >> u;
        cout << "Enter password: ";
        cin >> p;

        users.push_back(User(u, p));
        cout << "Signup successful!\n";
    }

    // LOGIN
    bool login() {
        string u, p;
        cout << "Enter username: ";
        cin >> u;
        cout << "Enter password: ";
        cin >> p;

        for (int i = 0; i < users.size(); i++) {
            if (users[i].username == u && users[i].password == p) {
                currentUserIndex = i;
                cout << "Login successful!\n";
                return true;
            }
        }

        cout << "Invalid credentials!\n";
        return false;
    }

    // CREATE POST
    void createPost() {
        cin.ignore();
        string content;
        cout << "Enter post content: ";
        getline(cin, content);

        posts.push_back(Post(content, users[currentUserIndex].username));
        cout << "Post created!\n";
    }

    // VIEW POSTS
    void viewPosts() {
        if (posts.empty()) {
            cout << "No posts available!\n";
            return;
        }

        for (int i = 0; i < posts.size(); i++) {
            cout << "\nPost ID: " << i;
            posts[i].displayPost();
        }
    }

    // LIKE POST
    void likePost() {
        int id;
        cout << "Enter Post ID to like: ";
        cin >> id;

        if (id >= 0 && id < posts.size()) {
            posts[id].likePost();
            cout << "Post liked!\n";
        } else {
            cout << "Invalid ID!\n";
        }
    }

    // COMMENT ON POST
    void commentPost() {
        int id;
        cout << "Enter Post ID to comment: ";
        cin >> id;

        if (id >= 0 && id < posts.size()) {
            cin.ignore();
            string text;
            cout << "Enter comment: ";
            getline(cin, text);

            posts[id].addComment(users[currentUserIndex].username, text);
            cout << "Comment added!\n";
        } else {
            cout << "Invalid ID!\n";
        }
    }

    // MENU AFTER LOGIN
    void userMenu() {
        int choice;
        do {
            cout << "\n--- Social Media Menu ---\n";
            cout << "1. Create Post\n";
            cout << "2. View Posts\n";
            cout << "3. Like Post\n";
            cout << "4. Comment on Post\n";
            cout << "5. Logout\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch (choice) {
                case 1: createPost(); break;
                case 2: viewPosts(); break;
                case 3: likePost(); break;
                case 4: commentPost(); break;
                case 5: cout << "Logged out!\n"; break;
                default: cout << "Invalid choice!\n";
            }

        } while (choice != 5);
    }

    // MAIN MENU
    void mainMenu() {
        int choice;
        do {
            cout << "\n--- Welcome to Mini Social Media ---\n";
            cout << "1. Signup\n";
            cout << "2. Login\n";
            cout << "3. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch (choice) {
                case 1: signup(); break;
                case 2: 
                    if (login()) userMenu();
                    break;
                case 3: cout << "Goodbye!\n"; break;
                default: cout << "Invalid choice!\n";
            }

        } while (choice != 3);
    }
};

// ---------------- MAIN FUNCTION ----------------
int main() {
    SocialMediaApp app;
    app.mainMenu();
    return 0;
}