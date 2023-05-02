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

        if (strcmp(name, candidate[i].name) == 0)
        {
            candidate[i].vote++;            //add one to the vote counter for the same candidate
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
        if (candidate[i].vote > candidate[i + 1].vote)
        {
            string dummy_string = candidate[i].name;
            int dummy_int = candidate[i].vote;

            candidate[i].name = candidate[i + 1].name;
            candidate[i].vote = candidate[i + 1].vote;

            candidate[i + 1].name = dummy_string;
            candidate[i + 1].vote = dummy_vote;

        }
    }

    if (candidate[candidate_count].vote == candidate[candidate_count - 1].vote)
    {
        if (candidate[candidate_count - 1].vote == candidate[candidate_count - 2].vote)
        {
            printf("%i \n%i \n%i", candidate[candidate_count].vote, candidate[candidate_count - 1].vote,  candidate[candidate_count - 2].vote);
        }
        else
        {
            printf("%i\n %i", candidate[candidate_count].vote, candidate[candidate_count - 1].vote);
        }
    }
    else
    {
        printf("%i\n", candidate[candidate_count].vote);
    }


    return;
}