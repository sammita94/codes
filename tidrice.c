#include "iostream.h"
#include<string.h>

typedef std::map<std::string, int> name_vote_t;
typedef std::map<std::string, int>::iterator name_vote_it_t;

int main()
{
    long long int t,n,vote;
    char names[101][21];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld\n",&n);
        name_vote_t names;
        const char name_temp;
        int vote=0, vote_i=0;
        for(i=0;i<n;i++)
        {
            scanf("%s %d",name_temp,vote);
            if(vote==53)    vote_i=1;
            else if(vote==55)   vote_i=-1;
            name_vote_it_t name_vote_it = names.find(name_temp);
            if( name_vote_it == names.end() ){
                names.insert(name::value_type(name_temp, vote_i) );
            }
            else
                name_vote_it.second = vote_i;
        }
    }
}
