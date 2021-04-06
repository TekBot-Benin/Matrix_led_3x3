int var[2][3] = {{6,7,9}, {12,11,10}};

void setup()
{
  for (int i = 0; i < 2; i++)
    for (int j = 0; j < 3; j++)
      pinMode(var[i][j], OUTPUT);
}

void shut()
{
  for (int i = 0; i < 3; i++) {
    digitalWrite(var[0][i], 0);
    digitalWrite(var[1][i], 1);
  }
  delay(50);
}

void all_led()
{
  int n = 100;
  shut();
  for (int i = 2; i > -1; i--, delay(n)) {
    digitalWrite(var[0][0], 1);
    digitalWrite(var[1][i], 0);
    delay(n);
    shut();
  }
  shut();
  for (int i = 1; i < 3; i++, delay(n)) {
    digitalWrite(var[0][i], 1);
    digitalWrite(var[1][0], 0);
    delay(n);
    shut();
  }
  shut();
  for (int i = 1; i < 3; i++, delay(n)) {
    digitalWrite(var[0][2], 1);
    digitalWrite(var[1][i], 0);
    delay(n);
    shut();
  }
  shut();
  digitalWrite(var[0][1], 1);
  digitalWrite(var[1][2], 0);
  delay(n);
  shut();
  digitalWrite(var[0][1], 1);
  digitalWrite(var[1][1], 0);
  delay(200);
  shut();
  delay(200);
}
void diagonal()
{
  const int n = 150;
  
  shut();
  digitalWrite(var[0][0], 1);
  digitalWrite(var[1][2], 0);
  delay(n);
  shut();
  digitalWrite(var[0][0], 1);
  digitalWrite(var[1][1], 0);
  delay(n - 100);
  shut();
  digitalWrite(var[0][1], 1);
  digitalWrite(var[1][2], 0);
  delay(n);
  shut();
  digitalWrite(var[0][0], 1);
  digitalWrite(var[1][0], 0);
  delay(n - 100);
  shut();
  digitalWrite(var[0][1], 1);
  digitalWrite(var[1][1], 0);
  delay(n - 100);
  shut();
  digitalWrite(var[0][2], 1);
  digitalWrite(var[1][2], 0);
  delay(n);
  shut();
  digitalWrite(var[0][1], 1);
  digitalWrite(var[1][0], 0);
  delay(n - 100);
  shut();
  digitalWrite(var[0][2], 1);
  digitalWrite(var[1][1], 0);
  delay(n);
  shut();
  digitalWrite(var[0][2], 1);
  digitalWrite(var[1][0], 0);
  delay(n);
  shut();
}

void snake()
{
  const int n = 100;

  shut();
  for (int i = 2; i >= 0; delay(n), shut(), i--) {
    digitalWrite(var[0][0], 1);
    digitalWrite(var[1][i], 0); }
  for (int i = 0; i < 3; delay(n), shut(), i++) {
    digitalWrite(var[0][1], 1);
    digitalWrite(var[1][i], 0); }
  for (int i = 2; i >= 0; delay(n), shut(), i--) {
    digitalWrite(var[0][2], 1);
    digitalWrite(var[1][i], 0); }
  for (int i = 0; i < 3; delay(n), shut(), i++) {
    digitalWrite(var[0][1], 1);
    digitalWrite(var[1][i], 0); }
  for (int i = 2; i >= 0; delay(n), shut(), i--) {
    digitalWrite(var[0][0], 1);
    digitalWrite(var[1][i], 0); }
  delay(200);
}
void snake_double()
{
  const int n = 100;

  shut();
  for (int i = 2; i >= 0; delay(n), shut(), i--) {
    digitalWrite(var[0][1], 1);
    digitalWrite(var[1][i], 0);
    digitalWrite(var[0][0], 1);
    digitalWrite(var[1][i], 0); }
  for (int i = 0; i < 3; delay(n), shut(), i++) {
    digitalWrite(var[0][2], 1);
    digitalWrite(var[1][i], 0);
    digitalWrite(var[0][1], 1);
    digitalWrite(var[1][i], 0); }
  for (int i = 2; i >= 0; delay(n), shut(), i--) {
    digitalWrite(var[0][2], 1);
    digitalWrite(var[1][i], 0);
    digitalWrite(var[0][1], 1);
    digitalWrite(var[1][i], 0); }
  for (int i = 0; i < 3; delay(n), shut(), i++) {
    digitalWrite(var[0][1], 1);
    digitalWrite(var[1][i], 0);
    digitalWrite(var[0][0], 1);
    digitalWrite(var[1][i], 0); }
  delay(200);
  for (int i = 2; i >= 0; delay(n), shut(), i--) {
    digitalWrite(var[0][i], 1);
    digitalWrite(var[1][2], 0);
    digitalWrite(var[0][i], 1);
    digitalWrite(var[1][1], 0); }
  for (int i = 0; i < 3; delay(n), shut(), i++) {
    digitalWrite(var[0][i], 1);
    digitalWrite(var[1][1], 0);
    digitalWrite(var[0][i], 1);
    digitalWrite(var[1][0], 0); }
  for (int i = 2; i >= 0; delay(n), shut(), i--) {
    digitalWrite(var[0][i], 1);
    digitalWrite(var[1][0], 0);
    digitalWrite(var[0][i], 1);
    digitalWrite(var[1][1], 0); }
  for (int i = 0; i < 3; delay(n), shut(), i++) {
    digitalWrite(var[0][i], 1);
    digitalWrite(var[1][2], 0);
    digitalWrite(var[0][i], 1);
    digitalWrite(var[1][1], 0); }
  delay(200);
}
void letter_n()
{
  const int n = 100;

  shut();
  for (int i = 0; i < 3; delay(n), shut(), i++) {
    digitalWrite(var[0][0], 1);
    digitalWrite(var[1][i], 0); }
  digitalWrite(var[0][1], 1);
  digitalWrite(var[1][1], 0);
  delay(n);
  shut();
  for (int i = 0; i < 3; delay(n), shut(), i++) {
    digitalWrite(var[0][2], 1);
    digitalWrite(var[1][i], 0); }
  for (int i = 0; i < 3; delay(n), shut(), i++) {
    digitalWrite(var[0][0], 1);
    digitalWrite(var[1][i], 0); }
  for (int i = 0; i < 3; delay(n), shut(), i++) {
    digitalWrite(var[0][1], 1);
    digitalWrite(var[1][i], 0); }
  for (int i = 0; i < 3; delay(n), shut(), i++) {
    digitalWrite(var[0][2], 1);
    digitalWrite(var[1][i], 0); }
}

