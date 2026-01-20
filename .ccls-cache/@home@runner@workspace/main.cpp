#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main() {
  // name
  string name = "";
  // age
  int age = 0;
  // height (meters)
  double height = 0.0;
 
  // weight (kilograms)
  double weight = 0.0;
  
  //test score
  int score = 0;

  // grabs user input data
  cout << "Enter your name: ";
  std::getline(cin >> std::ws, name);
  cout << "Enter your age: ";
  cin >> age;
  cout << "Enter your height (meters): ";
  cin >> height;
  cout << "Enter your weight (kilograms): ";
  cin >> weight;
  cout << "Enter your test score(0-100): ";
  cin >> score;

  //BMI calculation
  double bmi = weight / (height * height);

  string bmiCategory;

  if (bmi < 18.5)
    bmiCategory = "Underweight";
  else if (bmi< 25) 
    bmiCategory = "Normal weight";
  else if (bmi < 30)
    bmiCategory = "Overweight";
  else
    bmiCategory = "Obese";

  //grade calculation
  char grade;

  if (score >= 90)
    grade = 'A';
  else if (score >=80)
    grade = 'B';
  else if (score >=70)
    grade = 'C';
  else if (score >=60)
    grade = 'D';
  else
    grade = 'F';

  //Final output
  cout << fixed << setprecision(2);
  cout << endl;
  cout << "Hey " << name << ", you are " << age << " years old with a BMI of "
       << bmi << " (" << bmiCategory << ") and you got a grade "
       << grade << "! Keep it up!" << endl;
  return 0;
}