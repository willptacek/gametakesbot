#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
int LINES_OF_GAMES = 90; // todo: add dynamic initiliazation of these variables
int LINES_OF_STUDIOS = 35;
int LINES_OF_NOUNS = 16;
int LINES_OF_GENRES = 24;
int LINES_OF_GROUPS = 13;

std::string getGameString(){
    srand(time(0));
    std::string gameString;
    int random = 0;
    random = rand() % LINES_OF_GAMES + 1;
    std::ifstream games;
    games.open("C://Users//Will//CLionProjects//GameTakesBot//games.txt");
    if (!games){
        std::cout << "ERROR! Unable to open games.txt!";
    }
    for(int i = 0; i < random; i++){
        std::getline(games, gameString);
    }
    games.close();
    return gameString;
}
std::string getGenresString(){ //todo  : make all of these just 1 function but im lazy lol
    srand(time(0));
    std::string genresString;
    int random = 0;
    random = rand() % LINES_OF_GENRES + 1;
    std::ifstream genres;
    genres.open("C://Users//Will//CLionProjects//GameTakesBot//genres.txt");
    if (!genres){
        std::cout << "ERROR! Unable to open genres.txt!";
    }
    for(int i = 0; i < random; i++){
        std::getline(genres, genresString);
    }
    genres.close();
    return genresString;
}
std::string getNounsString(){
    srand(time(0));
    std::string nounsString;
    int random = 0;
    random = rand() % LINES_OF_NOUNS + 1;
    std::ifstream genres;
    genres.open("C://Users//Will//CLionProjects//GameTakesBot//nouns.txt");
    if (!genres){
        std::cout << "ERROR! Unable to open nouns.txt!";
    }
    for(int i = 0; i < random; i++){
        std::getline(genres, nounsString);
    }
    genres.close();
    return nounsString;
}
std::string getStudiosString(){
    srand(time(0));
    std::string studiosString;
    int random = 0;
    random = rand() % LINES_OF_STUDIOS + 1;
    std::ifstream genres;
    genres.open("C://Users//Will//CLionProjects//GameTakesBot//studios.txt");
    if (!genres){
        std::cout << "ERROR! Unable to open studios.txt!";
    }
    for(int i = 0; i < random; i++){
        std::getline(genres, studiosString);
    }
    genres.close();
    return studiosString;
}
std::string getGroupsString(){
    srand(time(0));
    std::string groupsString;
    int random = 0;
    random = rand() % LINES_OF_GROUPS + 1;
    std::ifstream genres;
    genres.open("C://Users//Will//CLionProjects//GameTakesBot//groups.txt");
    if (!genres){
        std::cout << "ERROR! Unable to open groups.txt!";
    }
    for(int i = 0; i < random; i++){
        std::getline(genres, groupsString);
    }
    genres.close();
    return groupsString;
}
bool theSame(std::string string1, std::string string2){
    if(string1 == string2){
        return true;
    }
    return false;
}
std::string statement1(){
    std::string game1, game2, noun, final;
    game1 = getGameString();
    do{
        game2 = getGameString();
    }while(theSame(game1, game2));
    noun = getNounsString();
    final = game1 + " is just " + game2 + " with " + noun + ".";
    return final;
};
std::string statement2(){
    std::string game1, game2, final;
    game1 = getGameString();
    do{
        game2 = getGameString();
    }while(theSame(game1, game2));
    final = game1 + " is just " + game2 + " but good.";
    return final;
}
std::string statement3(){
    std::string game1, genre, final;
    game1 = getGameString();
    genre = getGenresString();
    final = game1 + " is the Dark Souls of " + genre + " games.";
    return final;
}
std::string statement4(){
    std::string game1, game2, final;
    game1 = getGameString();
    do{
        game2 = getGameString();
    }while(theSame(game1, game2));
    final = game1 + " is just " + game2 + " but worse.";
    return final;
}
std::string statement5(){
    std::string game1, game2, group, final;
    game1 = getGameString();
    do{
        game2 = getGameString();
    }while(theSame(game1, game2));
    group = getGroupsString();
    final = game1 + " is just " + game2 + " for " + group + ".";
    return final;
}
std::string statement6(){
    std::string game1, game2, studio, final;
    game1 = getGameString();
    do{
        game2 = getGameString();
    }while(theSame(game1, game2));
    studio = getStudiosString();
    final = game1 + " is what would happen if " + studio + " made " + game2 + ".";
    return final;
}
std::string statement7(){
    std::string game1, game2, game3, final;
    game1 = getGameString();
    do{
        game2 = getGameString();
    }while(theSame(game1, game2));
    do{
        game3 = getGameString();
    }while(theSame(game1, game3));
    while(theSame(game2, game3)){
        game3 = getGameString();
    }
    final = game1 + " is just " + game2 + " for people who play " + game3 + ".";
    return final;
}
std::string statement8(){
    std::string game1, game2, studio, final;
    game1 = getGameString();
    do{
        game2 = getGameString();
    }while(theSame(game1, game2));
    studio = getStudiosString();
    final = game1 + " is just " + game2 + " for " + studio + " fans.";
    return final;
}
std::string statement9(){
    std::string game1, group, final;
    game1 = getGameString();
    group = getGroupsString();
    final = game1 + " is only made for " + group + ".";
    return final;
}