#include <stdio.h>

// Nested Structure for Bio
struct Bio
{
    char description[50];
    int age;
};

// Structure for Instagram Profile
struct InstaProfile
{
    char username[30];
    int followers;
    struct Bio bio;
};

void main()
{
    // Initialize Instagram Profile
    struct InstaProfile profile =
    {
        "nidhi_panchal",
        2500,
        {"BCA Student", 20}
    };

    printf("===== Instagram Profile =====\n\n");

    printf("Username    : %s\n", profile.username);
    printf("Followers   : %d\n", profile.followers);
    printf("Bio         : %s\n", profile.bio.description);
    printf("Age         : %d\n", profile.bio.age);

}