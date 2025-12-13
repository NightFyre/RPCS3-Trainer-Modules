#pragma once
#include "../CDK.hpp"

using namespace Playstation3;

namespace DemonsSouls
{
	namespace Offsets
	{
		static constexpr auto g_WorldCharMan = 0x1B4EF9C;
	}

	namespace Data
	{
		static const std::unordered_map<u32_t, std::string> ItemNames = 
		{
			{ 1, "All-purpose catalyst (For Debugging/For both Magic & Miracles)" },
			{ 2, "All-purpose catalyst (For Menu Dummy)" },
			{ 7, "False King Demon's Soul" },
			{ 8, "Iron Ring of Keys" },
			{ 9, "Copper Key" },
			{ 10, "Prison of Hope, 1F Key" },
			{ 11, "Prison of Hope, 2F Key" },
			{ 12, "Prison of Hope, 3F Key" },
			{ 13, "Prison of Hope, 4F Key" },
			{ 14, "Prison of Hope, Warden's Key" },
			{ 15, "Lead Demon's Soul" },
			{ 16, "Iron Demon's Soul" },
			{ 17, "Silver Demon's Soul" },
			{ 18, "Swollen Demon's Soul" },
			{ 19, "Hero Demon's Soul" },
			{ 20, "Storm Demon's Soul" },
			{ 21, "Doll Demon's Soul" },
			{ 22, "Mixed Demon's Soul" },
			{ 23, "Yellow Demon's Soul" },
			{ 24, "Wriggling Demon's Soul" },
			{ 25, "Eroded Demon's Soul" },
			{ 26, "Pureblood Demon's Soul" },
			{ 27, "Hard Demon's Soul" },
			{ 28, "Red Hot Demon's Soul" },
			{ 29, "Dragon Demon's Soul" },
			{ 30, "Maiden in Black Demon's Soul" },
			{ 31, "Grey Demon's Soul" },
			{ 32, "Small Flame-Scale Demon's Soul" },
			{ 33, "Large Flame-Scale Demon's Soul" },
			{ 34, "Colorless Demon's Soul" },
			{ 35, "Mausoleum Key" },
			{ 36, "Bloody Iron Key" },
			{ 37, "Crest of Vinland" },
			{ 38, "Jade Hair Ornament" },
			{ 39, "Prison of Hope, 1F Cell Key" },
			{ 40, "Prison of Hope, 2F W. Cell Key" },
			{ 41, "Prison of Hope, 3F Cell Key" },
			{ 42, "Prison of Hope, 4F Cell Key" },
			{ 43, "Prison of Hope, 2F E. Cell Key" },
			{ 44, "Prison of Hope, Special Key" },
			{ 45, "Beast Demon's Soul" },
			{ 99, "Augite of Souls" },
			{ 100, "Ring of Great Strength" },
			{ 101, "Ring of Herculean Strength" },
			{ 102, "Clever Rat's Ring" },
			{ 103, "Dull Rat's Ring" },
			{ 104, "Eternal Warrior's Ring" },
			{ 105, "Fragrant Ring" },
			{ 106, "Regenerator's Ring" },
			{ 107, "Ring of Flame Resistance" },
			{ 108, "Ring of Poison Resistance" },
			{ 109, "Ring of Magical Sharpness" },
			{ 110, "Ring of Magical Dullness" },
			{ 111, "Ring of Magical Nature" },
			{ 112, "Ring of Sincere Prayer" },
			{ 113, "Cling Ring" },
			{ 114, "Friend's Ring" },
			{ 115, "Foe's Ring" },
			{ 116, "Thief's Ring" },
			{ 117, "Graverobber's Ring" },
			{ 118, "Cat's Ring" },
			{ 119, "Ring of the Accursed" },
			{ 120, "Ring of Avarice" },
			{ 121, "Ronin's Ring" },
			{ 123, "Master's Ring" },
			{ 124, "Ring of Devout Prayer" },
			{ 125, "Ring of Gash Resistance" },
			{ 126, "Ring of Disease Resistance" },
			{ 200, "?AccessoryName?" },
			{ 201, "?AccessoryName?" },
			{ 1000, "Crescent Moon Grass" },
			{ 1001, "Half Moon Grass" },
			{ 1002, "Late Moon Grass" },
			{ 1003, "Full Moon Grass" },
			{ 1004, "New Moon Grass" },
			{ 1005, "Fresh Spice" },
			{ 1006, "Old Spice" },
			{ 1007, "Royal Lotus" },
			{ 1008, "Widow's Lotus" },
			{ 1009, "Dark Moon Grass" },
			{ 1010, "Ed's Grindstone" },
			{ 1011, "Throwing Knife" },
			{ 1012, "Kunai" },
			{ 1013, "Firebomb" },
			{ 1014, "Soul Remains" },
			{ 1015, "Turpentine" },
			{ 1016, "Black Turpentine" },
			{ 1017, "Sticky White Stuff" },
			{ 1018, "Brass Telescope" },
			{ 1020, "Shard of Archstone" },
			{ 1021, "Stone of Ephemeral Eyes" },
			{ 1022, "Augite of Guidance" },
			{ 1023, "Soldier's Lotus" },
			{ 1024, "Secret Throwing Dagger" },
			{ 1025, "Unknown Soldier's Soul" },
			{ 1026, "Unknown Hero's Soul" },
			{ 1027, "Renowned Soldier's Soul" },
			{ 1028, "Renowned Hero's Soul" },
			{ 1029, "Storied Soldier's Soul" },
			{ 1030, "Storied Hero's Soul" },
			{ 1031, "Legendary Soldier's Soul" },
			{ 1032, "Legendary Hero's Soul" },
			{ 1033, "Nexial Binding" },
			{ 2000, "Shard of Hardstone" },
			{ 2001, "Large Hardstone Shard" },
			{ 2002, "Chunk of Hardstone" },
			{ 2003, "Pure Hardstone" },
			{ 2004, "Shard of Sharpstone" },
			{ 2005, "Large Sharpstone Shard" },
			{ 2006, "Chunk of Sharpstone" },
			{ 2007, "Pure Sharpstone" },
			{ 2008, "?GoodsName?" },
			{ 2009, "?GoodsName?" },
			{ 2010, "?GoodsName?" },
			{ 2011, "?GoodsName?" },
			{ 2012, "Shard of Clearstone" },
			{ 2013, "Chunk of Clearstone" },
			{ 2014, "Pure Clearstone" },
			{ 2015, "Shard of Greystone" },
			{ 2016, "Chunk of Greystone" },
			{ 2017, "Pure Greystone" },
			{ 2018, "?GoodsName?" },
			{ 2019, "?GoodsName?" },
			{ 2020, "?GoodsName?" },
			{ 2021, "Shard of Bladestone" },
			{ 2022, "Chunk of Bladestone" },
			{ 2023, "Pure Bladestone" },
			{ 2024, "Shard of Spiderstone" },
			{ 2025, "Chunk of Spiderstone" },
			{ 2026, "Pure Spiderstone" },
			{ 2027, "Shard of Mercurystone" },
			{ 2028, "Chunk of Mercurystone" },
			{ 2029, "Pure Mercurystone" },
			{ 2030, "Shard of Dragonstone" },
			{ 2031, "Chunk of Dragonstone" },
			{ 2032, "Pure Dragonstone" },
			{ 2033, "Shard of Suckerstone" },
			{ 2034, "Chunk of Suckerstone" },
			{ 2035, "Pure Suckerstone" },
			{ 2036, "Shard of Marrowstone" },
			{ 2037, "Chunk of Marrowstone" },
			{ 2038, "Pure Marrowstone" },
			{ 2039, "Shard of Moonlightstone" },
			{ 2040, "Chunk of Moonlightstone" },
			{ 2041, "Pure Moonlightstone" },
			{ 2042, "Shard of Darkmoonstone" },
			{ 2043, "Chunk of Darkmoonstone" },
			{ 2044, "Pure Darkmoonstone" },
			{ 2045, "Shard of Faintstone" },
			{ 2046, "Chunk of Faintstone" },
			{ 2047, "Pure Faintstone" },
			{ 2048, "Shard of Cloudstone" },
			{ 2049, "Chunk of Cloudstone" },
			{ 2050, "Pure Cloudstone" },
			{ 2051, "?GoodsName?" },
			{ 2052, "?GoodsName?" },
			{ 2053, "?GoodsName?" },
			{ 2054, "Shard of Meltstone" },
			{ 2055, "Large Clearstone Shard" },
			{ 2056, "Large Greystone Shard" },
			{ 2057, "Large Bladestone Shard" },
			{ 9995, "Black Eye Stone" },
			{ 9997, "Blue Eye Stone" },
			{ 9999, "White Eye Stone" },
			{ 10000, "Dagger" },
			{ 10100, "Parrying Dagger" },
			{ 10200, "Mail Breaker" },
			{ 10400, "Baby's Nail" },
			{ 10500, "Geri's Stiletto" },
			{ 10600, "Kris Blade" },
			{ 10700, "Secret Dagger" },
			{ 20000, "Short Sword" },
			{ 20100, "Broadsword" },
			{ 20200, "Long Sword" },
			{ 20300, "Flamberge" },
			{ 20400, "Bastard Sword" },
			{ 20500, "Claymore" },
			{ 20600, "Great Sword" },
			{ 20700, "Dragon Bone Smasher" },
			{ 20800, "Rune Sword" },
			{ 20900, "Soulbrandt" },
			{ 21000, "Demonbrandt" },
			{ 21100, "Storm Ruler" },
			{ 21300, "Knight Sword" },
			{ 21400, "Broken Sword" },
			{ 21500, "Northern Regalia" },
			{ 21600, "Large Sword of Moonlight" },
			{ 21700, "Blueblood Sword" },
			{ 21800, "Penetrating Sword" },
			{ 21900, "Morion Blade" },
			{ 30000, "Rapier" },
			{ 30100, "Estoc" },
			{ 30200, "Epee Rapier" },
			{ 30300, "Spiral Rapier" },
			{ 30400, "Needle of Eternal Agony" },
			{ 40000, "Scimitar" },
			{ 40100, "Kilij" },
			{ 40200, "Shotel" },
			{ 40300, "Falchion" },
			{ 40400, "Uchigatana" },
			{ 40500, "Hiltless" },
			{ 40600, "Blind" },
			{ 40700, "Magic Sword \"Makoto\"" },
			{ 40900, "Large Sword of Searching" },
			{ 50000, "Battle Axe" },
			{ 50200, "Great Axe" },
			{ 50300, "Crescent Axe" },
			{ 50400, "Guillotine Axe" },
			{ 50500, "Dozer Axe" },
			{ 60000, "Club" },
			{ 60100, "Mace" },
			{ 60200, "War Pick" },
			{ 60300, "Morning Star" },
			{ 60400, "Great Club" },
			{ 60500, "Bramd" },
			{ 60600, "Pickaxe" },
			{ 60700, "Meat Cleaver" },
			{ 70000, "Short Spear" },
			{ 70100, "Winged Spear" },
			{ 70200, "Istarelle" },
			{ 70300, "Scraping Spear" },
			{ 80000, "War Scythe" },
			{ 80100, "Mirdan Hammer" },
			{ 80200, "Halberd" },
			{ 80300, "Phosphorescent Pole" },
			{ 90000, "Wooden Catalyst" },
			{ 90100, "Silver Catalyst" },
			{ 90200, "Insanity Catalyst" },
			{ 90400, "Talisman of God" },
			{ 90500, "Talisman of Beasts" },
			{ 100000, "Iron Knuckles" },
			{ 100100, "Claws" },
			{ 100200, "Hands of God" },
			{ 100300, "No Equipment" },
			{ 130000, "Short Bow" },
			{ 130100, "Compound Short Bow" },
			{ 130200, "Long Bow" },
			{ 130300, "Compound Long Bow" },
			{ 130400, "White Bow" },
			{ 130500, "Lava Bow" },
			{ 140000, "Light Crossbow" },
			{ 140100, "Heavy Crossbow" },
			{ 140200, "Gargoyle Crossbow" },
			{ 150000, "Buckler" },
			{ 150100, "Wooden Shield" },
			{ 150200, "Kite Shield" },
			{ 150300, "Heater Shield" },
			{ 150400, "Adjudicator's Shield" },
			{ 150500, "Spiked Shield" },
			{ 150600, "Tower Shield" },
			{ 150700, "Dark Silver Shield" },
			{ 150800, "Soldier's Shield" },
			{ 150900, "Knight's Shield" },
			{ 151000, "Slave's Shield" },
			{ 151100, "Rune Shield" },
			{ 151200, "Large Brushwood Shield" },
			{ 151300, "Steel Shield" },
			{ 151400, "Purple Flame Shield" },
			{ 151500, "Leather Shield" },
			{ 160000, "Arrow" },
			{ 160100, "Heavy Arrow" },
			{ 160200, "Light Arrow" },
			{ 160400, "Fire Arrow" },
			{ 160500, "Rotten Arrow" },
			{ 160600, "Holy Arrow" },
			{ 160700, "White Arrow" },
			{ 160800, "Wooden Arrow" },
			{ 170000, "Bolt" },
			{ 170100, "Heavy Bolt" },
			{ 170200, "Black Bolt" },
			{ 170300, "Wooden Bolt" },
			{ 180000, "Monk's Head Wrappings" },
			{ 190000, "Roaming Wizard" },
			{ 190100, "Roaming Hunter" },
			{ 190200, "Roaming Cleric" },
			{ 190300, "Roaming Warrior" },
			{ 200000, "Shaman's Clothes" },
			{ 200100, "Wizard's Clothes" },
			{ 200200, "Black Leather" },
			{ 200300, "Leather Armor" },
			{ 200400, "Chain Mail" },
			{ 200500, "Mirdan Scale Mail" },
			{ 200600, "Coat of Plate" },
			{ 200700, "Fluted Armor" },
			{ 200800, "Brushwood Armor" },
			{ 200900, "Dark Silver Armor" },
			{ 201000, "Gloom Armor" },
			{ 201100, "Ancient King's Breastplate" },
			{ 201200, "Saint's Robe" },
			{ 201400, "Venerable Sage's Robe" },
			{ 201700, "No Equipment" },
			{ 201800, "Rogue's Clothes" },
			{ 201900, "Dull Gold Armor" },
			{ 202000, "Binded Cross" },
			{ 202100, "Old Ragged Robes" },
			{ 290000, "Roaming Wizard" },
			{ 290100, "Roaming Hunter" },
			{ 290200, "Roaming Cleric" },
			{ 290300, "Roaming Warrior" },
			{ 300000, "Shaman's Armbands" },
			{ 300100, "Wizard's Gloves" },
			{ 300200, "Black Gloves" },
			{ 300300, "Leather Gloves" },
			{ 300400, "Chain Gloves" },
			{ 300500, "Mirdan Gauntlets" },
			{ 300600, "Plate Gauntlets" },
			{ 300700, "Fluted Gauntlets" },
			{ 300800, "Brushwood Gauntlets" },
			{ 300900, "Dark Silver Gauntlets" },
			{ 301000, "Gloom Gauntlets" },
			{ 301100, "Ancient King's Gauntlets" },
			{ 301200, "Saint's Gloves" },
			{ 301400, "Venerable Sage's Gloves" },
			{ 301500, "No Equipment" },
			{ 301700, "Silver Bracelets" },
			{ 301800, "Rogue's Gloves" },
			{ 301900, "Dull Gold Gauntlets" },
			{ 302000, "Binded Gloves" },
			{ 302100, "Old Ragged Gloves" },
			{ 390000, "Roaming Wizard" },
			{ 390100, "Roaming Hunter" },
			{ 390200, "Roaming Cleric" },
			{ 390300, "Roaming Warrior" },
			{ 400000, "Shaman's Tabi" },
			{ 400100, "Wizard's Shoes" },
			{ 400200, "Black Boots" },
			{ 400300, "Leather Boots" },
			{ 400400, "Hard Leather Boots" },
			{ 400500, "Mirdan Leggings" },
			{ 400600, "Plate Leggings" },
			{ 400700, "Fluted Leggings" },
			{ 400800, "Brushwood Leggings" },
			{ 400900, "Dark Silver Leggings" },
			{ 401000, "Gloom Leggings" },
			{ 401100, "Ancient King's Leggings" },
			{ 401200, "Saint's Boots" },
			{ 401400, "Venerable Sage's Boots" },
			{ 401500, "No Equipment" },
			{ 401800, "Rogue's Boots" },
			{ 401900, "Dull Gold Leggings" },
			{ 402000, "Binded Boots" },
			{ 402100, "Old Ragged Boots" },
			{ 490000, "Roaming Wizard" },
			{ 490100, "Roaming Hunter" },
			{ 490200, "Roaming Cleric" },
			{ 490300, "Roaming Warrior" },
			{ 500000, "Shaved" },
			{ 500100, "Buzzcut" },
			{ 500200, "Spiked" },
			{ 500300, "Bowl" },
			{ 500400, "Swept Back" },
			{ 500500, "Parted Center" },
			{ 500600, "?ProtectorName?" },
			{ 500700, "Wavy" },
			{ 500800, "Wild" },
			{ 500900, "Ponytail" },
			{ 501000, "Shaved" },
			{ 501100, "Buzzcut" },
			{ 501200, "Short Wavy" },
			{ 501300, "Long Wavy" },
			{ 501400, "Short" },
			{ 501500, "Long" },
			{ 501600, "?ProtectorName?" },
			{ 501700, "Wild" },
			{ 501800, "Ponytail" },
			{ 501900, "Chignon" }
		};
	}

