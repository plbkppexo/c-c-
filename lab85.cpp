#include <iostream>
#include <string>
using namespace std;

class MusicPlaylist
{
private:
    string musicsong[20];
    int current;

public:
    MusicPlaylist()
    {
        int i;
        for (i = 0; i < 20; i++)
        {
            this->musicsong[i] = "0";
        }
        this->current = 0;
    }
    void add(string song)
    {
        int i;
        for (i = 0; i < 20; i++)
        {
            if (this->musicsong[i] != song && this->musicsong[i] == "0")
            {
                this->musicsong[i] = song;
                break;
            }
        }
    }

    void setCurrentTrack(int num)
    {
        this->current = num - 1;
    }

    string play()
    {
        return this->musicsong[current];
    }
};

int main()
{
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(1);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}