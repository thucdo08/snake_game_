#include "HighScore.h"

// Global vector to store high scores
std::vector<Player> highScores;

// Function to add a player to the high score list
void addPlayerToHighScore(const std::string& name, int level, int score, const std::string& dateTime) {
    Player newPlayer;
    newPlayer.name = name;
    newPlayer.level = level;
    newPlayer.score = score;
    newPlayer.dateTime = dateTime;

    // Thêm người chơi mới vào danh sách
    highScores.push_back(newPlayer);

    // Sắp xếp lại danh sách theo điểm số, level và thời gian chơi
    std::sort(highScores.begin(), highScores.end(), [](const Player& a, const Player& b) {
        if (a.score != b.score) return a.score > b.score;
        if (a.level != b.level) return a.level < b.level;
        return a.dateTime < b.dateTime;
        });

    // Giữ lại chỉ top 5 high scores
    if (highScores.size() > 5) {
        highScores.resize(5);
    }

    // Ghi danh sách high scores vào tệp tin
    std::ofstream file("highscores.txt");
    if (file.is_open()) {
        for (const Player& player : highScores) {
            file << player.name << " " << player.level << " " << player.score << " " << player.dateTime << std::endl;
        }
        file.close();
    }
    else {
        std::cerr << "Unable to open file for writing." << std::endl;
    }
}

// Function to display high scores
//void displayHighScore() {
//    std::cout << "High Scores:" << std::endl;
//    std::cout << "Rank" << std::setw(10) << "Name" << std::setw(10) << "Level" << std::setw(10) << "Score" << std::setw(30) << "Date/Time" << std::endl;
//    for (size_t i = 0; i < highScores.size(); ++i) {
//        std::cout << i + 1 << std::setw(10) << highScores[i].name << std::setw(10) << highScores[i].level << std::setw(10) << highScores[i].score << std::setw(30) << highScores[i].dateTime << std::endl;
//    }
//}

// Function to read high scores from file
void displayHighScoreList() {
    std::ifstream file("highscores.txt");
    if (file.is_open()) {
        Player player;
        int stt = 1;
        while (file >> player.name >> player.level >> player.score) {
            std::getline(file >> std::ws, player.dateTime);
            highScores.push_back(player);
        outTextXY(14, 20+stt*2, player.name, 10);
        outNumXY(36, 20+stt*2,player.level, 10);
        outNumXY(60,20+stt*2, player.score, 10);
        outTextXY(80,20+stt*2, player.dateTime, 10);
        ++stt;
        }
        file.close();
    }
    else {
        std::cerr << "Unable to open file for reading." << std::endl;
    }
}

// Initialize high scores on program start
static const bool highScoresInitialized = [] {
    displayHighScoreList();
    return true;
}();