	namespace Enums
	{

	}

	namespace Structs
	{
		class FProperty
		{
		public:
			u32_t value; //0x0000
			u32_t maxValue; //0x0004
		}; //Size: 0x0008
	}

	namespace Classes
	{
		class WorldCharacterManager
		{
		public:
			char pad_0000[8]; //0x0000	
			u32_t pCharData; //0x0008 : CSCharData
			char pad_000C[120]; //0x000C
			u32_t pChar; //0x0084	: CSChar
			char pad_0088[56]; //0x0088
		}; //Size: 0x00C0

		class CSCharData
		{
		public:
			char pad_0000[20]; //0x0000
			u32_t MaxHealth; //0x0014
			char pad_0018[8]; //0x0018
			u32_t MaxMP; //0x0020
			char pad_0024[12]; //0x0024
			u32_t MaxStamina; //0x0030
			char pad_0034[4]; //0x0034
			Structs::FProperty Vitality; //0x0038
			Structs::FProperty Intelligence; //0x0040
			Structs::FProperty Endurance; //0x0048
			Structs::FProperty Srength; //0x0050
			Structs::FProperty Dexterity; //0x0058
			Structs::FProperty Magic; //0x0060
			Structs::FProperty Faith; //0x0068
			Structs::FProperty Luck; //0x0070
			u32_t Souls; //0x0078
			char pad_008C[21]; //0x007C
			wchar_t Name[16]; //0x0091
		}; //Size: 0x00B1

