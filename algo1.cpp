#include <iostream>
#include <vector>
using namespace std;

//BUGGY CODE
bool fail_lecture(const vector<int>& attendance_records) {
  int absent_count = 0;
  for (int i = 1; i < (int)attendance_records.size(); ++i) {
    absent_count += attendance_records[i] == 0;
  }

  return absent_count >= 3;
}

//FIXED CODE
bool fail_lecture_fix(const vector<int>& attendance_records) {
  int absent_count = 0;
  for (int i = 0; i < (int)attendance_records.size(); ++i) {
    absent_count += attendance_records[i] == 0;
  }

  return absent_count >= 3;
}

void test(const vector<int>& arr) {
  cout << "Attendance: ";
  for (int x:arr) cout << x << " ";
  cout << "\n";
  cout << "Correct Output: " << fail_lecture_fix(arr) << "\n";
  cout << "Incorrect Output: " <<fail_lecture(arr) << "\n";
}

int main() {
  test({1});
  test({1,0,0,0,1,1,1,1});
  test({0,0,1,1,1,1});
  test({0,1,0,0,1,1});
  return 0;
}