void letter_m()
{
  const int n = 100;

  shut();
  for (int i = 0; i < 3; delay(n), shut(), i++) {
    digitalWrite(var[0][0], 1);
    digitalWrite(var[1][i], 0); }
  digitalWrite(var[0][1], 1);
  digitalWrite(var[1][1], 0);
  delay(n);
  shut();
  for (int i = 2; i >= 0; delay(n), shut(), i--) {
    digitalWrite(var[0][2], 1);
    digitalWrite(var[1][i], 0); }
  for (int i = 0; i < 3; delay(n), shut(), i++) {
    digitalWrite(var[0][2], 1);
    digitalWrite(var[1][i], 0); }
  for (int i = 0; i < 3; delay(n), shut(), i++) {
    digitalWrite(var[0][1], 1);
    digitalWrite(var[1][i], 0); }
  for (int i = 0; i < 3; delay(n), shut(), i++) {
    digitalWrite(var[0][0], 1);
    digitalWrite(var[1][i], 0); }
}
void letter_v()
{
  const int n = 100;
  
  shut();
  for (int i = 2; i > 0; delay(n), shut(), i--) {
    digitalWrite(var[0][0], 1);
    digitalWrite(var[1][i], 0); }
  digitalWrite(var[0][1], 1);
  digitalWrite(var[1][0], 0);
  delay(n);
  shut();
  for (int i = 1; i < 3; delay(n), shut(), i++) {
    digitalWrite(var[0][2], 1);
    digitalWrite(var[1][i], 0); }
  for (int h = 2; h >= 0; h--) {
    for (int i = 2; i >= 0; delay(n), shut(), i--) {
      digitalWrite(var[0][i], 1);
      digitalWrite(var[1][h], 0); }
  }
}

void letter_u()
{
  const int n = 100;
  
  shut();
  for (int i = 2; i >= 0; delay(n), shut(), i--) {
    digitalWrite(var[0][0], 1);
    digitalWrite(var[1][i], 0); }
  digitalWrite(var[0][1], 1);
  digitalWrite(var[1][0], 0);
  delay(n);
  shut();
  for (int i = 0; i < 3; delay(n), shut(), i++) {
    digitalWrite(var[0][2], 1);
    digitalWrite(var[1][i], 0); }
  for (int h = 2; h >= 0; h--) {
    for (int i = 0; i < 3; delay(n), shut(), i++) {
      digitalWrite(var[0][i], 1);
      digitalWrite(var[1][h], 0); }
  }
}
void letter_x()
{
  const int n = 100;
  
  shut();
  delay(n);
  for (int i = 0; i < 3; delay(n), shut(), i++) {
    digitalWrite(var[0][i], 1);
    digitalWrite(var[1][i], 0); }
  delay(n);
  for (int i = 2, j = 0; j < 3; delay(n), shut(), j++, i--) {
    digitalWrite(var[0][i], 1);
    digitalWrite(var[1][j], 0); }
  delay(n);
  digitalWrite(var[0][2], 1);
  digitalWrite(var[1][1], 0);
  delay(n);
  shut();
  for (int i = 2; i >= 0; delay(n), shut(), i--) {
    digitalWrite(var[0][i], 1);
    digitalWrite(var[1][0], 0); }
  delay(n);
  digitalWrite(var[0][0], 1);
  digitalWrite(var[1][1], 0);
  delay(n);
  shut();
  for (int i = 0; i < 3; delay(n), shut(), i++) {
    digitalWrite(var[0][i], 1);
    digitalWrite(var[1][2], 0); }
  delay(n);
  digitalWrite(var[0][2], 1);
  digitalWrite(var[1][1], 0);
  delay(n);
  shut();
}