		class CSChar
		{
		public:
			char pad_0000[4]; //0x0000
			u32_t pInventory; //0x0004
			char pad_0008[8]; //0x0008
			CSCharData CharData; //0x0010
		}; //Size: 0x00C1

		class CSCharInventory
		{
		public:
			u32_t pChar; //0x0000
			u32_t pCharEquipment; //0x0004 : CSCharInventory*
			char pad_0008[12]; //0x0008
			u32_t szItemArray; //0x0014
			//	class ItemData ItemArray[2048]; //0x0018	: CSInventoryItemData[szItemArray]
			//	char pad_10018[356]; //0x10018
		}; //Size: 0x0018

		class CSInventoryItemData
		{
		public:
			u32_t ItemType; //0x0000
			u32_t ItemID; //0x0004
			u32_t Quantity; //0x0008
			u32_t InventorySlot; //0x000C
			char pad_0010[16]; //0x0010
		}; //Size: 0x0020
	}

	namespace tools
	{
		inline u64_t GetWorldCharacterManager(OUT u64_t& res)
		{
			res = 0;
			
			const auto vm = PS3Memory::GetBaseVM(false);
			if (!vm)
				return res;
			
			const auto p = vm + Offsets::g_WorldCharMan;
			if (!p)
				return res;

			res = PS3Memory::ReadLong(p) + vm;
			if (res == vm)
				res = 0;

			return res;
		}

