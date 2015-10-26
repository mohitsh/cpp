#include <iostream>
#include <string>

enum ItemType
{
	Item_Sword,
	Item_Torch,
	Item_Potion
};

std::string getItemType(ItemType itemtype)
{
	if (itemtype == Item_Sword)
		return std::string("sword");
	else if (itemtype == Item_Torch)
		return std::string("torch");
	else if (itemtype == Item_Potion)
		return std::string("potion");
}

int main()
{
	ItemType dude(Item_Torch);
	std::cout << "this: " << getItemType(dude) << std::endl;
	return 0;
}
