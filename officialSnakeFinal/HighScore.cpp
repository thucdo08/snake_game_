#include "HighScore.h"
// Global vector to store high scores
std::vector<Player> highScores;

// Global vector to store high scores
void addPlayerToHighScore(const std::string& name, int level, int score, unsigned short gameTime, const std::string& dateTime) {
    Player newPlayer;
    newPlayer.name = name;
    newPlayer.level = level;
    newPlayer.score = score;
    newPlayer.gameTime = gameTime;
    newPlayer.dateTime = dateTime;

    // Thêm người chơi mới vào danh sách
    highScores.push_back(newPlayer);

    // Sắp xếp lại danh sách theo điểm số, level, thời gian chơi và thời gian chơi
    std::sort(highScores.begin(), highScores.end(), [](const Player& a, const Player& b) {
        if (a.level != b.level) return a.level > b.level;
        if (a.score != b.score) return a.score > b.score;
        if (a.gameTime != b.gameTime) return a.gameTime < b.gameTime;
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
            file << player.name << " " << player.level << " " << player.score << " " << player.gameTime << " " << player.dateTime << std::endl; // Ghi thêm gameTime
        }
        file.close();
    }
    else {
        std::cerr << "Unable to open file for writing." << std::endl;
    }
}

// Function to read high scores from file
void displayHighScoreList() {
    std::ifstream file("highscores.txt");
    if (file.is_open()) {
        Player player;
        int stt = 1;
        while (file >> player.name >> player.level >> player.score >> player.gameTime) {
            std::getline(file >> std::ws, player.dateTime);
            highScores.push_back(player);
            int min = player.gameTime / 60;
            int sec = player.gameTime % 60;
        outTextXY(14, 20+stt*2, player.name, 10);
        outNumXY(37, 20+stt*2,player.level, 10);
        outNumXY(52,20+stt*2, player.score, 10);
        outNumXY(66, 20 + stt * 2, min, 10);
        outTextXY(67, 20 + stt * 2, ":", 10);
        outNumXY(68, 20 + stt * 2, sec, 10);
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
