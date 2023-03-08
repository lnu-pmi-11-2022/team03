# team03

- Клакович Марта
- Конашук Соня
- Курносенко Юлія
- Мавдрик Стефанія

```cpp
class Plant {
 private:
  string name;
  long long growth_time;
  int quantity;
  double price;
  string colour;
 public:
  string GetName() {}
  long long GetGrowthTime() {}
  long long GetSecondsGrown() {}
  int GetQuantity() {}
  double GetPrice() {}
  void SetQuantity(double new_quantity) {}
};
```

```cpp
class Money {
 private:
  double balance = 0;
 public:
  void Sell(Plant plant) {}
  double ShowBalance() {}
};
```

```cpp
class Farm {
 private:
  Plant *plants[10][10];
  Money money;
 public:
  void AddPlant() {}
  void CollectPlant() {}
  void SaveToFile() {}
  void ShowFarm() {}
};
```

```cpp
int main() {
  Plant type1(...);
}
```

Тобто створюємо 5 видів, з готовими даними. Користувач може садити лиш їх.

Буде 5 продуктів:

- буряк
- морква
- баклажан
- кукурудза
- капуста

## Як виглядатиме наша ферма:

| <span style="color:red">**буряк**</span> |                                              | <span style="color:yellow">**кукурудза**</span> |
|------------------------------------------|----------------------------------------------|-------------------------------------------------|
|                                          | <span style="color:green">**капуста**</span> |                                                 |
|                                          | <span style="color:brown">**морква**</span>  |                                                 |
|                                          |                                              | <span style="color:purple">**баклажан**</span>  |