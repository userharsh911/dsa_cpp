
// UNSOLVED

#include <iostream>
#include <vector>
using namespace std;

int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
    int count = 0;

    for(int k = 0; k < img2.size(); k++){
        for(int p = 0; p < img2.size(); p++){
            int lcnt = 0;
            int rcnt = 0;
            int indexi = 0;

            for(int i = k; i < img2.size(); i++){
                int indexj = 0;
                for(int j = p; j < img2.size(); j++){
                    if(img1[indexi][indexj] == img2[i][j] && img2[i][j] == 1){
                        lcnt++;
                    }
                    indexj++;
                }
                indexj = 0;
                for(int j = p; j < img2.size(); j++){
                    if(img1[indexi][(img1.size() - 1) - indexj] == img2[i][j] && img2[i][j] == 1){
                        rcnt++;
                    }
                    indexj++;
                }
                indexi++;
            }
            count = max(count, max(lcnt, rcnt));
            lcnt = 0;
            rcnt = 0;
            indexi = 0;
            for(int i = k; i < img2.size(); i++){
                int indexj = 0;
                for(int j = p; j < img2.size(); j++){
                    if(img2[indexi][indexj] == img1[i][j] && img1[i][j] == 1){
                        lcnt++;
                    }
                    indexj++;
                }
                indexj = 0;
                for(int j = p; j < img2.size(); j++){
                    if(img2[indexi][(img2.size() - 1) - indexj] == img1[i][j] && img1[i][j] == 1){
                        rcnt++;
                    }
                    indexj++;
                }
                indexi++;
            }
            count = max(count, max(lcnt, rcnt));
        }
    }
    return count;   
}

int main(){
    vector<vector<int>> img1 {{0,1,1},{0,0,0},{0,0,0}};
    vector<vector<int>> img2 {{0,0,0},{1,1,0},{0,0,0}};
    cout<<largestOverlap(img1, img2);
    return 0;
}
