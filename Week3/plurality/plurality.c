#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    // TODO
    //checking the whole candidates, from 0 to candidate count
    //candidate count is argc - 1. Thus, we'll not deduct 1 again

    for (int i = 0; i < candidate_count; i++)
    {
        //looking for exact match in letters (no case sensitivity)

        if (strcmp(name, candidates[i].name) == 0)
        {
            candidates[i].votes += 1;            //add one to the vote counter for the same candidate
            return true;                    //return 1;
        }
    }
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    // TODO
    //Sorting in descending order

    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            if (candidates[j].votes < candidates[j + 1].votes)
            {
                string dummy_name = candidates[j].name;
                int    dummy_votes = candidates[j].votes;

                candidates[j].name = candidates[j + 1].name;
                candidates[j].votes = candidates[j + 1].votes;

                candidates[j + 1].name = dummy_name;
                candidates[j + 1].votes = dummy_votes;
            }
        }
    }

    // print all values equal to the highest value stored in [0]

    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[0].votes == candidates[i].votes)
        {

            printf("%s \n", candidates[i].name);
        }
    }
    return;
}