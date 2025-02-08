#define _crt_secure_no_warnings 1
#include<iostream>
using namespace std;
//class Solution {
//public:
//    int add(int a)
//    {
//        int t = 0, tmp = 0;
//        while (a)
//        {
//            t = a % 10;
//            tmp = tmp + t * t;
//            a = a / 10;
//        }
//        return tmp;
//    }
//    bool isHappy(int n) {
//        int slow = n, fast = add(n);
//        //slow = add(n);
//        //fast = add(add(n));
//        while (slow != fast)
//        {
//            slow = add(slow);
//            fast = add(add(fast));
//        }
//        if (fast == 1)
//            return true;
//        else
//            return false;
//    }
//};
//
//int main()
//{
//    Solution s1;
//    cout<<s1.isHappy(19);
//}

//#include<windows.h>
//#include<time.h>
//#include<conio.h>
//#define H 22
//#define W 22
//using namespace std;
//
//class chessboard
//{
//public:
//    char qp[H][W];
//    int i, j, x1, y1;
//    chessboard();
//    void food();
//    void prt(int grade, int score, int gamespeed);
//};
//chessboard::chessboard()
//{
//    for (i = 1; i <= H - 2; i++)
//        for (j = 1; j <= W - 2; j++)
//            qp[i][j] = ' ';
//    for (i = 0; i <= H - 1; i++)
//        qp[0][i] = qp[H - 1][i] = '#';
//    for (i = 1; i <= H - 2; i++)
//        qp[i][0] = qp[i][W - 1] = '#';
//    food();
//}
//void chessboard::food()
//{
//    srand(time(0));
//    do
//    {
//        x1 = rand() % W - 2 + 1;
//        y1 = rand() % H - 2 + 1;
//    } while (qp[x1][y1] != ' ');
//    qp[x1][y1] = '$';
//}
//void chessboard::prt(int grade, int score, int gamespeed)
//{
//    system("cls");
//    cout << endl;
//    for (i = 0; i < H; i++)
//    {
//        cout << "\t";
//        for (j = 0; j < W; j++)
//            cout << qp[i][j] << ' ';
//        if (i == 0) cout << "\tGrade:" << grade;
//        if (i == 2) cout << "\tScore:" << score;
//        if (i == 4) cout << "\tAutomatic forward";
//        if (i == 5) cout << "\ttime interval:" << gamespeed << "ms";
//        cout << endl;
//    }
//}
//class snake :public chessboard
//{
//public:
//    int zb[2][100];
//    long start;
//    int head, tail, grade, score, gamespeed, length, timeover, x, y;
//    char direction;
//    snake();
//    void move();
//};
//snake::snake()
//{
//    cout << "\n\n\t\tThe game is about to begin!" << endl;
//    for (i = 3; i >= 0; i--)
//    {
//        start = clock();
//        while (clock() - start <= 1000);
//        system("cls");
//        if (i > 0)
//            cout << "\n\n\t\tCountdown:" << i << endl;
//    }
//    for (i = 1; i <= 3; i++)
//        qp[1][i] = '*';
//    qp[1][4] = '@';
//    for (i = 0; i < 4; i++)
//    {
//        zb[0][i] = 1;
//        zb[1][i] = i + 1;
//    }
//}
//void snake::move()
//{
//    score = 0;
//    head = 3, tail = 0;
//    grade = 1, length = 4;
//    gamespeed = 500;
//    direction = 77;
//    while (1)
//    {
//        timeover = 1;
//        start = clock();
//        while ((timeover = (clock() - start <= gamespeed)) && !_kbhit());
//        if (timeover)
//        {
//            _getch();
//            direction = _getch();
//        }
//        switch (direction)
//        {
//        case 72: x = zb[0][head] - 1; y = zb[1][head]; break;
//        case 80: x = zb[0][head] + 1; y = zb[1][head]; break;
//        case 75: x = zb[0][head]; y = zb[1][head] - 1; break;
//        case 77: x = zb[0][head]; y = zb[1][head] + 1; break;
//        }
//        if (x == 0 || x == 21 || y == 0 || y == 21)
//        {
//            cout << "\tGame over!" << endl; break;
//        }
//        if (qp[x][y] != ' ' && !(x == x1 && y == y1))
//        {
//            cout << "\tGame over!" << endl; break;
//        }
//        if (x == x1 && y == y1)
//        {
//            length++;
//            score = score + 100;
//            if (length >= 8)
//            {
//                length -= 8;
//                grade++;
//                if (gamespeed >= 200)
//                    gamespeed = 550 - grade * 50;
//            }
//            qp[x][y] = '@';
//            qp[zb[0][head]][zb[1][head]] = '*';
//            head = (head + 1) % 100;
//            zb[0][head] = x;
//            zb[1][head] = y;
//            food();
//            prt(grade, score, gamespeed);
//        }
//        else
//        {
//            qp[zb[0][tail]][zb[1][tail]] = ' ';
//            tail = (tail + 1) % 100;
//            qp[zb[0][head]][zb[1][head]] = '*';
//            head = (head + 1) % 100;
//            zb[0][head] = x;
//            zb[1][head] = y;
//            qp[zb[0][head]][zb[1][head]] = '@';
//            prt(grade, score, gamespeed);
//        }
//    }
//}
//int main()
//{
//    chessboard cb;
//    snake s;
//    s.move();
//}
#include<vector>
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& price, int target) {
//        int left = 0, right = price.size() - 1;
//        int sum = price[left] + price[right];
//        while (left < right)
//        {
//            if (sum == target)
//                return { price[left],price[right] };
//            else if (sum < target)
//                ++left;
//            else
//                --right;
//        }
//        return { -1,-1 };
//    }
//};
//int main()
//{
//    Solution d1;
//    d1
//}
#include <algorithm>
template<class T>
void print(vector<vector<T>> ret1)
{
    for (auto e : ret1)
    {
        cout << '[' << " ";
        for (auto f : e)
        {

            // cout <<'['<< " " << f<<" "<<']'<<",";
            cout << f << ',';
        }
        cout << " " << ']' << ",";
    }
}
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ret;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int sum = 0;
        //固定第一个值
        for (int i = 0; i < n;)
        {
            //固定第二个值
            for (int j = i + 1; j < n;)
            {
                //对j后面的范围进行“选两个值和为==target-a-b”
                int left = j + 1, right = n - 1;
                long long _target = (long long)target - nums[i] - nums[j];
                while (left < right)
                {
                    sum = nums[left] + nums[right];
                    if (sum == _target)
                    {
                        ret.push_back({ nums[i], nums[j], nums[left], nums[right] });
                        ++left;
                        --right;
                        //除 重复
                        while (left < right && nums[left - 1] == nums[left]) ++left;
                        while (left < right && nums[right] == nums[right + 1]) --right;
                    }

                    else if (sum < _target)
                        ++left;
                    else
                        --right;
                }
                ++j;
                while (j < n && nums[j - 1] == nums[j]) j++;
            }
            ++i;
            while (i < n && nums[i - 1] == nums[i]) i++;
        }
        return ret;
    }
};
int main()
{
    Solution d1;
        vector<int> num1;
        //{-3,-2,-1,0,0,1,2,3 }
        num1.push_back(-3);
        num1.push_back(-2);
        num1.push_back(-1);
        num1.push_back(0);
        num1.push_back(0);
        num1.push_back(1);
        num1.push_back(2);
        num1.push_back(3);

        //for (auto e : num1)
        //{
        //    cout << e;
        //}
        vector<vector<int>> ret1=d1.fourSum(num1, 0);
        //for (auto e : ret1)
        //{
        //    cout << '[' << " ";
        //    for (auto f : e)
        //    {

        //       // cout <<'['<< " " << f<<" "<<']'<<",";
        //        cout << f<<',';
        //    }
        //    cout<< " " << ']' << ",";
        //}
        print(ret1);
       return 0;
}