void letter_a()
{
  const int n = 100;
  
  shut();
  for (int i = 0; i < 2; delay(n), shut(), i++) {
    digitalWrite(var[0][0], 1);
    digitalWrite(var[1][i], 0); }
  delay(n);
  for (int i = 2; i > 0; delay(n), shut(), i--) {
    digitalWrite(var[0][1], 1);
    digitalWrite(var[1][i], 0); }
  delay(n);
  for (int i = 0; i < 2; delay(n), shut(), i++) {
    digitalWrite(var[0][2], 1);
    digitalWrite(var[1][i], 0); }
  delay(n);
  for (int i = 2; i > 0; delay(n), shut(), i--) {
    digitalWrite(var[0][1], 1);
    digitalWrite(var[1][i], 0); }
  delay(500);
  for (int i = 2; i > 0; delay(n), shut(), i--) {
    digitalWrite(var[0][0], 1);
    digitalWrite(var[1][i], 0); }
  delay(n);
  for (int i = 0; i < 2; delay(n), shut(), i++) {
    digitalWrite(var[0][1], 1);
    digitalWrite(var[1][i], 0); }
  delay(n);
  for (int i = 2; i > 0; delay(n), shut(), i--) {
    digitalWrite(var[0][2], 1);
    digitalWrite(var[1][i], 0); }
  delay(n);
  for (int i = 0; i < 2; delay(n), shut(), i++) {
    digitalWrite(var[0][1], 1);
    digitalWrite(var[1][i], 0); }
  delay(n);
}
void square_double()
{
  const int n = 100;

  shut();
  for (int i = 0; i < 2; i++) {
    digitalWrite(var[0][i], 1);
    digitalWrite(var[1][0], 0); }
  delay(n);
  for (int i = 0; i < 2; i++) {
    digitalWrite(var[0][0], 1);
    digitalWrite(var[1][i], 0);
    digitalWrite(var[0][1], 1);
    digitalWrite(var[1][i], 0); }
  delay(n);
  digitalWrite(var[1][0], 1);
  delay(n);
  for (int i = 1; i < 3; i++) {
    digitalWrite(var[0][0], 1);
    digitalWrite(var[1][i], 0);
    digitalWrite(var[0][1], 1);
    digitalWrite(var[1][i], 0); }
  delay(n);
  digitalWrite(var[1][1], 1);
  delay(n);
  digitalWrite(var[0][0], 0);
  digitalWrite(var[0][2], 1);
  delay(n);
  for (int i = 1; i < 3; i++) {
    digitalWrite(var[0][1], 1);
    digitalWrite(var[1][i], 0);
    digitalWrite(var[0][2], 1);
    digitalWrite(var[1][i], 0); }
  delay(n);
  shut();
  for (int i = 0; i < 2; i++) {
    digitalWrite(var[0][1], 1);
    digitalWrite(var[1][i], 0);
    digitalWrite(var[0][2], 1);
    digitalWrite(var[1][i], 0); }
  delay(n);
  digitalWrite(var[1][1], 1);
  delay(n);
  digitalWrite(var[0][2], 0);
  digitalWrite(var[0][0], 1);
  delay(n);
  for (int i = 0; i < 2; i++) {
    digitalWrite(var[0][0], 1);
    digitalWrite(var[1][i], 0);
    digitalWrite(var[0][1], 1);
    digitalWrite(var[1][i], 0); }
  delay(n);
  shut();
  for (int i = 1; i < 3; i++) {
    digitalWrite(var[0][0], 1);
    digitalWrite(var[1][i], 0);
    digitalWrite(var[0][1], 1);
    digitalWrite(var[1][i], 0); }
  delay(n);
  shut();
}
void loop()
{
  const int v = 500;

  all_led();
  delay(v);
  snake();
  delay(v);
  snake_double();
  delay(v);
  square_double();
  delay(v);
  diagonal();
  delay(v);
  letter_n();
  delay(v);
  letter_m();
  delay(v);
  letter_v();
  delay(v);
  letter_u();
  delay(v);
  letter_x();
  delay(v);
  letter_a();
  delay(1000);
}