/*Bài 1:  Ba điểm thẳng hàng
Cho N điểm, hãy kiểm tra xem có bao nhiêu bộ 3 điểm thẳng hàng.
Input: Cho trong tệp văn bản DL.INP
- Dòng thứ 1 ghi số N
- N dòng tiếp theo, mỗi dòng ghi toạ độ của một điểm.
Output: Ghi vào tệp KQ.OUT chứa một số duy nhất là số bộ 3 điểm thẳng hàng.
Ví dụ:

(Giới hạn: 1<=N<=2000, toạ độ các điểm có giá trị tuyệt đối không quá 10000)
*/
#include <iostream>
using namespace std;
int main()
{
    int n,t,ng,c,kq=0;
    int x[2002],y[2002];
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> x[i] >> y[i];
    for(int i=1; i<=n; i++)
    {
        t=0;ng=0;c=0;
        for(int j=i+1; j<=n; j++)
        {
            if(x[j] == x[i]) t++;
            if(y[j] == y[i]) ng++;
            if(x[j]-x[i] == y[j]-y[i]) c++;
        }
       kq+=t*(t-1)/2+ng*(ng-1)/2+c*(c-1)/2;
    }
    cout << kq;
}
