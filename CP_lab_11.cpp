#include <iostream>

int main() {
    using namespace std;

    int n;
    cout << "Enter the number of songs: ";
    cin >> n;

    int songs[n];
    cout << "Enter the song IDs:\n";
    for (int i = 0; i < n; ++i) {
        cin >> songs[i];
    }

    const int MAX_SONG_ID = 1000000; 
    bool seen[MAX_SONG_ID] = {false};

    int maxLength = 0;
    int currentLength = 0;

    for (int i = 0; i < n; ++i) {
        if (!seen[songs[i]]) {
            seen[songs[i]] = true;
            currentLength++;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 0;

          
            for (int j = 0; j < MAX_SONG_ID; ++j) {
                seen[j] = false;
            }

            --i; 
        }
    }

    maxLength = max(maxLength, currentLength);

    cout << "Longest sequence of successive unique songs: " << maxLength << endl;

    return 0;
}
