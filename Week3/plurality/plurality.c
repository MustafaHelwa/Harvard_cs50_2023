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
            candidates[i].votes++;            //add one to the vote counter for the same candidate
            return true;                    //return 1;
        }
    }
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    // TODO
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > candidates[i + 1].votes)
        {
            string dummy_string = candidates[i].name;
            int dummy_int = candidates[i].votes;

            candidates[i].name = candidates[i + 1].name;
            candidates[i].votes = candidates[i + 1].votes;

            candidates[i + 1].name = dummy_string;
            candidates[i + 1].votes = dummy_int;

        }
    }

    if (candidates[candidate_count].votes == candidates[candidate_count - 1].votes)
    {
        if (candidates[candidate_count - 1].votes == candidates[candidate_count - 2].votes)
        {
            printf("%s \n%s \n%s", candidates[candidate_count].name, candidates[candidate_count - 1].name,  candidates[candidate_count - 2].name);
        }
        else
        {
            printf("%s\n %s", candidates[candidate_count].name, candidates[candidate_count - 1].name);
        }
    }
    else
    {
        printf("%s\n", candidates[candidate_count].name);
    }


    return;
}