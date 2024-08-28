class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0, y = 0;
        map<pair<int, int>, bool> visited;
        for (int i = 0; i < path.size(); i++) {
            visited[{x, y}] = true;
            if (path[i] == 'N')
                y += 1;
            else if (path[i] == 'E')
                x += 1;
            else if (path[i] == 'S')
                y -= 1;
            else
                x -= 1;
            if (visited[{x, y}])
                return true;
        }
        return false;
    }
};