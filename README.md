# Efficient Social Media Profile Handler Class Using C++
The Social Media Profile Class is a C++ program that models a user's social media profile. It provides functionalities to manage and interact with various attributes of the profile, such as user ID, username, email, password, profile picture, and activity statistics.

# Features
- Profile Creation: Initialize a profile with basic details like username, user ID, password, and email.
- Attribute Management: Getters and setters for all profile attributes including username, user ID, password, email, profile picture, and user statistics.
- Validation: Check the validity of the email address and evaluate the strength of the password.
- Profile Update: Interactive menu to update profile attributes like username, password, email, and profile picture.
-Activity Statistics: Retrieve statistics related to user activity, such as the number of posts, comments, likes, and followers.
- Profile Completion: Calculate and display the completion percentage of the profile based on filled fields.
- Profile Picture Validation: Verify if a profile picture is different from the default image.
- Destructor: Message indicating profile deletion when the object is destroyed.

# Class "Profile"

## Private Members:
- int user_ID: Stores the user's unique ID.
- string username: Stores the username.
- string password: Stores the user's password.
- string email: Stores the user's email.
- int num_of_posts: Stores the number of posts made by the user.
- int num_comments: Stores the number of comments made by the user.
- int num_followers: Stores the number of followers the user has.
- int num_likes: Stores the number of likes the user has received.
- string profile_picture: Stores the file path of the profile picture.
- const int total_fields: Total number of fields in the profile.

## Public Methods:
- Constructor: Initializes the profile with default values.
- Destructor: Indicates when a profile is deleted.
- Getter and Setter Methods: For each private member.
- check_email(): Validates the format of the email.
- password_strength(): Returns a string indicating the strength of the password.
- get_completion_percent(int fields_comp): Calculates and returns the profile completion percentage.
- get_user_activity_stats(): Returns a string with the user's activity statistics.
- validate_profile_picture(): Validates if the profile picture path is valid.
- update_profile(): Interactive function to update profile attributes.

# Usage
#### 1) Profile Initialization: Create an instance of the Profile class with initial details.
#### 2) Manage Attributes: Use getters and setters to manage the profile's attributes.
#### 3) Validate Data: Validate email format and check password strength.
#### 4) Update Profile: Use the interactive update_profile() function to update profile details.
#### 5) Retrieve Statistics: Use get_user_activity_stats() to get a summary of the user's activity.
#### 6) Calculate Completion: Use get_completion_percent() to calculate the completion percentage of the profile.