		inline u64_t GetLocalCharacterData(OUT u64_t& res)
		{
			res = 0;

			const auto vm = PS3Memory::GetBaseVM(false);
			if (!vm)
				return res;

			if (!GetWorldCharacterManager(res))
				return res;

			const auto& wcm = Memory::ReadMemoryEx<Classes::WorldCharacterManager>(res);
			
			res = _byteswap_ulong(wcm.pCharData) + vm;
			if (res == vm)
				res = 0;

			return res;
		}

		inline u64_t GetLocalCharacterInventory(OUT u64_t& res)
		{
			res = 0;

			const auto vm = PS3Memory::GetBaseVM(false);
			if (!vm)
				return res;

			if (!GetWorldCharacterManager(res))
				return res;

			const auto& wcm = Memory::ReadMemoryEx<Classes::WorldCharacterManager>(res);

			res = _byteswap_ulong(wcm.pChar) + vm;
			if (res == vm)
			{
				res = 0;
				return false;
			}

			const auto& cdata = Memory::ReadMemoryEx<Classes::CSChar>(res);

			res = _byteswap_ulong(cdata.pInventory) + vm;
			if (res == vm)
				res = 0;

			return res;
		}

		inline std::string GetItemNameByID(const u32_t& id)
		{
			const auto it = Data::ItemNames.find(id);
			if (it != Data::ItemNames.end())
				return it->second;
			return "Unknown Item";
		}

