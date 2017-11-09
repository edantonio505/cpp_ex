#include <iostream>

using namespace std;

class Enemy
{
public:
	int m_Damage;
	Enemy();//constructor function declaration
	void Attack() const; //declare attack
};

// initialize constructor function
Enemy::Enemy():
	m_Damage(10)
{}

//initialize attack
void Enemy::Attack() const
{
	cout << "Attack inflicts " << m_Damage << " damage points!\n";
}









class Boss : public Enemy //extending enemy
{
public:
	int m_DamageMultiplier;

	Boss(); //constructor funtion declaration for boss
	void SpecialAttack() const;
};


Boss::Boss():
	m_DamageMultiplier(3)
{}


void Boss::SpecialAttack() const 
{
	cout << "Special Attack inflicts " << (m_DamageMultiplier * m_Damage);
	cout << " damage points!\n";
}




int main()
{
	cout << "Creating an enemy.\n";
	Enemy enemy1;
	enemy1.Attack();

	cout << "\nCreating a boss.\n";
	Boss boss1;
	boss1.Attack();
	boss1.SpecialAttack();


	return 0;
}
