#include <iostream> // include the input-output stream library
#include <string> // include the string library
#include <iomanip> // include the input-output manipulators library
using namespace std;
// create the social media profile class
class Profile {
    // define private class members
private:
// an integer to store the user ID
    int user_ID;
 // a string to store username   
    string username;
 // an integer for the number of comments  
    int num_comments;
 // a string to store email address   
    string email;
// an integer for the number of followers 
    int num_followers;
 // an integer for the number of likes  
    int num_likes;
 // a string to store password   
    string password;
  // an integer for the number of posts  
    int num_of_posts;
  
 
   // a string for the profile picture file path 
    string profile_picture;
   // a constant integer to store the total number of fields in the profile 
    const int total_fields = 8;
    
// define public class members
public:
// constructor
    Profile( string username, int user_ID, string password, string email) 
        :username(username),user_ID(user_ID),password(password),email(email),
          num_of_posts(0), num_followers(0), num_likes(0), num_comments(0), profile_picture("default_0.jpg") {}

// destructor
    ~Profile() 
    {
        cout << "Profile has been deleted." << endl; // destroy the profile object
    }
    // geting setters and getter functions according to the question requirements
    
//  getter method to get the user ID
    int get_User_ID() const  
    {
        return user_ID;
    }
// setter method to set the user ID
    void set_User_ID(int new_ID)
    {
        // set the user ID to the new ID
        user_ID = new_ID;
    }
 //  getter method to get the username
    string get_Username() const
    {
        return username;
    }
// setter method to set the user username
    void set_Username(string new_username)
    {
        // set the username to the new username
        username = new_username;
    }
    //  getter method to get the password
    string get_Password() const  
    {
        return password;
    }
// setter method to set the user Password
    void set_Password(string new_password) 
    {
        password = new_password;
    }
    
    
//  getter method to get the image filepath
    string get_picture() const 
    {
        return profile_picture;
    }
// setter method to set the user profile pic
    void set_picture(string new_profile_picture) 
    {
        profile_picture = new_profile_picture;// set the number of comments to the new number of comments
    }
    
//  getter method to get the email

    string get_Email() const
    {
        return email;
    }
// setter method to set the user email
    void set_Email(string new_email)
    {
        email = new_email;// set the email address to the new email address
    }
//  getter method to get the number of posts
    int get_num_of_posts() const
    {
        return num_of_posts;
    }

    void set_num_of_posts(int new_num_posts)
    {
        num_of_posts = new_num_posts;// set the number of Posts to the new number of posts
    }
    
    //  getter method to get the number of followers
    int get_Followers() const 
    {
        return num_followers;
    }
// setter method to set the user's followers count
    void set_Followers(int new_followers)
    {
        num_followers = new_followers; // set the number of followers to the new number of followers
    }

//  getter method to get the number of likes
    int get_Likes() const  
    {
        return num_likes;
    }
// setter method to set the number of likes
    void set_Likes(int new_likes) 
    {
        num_likes = new_likes; // set the number of likes to the new number of likes
    }
    
//  getter method to get the number of comments
    int get_Comments() const 
    {
        return num_comments;
    }

    void set_Comments(int new_comments) 
    {
        num_comments = new_comments; // set the number of comments to the new number of comments
    }

    
// This function checks if the email address is valid or not.
// we use bool for this validation 
    bool check_email() const {
   //  check for the "@" symbol and a valid domain name (according to the requiremnets of the question).
        // we can any use a regular expression to validate the email address format/syntax.
     
           if (email.find('@') != std::string::npos && email.find('.') != std::string::npos) 
            {
                          return 0;//true
            }
           else if (email.find('@') == std::string::npos && email.find('.') == std::string::npos) 
           {
                         return 1;// false
           }
    }
    
// This function will checks the strength of the password.
    string password_strength() const 
    {// check the strengthe of the password by usig the length requiremnet for a password 
        if (password.length() >= 12)
        {
            return "Strong Password";
        }
        else if (password.length() >= 8) 
        {
            return "Medium Password";
        }
        else if (password.length() < 8)
        {
            return "Weak Password";
        }
    }
     // Calculating the completion percentage as a ratio of the completed fields to the total fields.
   float get_completion_percent(int fields_comp) const 
   {
       
        float ratio = static_cast<float>(fields_comp) / total_fields;
        float completion_percent;
         completion_percent = ratio * 100;
        return completion_percent;
   }
 // This function returns the user's activity statistics on the social media platform
 // which includes number of comments, posts, likes, and followers.
string get_user_activity_stats() const
{
    
    string stats = "Posts: " + to_string(num_of_posts)  + "\nComments: " + to_string(num_comments) + "\nLikes: " + to_string(num_likes)
        + "\nFollowers: " + to_string(num_followers);
    return stats;

}
// This function validates if the profile picture is an existing file path
bool validate_profile_picture() const 
{
    // check if the file path is not equal to the default image path.
    if (profile_picture != "default_0.jpg") 
    {
        return true;
    }
     // check if the file path is equal to the default image path.
    else if (profile_picture == "default_0.jpg") 
    {
        return false;
    }
}
// This function returns the total number of posts the user has on it's social media page.
int get_total_posts() const 
{
    return num_of_posts;
}