		inline void DumpPlayerInventory()
		{
			const auto& vm = PS3Memory::GetBaseVM(false);
			if (!vm)
				return;

			u64_t pInventory;
			if (!GetLocalCharacterInventory(pInventory))
				return;

			const auto& inventory = Memory::ReadMemoryEx<Classes::CSCharInventory>(pInventory);
			if (!inventory.szItemArray)
				return;

			const size_t szArray = _byteswap_ulong(inventory.szItemArray);

			const auto pItemArray = pInventory + (offsetof(Classes::CSCharInventory, Classes::CSCharInventory::szItemArray) + 0x4);
			Classes::CSInventoryItemData* p_items = reinterpret_cast<Classes::CSInventoryItemData*>(pItemArray);
			for (int i = 0; i < szArray; i++)
			{
				Classes::CSInventoryItemData item = p_items[i];
				const auto& itemType = _byteswap_ulong(item.ItemType);
				if (itemType == 0xFFFFFFFF)
					break;

				const auto& itemID = _byteswap_ulong(item.ItemID);
				const auto& itemCount = _byteswap_ulong(item.Quantity);
				const auto& itemSlot = _byteswap_ulong(item.InventorySlot);
				const auto& itemName = GetItemNameByID(itemID);
				printf("[%d][0x%llX][%s]\n- ID: 0x%08X\n- COUNT: %d\n- SLOT: %d\n", i, pItemArray + (i * sizeof(Classes::CSInventoryItemData)), itemName.c_str(), itemID, itemCount, itemSlot);
			}
		}
	}
}