#include <iostream>
#include <sstream>
using namespace std;

class Music {
private:
    string title;
    int views;
public:
    Music(string title){
        this->title = title;
        views = 0;
    }

    void setTitle(string title) {
        this->title = title;
    }

    string getTitle() {
        return title;
    }

    int getViews() {
        return views;
    }

    void listen() {
        views++;
    }

    void listenManyTimes(int views) {
        this->views += views;
    }

    string toString() {
        stringstream ss;
        ss << title << " (" << views << " views)";
        return ss.str();
    }
};

int main() {
    Music music("Fire Boy");
    Music rockMusic("Poison - Body Slam");

    music.listen();
    rockMusic.listen();
    music.listenManyTimes(100000);

    cout << music.toString() << endl;
    cout << rockMusic.toString() << endl;

    cout << "------------------------" << endl;

    Music* underline = new Music("Candy");
    cout << underline->toString() << endl;
    //underline = &music;
    cout << underline->toString() << endl;

    cout << "------------------------" << endl;

    Music* musics[10];
    musics[0] = &music;
    musics[1] = &rockMusic;
    musics[2] = underline;
    musics[3] = new Music("OMG");

    music.setTitle("Fire Boy (1.2M)");
    underline->setTitle("OMG (10M)");
    int i;
    for (i = 0; i < 4; i++) {
        cout << musics[i]->getTitle() << endl;
    }


    return 0;
}