  // This function returns the total number of likes the user has gotton.
int get_total_likes() const
{
  return num_likes;
}
     // this function updates the information of the user
void update_profile() 
{
// create a choice menu to choose the information the user wants to update
    int choice;
            cout << "Welcome to the settings!\n";
            cout << "What do you want to update?\n";
            cout<< "1. Username.\n";
            cout<< "2. Password.\n";
            cout <<"3. Email.\n";
            cout <<"4. Profile Picture.\n";
            cout<< "5. Cancel/Exit." << std::endl;
                 cin >> choice;
    switch (choice) 
    {
    case 1:
        cout << "Enter new username = ";
        cin >> username;
        cout << "Username updated successfully." << endl;
        break;
        
    case 2:
        cout << "Enter new password: ";
        cin >> password;
        cout << "Password updated successfully." << endl;
        
    case 3:
        cout << "Enter new email: ";
        cin >> email;
        cout << "Email updated successfully." << endl;
        break;
        
    case 4:
        cout << "Enter new profile picture =  ";
        cin >> profile_picture;
        cout << "Profile pic updated successfully." << endl;
        break;
    case 5:
        cout << "EXIT." << endl;
        break;
    default:
        cout << "ERROR! Invalid input/choice." << endl;
        cout << "Please choose from 1-5." << endl;
        cin >> choice;
        break;
    }
}
};
int main()
{
    Profile user_profile("AbuBakar" ,543, "bakar@gmail.pk", "emotional damage");
    
    user_profile.set_Likes(76);
    user_profile.set_Comments(25);
    user_profile.set_num_of_posts(16);
    user_profile.set_Followers(183);
    user_profile.set_picture("picture.jpg");

    cout << "User ID is = " << user_profile.get_User_ID() << endl;
    cout << "Username is = " << user_profile.get_Username() << endl;
    cout << "User Email is = " << user_profile.get_Email() << endl;
    cout << "User's number of postsis =  " << user_profile.get_num_of_posts() << endl;
    cout << "User's number of followers is = " << user_profile.get_Followers() << endl;
    cout << "User's number of likes is = " << user_profile.get_Likes() << endl;
    cout << "User's number of comments is = " << user_profile.get_Comments() << endl;
    cout << "User's profile pic = " << user_profile.get_picture() << endl;

    cout << "Email validation: " << user_profile.check_email() << endl;
    cout << "Password strength: " << user_profile.password_strength() << endl;
    
    int fields_comp = 7;
    double completion_percent = user_profile.get_completion_percent(fields_comp);
    cout << "Profile completion percentage: " << completion_percent << endl;
    cout<<"--------------------------User Activity Statistics------------------------\n";
    string stats = user_profile.get_user_activity_stats();
    cout<<" User actiivty Statistics = "<< stats <<endl;
   
     cout <<"--------------------------------------------------------------------------------"<<endl;
    
   // Update the user social media profile information.
user_profile.update_profile();
 cout << endl;
// Print the updated user's profile information.
    cout << "--------------------- Updated User's Profile Information = ---------------------" << endl;
    
    cout << "User ID is = " << user_profile.get_User_ID() << endl;
    cout << "Username is = " << user_profile.get_Username() << endl;
    cout << "User Email is = " << user_profile.get_Email() << endl;
    cout << "User's number of postsis =  " << user_profile.get_num_of_posts() << endl;
    cout << "User's number of followers is = " << user_profile.get_Followers() << endl;
    cout << "User's number of likes is = " << user_profile.get_Likes() << endl;
    cout << "User's number of comments is = " << user_profile.get_Comments() << endl;
    cout << "User's profile pic = " << user_profile.get_picture() << endl;

    cout << "Email validation: " << user_profile.check_email() << endl;
    cout << "Password strength: " << user_profile.password_strength() << endl;
     return 0;
 }