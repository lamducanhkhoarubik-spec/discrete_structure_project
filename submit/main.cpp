#include <iostream>
#include "Algo.h"

using namespace std;

void printPath(PathNode* head) {
    while (head != nullptr) {
        cout << "Node: " << head->name
             << " | f: " << head->f
             << " | g: " << head->g
             << " | h: " << head->h << "\n";
        head = head->next;
    }
}
// --- Giải phóng bộ nhớ ---
void freePath(PathNode* head) {
    while (head != nullptr) {
        PathNode* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    cout <<"==============================\n";
    cout <<"        TASK 1 TEST           \n";
    cout <<"==============================\n";
    double adj[100][100] = {};

    // Mạng xã hội 5 người:
    // 0-Alice, 1-Bob, 2-Charlie, 3-David, 4-Eve
    //
    // Alice -- Bob -- Charlie -- David
    //                    |
    //                   Eve

    adj[0][1] = adj[1][0] = 1;  // Alice - Bob
    adj[1][2] = adj[2][1] = 1;  // Bob - Charlie
    adj[2][3] = adj[3][2] = 1;  // Charlie - David
    adj[2][4] = adj[4][2] = 1;  // Charlie - Eve

    cout << "=== Alice -> David ===\n";
    PathNode* r1 = findSocialPath(adj, 0, 3);
    printPath(r1);

    cout << "\n=== Alice -> Eve ===\n";
    PathNode* r2 = findSocialPath(adj, 0, 4);
    printPath(r2);

    cout << "\n=== Bob -> Eve ===\n";
    PathNode* r3 = findSocialPath(adj, 1, 4);
    printPath(r3);
   cout <<"==============================\n";
    cout <<"        TASK 2 TEST           \n";
    cout <<"==============================\n";
    double adj2[100][100] = {};
    int coords[100][2]    = {};

    // 4 điểm giao hàng
    coords[0][0]=0; coords[0][1]=0;   // (0,0)
    coords[1][0]=2; coords[1][1]=0;   // (2,0)
    coords[2][0]=2; coords[2][1]=3;   // (2,3)
    coords[3][0]=5; coords[3][1]=3;   // (5,3)

    adj2[0][1] = 3;
    adj2[0][2] = 8;
    adj2[1][2] = 4;
    adj2[1][3] = 7;
    adj2[2][3] = 2;

    cout << "\n=== Task 2: Mode 1 (Manhattan) ===\n";
    PathNode* r4 = findDronePath(adj2, coords, 0, 3, 1);
    printPath(r4);

    cout << "\n=== Task 2: Mode 2 (Euclidean) ===\n";
    PathNode* r5 = findDronePath(adj2, coords, 0, 3, 2);
    printPath(r5);

    cout << "\n=== Task 2: Mode 3 (Chebyshev) ===\n";
    PathNode* r6 = findDronePath(adj2, coords, 0, 3, 3);
    printPath(r6);
    cout <<"==============================\n";
    cout <<"        TASK 3 TEST           \n";
    cout <<"==============================\n";
    int maze [100][100] = {
{0 ,0 ,0 ,0 ,0} ,
{0 ,1 ,1 ,0 ,0} ,
{0 ,0 ,0 ,1 ,0} ,
{0 ,1 ,0 ,0 ,0} ,
{0 ,0 ,0 ,0 ,0}
};
 // Mode 1
cout <<"Mode 1 Solution Path";
PathNode * r7 = findWarehousePath ( maze , 5 , 5 , 4 , 0 , 0 , 4 , 1) ;
printPath (r7) ;
// Mode 2
cout <<"\nMode 2 Solution Path";
PathNode * r8 = findWarehousePath ( maze , 5 , 5 , 4 , 0 , 0 , 4 , 2) ;
printPath (r8); 


    cout <<"==============================\n";
    cout <<"        TASK 4 TEST           \n";
    cout <<"==============================\n";
    int r = 5, c = 5;
    int floorPlan [100][100] = {
     {0 ,0 ,0 ,0 ,0} ,
     {0 ,1 ,1 ,0 ,0} ,
     {0 ,0 ,0 ,1 ,0} ,
     {0 ,1 ,0 ,0 ,0} ,
     {0 ,0 ,0 ,0 ,0}
};
    int startX = 4;
    int startY = 0;
    int goalX = 0;
    int goalY = 4;
    
    double weightMatrix[100][100];
    PathNode* OutPath_1;
    PathNode* OutPath_2;
    
    OutPath_1 = findEvacuationPath(floorPlan, r, c, startX, startY, goalX, goalY, weightMatrix, 1);
    OutPath_2 = findEvacuationPath(floorPlan, r, c, startX, startY, goalX, goalY, weightMatrix, 2);
    // In kết quả đường đi
    cout <<"\nMode 1 Solution Path:\n";
    printPath(OutPath_1);
    cout <<"\nMode 2 Solution Path: \n";
    printPath(OutPath_2);
    
    cout << "Part of weight Matrix\n";
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cout << weightMatrix[i][j] << " ";
        }
        cout << endl;
    }
    freePath(OutPath_1);
    freePath(OutPath_2);
    return 0;
}


