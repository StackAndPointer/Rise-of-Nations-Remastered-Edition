#pragma once
#include <windows.h>
#include <memory>

/*
命名规则：
1.我去掉了原模版类中的<>，将原来模版类中的类型名称直接加在后面作为新结构体的名称
2.有重名的类我在前面加入了A
3.可能的隐患:<windows*>我改为了windows，而游戏原来也存在<windows>
Naming Rules:
1.I removed the <>from the original template class and appended the original template parameter type name directly to form the new structure's name.
2.For classes with duplicate names, I prefixed them with an 'A'.
3.Potential risk: <windows*>was changed to 'windows', while the original game code also had a <windows>.
*/



// 游戏访问常量结构体，可能用作基类或占位符
struct  GameAccessConst
{
	// 空结构体，暂无成员
};



// 嘲讽请求枚举，用于玩家之间的交流指令
enum TauntRequest : __int32
{
	TAUNT_NONE = 0x0,        // 无嘲讽
	TAUNT_FOOD = 0x1,        // 需要食物
	TAUNT_TIMBER = 0x2,       // 需要木材
	TAUNT_WEALTH = 0x3,      // 需要财富
	TAUNT_METAL = 0x4,       // 需要金属
	TAUNT_OIL = 0x5,         // 需要石油
	TAUNT_NEED = 0x6,        // 有需求（通用）
	TAUNT_BUILD_WONDER = 0x7, // 建造奇观
	TAUNT_BUILD_GROUND = 0x8, // 建造地面单位
	TAUNT_BUILD_SEA = 0x9,   // 建造海军单位
	TAUNT_BUILD_AIR = 0xA,   // 建造空军单位
	TAUNT_BUILD_INFRA = 0xB, // 建造基础设施
	TAUNT_RUSH = 0xC,        // 快攻策略
	TAUNT_BOOM = 0xD,        // 经济发展策略
	TAUNT_ATTACK = 0xE,      // 攻击指令
	TAUNT_DEFEND = 0xF,      // 防御指令
	TAUNT_HELP = 0x10,       // 请求帮助
	NUM_TAUNTS = 0x11,       // 嘲讽类型总数
};

// 外交关系结构体，存储玩家之间的外交状态
struct  Diplomacy
{
	int agree;          // 同意状态，表示是否同意某项提议
	int any_offer;      // 是否有任何提议
	int treaty;         // 条约状态，表示当前存在的条约类型
	int offers[6];      // 提议数组，存储最近的6个提议
	int dows[6];        // 宣战数组，存储最近的6次宣战记录
	int attacks[8];     // 攻击记录数组，存储最近的8次攻击记录
};


// 将 BitMask<806> 等伪模板结构体重命名为 BitMask_806 等普通结构体
// 并用 typedef 兼容原有用法

struct __declspec(align(4)) BitMask_32
{
	int bits;
	int size;
	int flags;
	unsigned __int8 ptr[4];
};


struct __declspec(align(4)) BitMask_256
{
	int bits;
	int size;
	int flags;
	unsigned __int8 ptr[32];
};
typedef struct BitMask_256 BitMask_256;
#define BitMask_256 BitMask_256

// 兼容原 BitMask<256> 用法
#define BitMask BitMask_

// 例如：BitMask<256> 替换为 BitMask_256
// 结构体成员声明处：
// BitMask_256 semaphore;


struct __declspec(align(4)) BitMask_806
{
	int bits;
	int size;
	int flags;
	unsigned __int8 ptr[101];
};
typedef struct BitMask_806 BitMask_806;
#define BitMask_806 BitMask_806

struct __declspec(align(2)) BitMask_17
{
	int bits;
	int size;
	int flags;
	unsigned __int8 ptr[3];
};
typedef struct BitMask_17 BitMask_17;
#define BitMask_17 BitMask_17

struct __declspec(align(2)) BitMask_24
{
	int bits;
	int size;
	int flags;
	unsigned __int8 ptr[3];
};
typedef struct BitMask_24 BitMask_24;
#define BitMask_24 BitMask_24

struct __declspec(align(4)) BitMask_44
{
	int bits;
	int size;
	int flags;
	unsigned __int8 ptr[6];
};
typedef struct BitMask_44 BitMask_44;
#define BitMask_44 BitMask_44

struct  __declspec(align(2)) BitMask_22
{
	int bits;
	int size;
	int flags;
	unsigned __int8 ptr[3];
};
#define BitMask_22 BitMask_22
// 用于兼容原有成员定义
#define BitMask BitMask_

// 例如：BitMask<806> 替换为 BitMask_806
// 结构体成员声明处：
// BitMask_806 tech;
// BitMask_806 tech_at_start;
// BitMask_806 obs_flags;
// BitMask_17 conquest_wonders;
// BitMask_17 conquest_wonders_in_game;
// BitMask_24 conquest_racial_powers;
// BitMask_44 rare;
// BitMask_44 rare_owned;
// BitMask_44 rare_conquest;


// AI个性设置结构体，控制AI的行为倾向
struct Personality
{
	int rush;           // 快攻倾向，值越高越倾向于早期攻击
	int cities;         // 城市发展倾向，值越高越注重城市建设
	int upgrades;       // 升级倾向，值越高越喜欢升级科技和单位
	int arms;           // 军备倾向，值越高越注重军事建设
	int army;           // 陆军规模倾向，值越高越喜欢建造陆军
	int army_size;      // 军队规模，表示理想的军队数量
	int raid;           // 袭击倾向，值越高越喜欢进行小规模袭击
	int invade;         // 入侵倾向，值越高越喜欢大规模入侵
	int target;         // 目标选择策略，表示优先攻击的目标类型
	int strategy;       // 战略倾向，表示整体战略风格
	int raze;           // 摧毁倾向，值越高越喜欢摧毁敌方建筑
	int spells;         // 法术使用倾向，值越高越喜欢使用法术或特殊能力
	int forts;          // 堡垒建设倾向，值越高越喜欢建造防御工事
	int nukes;          // 核武器使用倾向，值越高越可能使用核武器
	int air;            // 空军发展倾向，值越高越注重空军
	int naval;          // 海军发展倾向，值越高越注重海军
	int market;         // 市场交易倾向，值越高越喜欢进行贸易
	int scouts;         // 侦察倾向，值越高越喜欢派遣侦察单位
	int civilians;      // 平民保护倾向，值越高越保护平民单位
	int early_army;     // 早期军队建设倾向，值越高越早在游戏初期建设军队
	int friendly_human; // 对人类玩家友好度，值越高越友好
	int alliance_human; // 与人类玩家结盟倾向，值越高越容易结盟
	int friendly_ai;    // 对AI玩家友好度，值越高越友好
	int alliance_ai;    // 与AI玩家结盟倾向，值越高越容易结盟
};

// 世界坐标结构体，表示游戏世界中的一个坐标
struct  WCoord
{
	int value;  // 坐标值
};

// 站点位置结构体，表示游戏中的一个地点或站点
struct  Site
{
	WCoord wx;      // 世界X坐标
	WCoord wy;      // 世界Y坐标
	int val;        // 值，可能表示地点的重要性或其他数值
	int reg;        // 区域ID，表示所在地图区域
	int dist;       // 距离，可能表示到某个参考点的距离
	int rank;       // 等级，表示地点的等级或优先级
};

// 数组基类主结构，用于动态数组的基本管理
struct  __declspec(align(4)) ArrayBaseMaster
{
	int length;         // 数组当前长度
	int size;           // 数组分配的大小
	__int16 increment;  // 数组扩容时的增量
};

// 站点数组基类，继承自ArrayBaseMaster，专门用于存储Site对象
struct  __declspec(align(4)) ArrayBaseSite : ArrayBaseMaster
{
	int unk;        // 可能为虚函数表指针，注释中表示为ArrayBase<Site>_vtbl*
	Site* list;     // 指向Site数组的指针
	unsigned __int8 flags;  // 标志位，用于存储数组状态信息
};

// 站点简单复制数组，继承自ArrayBaseSite，可能用于浅拷贝
struct  ArrayBaseSimpleCopySite : ArrayBaseSite
{
	// 无额外成员，继承基类的所有功能
};

// 站点数组，继承自ArrayBaseSimpleCopySite，添加当前索引
struct  ArraySite : ArrayBaseSimpleCopySite
{
	int cur_index;  // 当前索引，用于迭代或跟踪当前位置
};

// 站点集合，继承自ArraySite，可能表示一组站点
struct  Sites : ArraySite
{
	// 无额外成员，直接使用ArraySite的功能
};



// 整型数组基类，继承自ArrayBaseMaster，专门用于存储整数
struct  __declspec(align(4)) ArrayBaseInt : ArrayBaseMaster
{
	int unk;        // 可能为虚函数表指针，注释中表示为ArrayBase<int>_vtbl*
	int* list;      // 指向整型数组的指针
	unsigned __int8 flags;  // 标志位
};

// 整型简单复制数组，继承自ArrayBaseInt
struct  ArrayBaseSimpleCopyInt : ArrayBaseInt
{
	// 无额外成员
};

// 简单整型数组，继承自ArrayBaseSimpleCopyInt，添加当前索引
const struct  SimpleArrayInt : ArrayBaseSimpleCopyInt
{
	int cur_index;  // 当前索引
};

// 字符串内部结构，存储字符串的实际数据
struct  __declspec(align(2)) StringGuts
{
	wchar_t* str;           // 指向字符串数据的指针
	int data_length;        // 字符串数据的长度（以字符计）
	int capacity;           // 字符串的容量（以字符计）
	unsigned __int16 ref_count;  // 引用计数，用于内存管理
	unsigned __int8 flags;       // 标志位，表示字符串的状态
};

// 字符串数据联合体，可以指向动态字符串或常量字符串
// 重命名说明：原联合体名$E7A659CF24BC03FC8DBFE227C38B442E是编译器生成的随机名
// 重命名为StringData，明确表示这是字符串数据存储的联合体
union StringData
{
	StringGuts* data;               // 指向动态字符串数据的指针
	const wchar_t* const_string;    // 指向常量字符串的指针
};

// 字符串结构体，封装字符串的完整信息
const struct  String
{
	// 重命名说明：原字段名___u0是编译器生成的随机名
	// 重命名为content，明确表示这是字符串内容的核心数据
	StringData content;             // 字符串数据内容
	unsigned __int16 const_len;     // 常量字符串的长度（如果为常量字符串）
	unsigned __int16 offset;         // 偏移量，可能用于子字符串操作
	unsigned __int16 curr_len;       // 当前字符串长度
	unsigned __int8 flags;           // 标志位
	unsigned __int8 module_id;       // 模块ID，可能用于资源管理
	unsigned int hash_value;         // 字符串的哈希值
	unsigned int hash_value_insensitive;  // 不区分大小写的哈希值
};

// 领导者数据加密结构，可能用于存储加密的玩家数据
struct LeaderDataEncrypt
{
	int bucket[6];          // 桶数组，用于数据分桶存储
	int leftover[6];        // 剩余资源数组
	int resource_cap[7];     // 资源上限数组，包含7种资源的上限
	int over_cap[6];        // 超过上限的资源量数组
	int resources[6];       // 当前资源数量数组
	int support[6];         // 支持度数组
	int income[6];          // 收入数组
	int rate[6];            // 税率或增长率数组
	int bonus[6];           // 奖励数组
	int ages;               // 时代进度
	int epochs;             // 纪元进度
	int discovered;         // 已发现的科技或区域数量
	int epoch[4];           // 纪元详细数据数组
};

// 类型索引枚举，定义游戏中所有资源、单位、建筑等的类型标识
enum TypeIndex : __int32
{
	// 基础资源类型
	FOOD = 0x0,             // 食物
	TIMBER = 0x1,           // 木材
	WEALTH = 0x2,           // 财富
	KNOWLEDGE = 0x3,        // 知识
	METAL = 0x4,            // 金属
	OIL = 0x5,              // 石油
	FISH = 0x6,             // 鱼类
	RELICS = 0x7,           // 遗迹
	WINE = 0x8,             // 葡萄酒
	PAPYRUS = 0x9,          // 纸莎草
	DYE = 0xA,              // 染料
	SILK = 0xB,             // 丝绸
	SPICE = 0xC,            // 香料
	SALT = 0xD,             // 盐
	HORSES = 0xE,           // 马匹
	RUBBER = 0xF,           // 橡胶
	SULPHUR = 0x10,         // 硫磺
	AMBER = 0x11,           // 琥珀
	SILVER = 0x12,          // 白银
	TOBACCO = 0x13,         // 烟草
	MARBLE = 0x14,          // 大理石
	FURS = 0x15,            // 毛皮
	COTTON = 0x16,          // 棉花
	BISON = 0x17,           // 野牛
	COPPER = 0x18,          // 铜
	PEACOCKS = 0x19,        // 孔雀
	CITRUS = 0x1A,          // 柑橘
	SUGAR = 0x1B,           // 糖
	DIAMONDS = 0x1C,        // 钻石
	GEMS = 0x1D,            // 宝石
	ALUMINUM = 0x1E,        // 铝
	WHALES = 0x1F,          // 鲸鱼
	OBSIDIAN = 0x20,        // 黑曜石
	WOOL = 0x21,            // 羊毛
	COAL = 0x22,            // 煤炭
	URANIUM = 0x23,         // 铀
	TITANIUM = 0x24,        // 钛
	CATTLE = 0x25,          // 牛
	DOGS = 0x26,            // 狗
	OLIVEOIL = 0x27,        // 橄榄油
	GYPSUM = 0x28,          // 石膏
	BEAVERS = 0x29,         // 海狸
	GOLD = 0x2A,            // 黄金
	RUM = 0x2B,             // 朗姆酒
	COFFEE = 0x2C,          // 咖啡
	BANANAS = 0x2D,         // 香蕉
	SALMON = 0x2E,          // 鲑鱼
	IRONORE = 0x2F,         // 铁矿石
	MAIZE = 0x30,           // 玉米
	INCENSE = 0x31,         // 香料
	PEASANTS = 0x32,        // 农民
	PEASANTSKOREAN = 0x33,   // 韩国农民
	SCHOLARS = 0x34,        // 学者
	SCHOLARSKOREAN = 0x35,  // 韩国学者
	GENERAL = 0x36,         // 将军
	GENERALCTWE = 0x37,     // CTWE将军
	GENERALCTWW = 0x38,     // CTWW将军
	GENERALGERMAN = 0x39,   // 德国将军
	SPY = 0x3A,            // 间谍
	CARA = 0x3B,            // 商队
	CARADUTCH = 0x3C,       // 荷兰商队
	MERCHANT = 0x3D,        // 商人
	MERCHANTDUTCH = 0x3E,   // 荷兰商人
	SUPPLYWAGON = 0x3F,     // 补给车
	SUPPLYWAGONAMER = 0x40, // 美国补给车
	SUPPLYWAGONDUTCH = 0x41, // 荷兰补给车
	MILITIA = 0x42,         // 民兵
	MINUTEMAN = 0x43,       // 分钟人（美国独立战争民兵）
	PARTISAN = 0x44,        // 游击队员
	SCOUT = 0x45,           // 侦察兵
	SCOUTKOREAN = 0x46,     // 韩国侦察兵
	EXPLORER = 0x47,        // 探险家
	EXPLORERKOREAN = 0x48,  // 韩国探险家
	COMMANDO = 0x49,        // 突击队员
	COMMANDOSPANISH = 0x4A, // 西班牙突击队员
	SPECIALFORCES = 0x4B,   // 特种部队
	SPECIALFORCESSPANISH = 0x4C, // 西班牙特种部队
	ELITESPECIALFORCES = 0x4D, // 精英特种部队
	ELITESPECIALSPANISH = 0x4E, // 西班牙精英特种部队
	IRQSCOUT = 0x4F,        // 伊拉克侦察兵
	IRQEXPLORER = 0x50,     // 伊拉克探险家
	IRQCOMMANDO = 0x51,     // 伊拉克突击队员
	SLINGERS = 0x52,        // 投石兵
	JAVELINEERS = 0x53,     // 标枪兵
	PELTASTS = 0x54,        // 轻盾兵
	ATLATL = 0x55,          // 投矛器兵
	ELITEATLATL = 0x56,     // 精英投矛器兵
	XOPATLATL = 0x57,       // 高级投矛器兵
	BALAMOBSLINGERS = 0x58, // 巴拉莫投石兵
	EBALAMOBSLINGERS = 0x59, // 精英巴拉莫投石兵
	EAGLEBALAMOBSLINGERS = 0x5A, // 鹰徽巴拉莫投石兵
	INTICLUBMEN = 0x5B,     // 印加棍棒兵
	INTIMACEMEN = 0x5C,     // 印加钉锤兵
	UMPAKATI = 0x5D,        // 乌姆帕卡提战士
	YANGOMBIUMPAKATI = 0x5E, // 扬戈姆比乌姆帕卡提战士
	IMPI = 0x5F,            // 祖鲁矛兵
	FIRELANCES = 0x60,      // 火枪兵
	EFIRELANCES = 0x61,     // 精英火枪兵
	ARQUEBUSIERS = 0x62,    // 火绳枪兵
	MUSKETEER = 0x63,       // 滑膛枪兵
	RIFLEMAN = 0x64,        // 步枪兵
	RIFLEMENGERMAN = 0x65,  // 德国步枪兵
	INFANTRY = 0x66,        // 步兵
	INFANTRYGER = 0x67,     // 德国步兵
	MECHINFANTRY = 0x68,    // 机械化步兵
	MECHINFANTRYCTWE = 0x69, // CTWE机械化步兵
	MECHINFANTRYCTWW = 0x6A, // CTWW机械化步兵
	REDGUARDSINFANTRY = 0x6B, // 红色卫队步兵
	SHOCKINFANTRY = 0x6C,   // 突击步兵
	INFANTRYGERMAN = 0x6D,  // 德国步兵（重复？）
	JAGMUSKETEERS = 0x6E,   //  Jag火枪兵
	JAGRIFLEMEN = 0x6F,     //  Jag步枪兵
	JANISSARY = 0x70,       // 禁卫军
	ELITEJANISSARY = 0x71,  // 精英禁卫军
	HIGHLANDERS = 0x72,     // 高地兵
	EHIGHLANDERS = 0x73,    // 精英高地兵
	MANCHUMUSKETEERS = 0x74, // 满洲火枪兵
	MANCHURIFLEMEN = 0x75,  // 满洲步枪兵
	MANCHUINFANTRY = 0x76,  // 满洲步兵
	MARINES = 0x77,         // 海军陆战队
	MARINERIFLEMEN = 0x78,  // 海军陆战队步枪兵
	MARINEINFANTRY = 0x79,  // 海军陆战步兵
	ASSAULTMARINES = 0x7A,  // 突击海军陆战队
	MACHINEGUN = 0x7B,      // 机枪手
	MACHINEGUNGERMAN = 0x7C, // 德国机枪手
	HVYMACHINEGUN = 0x7D,   // 重机枪手
	HVYMACHINEGUNGERMAN = 0x7E, // 德国重机枪手
	ADVANCEDMACHINEGUN = 0x7F, // 先进机枪手
	ADVANCEDMACHINEGUNCTWE = 0x80, // CTWE先进机枪手
	ADVANCEDMACHINEGUNCTWW = 0x81, // CTWW先进机枪手
	HVYMACHINEGUNMG42 = 0x82, // MG42重机枪手
	FLAMETHROWER = 0x83,    // 喷火兵
	HOPLITES = 0x84,        // 重装步兵
	PHALANX = 0x85,         // 方阵兵
	PIKEMEN = 0x86,         // 长枪兵
	ELITEPIKE = 0x87,       // 精英长枪兵
	FUSILIER = 0x88,        // 燧发枪兵
	ATRIFLE = 0x89,         // 反坦克步枪兵
	ANTITANKRIFLEGERMAN = 0x8A, // 德国反坦克步枪兵
	BAZOOKA = 0x8B,         // 火箭筒兵
	BAZOOKAGERMAN = 0x8C,   // 德国火箭筒兵
	TOW = 0x8D,             // 陶式导弹兵
	TOWCTWE = 0x8E,         // CTWE陶式导弹兵
	TOWCTWW = 0x8F,         // CTWW陶式导弹兵
	RECOILGUN = 0x90,       // 无后坐力炮兵
	DRAGON = 0x91,          // 龙式导弹兵
	LEGIONS = 0x92,         // 军团兵
	ELEGIONS = 0x93,        // 精英军团兵
	PIKELEGIONS = 0x94,     // 长枪军团兵
	HALBERDIERS = 0x95,     // 戟兵
	EHALBERDIERS = 0x96,    // 精英戟兵
	TERCIOS = 0x97,         // 西班牙方阵兵
	ETERCIOS = 0x98,        // 精英西班牙方阵兵
	SOLDURI = 0x99,         // 索尔杜里战士
	BARBARIANS = 0x9A,      // 野蛮人
	ELITEBARBARIANS = 0x9B, // 精英野蛮人
	VANDALS = 0x9C,         // 汪达尔人
	ASHIGARUSPEARMEN = 0x9D, // 足轻枪兵
	BUSHI = 0x9E,           // 武士
	EBUSHI = 0x9F,          // 精英武士
	SAMURAI = 0xA0,         // 侍（高级武士）
	ELITESAMURAI = 0xA1,    // 精英侍
	IMMORTALS = 0xA2,       // 长生军
	ANUSIYA = 0xA3,         // 阿努西耶战士
	ATHANATOI = 0xA4,       // 阿塔纳托伊战士
	ARQIMMORTAL = 0xA5,     // 阿拉伯长生军
	IRQSPEAR = 0xA6,        // 伊拉克矛兵
	IRQMOSPEAR = 0xA7,      // 伊拉克摩苏尔矛兵
	IRQHMOSPEAR = 0xA8,     // 伊拉克重摩苏尔矛兵
	IRQEMOSPEAR = 0xA9,     // 伊拉克精英摩苏尔矛兵
	BOWMEN = 0xAA,          // 弓兵
	ARCHERS = 0xAB,         // 弓箭手
	CROSSBOWMEN = 0xAC,     // 弩兵
	HEAVYARCHERS = 0xAD,    // 重装弓箭手
	KUSHITEARCHERS = 0xAE,  // 库什弓箭手
	EKUSHITEARCHERS = 0xAF, // 精英库什弓箭手
	APEDEMAKARCHERS = 0xB0, // 阿佩德马克弓箭手
	LONGBOWMEN = 0xB1,      // 长弓兵
	ELONGBOWMEN = 0xB2,     // 精英长弓兵
	KINGSYEOMANRY = 0xB3,   // 国王义勇骑兵
	HWARANG = 0xB4,        // 花郎
	EHWARANG = 0xB5,       // 精英花郎
	KORYOHWARANG = 0xB6,   // 高丽花郎
	CHOSONHWARANG = 0xB7,  // 朝鲜花郎
	IMMORTALARCHERS = 0xB8, // 长生军弓箭手
	ANUSIYAARCHERS = 0xB9,  // 阿努西耶弓箭手
	ATHANATOIARCHERS = 0xBA, // 阿塔纳托伊弓箭手
	HORSEARCHERS = 0xBB,    // 骑射手
	CAVARCHERS = 0xBC,      // 骑兵弓箭手
	DRAGOON = 0xBD,         // 龙骑兵
	CARBINEER = 0xBE,       // 卡宾枪骑兵
	CAMELRANGE2 = 0xBF,     // 骆驼射手2级
	CAMELRANGE3 = 0xC0,     // 骆驼射手3级
	CAMELRAIDER = 0xC1,     // 骆驼袭击者
	ECAMELRAIDER = 0xC2,   // 精英骆驼袭击者
	CHARIOT = 0xC3,        // 战车
	ECHARIOT = 0xC4,       // 精英战车
	MAMELUKE = 0xC5,       // 马穆鲁克
	ROYALMAMELUKE = 0xC6,  // 皇家马穆鲁克
	NOMAD = 0xC7,          // 游牧骑兵
	ENOMAD = 0xC8,         // 精英游牧骑兵
	CONQUISTADOR = 0xC9,   // 征服者
	ECONQUISTADOR = 0xCA,  // 精英征服者
	HORDE = 0xCB,          // 游牧部落
	GOLDENHORDE = 0xCC,    // 金帐汗国
	SUNKAWAKAN = 0xCD,     // 圣卡瓦坎骑兵
	EAGLEFEATHER = 0xCE,   // 鹰羽骑兵
	MUSKETHORSE = 0xCF,    // 火枪骑兵
	RIFLEHORSE = 0xD0,     // 步枪骑兵
	HORSE = 0xD1,          // 骑兵
	LIGHTCAVALRY = 0xD2,   // 轻骑兵
	HUSSARS = 0xD3,        // 骠骑兵
	ELITEHUSSARS = 0xD4,   // 精英骠骑兵
	CAMEL = 0xD5,          // 骆驼骑兵
	CAMELRIDER = 0xD6,     // 骆驼骑手
	ELITECAMEL = 0xD7,     // 精英骆驼骑兵
	ARMOREDCAR = 0xD8,     // 装甲车
	GREYHOUND = 0xD9,      // 灰狗装甲车
	ARMOREDSCOUTCAR = 0xDA, // 装甲侦察车
	ARMOREDSCOUTCAR2 = 0xDB, // 装甲侦察车2型
	ARMOREDCAVALRY = 0xDC,  // 装甲骑兵
	ARMOREDCAVALRYCTWE = 0xDD, // CTWE装甲骑兵
	ARMOREDCAVALRYCTWW = 0xDE, // CTWW装甲骑兵
	BMP = 0xDF,            // BMP步兵战车
	RUSINYLANCER = 0xE0,   // 鲁塞尼亚枪骑兵
	COSSACK = 0xE1,        // 哥萨克骑兵
	DONCOSSACK = 0xE2,     // 顿河哥萨克
	CATAPHRACT = 0xE3,     // 铁甲骑兵
	KNIGHT = 0xE4,         // 骑士
	ELITEKNIGHT = 0xE5,    // 精英骑士
	CUIRASSIERS = 0xE6,    // 胸甲骑兵
	COMPANION = 0xE7,      // 伙伴骑兵
	ECOMPANION = 0xE8,     // 精英伙伴骑兵
	STRATIOTAI = 0xE9,     // 斯特拉蒂奥泰骑兵
	ESTRATIOTAI = 0xEA,    // 精英斯特拉蒂奥泰骑兵
	CHEVALIER = 0xEB,      // 骑士（法语）
	ECHEVALIER = 0xEC,     // 精英骑士
	HORSEGRENADIER = 0xED, // 掷弹骑兵
	EHORSEGRENADIER = 0xEE, // 精英掷弹骑兵
	LIGHTTANK = 0xEF,      // 轻型坦克
	MARK4 = 0xF0,          // 马克4型坦克
	MARK4DES = 0xF1,       // 沙漠版马克4型坦克
	A7V = 0xF2,            // A7V坦克
	A7VDES = 0xF3,         // 沙漠版A7V坦克
	MEDIUMTANK = 0xF4,     // 中型坦克
	CHURCHILLDES = 0xF5,   // 沙漠版丘吉尔坦克
	SHERMAN = 0xF6,        // 谢尔曼坦克
	SHERMANDES = 0xF7,     // 沙漠版谢尔曼坦克
	T34 = 0xF8,            // T34坦克
	CHIHA = 0xF9,          // 奇哈坦克
	PANZER = 0xFA,         // 豹式坦克
	HEAVYTANK = 0xFB,      // 重型坦克
	HEAVYTANKCTWE = 0xFC,  // CTWE重型坦克
	HEAVYTANKCTWW = 0xFD,  // CTWW重型坦克
	ABRAM = 0xFE,          // 艾布拉姆斯坦克
	ABRAMDES = 0xFF,       // 沙漠版艾布拉姆斯坦克
	T80 = 0x100,           // T80坦克
	T80DES = 0x101,        // 沙漠版T80坦克
	TIGERTANK = 0x102,     // 虎式坦克
	LEOPARDTANK = 0x103,   // 豹式坦克（现代）
	RUSSHEAVYTANK = 0x104, // 俄罗斯重型坦克
	HVYELEPHANT = 0x105,   // 重装战象
	MAHOUT = 0x106,        // 象夫
	GUNMAHOUT = 0x107,     // 火炮象夫
	CULMAHOUT = 0x108,     // 文化象夫
	CATAPULT = 0x109,        // 投石机
	TREBUCHET = 0x10A,       // 巨型投石机
	BOMBARD = 0x10B,         // 射石炮
	CANNON = 0x10C,          // 加农炮
	ARTILLERY = 0x10D,       // 火炮
	ARTILLERYGERMAN = 0x10E, // 德国火炮
	HOWITZER = 0x10F,        // 榴弹炮
	HUMMEL = 0x110,          // 胡蜂式自行火炮
	MLRS = 0x111,            // 多管火箭发射系统
	MORTAR = 0x112,          // 迫击炮
	SIEGEMORTAR = 0x113,     // 攻城迫击炮
	BASILICABOMBARD = 0x114, // 巴西利卡射石炮
	BASILICACANNON = 0x115,  // 巴西利卡加农炮
	KATYUSHA = 0x116,        // 喀秋莎火箭炮
	FLAMINGARROW = 0x117,    // 火箭
	HEAVYFLAMINGARROW = 0x118, // 重型火箭
	AAGUN = 0x119,           // 高射炮
	AABATTERY = 0x11A,       // 高射炮组
	FLAKGUNGERMAN = 0x11B,   // 德国高射炮
	AAMISSILE = 0x11C,       // 防空导弹
	AAMISSILECTWE = 0x11D,   // CTWE防空导弹
	AAMISSILECTWW = 0x11E,   // CTWW防空导弹
	BIPLANE = 0x11F,         // 双翼飞机
	ALBATROSS = 0x120,       // 信天翁战斗机
	FIGHTER = 0x121,         // 战斗机
	P40 = 0x122,             // P40战斗机
	P40DES = 0x123,          // 沙漠涂装P40
	ME109 = 0x124,           // 梅塞施密特109
	FIGHTERZERO = 0x125,     // 零式战斗机
	MUSTANG = 0x126,         // 野马战斗机
	JETFIGHTER = 0x127,      // 喷气式战斗机
	MIRAGE = 0x128,          // 幻影战斗机
	TORNADO = 0x129,         // 旋风战斗机
	TORNADODES = 0x12A,      // 沙漠涂装旋风
	MIG = 0x12B,             // 米格战斗机
	MIGDES = 0x12C,          // 沙漠涂装米格
	ADVFIGHTER = 0x12D,      // 先进战斗机
	HAWKFB = 0x12E,          // 鹰式战斗轰炸机
	EAGLEFB = 0x12F,         // 鹰式战斗轰炸机
	BOMBER = 0x130,          // 轰炸机
	STRATEGICBOMBER = 0x131, // 战略轰炸机
	STEALTHBOMBER = 0x132,   // 隐形轰炸机
	LANCASTERBOMBER = 0x133, // 兰开斯特轰炸机
	FIGHTERBOMBER = 0x134,   // 战斗轰炸机
	JETFIGHTERBOMBER = 0x135, // 喷气式战斗轰炸机
	HELICOPTER = 0x136,      // 直升机
	TRANSPORTHELICOPTER = 0x137, // 运输直升机
	HIND = 0x138,            // 雌鹿直升机
	V2ROCKET = 0x139,       // V2火箭
	CRUISEMISSILE = 0x13A,   // 巡航导弹
	NUCLEARMISSILE = 0x13B,  // 核导弹
	ICBM = 0x13C,            // 洲际弹道导弹
	FISHERMEN = 0x13D,       // 渔民
	MERCHANTFLEET = 0x13E,   // 商船队
	MODERNMERCHANTFLEET = 0x13F, // 现代商船队
	TRANSPORTBARGE = 0x140,  // 运输驳船
	TRANSPORTGALLEON = 0x141, // 运输大帆船
	TRANSPORTFREIGHTER = 0x142, // 运输货船
	BARK = 0x143,            // 三桅帆船
	DROMON = 0x144,          // 德罗蒙战舰
	CARAVEL = 0x145,         // 卡拉维尔帆船
	CORVETTE = 0x146,        // 护卫舰
	SLOOP = 0x147,           // 单桅纵帆船
	DESTROYER = 0x148,       // 驱逐舰
	CRUISER = 0x149,         // 巡洋舰
	AEGISCRUISER = 0x14A,    // 神盾巡洋舰
	BRIG = 0x14B,            // 双桅横帆船
	FLUYT = 0x14C,           // 弗鲁特商船
	CLIPPER = 0x14D,         // 快速帆船
	FIRERAFT = 0x14E,        // 火攻筏
	HEAVYFIRERAFT = 0x14F,   // 重型火攻筏
	FIRESHIP = 0x150,        // 火攻船
	HEAVYFIRESHIP = 0x151,   // 重型火攻船
	SUB = 0x152,             // 潜艇
	ATTACKSUB = 0x153,       // 攻击潜艇
	TRIREME = 0x154,         // 三列桨战舰
	GALLEY = 0x155,          // 加莱赛战船
	CARRACK = 0x156,         // 卡拉克帆船
	FRIGATE = 0x157,         // 护卫舰
	MANOWAR = 0x158,         // 战列舰
	SIEGESHIP = 0x159,       // 攻城舰
	BOMBARDSHIP = 0x15A,     // 射石炮舰
	MORTARSHIP = 0x15B,      // 迫击炮舰
	DREADNOUGHT = 0x15C,     // 无畏舰
	BATTLESHIP = 0x15D,      // 战列舰
	ADVANCEDBATTLESHIP = 0x15E, // 先进战列舰
	AIRCRAFTCARRIER = 0x15F, // 航空母舰
	THEDESPOT = 0x160,       // 专制君主
	THESENATOR = 0x161,      // 元老院议员
	THEMONARCH = 0x162,      // 君主
	THEPRESIDENT = 0x163,    // 总统
	THECITIZEN = 0x164,      // 公民
	THECEO = 0x165,          // 首席执行官
	ALEXANDER = 0x166,       // 亚历山大大帝
	NAPOLEON = 0x167,        // 拿破仑
	PARMENIO = 0x168,        // 帕曼纽将军
	ANTIPATER = 0x169,       // 安提帕特
	PTOLEMY = 0x16A,         // 托勒密
	DARIUS = 0x16B,          // 大流士
	MEMNON = 0x16C,          // 门农
	SPITAMENES = 0x16D,      // 斯皮塔米尼斯
	CHANDRAGUPTA = 0x16E,    // 旃陀罗笈多
	PORUS = 0x16F,           // 波罗斯
	WELLINGTON = 0x170,      // 威灵顿公爵
	CHARLES = 0x171,         // 查理
	DJEZZAR = 0x172,         // 杰扎尔帕夏
	FOUCHE = 0x173,          // 富歇
	SCHWARZENBERG = 0x174,   // 施瓦岑贝格
	BLUCHER = 0x175,         // 布吕歇尔
	KUTOSOV = 0x176,         // 库图佐夫
	PAOLI = 0x177,           // 保利
	DARIUSCHARIOT = 0x178,   // 大流士战车
	SHIPOFTHELINE = 0x179,   // 战列舰
	JUNKERS = 0x17A,         // 容克斯飞机
	PATROLJEEP = 0x17B,      // 巡逻吉普
	SAGUERILLA = 0x17C,      // 小型游击队
	AGUERILLA = 0x17D,       // 游击队
	MEGUERILLA = 0x17E,      // 大型游击队
	ASIANGUERILLA = 0x17F,   // 亚洲游击队
	BANDEIRANTES = 0x180,    // 班德拉探险者
	BANDEIRANTESELITE = 0x181, // 精英班德拉
	REDCOATS = 0x182,        // 英国红衫军
	SAS = 0x183,             // 特种空勤团
	HARRIER = 0x184,         // 鹞式战斗机
	PATROLBOAT = 0x185,      // 巡逻艇
	HUMVEE = 0x186,          // 悍马车
	BARBARIANARCHER = 0x187, // 野蛮人弓箭手
	BARBARIANJAVELINEER = 0x188, // 野蛮人标枪兵
	BARBARIANPHALANX = 0x189, // 野蛮人方阵
	GREEKMERCS = 0x18A,      // 希腊雇佣兵
	ROYALGUARD = 0x18B,      // 皇家卫队
	GALLEON = 0x18C,         // 大帆船
	IRONCLAD = 0x18D,        // 铁甲舰
	NUKESUB = 0x18E,         // 核潜艇
	CATAPULTSHIP = 0x18F,    // 投石机船
	FURTRAPPER = 0x190,      // 捕兽者
	UNIQUE = 0x191,          // 独特单位
	BIRD = 0x192,            // 鸟类
	FLOCKBIRD = 0x193,       // 鸟群
	GULLBIRD = 0x194,        // 海鸥
	FARMPIG = 0x195,         // 农场猪
	FARMCHICKEN = 0x196,     // 农场鸡
	HERDHORSE = 0x197,       // 马群
	HERDSHEEP = 0x198,       // 羊群
	HERDBISON = 0x199,       // 野牛群
	HERDBEAR = 0x19A,        // 熊群
	HERDFISH = 0x19B,        // 鱼群
	HERDWHALE = 0x19C,       // 鲸群
	HERDPEACOCK = 0x19D,     // 孔雀群
	VILLAGE = 0x19E,         // 村庄
	TOWN = 0x19F,            // 城镇
	METROPOLIS = 0x1A0,      // 大都市
	FARM = 0x1A1,            // 农场
	WOODCUTTER = 0x1A2,      // 伐木场
	MINE = 0x1A3,            // 矿场
	UNIVERSITY = 0x1A4,      // 大学
	OILWELL = 0x1A5,         // 油井
	OILPLATFORM = 0x1A6,     // 石油平台
	GRANARY = 0x1A7,         // 粮仓
	LUMBERMILL = 0x1A8,      // 锯木厂
	SMELTER = 0x1A9,         // 冶炼厂
	REFINERY = 0x1AA,        // 精炼厂
	BARRACKS = 0x1AB,        // 兵营
	STABLE = 0x1AC,          // 马厩
	AUTOPLANT = 0x1AD,       // 汽车厂
	SIEGEFACTORY = 0x1AE,    // 攻城武器厂
	FACTORY = 0x1AF,         // 工厂
	DOCK = 0x1B0,            // 码头
	ANCHORAGE = 0x1B1,       // 锚地
	SHIPYARD = 0x1B2,        // 船坞
	LIBRARY = 0x1B3,         // 图书馆
	MARKET = 0x1B4,          // 市场
	TEMPLE = 0x1B5,          // 寺庙
	SENATE = 0x1B6,          // 元老院
	TOWER = 0x1B7,           // 塔楼
	KEEP = 0x1B8,            // 要塞
	STOCKADE = 0x1B9,        // 栅栏
	BUNKER = 0x1BA,          // 地堡
	FORTX = 0x1BB,           // 堡垒
	CASTLE = 0x1BC,          // 城堡
	FORTRESS = 0x1BD,        // 要塞
	REDOUBT = 0x1BE,         // 多面堡
	AIRBASE = 0x1BF,         // 空军基地
	ELDORADO = 0x1C0,        // 黄金国
	WASHINGTONMONUMENT = 0x1C1, // 华盛顿纪念碑
	LENINSTATUE = 0x1C2,     // 列宁雕像
	HOUSE_A0 = 0x1C3,        // A型房屋0级
	HOUSE_A1 = 0x1C4,        // A型房屋1级
	HOUSE_A2 = 0x1C5,        // A型房屋2级
	HOUSE_A3 = 0x1C6,        // A型房屋3级
	HOUSE_A4 = 0x1C7,        // A型房屋4级
	HOUSE_A5 = 0x1C8,        // A型房屋5级
	HOUSE_B0 = 0x1C9,        // B型房屋0级
	HOUSE_B1 = 0x1CA,        // B型房屋1级
	HOUSE_B2 = 0x1CB,        // B型房屋2级
	HOUSE_B3 = 0x1CC,        // B型房屋3级
	HOUSE_B4 = 0x1CD,        // B型房屋4级
	HOUSE_B5 = 0x1CE,        // B型房屋5级
	HOUSE_C0 = 0x1CF,        // C型房屋0级
	HOUSE_C1 = 0x1D0,        // C型房屋1级
	HOUSE_C2 = 0x1D1,        // C型房屋2级
	HOUSE_C3 = 0x1D2,        // C型房屋3级
	HOUSE_C4 = 0x1D3,        // C型房屋4级
	HOUSE_C5 = 0x1D4,        // C型房屋5级
	HOUSE_D0 = 0x1D5,        // D型房屋0级
	HOUSE_D1 = 0x1D6,        // D型房屋1级
	HOUSE_D2 = 0x1D7,        // D型房屋2级
	HOUSE_D3 = 0x1D8,        // D型房屋3级
	HOUSE_D4 = 0x1D9,        // D型房屋4级
	HOUSE_D5 = 0x1DA,        // D型房屋5级
	HOUSE_E0 = 0x1DB,        // E型房屋0级
	HOUSE_E1 = 0x1DC,        // E型房屋1级
	HOUSE_E2 = 0x1DD,        // E型房屋2级
	HOUSE_E3 = 0x1DE,        // E型房屋3级
	HOUSE_E4 = 0x1DF,        // E型房屋4级
	HOUSE_E5 = 0x1E0,        // E型房屋5级
	HOUSE_F0 = 0x1E1,        // F型房屋0级
	HOUSE_F1 = 0x1E2,        // F型房屋1级
	HOUSE_F2 = 0x1E3,        // F型房屋2级
	HOUSE_F3 = 0x1E4,        // F型房屋3级
	HOUSE_F4 = 0x1E5,        // F型房屋4级
	HOUSE_F5 = 0x1E6,        // F型房屋5级
	APTHOUSE_A0 = 0x1E7,     // A型公寓0级
	APTHOUSE_A1 = 0x1E8,     // A型公寓1级
	APTHOUSE_A2 = 0x1E9,     // A型公寓2级
	APTHOUSE_A3 = 0x1EA,     // A型公寓3级
	APTHOUSE_B0 = 0x1EB,     // B型公寓0级
	APTHOUSE_B1 = 0x1EC,     // B型公寓1级
	APTHOUSE_B2 = 0x1ED,     // B型公寓2级
	APTHOUSE_B3 = 0x1EE,     // B型公寓3级
	APTHOUSE_C0 = 0x1EF,     // C型公寓0级
	APTHOUSE_C1 = 0x1F0,     // C型公寓1级
	APTHOUSE_C2 = 0x1F1,     // C型公寓2级
	APTHOUSE_C3 = 0x1F2,     // C型公寓3级
	APTHOUSE_D0 = 0x1F3,     // D型公寓0级
	APTHOUSE_D1 = 0x1F4,     // D型公寓1级
	APTHOUSE_D2 = 0x1F5,     // D型公寓2级
	APTHOUSE_D3 = 0x1F6,     // D型公寓3级
	APTHOUSE_E0 = 0x1F7,     // E型公寓0级
	APTHOUSE_E1 = 0x1F8,     // E型公寓1级
	APTHOUSE_E2 = 0x1F9,     // E型公寓2级
	APTHOUSE_E3 = 0x1FA,     // E型公寓3级
	OFFICE_A0 = 0x1FB,       // A型办公室0级
	OFFICE_A1 = 0x1FC,       // A型办公室1级
	OFFICE_A2 = 0x1FD,       // A型办公室2级
	OFFICE_A3 = 0x1FE,       // A型办公室3级
	OFFICE_B0 = 0x1FF,       // B型办公室0级
	OFFICE_B1 = 0x200,       // B型办公室1级
	OFFICE_B2 = 0x201,       // B型办公室2级
	OFFICE_B3 = 0x202,       // B型办公室3级
	OFFICE_C0 = 0x203,       // C型办公室0级
	OFFICE_C1 = 0x204,       // C型办公室1级
	OFFICE_C2 = 0x205,       // C型办公室2级
	OFFICE_C3 = 0x206,       // C型办公室3级
	COURTYARDFOUNTAIN = 0x207, // 庭院喷泉
	MISSILESILO = 0x208,     // 导弹发射井
	LOOKOUT = 0x209,         // 瞭望塔
	OBSERVATIONPOST = 0x20A, // 观察哨
	AIRDEFENSE = 0x20B,      // 防空系统
	RADAR = 0x20C,           // 雷达
	SAM = 0x20D,             // 地对空导弹
	PYRAMIDS = 0x20E,        // 金字塔
	COLOSSUS = 0x20F,        // 巨像
	HANGINGGARDENS = 0x210,  // 空中花园
	TERRACOTTA = 0x211,      // 兵马俑
	COLOSSEUM = 0x212,       // 罗马斗兽场
	FORBIDDENCITY = 0x213,   // 紫禁城
	TIKAL = 0x214,           // 蒂卡尔
	PORCELAIN = 0x215,       // 瓷器
	REDFORT = 0x216,         // 红堡
	ANGKORWAT = 0x217,       // 吴哥窟
	VERSAILLES = 0x218,      // 凡尔赛宫
	STATUEOFLIBERTY = 0x219, // 自由女神像
	KREMLIN = 0x21A,         // 克里姆林宫
	TAJMAHAL = 0x21B,        // 泰姬陵
	EIFFELTOWER = 0x21C,     // 埃菲尔铁塔
	SUPERCOLLIDER = 0x21D,   // 超级对撞机
	SPACEPROGRAM = 0x21E,    // 太空计划
	GOODY = 0x21F,           // 遗迹
	CLASSICAL_AGE = 0x220,   // 古典时代
	MEDIEVAL_AGE = 0x221,    // 中世纪时代
	GUNPOWDER_AGE = 0x222,   // 火药时代
	ENLIGHTENMENT_AGE = 0x223, // 启蒙时代
	INDUSTRIAL_AGE = 0x224,  // 工业时代
	MODERN_AGE = 0x225,      // 现代
	INFORMATION_AGE = 0x226, // 信息时代
	WRITTEN_WORD = 0x227,    // 文字
	MATHEMATICS = 0x228,     // 数学
	CHEMISTRY = 0x229,       // 化学
	LAWS_OF_NATURE = 0x22A,  // 自然法则
	ELECTRICITY = 0x22B,     // 电力
	ELECTRONICS = 0x22C,     // 电子学
	COMPUTERIZATION = 0x22D, // 计算机化
	BARTER = 0x22E,          // 物物交换
	COINAGE = 0x22F,         // 铸币
	TRADE = 0x230,           // 贸易
	MERCANTILISM = 0x231,    // 重商主义
	FINANCE = 0x232,         // 金融
	INDUSTRY = 0x233,        // 工业
	GLOBALIZATION = 0x234,   // 全球化
	CITY_STATE = 0x235,      // 城邦
	EMPIRE = 0x236,          // 帝国
	FEUDALISM = 0x237,       // 封建主义
	DIVINE_RIGHT = 0x238,    // 君权神授
	NATION_STATE = 0x239,    // 民族国家
	GREAT_POWER = 0x23A,     // 列强
	INTERNATIONAL_LAW = 0x23B, // 国际法
	THE_ART_OF_WAR = 0x23C,  // 战争艺术
	MERCENARIES = 0x23D,     // 雇佣兵
	STANDING_ARMY = 0x23E,   // 常备军
	CONSCRIPTION = 0x23F,    // 征兵制
	LEVEE_EN_MASSE = 0x240,  // 全民皆兵
	NATION_IN_ARMS = 0x241,  // 全民武装
	SELECTIVE_SERVICE = 0x242, // 选征兵役制
	MISSILE_SHIELD = 0x243,  // 导弹防御
	GLOBAL_GOVERNMENT = 0x244, // 全球政府
	VIRTUAL_REALITY = 0x245, // 虚拟现实
	NANOTECHNOLOGY = 0x246,  // 纳米技术
	TACTICS = 0x247,         // 战术
	OPERATIONS = 0x248,      // 作战
	STRATEGYX = 0x249,       // 战略
	RELIGION = 0x24A,        // 宗教
	MONOTHEISM = 0x24B,      // 一神教
	EXISTENTIALISM = 0x24C,  // 存在主义
	TAXATION = 0x24D,        // 税收
	VASSALAGE = 0x24E,       // 附庸制度
	SOCIAL_CONTRACT = 0x24F, // 社会契约
	INCOME_TAX = 0x250,      // 所得税
	FORTIFICATION = 0x251,   // 筑城术
	BOMBARDMENT = 0x252,     // 炮击战术
	STRATEGIC_RESERVES = 0x253, // 战略储备
	ALLEGIANCE = 0x254,      // 忠诚
	OATH_OF_FEALTY = 0x255,  // 效忠誓言
	PATRIOTISM = 0x256,      // 爱国主义
	NATIONALISM = 0x257,     // 民族主义
	CONSTRUCTION = 0x258,    // 建造技术
	ARCHITECTURE = 0x259,    // 建筑学
	ENGINEERING = 0x25A,     // 工程学
	HERBAL_LORE = 0x25B,    // 草药知识
	MEDICINE = 0x25C,       // 医学
	PHARMACEUTICALS = 0x25D, // 制药学
	FORAGE = 0x25E,         // 粮草征集
	SUPPLYX = 0x25F,        // 补给系统
	LOGISTICS = 0x260,      // 后勤学
	CARPENTRY = 0x261,      // 木工技术
	LOGGING_INDUSTRY = 0x262, // 伐木业
	PAPERMILL = 0x263,     // 造纸术
	AGRICULTURE = 0x264,    // 农业
	CROP_ROTATION = 0x265,  // 轮作制
	FOOD_INDUSTRY = 0x266,  // 食品工业
	LITERACY = 0x267,       // 识字率
	PRINTING_PRESS = 0x268, // 印刷术
	SCIENTIFIC_METHOD = 0x269, // 科学方法
	INSTITUTIONAL_RESEARCH = 0x26A, // 机构研究
	SUPERCOMPUTERS = 0x26B, // 超级计算机
	METAL_ALLOYS = 0x26C,  // 金属合金
	COLD_CASTING = 0x26D,  // 冷铸造
	STEEL = 0x26E,         // 钢铁
	GOV_EMPIRE = 0x26F,    // 帝国政体
	GOV_REPUBLIC = 0x270,  // 共和政体
	GOV_MONARCHY = 0x271,  // 君主政体
	GOV_DEMOCRACY = 0x272, // 民主政体
	GOV_SOCIALISM = 0x273, // 社会主义
	GOV_CAPITALISM = 0x274, // 资本主义
	BRIBE = 0x275,         // 贿赂
	PILFER = 0x276,        // 窃取
	COUNTERINTEL = 0x277,  // 反情报
	ASSIMILATE = 0x278,    // 同化
	RALLY = 0x279,         // 集结
	CREATE_DECOY = 0x27A,  // 制造诱饵
	AMBUSH = 0x27B,        // 伏击
	FORCED_MARCH = 0x27C,  // 强行军
	ENTRENCH = 0x27D,      // 挖掘战壕
	RESTOCK_SUPPLIES = 0x27E, // 补充补给
	DOUBLE_AGENT = 0x27F,  // 双重间谍
	SABOTAGE = 0x280,      // 破坏
	SNIPER = 0x281,        // 狙击
	BLOW_TREAD = 0x282,    // 破坏履带
	JAM_RADAR = 0x283,     // 干扰雷达
	PARADROP = 0x284,      // 空降
	RESEARCH_PROJECT = 0x285, // 研究项目
	DEPOPULATE = 0x286,    // 人口减少
	MOVE_CAPITAL_HERE = 0x287, // 迁都至此
	LOCK_GATE = 0x288,     // 锁门
	UNLOCK_GATE = 0x289,   // 解锁门
	TRANSPORT = 0x28A,     // 运输
	PACK = 0x28B,          // 打包
	UNPACK = 0x28C,        // 解包
	PACK2 = 0x28D,         // 打包2
	UNPACK2 = 0x28E,       // 解包2
	PACK3 = 0x28F,         // 打包3
	UNPACK3 = 0x290,       // 解包3
	PACK4 = 0x291,         // 打包4
	UNPACK4 = 0x292,       // 解包4
	CIVILIANSPELL = 0x293, // 平民法术
	TOARMSSPELL = 0x294,   // 武装法术
	BUILDAIR = 0x295,      // 建造空军
	MORPH = 0x296,         // 变形
	IMMORTAL_ARCH = 0x297, // 长生军弓箭手
	IMMORTAL_HINF = 0x298, // 长生军步兵
	RADARSPELL = 0x299,   // 雷达法术
	DISBAND = 0x29A,       // 解散
	RAZE = 0x29B,          // 夷为平地
	DECLARE_WAR = 0x29C,   // 宣战
	DECLARE_WAR1 = 0x29D,  // 宣战1
	DECLARE_WAR2 = 0x29E,  // 宣战2
	DECLARE_WAR3 = 0x29F,  // 宣战3
	DECLARE_WAR4 = 0x2A0,  // 宣战4
	DECLARE_WAR5 = 0x2A1,  // 宣战5
	DECLARE_WAR6 = 0x2A2,  // 宣战6
	DECLARE_WAR7 = 0x2A3,  // 宣战7
	CANCEL_ALLIANCE = 0x2A4, // 取消联盟
	CANCEL_ALLIANCE1 = 0x2A5, // 取消联盟1
	CANCEL_ALLIANCE2 = 0x2A6, // 取消联盟2
	CANCEL_ALLIANCE3 = 0x2A7, // 取消联盟3
	CANCEL_ALLIANCE4 = 0x2A8, // 取消联盟4
	CANCEL_ALLIANCE5 = 0x2A9, // 取消联盟5
	CANCEL_ALLIANCE6 = 0x2AA, // 取消联盟6
	CANCEL_ALLIANCE7 = 0x2AB, // 取消联盟7
	FOREIGN_TRADE = 0x2AC, // 对外贸易
	BUY_SELL = 0x2AD,      // 买卖
	TRANSPORT_BONUS = 0x2AE, // 运输奖励
	COLONIZE_BONUS = 0x2AF, // 殖民奖励
	ALLY_LOS = 0x2B0,      // 盟友视野共享
	SEE_ENEMY_BORDERS = 0x2B1, // 查看敌人边界
	EXPLORE_MAP_BONUS = 0x2B2, // 探索地图奖励
	ACTIVE_PING_BONUS = 0x2B3, // 主动侦察奖励
	REVEAL_ENEMY_BONUS = 0x2B4, // 显示敌人奖励
	MISSILE_DEFENSE_BONUS = 0x2B5, // 导弹防御奖励
	ARMAGEDDON_BONUS = 0x2B6, // 末日决战奖励
	VIRTUAL_REALITY_BONUS = 0x2B7, // 虚拟现实奖励
	INSTANT_UNIT_BONUS = 0x2B8, // 即时单位奖励
	GLOBAL_GOVERNMENT_BONUS = 0x2B9, // 全球政府奖励
	CARAVAN_ATTACK_BONUS = 0x2BA, // 商队攻击奖励
	GRANARY2 = 0x2BB,     // 粮仓2级
	GRANARY3 = 0x2BC,     // 粮仓3级
	GRANARY4 = 0x2BD,     // 粮仓4级
	GRANARY5 = 0x2BE,     // 粮仓5级
	FISHERMEN1 = 0x2BF,   // 渔民1级
	FISHERMEN2 = 0x2C0,   // 渔民2级
	FISHERMEN3 = 0x2C1,   // 渔民3级
	LUMBERMILL2 = 0x2C2,  // 锯木厂2级
	LUMBERMILL3 = 0x2C3,  // 锯木厂3级
	LUMBERMILL4 = 0x2C4,  // 锯木厂4级
	SMELTER2 = 0x2C5,     // 冶炼厂2级
	SMELTER3 = 0x2C6,     // 冶炼厂3级
	SMELTER4 = 0x2C7,     // 冶炼厂4级
	TEMPLEBORDERS2 = 0x2C8, // 寺庙边界2级
	TEMPLEBORDERS3 = 0x2C9, // 寺庙边界3级
	TEMPLEBORDERS4 = 0x2CA, // 寺庙边界4级
	TEMPLEHP2 = 0x2CB,    // 寺庙生命值2级
	TEMPLEHP3 = 0x2CC,    // 寺庙生命值3级
	TEMPLEHP4 = 0x2CD,    // 寺庙生命值4级
	TEMPLERANGE2 = 0x2CE, // 寺庙范围2级
	TEMPLERANGE3 = 0x2CF, // 寺庙范围3级
	TEMPLERANGE4 = 0x2D0, // 寺庙范围4级
	FORTBORDERS2 = 0x2D1, // 堡垒边界2级
	FORTBORDERS3 = 0x2D2, // 堡垒边界3级
	FORTBORDERS4 = 0x2D3, // 堡垒边界4级
	FORTRANGE2 = 0x2D4,   // 堡垒范围2级
	FORTRANGE3 = 0x2D5,   // 堡垒范围3级
	FORTRANGE4 = 0x2D6,   // 堡垒范围4级
	FORTGARRISON2 = 0x2D7, // 堡垒驻军2级
	FORTGARRISON3 = 0x2D8, // 堡垒驻军3级
	FORTGARRISON4 = 0x2D9, // 堡垒驻军4级
	FORTLOS2 = 0x2DA,     // 堡垒视野2级
	FORTLOS3 = 0x2DB,     // 堡垒视野3级
	FORTLOS4 = 0x2DC,     // 堡垒视野4级
	ATTRITION1 = 0x2DD,   // 损耗1级
	ATTRITION2 = 0x2DE,   // 损耗2级
	ATTRITION3 = 0x2DF,   // 损耗3级
	ATTRITION4 = 0x2E0,   // 损耗4级
	UNIVERSITY2 = 0x2E1,  // 大学2级
	UNIVERSITY3 = 0x2E2,  // 大学3级
	UNIVERSITY4 = 0x2E3,  // 大学4级
	UNIVERSITY5 = 0x2E4,  // 大学5级
	UNIVERSITY6 = 0x2E5,  // 大学6级
	TROOPS_FASTER_1 = 0x2E6, // 部队加速1级
	TROOPS_FASTER_2 = 0x2E7, // 部队加速2级
	TROOPS_FASTER_3 = 0x2E8, // 部队加速3级
	TROOPS_LOS_1 = 0x2E9, // 部队视野1级
	TROOPS_LOS_2 = 0x2EA, // 部队视野2级
	TROOPS_LOS_3 = 0x2EB, // 部队视野3级
	SHIPS_FASTER_1 = 0x2EC, // 船只加速1级
	SHIPS_FASTER_2 = 0x2ED, // 船只加速2级
	SHIPS_FASTER_3 = 0x2EE, // 船只加速3级
	HEAL_FASTER_1 = 0x2EF, // 治疗加速1级
	HEAL_FASTER_2 = 0x2F0, // 治疗加速2级
	HEAL_FASTER_3 = 0x2F1, // 治疗加速3级
	BUILDINGS_FASTER_1 = 0x2F2, // 建筑加速1级
	BUILDINGS_FASTER_2 = 0x2F3, // 建筑加速2级
	BUILDINGS_FASTER_3 = 0x2F4, // 建筑加速3级
	BUILDINGS_HP_1 = 0x2F5, // 建筑生命值1级
	BUILDINGS_HP_2 = 0x2F6, // 建筑生命值2级
	BUILDINGS_HP_3 = 0x2F7, // 建筑生命值3级
	VEHICLES_FASTER_1 = 0x2F8, // 车辆加速1级
	VEHICLES_FASTER_2 = 0x2F9, // 车辆加速2级
	VEHICLES_FASTER_3 = 0x2FA, // 车辆加速3级
	SUPPLY_WAGONS_1 = 0x2FB, // 补给车1级
	SUPPLY_WAGONS_2 = 0x2FC, // 补给车2级
	SUPPLY_WAGONS_3 = 0x2FD, // 补给车3级
	FORAGING_1 = 0x2FE,    // 粮草征集1级
	FORAGING_2 = 0x2FF,    // 粮草征集2级
	FORAGING_3 = 0x300,    // 粮草征集3级
	SPIES_GENERALS_RECOVER_CRAFT = 0x301, // 间谍将军恢复技能
	SPIES_GENERALS_CREATED_FASTER = 0x302, // 间谍将军快速生成
	SPIES_GENERALS_CHEAPER = 0x303, // 间谍将军更便宜
	SPIES_CRAFT_FASTER = 0x304, // 间谍技能更快
	GENERALS_UPGRADE_1 = 0x305, // 将军升级1级
	GENERALS_UPGRADE_2 = 0x306, // 将军升级2级
	GENERALS_UPGRADE_3 = 0x307, // 将军升级3级
	SPIES_UPGRADE_1 = 0x308, // 间谍升级1级
	SPIES_UPGRADE_2 = 0x309, // 间谍升级2级
	SPIES_UPGRADE_3 = 0x30A, // 间谍升级3级
	TAX_1 = 0x30B,         // 税收1级
	TAX_2 = 0x30C,         // 税收2级
	TAX_3 = 0x30D,         // 税收3级
	TAX_4 = 0x30E,         // 税收4级
	MERCHANTS_1 = 0x30F,   // 商人1级
	MERCHANTS_2 = 0x310,   // 商人2级
	MERCHANTS_3 = 0x311,   // 商人3级
	MERCHANTS_4 = 0x312,   // 商人4级
	BUILDINGS_CREATED_FASTER = 0x313, // 建筑快速建造
	RESEARCH_FASTER = 0x314, // 研究加速
	TROOPS_FASTER = 0x315, // 部队加速
	STEALTH_STUFF = 0x316, // 隐身相关
	TOWER_FORT_RANGE_1 = 0x317, // 塔楼堡垒范围1级
	TOWER_FORT_RANGE_2 = 0x318, // 塔楼堡垒范围2级
	TOWER_FORT_RANGE_3 = 0x319, // 塔楼堡垒范围3级
	DESPOTISM_1 = 0x31A,   // 专制主义1级
	DESPOTISM_2 = 0x31B,   // 专制主义2级
	DESPOTISM_3 = 0x31C,   // 专制主义3级
	REPUBLIC_1 = 0x31D,    // 共和制1级
	REPUBLIC_2 = 0x31E,    // 共和制2级
	REPUBLIC_3 = 0x31F,    // 共和制3级
	MONARCHY_1 = 0x320,    // 君主制1级
	MONARCHY_2 = 0x321,    // 君主制2级
	DEMOCRACY_1 = 0x322,   // 民主制1级
	DEMOCRACY_2 = 0x323,   // 民主制2级
	SOCIALISM_1 = 0x324,   // 社会主义1级
	CAPITALISM_1 = 0x325,  // 资本主义1级
	NUM_TYPES = 0x326,     // 类型总数
	TYPE_NOT_SPECIFIED = 0xFFFFFFFD, // 未指定类型
	TYPE_NOT_AVAIL = 0xFFFFFFFE,    // 不可用类型
	TYPE_NONE = 0xFFFFFFFF,         // 无类型
	TYPE_ANY_BUILDING = 0xFFFFFFFE, // 任意建筑
	TYPE_ANY_UNIT = 0xFFFFFFFD,     // 任意单位
	TYPE_TRAINING_BUILDING = 0xFFFFFFFC, // 训练建筑
	TYPE_ANY_AIR_UNIT = 0xFFFFFFFB, // 任意空军单位
	TYPE_NON_AIR_UNIT = 0xFFFFFFFA, // 非空军单位
	END_GOODTYPES = 0x32,  // 资源类型结束
	END_RARE = 0x32,        // 稀有资源结束
	END_UNITTYPES = 0x192,  // 单位类型结束
	END_GAIATYPES = 0x19E,  // 盖亚类型结束
	END_BUILDTYPES = 0x21F, // 建筑类型结束
	END_WONDERTYPES = 0x21F, // 奇观类型结束
	END_ITEMTYPES = 0x220, // 物品类型结束
	END_TECHTYPES = 0x275,  // 科技类型结束
	END_GOVTYPES = 0x275,   // 政府类型结束
	END_GOV_HEROTYPES = 0x166, // 政府英雄类型结束
	END_AGETYPES = 0x227,   // 时代类型结束
	END_EPOCHTYPES = 0x243, // 纪元类型结束
	END_FINALTYPES = 0x247, // 最终类型结束
	END_SPELLTYPES = 0x2AC, // 法术类型结束
	END_BONUSTYPES = 0x326, // 奖励类型结束
	END_TYPES = 0x326,      // 所有类型结束
	BASE_GOODTYPES = 0x0,  // 基础资源类型起始
	BASE_RARE = 0x6,       // 稀有资源起始
	BASE_UNITTYPES = 0x32, // 单位类型起始
	BASE_GAIATYPES = 0x192, // 盖亚类型起始
	BASE_BUILDTYPES = 0x19E, // 建筑类型起始
	BASE_WONDERTYPES = 0x20E, // 奇观类型起始
	BASE_ITEMTYPES = 0x21F, // 物品类型起始
	BASE_TECHTYPES = 0x220, // 科技类型起始
	BASE_EPOCHTYPES = 0x227, // 纪元类型起始
	BASE_AGETYPES = 0x220,  // 时代类型起始
	BASE_FINALTYPES = 0x243, // 最终类型起始
	BASE_NONAGETYPES = 0x227, // 非时代类型起始
	BASE_SPELLTYPES = 0x275, // 法术类型起始
	BASE_BONUSTYPES = 0x2AC, // 奖励类型起始
	BASE_SCIENCETYPES = 0x227, // 科学类型起始
	BASE_COMMERCETYPES = 0x22E, // 商业类型起始
	BASE_MILITARYTYPES = 0x23C, // 军事类型起始
	BASE_CIVICTYPES = 0x235, // 市政类型起始
	BASE_GOVTYPES = 0x26F,  // 政府类型起始
	BASE_GOV_HEROTYPES = 0x160, // 政府英雄类型起始
	NUM_COMMON = 0x6,       // 普通资源数量
	NUM_GATHER = 0x6,       // 可收集资源数量
	NUM_RARES = 0x2C,       // 稀有资源数量
	NUM_GOODTYPES = 0x32,   // 资源类型总数
	NUM_UNITTYPES = 0x160,  // 单位类型总数
	NUM_GAIATYPES = 0xC,    // 盖亚类型总数
	NUM_BUILDTYPES = 0x81,  // 建筑类型总数
	NUM_WONDERTYPES = 0x11, // 奇观类型总数
	NUM_ITEMTYPES = 0x1,    // 物品类型总数
	NUM_TECHTYPES = 0x55,   // 科技类型总数
	NUM_EPOCHTYPES = 0x1C,  // 纪元类型总数
	NUM_AGETYPES = 0x7,     // 时代类型总数
	NUM_FINALTYPES = 0x4,    // 最终类型总数
	NUM_SPELLTYPES = 0x37,  // 法术类型总数
	NUM_GOVTYPES = 0x6,     // 政府类型总数
	NUM_BONUSTYPES = 0x7A,  // 奖励类型总数
	NUM_GOV_HEROTYPES = 0x6, // 政府英雄类型总数
	TYPE_INDEX_FORCE_DWORD = 0x7FFFFFFF, // 强制DWORD类型索引
};

// 制造对象结构体，表示游戏中的生产或建造任务
struct  MakeObject
{
	TypeIndex t;        // 类型索引，指定要制造的对象类型
	int val;            // 值，可能表示数量或其他数值
	int escrow;         // 托管资源，为制造任务预留的资源
	int city;           // 城市ID，指定制造任务所在的城市
	int up;             // 升级标志，表示是否需要升级
	int o;              // 所有者或方向
	int num;            // 数量
	int cat;            // 类别
	WCoord wx;          // 世界X坐标
	WCoord wy;          // 世界Y坐标
};



// 制造对象数组基类
struct  __declspec(align(4)) ArrayBaseMakeObject : ArrayBaseMaster
{
	int unk; // 虚函数表指针，注释中为ArrayBase<MakeObject>_vtbl*
	MakeObject* list;    // 指向制造对象数组的指针
	unsigned __int8 flags; // 标志位
};

// 制造对象简单复制数组
struct  ArrayBaseSimpleCopyMakeObject : ArrayBaseMakeObject
{
	// 无额外成员，继承基类的功能
};

// 制造对象数组结构
struct  ArrayMakeObject : ArrayBaseSimpleCopyMakeObject
{
	int cur_index;  // 当前索引，用于跟踪当前制造进度
};

// 制造列表结构
struct  MakeList : ArrayMakeObject
{
	// 无额外成员，直接使用ArrayMakeObject的功能
};

// 游戏访问基类 - 空结构体，可能用作接口或标记
struct  GameAccess
{
	// 空结构体，可能作为基类用于类型系统或访问控制
};



// 字节类型定义
typedef unsigned char _BYTE;  // 定义无符号字节类型（1字节）



// 领导者数据结构体 - 存储玩家的游戏状态和统计数据
struct  LeaderData : GameAccessConst
{
	int leader_flags;           // 领导者标志位
	int leader_flags2;          // 领导者标志位2
	int who;                   // 玩家ID
	int tribe;                 // 部落/文明类型
	int defeated_by;           // 被谁击败
	int gov;                   // 政府类型

	// 分数系统
	int score;                 // 总分数
	int score_explored;        // 探索分数
	int score_territory;       // 领土分数
	int score_units;          // 单位分数
	int score_units_2;         // 单位分数2
	int score_buildings;       // 建筑分数
	int score_economy;         // 经济分数
	int score_pop;             // 人口分数
	int score_unit_upgrades;   // 单位升级分数
	int score_research;        // 研究分数
	int score_wonders;         // 奇观分数
	int score_combat;          // 战斗分数

	unsigned int cannon_time;   // 加农炮技术解锁时间
	int handicap;              // 让分技巧
	int multi_diff;            // 多人游戏难度

	// 外交和通信系统
	int chat_status[8];        // 与其他玩家的聊天状态
	int diplos[8];             // 外交关系状态
	int treaties[8];           // 条约状态
	int agendas[8];            // 议程状态
	int good_deeds[8];         // 友好行为记录
	int attack_stamp[8];       // 攻击时间戳
	int raid_stamp[8];         // 袭击时间戳
	int capital_stamp[8];      // 首都攻击时间戳
	int ally_stamp[8];         // 盟友互动时间戳
	int tribute_stamp[8];      // 进贡时间戳
	int gift_stamp[8];         // 礼物时间戳
	int hire_stamp[8];         // 雇佣时间戳
	int hire_who[8];           // 雇佣对象ID

	// attrition（损耗）系统
	int attrition_stamp;       // 损耗计算时间戳
	int attrition_stamp2;      // 损耗计算时间戳2
	int attrition_stamp3;      // 损耗计算时间戳3
	int ctw_hero_stamp;       // CTW英雄出现时间戳
	int ctw_hero_retreat_stamp; // CTW英雄撤退时间戳
	int repair_stamp;          // 修复时间戳

	int blacken;               // 黑化状态（可能表示外交关系恶化）
	int aggression[8];         // 对其他玩家的侵略性
	int strong[8];            // 对其他玩家的优势
	int weak[8];              // 对其他玩家的劣势
	int dow[8];               // 宣战状态
	int invaders[8];          // 入侵者记录
	int broke_alliance[8];    // 破坏联盟记录
	int made_peace[8];        // 达成和平记录

	int got_diplo_message;    // 收到外交消息标志
	int last_spoke[8];        // 最后交谈时间
	int counteroffer[8];      // 还价状态
	int tribute_demanded[8];  // 要求的进贡

	TauntRequest last_taunt[8];  // 最后发送的嘲讽类型
	int taunt_frame[8];       // 嘲讽发送时间帧
	int incoming_taunt[8];    // 收到的嘲讽
	int incoming_taunt_who[8]; // 嘲讽来源玩家
	int incoming_taunt_frame[8]; // 收到嘲讽的时间帧

	int incoming;             // 传入消息标志
	int city_num;             // 城市数量
	int village_num;          // 村庄数量
	int city_mine;            // 我方城市数量
	int village_mine;         // 我方村庄数量
	int city_mark;            // 城市标记
	int city_name;            // 城市名称ID
	int lost_city_stamp;      // 失去城市时间戳
	int lost_capital_stamp;  // 失去首都时间戳
	int lost_capital_timer;   // 失去首都计时器
	int lost_capital_modifier; // 失去首都修正值

	// 各种标记和标识
	int hero_mark;            // 英雄标记
	int wonder_mark;          // 奇观标记
	int fort_mark;           // 堡垒标记
	int dock_mark;           // 码头标记
	int oil_well_mark;       // 油井标记
	int supply_mark;         // 补给标记
	int caravan_mark;        // 商队标记
	int special_mark;        // 特殊标记

	int popwin_stamp;        // 人口胜利时间戳
	int popwin_timer;        // 人口胜利计时器
	int wonderwin_stamp;     // 奇观胜利时间戳
	int wonderwin_timer;     // 奇观胜利计时器

	// 经济系统数据
	int econ[6];             // 经济状况数组
	int escrow[6];           // 托管资源数组
	int escrow_rate[6];      // 托管率数组
	int tributes[6];         // 进贡记录数组
	int base_rate[6];       // 基础生产率数组

	int worst_good;          // 最缺乏的资源类型
	int best_good;           // 最丰富的资源类型
	int shortages;           // 短缺资源数量

	// 稀有资源系统
	int reg_known_rares[64]; // 区域已知稀有资源
	int reg_unpack_merch[64]; // 区域商人解包状态
	int known_rares;         // 已知稀有资源数量
	int rares_collected[44]; // 收集的稀有资源数组

	int production_step;      // 生产步骤
	int prod_script_run;     // 生产脚本运行状态
	int script_step;         // 脚本步骤

	// 各种修正器
	int wonder_mod;          // 奇观建造修正
	int ground_mod;          // 地面单位修正
	int air_mod;             // 空军单位修正
	int sea_mod;             // 海军单位修正
	int infra_mod;           // 基础设施修正
	int defense_mod;         // 防御修正

	int gather_stamp;        // 收集时间戳
	int support_stamp;       // 支持时间戳
	int nuke_stamp;          // 核武器使用时间戳
	int flock_stamp;         // 群组时间戳

	int nukes_used;          // 使用的核武器数量
	int missiles_used;       // 使用的导弹数量

	int tech_frame;          // 科技研究时间帧
	int tech_cat_frame[4];   // 科技分类研究时间帧

	int victory_type;        // 胜利类型
	int defeat_type;         // 失败类型

	unsigned int site_mark;  // 站点标记
	int pop_cap;             // 人口上限
	int pop_issues;          // 人口问题
	int misery;              // 苦难值
	int att;                 // attrition值
	float anti_att;          // 反attrition值
	int give_att_disabled;   // 禁用给予attrition
	int take_att_disabled;   // 禁用接受attrition
	int neutral_attrition;    // 中立attrition
	int disable_building_attrition; // 禁用建筑attrition

	// 统计信息
	int units_built;         // 建造的单位总数
	int units_killed;        // 杀死的单位总数
	int units_lost;          // 损失的单位总数
	int buildings_built;     // 建造的建筑总数
	int buildings_razed;     // 摧毁的建筑总数
	int buildings_lost;     // 损失的建筑总数
	int cities_built;        // 建造的城市总数
	int cities_captured;     // 占领的城市总数
	int cities_lost;         // 损失的城市总数

	// 最高记录值
	int army_high;           // 最高军队数量
	int peasant_high;        // 最高农民数量
	int scholar_high;       // 最高学者数量
	int caravan_high;       // 最高商队数量
	int merchant_high;      // 最高商人数量
	int city_high;          // 最高城市数量
	int village_high;       // 最高村庄数量
	int population_high;    // 最高人口数量
	int city_pop_high;      // 最高城市人口

	int resources_controlled; // 控制的资源数量
	int wonders_built;       // 建造的奇观数量
	int wonders_held;       // 持有的奇观数量
	int senates_built;      // 建造的议院数量
	int tribute_sent;       // 发送的进贡数量
	int tribute_received;   // 接收的进贡数量
	int goody_box_techs;    // 宝箱获得的科技数量
	int goody_box_resources; // 宝箱获得的资源数量
	int goody_box_units;    // 宝箱获得的单位数量

	int collected[6];       // 收集的资源数组
	int supported[6];       // 支持的资源数组
	int gather_slots[6];    // 收集槽位数组
	int filled_gather_slots[6]; // 已填充的收集槽位
	int gather_slots_high[6]; // 最高收集槽位记录

	int trade_profit;       // 贸易利润
	int forts_built;        // 建造的堡垒数量
	int units_bribed;       // 贿赂的单位数量

	int age_stamp[7];         // 时代解锁时间戳数组，记录7个时代（古典/中世纪/火药/启蒙/工业/现代/信息）的解锁时间
	float plunder_scale;       // 掠夺规模系数，影响从战斗中获得的战利品和资源掠夺比例
	int bonus_cap[7];         // 时代奖励上限数组，记录每个时代可获得的特殊奖励或加成的最大数量限制

	int move_orders_issued;  // 发出的移动命令数量
	int column_orders_issued; // 发出的列队命令数量

	// 各种状态标志
	int active;              // 活跃状态
	int control;             // 控制状态
	int combat;              // 战斗状态
	int non_siege;           // 非围攻状态
	int sea_combat;          // 海战状态
	int siege;               // 围攻状态
	int defense;             // 防御状态
	int attack;              // 攻击状态
	int pop;                 // 人口状态
	int naval;               // 海军状态
	int air;                 // 空军状态
	int missile;             // 导弹状态
	int transports;          // 运输状态
	int fishermen;           // 渔民状态
	int idle_fishermen;      // 闲置渔民数量
	int peasants;            // 农民状态
	int scholars;            // 学者状态
	int caras;               // 商队状态
	int merchants;           // 商人状态
	int scouts;              // 侦察兵状态
	int fighters;            // 战斗机状态
	int bombers;             // 轰炸机状态
	int cruise;              // 巡航导弹状态
	int nuke;                // 核武器状态

	// 最佳属性记录
	int best_pop;            // 最佳人口
	int best_attack;         // 最佳攻击力
	int best_armor;          // 最佳装甲
	int best_move;           // 最佳移动力

	int wars;                // 战争数量
	int allies;              // 盟友数量
	int active_wars;         // 活跃战争数量
	int active_wars_with;    // 与谁进行活跃战争
	int free_peasants;      // 自由农民数量
	int xport_peasants;     // 运输农民数量
	int gatherers;          // 收集者数量

	int home_reg;           // 家乡区域
	int attacked;           // 被攻击状态
	int full_cities;         // 满人口城市数量
	int explored;           // 已探索区域
	int territory;          // 领土面积
	int territory_high;     // 最高领土记录
	int effective_pop;      // 有效人口
	int other_team_terr;     // 其他队伍领土
	int min_other_team_terr; // 最小其他队伍领土
	int my_team_terr;       // 我方队伍领土

	int scholar_militia;    // 学者民兵数量
	int retargets;          // 重新目标次数

	// 单位队列统计
	int barracks_units;     // 兵营单位数量
	int stable_units;       // 马厩单位数量
	int factory_units;      // 工厂单位数量
	int combat_units;       // 战斗单位数量
	int dock_units;         // 码头单位数量
	int air_units;          // 空军单位数量

	int barracks_queued;    // 兵营队列数量
	int stable_queued;      // 马厩队列数量
	int factory_queued;     // 工厂队列数量
	int combat_queued;      // 战斗队列数量
	int dock_queued;        // 码头队列数量
	int air_queued;         // 空军队列数量

	int peasants_garr;      // 农民驻军数量
	int stable_garr;        // 马厩驻军数量
	int scout_garr;         // 侦察兵驻军数量
	int barracks_garr;      // 兵营驻军数量

	int nukes_launched;     // 发射的核弹数量
	int nukes_in_flight;    // 飞行中的核弹数量

	int frame_attacked;     // 被攻击的帧数
	int attacked_by;        // 被谁攻击

	int gov_hero_frame;     // 政府英雄出现帧数
	int frame_battle;       // 战斗发生帧数

	// 战斗统计数组
	unsigned __int16 average_death_rate;        // 平均死亡率
	unsigned __int16 average_kill_rate;          // 平均击杀率
	unsigned __int16 average_damage_rate;       // 平均伤害率
	unsigned __int16 average_hit_rate;          // 平均命中率
	unsigned __int16 deaths_current_frame;      // 当前帧死亡数
	unsigned __int16 kills_current_frame;        // 当前帧击杀数
	unsigned __int16 hits_current_frame;        // 当前帧命中数
	unsigned __int16 damage_current_frame;       // 当前帧伤害数
	unsigned __int16 deaths_fifteen_seconds;     // 15秒内死亡数
	unsigned __int16 kills_fifteen_seconds;     // 15秒内击杀数
	unsigned __int16 hits_fifteen_seconds;       // 15秒内命中数
	unsigned __int16 damage_fifteen_seconds;    // 15秒内伤害数

	// 区域统计数组
	unsigned __int16 strategy[64];              // 战略数组
	unsigned __int16 reg_active[127];           // 区域活跃度数组
	unsigned __int16 reg_combat[127];           // 区域战斗强度数组
	unsigned __int16 reg_defense[64];           // 区域防御强度数组
	unsigned __int16 reg_attack[127];           // 区域攻击强度数组
	unsigned __int16 reg_pop[64];               // 区域人口数组
	unsigned __int16 reg_naval[63];              // 区域海军强度数组
	unsigned __int16 reg_transports[63];         // 区域运输能力数组
	unsigned __int16 reg_peasants[64];           // 区域农民数量数组
	unsigned __int16 reg_free_peasants[64];      // 区域自由农民数组
	unsigned __int16 reg_xport_peasants[64];     // 区域运输农民数组
	unsigned __int16 reg_gatherers[64];          // 区域收集者数组
	unsigned __int16 reg_gather_slots[64];       // 区域收集槽位数组
	unsigned __int16 reg_cities[64];             // 区域城市数组
	unsigned __int16 reg_forts[64];              // 区域堡垒数组
	unsigned __int16 reg_docks[64];               // 区域码头数组
	unsigned __int16 reg_land[64];                // 区域陆地数组
	unsigned __int16 reg_terr[64];               // 区域领土数组
	unsigned __int16 reg_buildings[64][129];      // 区域建筑数组（二维）
	unsigned __int16 num_buildings[129];          // 建筑数量数组
	unsigned __int16 high_buildings[129];        // 最高建筑记录数组
	unsigned __int16 num_units[352];             // 单位数量数组
	unsigned __int16 num_queued[806];             // 队列数量数组

	int last_building_finished[129];            // 最后完成的建筑时间
	int last_unit_finished[352];                 // 最后完成的单位时间

	unsigned __int8 ages_queued;                // 已排队时代数量
	unsigned __int8 epochs_queued;              // 已排队纪元数量
	unsigned __int8 reg_attacked[64];           // 区域被攻击状态
	unsigned __int8 reg_wars[64];               // 区域战争状态
	unsigned __int8 reg_neutrals[64];           // 区域中立状态
	unsigned __int8 reg_allies[64];             // 区域盟友状态
	unsigned __int8 num_bonus_cards[38];         // 奖励卡数量数组
	unsigned __int8 num_ctw_rate_bonuses[6];     // CTW比率奖励数量

	int defeat_stamp;                           // 失败时间戳
	unsigned __int8 team_color;                 // 队伍颜色
	unsigned __int8 ally_mask;                  // 盟友掩码

	Diplomacy dip[8];                          // 外交关系数组
	BitMask_806 tech;                         // 科技位掩码
	BitMask_806 tech_at_start;                // 起始科技位掩码
	BitMask_806 obs_flags;                    // 观察标志位掩码
	BitMask_17 conquest_wonders;              // 征服奇观位掩码
	BitMask_17 conquest_wonders_in_game;      // 游戏中征服奇观位掩码
	BitMask_24 conquest_racial_powers;        // 征服种族能力位掩码
	BitMask_44 rare;                          // 稀有资源位掩码
	BitMask_44 rare_owned;                    // 拥有稀有资源位掩码
	BitMask_44 rare_conquest;                 // 征服稀有资源位掩码

	Personality pers;                          // AI个性设置
	Sites sites;                              // 站点集合
	SimpleArrayInt mil_trainers;              // 军事训练者数组
	SimpleArrayInt new_rares;                 // 新稀有资源数组
	SimpleArrayInt oil_patches;               // 油田数组

	String prod_script;                       // 生产脚本

	LeaderDataEncrypt* data_encrypted;        // 加密的领导者数据指针

	int warn_cities_stamp;                    // 城市警告时间戳
	int warn_caravans_stamp;                  // 商队警告时间戳
	int warn_universities_stamp;              // 大学警告时间戳

	MakeList make_list;                       // 制造列表
};

// 领导者输出类 - 继承自LeaderData，8字节对齐
struct  __declspec(align(8)) LeaderOut : LeaderData
{
	// 继承LeaderData的所有成员
	// 8字节对齐确保在内存中的高效访问
	// 可能用于存储领导者的输出数据或状态信息
};

// 领导者类 - 多重继承自LeaderOut和GameAccess，4字节对齐
struct __declspec(align(4)) Leader : LeaderOut, GameAccess
{
	// 继承层次：
	// Leader -> LeaderOut -> LeaderData (包含所有领导者数据)
	// Leader -> GameAccess (游戏访问接口)

	_BYTE gap6EE8;  // 偏移量0x6EE8处的填充字节或标志位
	// 用途可能包括：
	// 1. 内存对齐填充，确保结构体满足4字节对齐
	// 2. 布尔标志位，如 is_active, is_initialized 等
	// 3. 状态标志，记录领导者特定状态
	// 4. 占位符，为未来扩展预留空间
};

// 领导者集合类 - 管理多个领导者
const struct  Leaders : GameAccess
{
	Leader list[10];           // 领导者数组，最多10个领导者
	// 索引0-9分别对应不同的领导者实例
	// 每个Leader对象包含完整的领导者数据和状态

	String prod_script_path;    // 生产脚本路径字符串
	// 存储领导者AI行为脚本的文件路径
	// 可能用于动态加载领导者的行为逻辑
	// String类型包含完整的字符串管理功能（长度、容量、哈希等）
};

// 排行榜监听器接口
struct  ILeaderboardsListener
{
	int unk;  // 虚函数表指针 ILeaderboardsListener_vtbl* __vftable /*VFT*/
};

// 游戏设置结构体 - 存储多人游戏的各种设置选项
// 重命名说明：原结构体名$3613723A829A9B5E888FA99E5C94C5DA是编译器生成的随机名
// 重命名为GameSettingsFields，明确表示这是游戏设置的字段集合
struct GameSettingsFields
{
	unsigned __int8 team_style;        // 队伍风格：自由对战/固定队伍等
	unsigned __int8 map_style;         // 地图风格：大陆、岛屿、高原等
	unsigned __int8 map_size;          // 地图尺寸：小、中、大等
	unsigned __int8 players;           // 玩家数量
	unsigned __int8 max_observers;     // 最大观察者数量
	unsigned __int8 game_speed;        // 游戏速度：慢、正常、快等
	unsigned __int8 game_rules;        // 游戏规则：标准、死亡竞赛等
	unsigned __int8 difficulty;        // 难度等级：简单、普通、困难等
	unsigned __int8 starting_town;     // 起始城镇设置
	unsigned __int8 starting_resources; // 起始资源量
	unsigned __int8 starting_resources2; // 起始资源量2（扩展）
	unsigned __int8 tech_cost;         // 科技成本：正常、加倍等
	unsigned __int8 reveal_map;        // 地图揭示：已探索、全部可见等
	unsigned __int8 pop_limit;         // 人口上限
	unsigned __int8 rush_rules;        // 快攻规则限制
	unsigned __int8 cannon_times;      // 加农炮出现时间设置
	unsigned __int8 starting_technology; // 起始科技
	unsigned __int8 starting_technology2; // 起始科技2（扩展）
	unsigned __int8 ending_technology; // 结束科技条件
	unsigned __int8 elimination;       // 淘汰模式设置
	unsigned __int8 victory;          // 胜利条件
	unsigned __int8 wonderwin;        // 奇观胜利条件
	unsigned __int8 score_goal;       // 分数目标
	unsigned __int8 popwin;           // 人口胜利条件
	unsigned __int8 time_limit;       // 时间限制
	unsigned __int8 chairs;          // 玩家席位设置
	unsigned __int8 econwin;         // 经济胜利条件
	unsigned __int8 scenario_type;    // 场景类型
	unsigned __int8 script_type;     // 脚本类型
	unsigned __int8 mods;           // MOD启用状态
};

// 游戏设置联合体 - 允许以结构体或字节数组方式访问设置数据
// 重命名说明：原联合体名$F9F0869223217A447C2B2C70CE08D2EF是编译器生成的随机名
// 重命名为GameSettingsUnion，明确表示这是游戏设置的联合体
union GameSettingsUnion
{
	// 重命名说明：原字段名__s0是编译器生成的随机名
	// 重命名为fields，明确表示这是通过结构体字段访问的方式
	GameSettingsFields fields;         // 结构体形式访问
	unsigned __int8 data[30];          // 字节数组形式访问
};

// 网络玩家基类
const struct  NetPlayer
{
	int unk;  // 虚函数表指针 NetPlayer_vtbl* __vftable /*VFT*/
};

// 玩家数据结构体 - 存储单个玩家的所有游戏数据
struct  __declspec(align(4)) Player : GameAccess
{
	// 同步统计信息（累积值）
	int synced_used_zoom_control;           // 同步：使用缩放控制次数
	int synced_frames_zoomed_in;            // 同步：放大状态帧数
	int synced_frames_zoomed_out;           // 同步：缩小状态帧数
	int synced_clicks;                      // 同步：点击次数
	int synced_hotkeys;                     // 同步：快捷键使用次数
	int synced_minimap_clicks;              // 同步：小地图点击次数
	int synced_mainmap_clicks;              // 同步：主地图点击次数
	int synced_cheated;                     // 同步：作弊次数
	int synced_control_groups_formed;       // 同步：编队创建次数
	int synced_control_groups_activated;    // 同步：编队激活次数

	// 时间戳和状态
	int caravan_frame;                      // 商队创建时间帧
	int pop_cap_frame;                      // 人口上限达到时间帧

	// 玩家标志和属性
	unsigned __int16 flags;                  // 玩家状态标志位
	unsigned __int8 tribe;                  // 部落/文明类型
	unsigned __int8 who;                     // 玩家ID（0-7）
	char team;                              // 队伍ID
	unsigned __int8 handicap;               //  handicap设置
	unsigned __int8 play;                   // 游戏状态：进行中/观察等
	unsigned __int8 pauses;                  // 暂停次数
	unsigned __int8 diff;                    // 难度设置

	// 排名和身份信息
	int elo;                                // ELO等级分
	String name;                            // 玩家名称
	String platform;                        // 游戏平台
	String platformID;                      // 平台ID

	// 网络相关
	const NetPlayer* net_player;            // 网络玩家对象指针

	// 累积统计信息（当前会话）
	unsigned __int8 accum_used_zoom_control;  // 累积：缩放控制使用
	unsigned __int8 accum_frames_zoomed_in;  // 累积：放大帧数
	unsigned __int8 accum_frames_zoomed_out; // 累积：缩小帧数
	unsigned __int8 accum_clicks;            // 累积：点击次数
	unsigned __int8 accum_hotkeys;           // 累积：快捷键使用
	unsigned __int8 accum_minimap_clicks;    // 累积：小地图点击
	unsigned __int8 accum_mainmap_clicks;    // 累积：主地图点击
	unsigned __int8 accum_cheated;            // 累积：作弊次数
	unsigned __int8 accum_control_groups_formed;   // 累积：编队创建
	unsigned __int8 accum_control_groups_activated; // 累积：编队激活
};

// 字符串结构体 - 存储宽字符和窄字符字符串
const struct  SkyString
{
	wchar_t* m_Data;           // 宽字符字符串数据指针
	char* m_narrowData;        // 窄字符字符串数据指针
	unsigned int m_Length;     // 字符串当前长度
	unsigned int m_AllocatedLength; // 字符串分配的内存长度
};

// 字符串列表结构体 - 管理字符串集合
struct  SkyStringList
{
	SkyString* m_Strings;      // 字符串数组指针
	SkyString* m_Symbols;      // 符号字符串数组指针
	unsigned int m_Count;       // 字符串数量
	unsigned int m_Capacity;    // 列表容量
	unsigned int m_TextBufSize; // 文本缓冲区大小
};

// MOD资源结构体 - 存储MOD的各种资源路径
struct  ModAssets
{
	SkyStringList root;        // 根目录资源列表
	SkyStringList ai;          // AI脚本资源列表
	SkyStringList art;         // 美术资源列表
	SkyStringList conquest;    // 征服模式资源列表
	SkyStringList data;        // 数据文件资源列表
	SkyStringList mapstyles;   // 地图风格资源列表
	SkyStringList scenario;    // 场景资源列表
	SkyStringList sounds;      // 音效资源列表
	SkyStringList terrain;     // 地形资源列表
	SkyStringList tribes;      // 部落资源列表
	SkyStringList replays;     // 回放文件资源列表
	SkyStringList saves;       // 存档文件资源列表
	SkyStringList conflicts;   // 冲突文件资源列表
};

// 命令索引枚举 - 定义游戏中所有单位命令类型
enum OrderIndex : __int32
{
	NONE = 0x0,               // 无命令
	MOVE_TO = 0x1,            // 移动到指定位置
	ATTACK_TO = 0x2,          // 攻击移动到指定位置
	EXPLORE_TO = 0x3,         // 探索到指定位置
	FLEE_TO = 0x4,            // 撤退到指定位置
	PATROL = 0x5,             // 巡逻
	BUILD_AT = 0x6,           // 在指定位置建造
	GATHER = 0x7,             // 收集资源
	BOARD_SHIP = 0x8,         // 登船
	AWAIT_BOARD = 0x9,        // 等待登船
	ATTACK = 0xA,             // 攻击目标
	FOLLOW = 0xB,             // 跟随目标
	GUARD = 0xC,              // 守卫
	REPAIR = 0xD,             // 修理
	CAST_SPELL = 0xE,         // 施放法术
	TRADE_ROUTE = 0xF,        // 贸易路线
	STRAFE = 0x10,            // 扫射
	AIR_PATROL = 0x11,        // 空中巡逻
	CHANGE_FORM = 0x12,       // 改变形态
	GROUP_MOVE = 0x13,        // 编队移动
	GROUP_ATTACK = 0x14,      // 编队攻击
	GROUP_ATTACK_TO = 0x15,   // 编队攻击移动到
	GROUP_PATROL = 0x16,      // 编队巡逻
	ATTACK_GROUND = 0x17,     // 攻击地面
	AIR_ATTACK_GROUND = 0x18, // 空中攻击地面
	SPECIAL_ANIM = 0x19,      // 特殊动画
	GARRISON = 0x1A,         // 驻守
	THINK = 0x1B,             // 思考（AI决策）
	NUM_UNIT_ORDERS = 0x1C,   // 单位命令总数
};

// 存储点位置类型别名
typedef OrderIndex StoragePoint_Location;

// Windows文件时间结构体
struct A_FILETIME
{
	DWORD dwLowDateTime;   // 文件时间的低32位
	DWORD dwHighDateTime;  // 文件时间的高32位
};

// MOD包结构体 - 存储单个MOD的完整信息
struct  ModPackage
{
	unsigned __int64 m_author;                // MOD作者ID
	unsigned __int64 m_workshopID;            // 创意工坊ID
	ModAssets m_assets;                      // MOD资源
	SkyString m_modTitle;                    // MOD标题
	SkyString m_modInstallDirectory;         // MOD安装目录
	unsigned __int64 m_sizeInBytes;           // MOD文件大小（字节）
	StoragePoint_Location m_storagePoint;     // 存储位置
	int m_priority;                          // 加载优先级
	int m_numConflicts;                      // 冲突数量
	int m_numFiles;                         // 文件数量
	bool m_enabled;                         // 是否启用
	bool m_active;                          // 是否激活
	int unk[3];                             // Steam创意工坊标签向量 std::vector<enum SteamWorkshopTags, std::allocator<enum SteamWorkshopTags> > m_steamTags;
	A_FILETIME m_workshopTimestamp;          // 创意工坊时间戳
};

// 游戏MOD结构体 - 游戏中的MOD管理
struct  GameMod : GameAccess
{
	int unk;                // 虚函数表指针 GameMod_vtbl* __vftable /*VFT*/
	ModPackage* mMod;       // MOD包指针
	String mName;           // MOD名称
	String mDescription;    // MOD描述
	String mVersion;       // MOD版本
	unsigned int mChecksum; // 校验和
	unsigned int mTotalSize; // 总大小
};

// 游戏信息结构体 - 存储整个游戏的基本信息
struct   __declspec(align(4)) GameInfo : GameAccess
{
	unsigned int version;                    // 游戏版本
	unsigned int seed;                       // 随机种子
	int checksum_deep;                      // 深度校验和
	int checksum_window_size;               // 校验和窗口大小
	int checksum_failure_threshold;         // 校验和失败阈值
	unsigned int flags;                      // 游戏标志位
	// 重命名说明：原字段名___u7是编译器生成的随机名
   // 重命名为gameSettings，明确表示这是游戏的设置数据
	GameSettingsUnion gameSettings;         // 游戏设置联合体
	__declspec(align(4)) Player player[8];   // 玩家数组（最多8人）
	bool is_ranked;                         // 是否为排位赛
	bool elo_penalty_applied;               // 是否应用ELO惩罚
	__declspec(align(4)) int elo_loss;      // ELO损失
	int elo_win;                           // ELO胜利
	GameMod current_mod;                   // 当前使用的MOD
	String scenario_script;                // 场景脚本
	String scenario_path;                  // 场景路径
	String scenario_dir;                   // 场景目录
	String save_name;                     // 存档名称
};

// 标准库文件结构体
struct A_iobuf
{
	void* _Placeholder;  // 占位符，实际为FILE结构
};

// 文件结构体 - 封装文件操作
const struct  File
{
	void* gzfile;        // gzip文件指针（压缩文件）
	A_iobuf* file;        // 标准文件指针
	String name;         // 文件名
	int flags;           // 文件标志（读写模式等）
	int size;           // 文件大小
};

// 单位平衡结构体 - 管理单位数据平衡性
struct  UnitBalance : GameAccess
{
	_BYTE gap0[4];        // 对齐填充
	File file;            // 单位平衡数据文件
	int unk[14];         // 数据包数组 Array<UnitBalancePacket> packets[2];
	int unk1[14];        // 数据包大小数组 sizes[2];
	int visible;         // 可见性标志
	int runs;            // 运行次数
	int land;            // 陆地单位计数
	int total_runs;      // 总运行次数
	int starting;        // 起始状态
	int scan_packet0;    // 扫描数据包0
	int scan_packet1;    // 扫描数据包1
	int scan_runs;       // 扫描运行次数
	int scan_slots0;     // 扫描槽位0
	int scan_slots1;     // 扫描槽位1
	int scan_size;       // 扫描大小
	int land0;          // 陆地单位0
	int land1;          // 陆地单位1
	int tribe0;         // 部落0
	int tribe1;         // 部落1
	int check_frame;    // 检查帧
	int unk2[14];       // 设置数据包数组 Array<UnitBalancePacket> setup_packets[2];
	int attacks[2];     // 攻击次数统计
	int hits[2];        // 命中次数统计
	int damage[2];      // 伤害值统计
	int damage_hits[2]; // 造成伤害的命中次数统计
};

// 游戏索引枚举 - 定义不同的游戏模式
enum GameIndex : __int32
{
	GAME_NONE = 0xFFFFFFFF,           // 无游戏
	GAME_MAIN_MENU = 0x0,            // 主菜单
	GAME_SOLO = 0x1,                 // 单人游戏
	GAME_MULTIPLAYER = 0x2,          // 多人游戏
	GAME_GAMESPY_LOBBY = 0x3,        // Gamespy大厅
	GAME_GAMESPY_LOBBY_QM = 0x4,     // Gamespy大厅快速匹配
	GAME_GAMESPY_ARCADE = 0x5,       // Gamespy街机模式
	GAME_SCENARIO = 0x6,             // 场景模式
	GAME_LOAD_SCENARIO = 0x7,        // 加载场景
	GAME_SCENARIO_DIRECT = 0x8,      // 直接场景
	GAME_CONQUEST = 0x9,             // 征服模式
	GAME_TUTORIAL = 0xA,             // 教程模式
	GAME_SKILLTEST = 0xB,            // 技能测试
	GAME_PROFILE = 0xC,              // 档案模式
	GAME_PLAYBACK = 0xD,             // 回放模式
	GAME_UNIT_BALANCE = 0xE,         // 单位平衡测试
	GAME_EDITOR = 0xF,              // 地图编辑器
	GAME_UNIT_EDITOR = 0x10,        // 单位编辑器
	GAME_LOAD_SOLO = 0x11,          // 加载单人游戏
	GAME_TEST_PATCH = 0x12,         // 测试补丁
	GAME_PATCH = 0x13,              // 补丁模式
	GAME_LEADERBOARDS = 0x14,       // 排行榜
	GAME_QUIT = 0x15,               // 退出游戏
};

// 网络库类型枚举 - 定义网络后端
enum Game_eNetLibType : __int32
{
	NETLIB_TYPE_STEAM = 0x0,        // Steam网络
	NETLIB_TYPE_LOCAL = 0x1,        // 本地网络
	NETLIB_TYPE_COUNT = 0x2,        // 网络类型数量
	NETLIB_TYPE_INVALID = 0xFFFFFFFF, // 无效网络类型
};

// Steam排行榜类型枚举
enum SteamLeaderboards_Leaderboard : __int32
{
	LDB_DEATHMATCH = 0x0,      // 死亡竞赛排行榜
	LDB_FASTGAME = 0x1,        // 快速游戏排行榜
	LDB_NORUSH = 0x2,          // 禁止快攻排行榜
	LDB_SUDDENDEATH = 0x3,     // 突然死亡排行榜
	LDB_SURVIVAL = 0x4,        // 生存模式排行榜
	NUM_LEADERBOARDS = 0x5,    // 排行榜总数
	LDB_INVALID = 0xFFFFFFFF,  // 无效排行榜
};

// Steam排行榜管理结构体
struct  SteamLeaderboards
{
	unsigned __int64 m_currentLeaderboard;     // 当前排行榜ID
	SteamLeaderboards_Leaderboard m_currentLeaderboardType; // 当前排行榜类型
	bool m_isRequestingLeaderboard;           // 是否正在请求排行榜
	bool m_isRequestingScores;                // 是否正在请求分数
	ILeaderboardsListener* m_pLeaderboardsListener; // 排行榜监听器
	int unk[8];                              // Steam回调结果：查找排行榜 CCallResult<SteamLeaderboards, LeaderboardFindResult_t>
	int unk1[8];                            // Steam回调结果：上传分数 CCallResult<SteamLeaderboards, LeaderboardScoreUploaded_t>
	int unk2[8];                            // Steam回调结果：下载分数 CCallResult<SteamLeaderboards, LeaderboardScoresDownloaded_t>
};

// 游戏主结构体 - 继承自排行榜监听器和游戏访问接口，管理整个游戏状态
const struct  Game : ILeaderboardsListener, GameAccess
{
	_BYTE gap4[8];                          // 对齐填充（8字节）
	GameInfo info;                          // 游戏基本信息

	// 时间与帧数控制
	int frame;                              // 当前游戏帧数
	int frame_to_break;                     // 断点帧数（用于调试）
	int playing;                            // 游戏进行状态标志
	int loading;                            // 游戏加载状态标志
	int tick;                               // 游戏逻辑刻计数器

	// 经济市场系统
	int market_tick;                        // 市场更新计时器
	int market[6];                          // 6种资源市场价格数组
	int market_flux[6];                     // 市场价格波动值
	int next_flux[6];                       // 下次波动时间
	int delta_flux[6];                      // 波动变化量
	int flux_length[6];                     // 波动持续时间

	// 游戏状态管理
	int on_team[8];                         // 队伍成员状态数组
	int starting[6];                        // 起始资源状态
	int wonders[17];                        // 奇观建造状态数组（17个奇观）
	int start_list[8];                      // 玩家起始位置列表
	int start_index[8];                     // 玩家起始索引

	// 游戏规模统计
	int num_players;                        // 玩家总数
	int num_nations;                        // 国家/文明总数
	int num_teams;                          // 队伍总数
	int num_sides;                          // 阵营总数
	int num_def_units;                      // 默认单位类型数量
	int num_def_builds;                     // 默认建筑类型数量
	int num_def_walls;                      // 默认城墙类型数量
	int num_goods;                          // 资源类型数量
	int num_items;                          // 物品类型数量
	int num_objects;                        // 对象类型数量

	// 特殊游戏模式
	int musical_chairs;                     // 抢椅子模式标志
	int terra_cotta_total;                  // 兵马俑总数（特殊胜利条件）

	// 世界统计
	int world_pop;                          // 世界总人口
	int world_cities;                       // 世界总城市数
	int world_villages;                     // 世界总村庄数
	int total_units;                        // 世界总单位数
	int everyone_mask;                      // 全员掩码（位运算用）
	int armageddon;                         // 末日模式标志

	// 单位平衡系统
	UnitBalance balance;                    // 单位平衡数据

	// 信号量控制
	BitMask_256 semaphore;                  // 256位信号量掩码（线程同步）

	// 图形渲染系统
	int graphic_clock;                      // 图形时钟
	int graphic_tick;                       // 图形刻
	int graphic_loop;                       // 图形循环计数器
	unsigned int graphic_dt;                 // 图形帧间隔时间
	unsigned int graphic_error;             // 图形误差累计
	float graphic_percent;                   // 图形渲染完成百分比
	int graphic_last_frame;                 // 上一图形帧数

	// 截图系统
	String screen_shot_name;                // 截图文件名
	String screen_shot_dir;                 // 截图目录

	// 性能预测与计时
	unsigned int predicted_render_time;      // 预测渲染时间
	unsigned int predicted_render_time_accum; // 累计预测渲染时间
	unsigned int predicted_frame_time;       // 预测帧时间
	unsigned int average_predicted_render_time_accum; // 平均预测渲染时间累计
	unsigned int average_predicted_frame_time_accum;  // 平均预测帧时间累计
	unsigned int last_frame_time;           // 上一帧时间
	unsigned int game_frame_time;           // 游戏帧时间

	// UI状态
	bool modal_is_open;                     // 模态窗口是否打开

	// 自动保存/加载
	unsigned int auto_save_load;            // 自动保存加载标志

	// 帧率统计
	unsigned int game_fps_timing[30];       // 30帧时间记录数组
	int game_fps_pos;                       // 帧时间数组当前位置
	unsigned int game_fps_timing_accum;     // 帧时间累计
	float game_sprite_scale;                // 游戏精灵缩放比例

	// 渲染控制
	int game_frames_to_render_frames;       // 游戏帧到渲染帧比例
	int fast_forward_frame;                 // 快进帧数

	// 性能监控数组
	unsigned int average_render_time[20];   // 平均渲染时间数组（20个样本）
	unsigned int average_game_time[20];     // 平均游戏时间数组（20个样本）
	int avg_render_index;                   // 渲染时间数组索引
	int avg_game_index;                     // 游戏时间数组索引

	// 测试与调试
	int test_delay_min;                     // 测试最小延迟
	int test_delay_max;                     // 测试最大延迟
	int mem_log_frames;                     // 内存日志记录帧间隔
	int reload_rules;                       // 重新加载规则标志

	// 游戏模式管理
	GameIndex auto_game_type;               // 自动游戏类型

	// 输入系统
	unsigned __int8 prevFrameKeystate[256];  // 上一帧键盘状态（256键）
	unsigned __int8 keystate[256];          // 当前帧键盘状态（256键）

	// 网络系统
	Game_eNetLibType m_netlib_type;         // 网络库类型（Steam/Local）
	bool mDataChannelTimeout;              // 数据通道超时标志

	// Steam集成
	SteamLeaderboards m_steamLeaderboards;  // Steam排行榜系统
};



// 领导者选项数据结构 - 存储领导者的基本配置信息
struct  LeaderOptionData : GameAccessConst
{
	int who;                    // 玩家ID标识
	int peasants;              // 农民数量配置
	int peasants_wait;         // 等待中的农民数量
	int buildings;             // 建筑数量配置
	BitMask_32 flags;          // 32位标志位掩码，存储各种选项开关状态
};

// 领导者选项输出结构 - 继承自LeaderOptionData，用于数据输出
const struct  LeaderOptionOut : LeaderOptionData
{
	// 无新增成员，纯数据传递接口
};

// 领导者选项完整结构 - 组合了数据层和访问层
struct  LeaderOption : LeaderOptionOut, GameAccess
{
	// 继承两个基类的所有功能
};

// 领导者选项集合 - 管理多个领导者的选项配置
const struct  LeaderOptions : GameAccess
{
	LeaderOption list[10];     // 最多10个领导者的选项数组
};

// 命令基类
struct Command
{
	unsigned __int8 command_type;  // 命令类型标识符
};

// 领导者选项命令 - 特殊的命令结构，包含领导者选项数据
const struct __declspec(align(1)) LeaderOptionsCommand : Command
{
	LeaderOptionData leader_option;  // 内嵌的领导者选项数据
};

// 坐标结构 - 存储位置信息
struct  Coord
{
	int value;  // 坐标值，可能是绝对坐标或相对偏移
};

// RGB颜色分量结构
struct RGBAComponent
{
	unsigned __int8 red;     // 红色分量 (0-255)
	unsigned __int8 green;   // 绿色分量 (0-255)
	unsigned __int8 blue;    // 蓝色分量 (0-255)
	unsigned __int8 alpha;   // 透明度分量 (0-255)
};

// 颜色联合体 - 支持多种颜色表示方式
union ColorUnion
{
	RGBAComponent components;  // RGB分量形式
	unsigned int packedValue;   // 32位整型颜色值
};

// 颜色结构 - 完整的颜色表示，支持多种格式
const struct __declspec(align(4)) Color
{
	ColorUnion data;           // 基础颜色数据
	unsigned __int16 format555; // 16位555格式颜色 (5-5-5 RGB)
	unsigned __int16 format565; // 16位565格式颜色 (5-6-5 RGB)
	unsigned __int8 flags;      // 颜色标志位
	unsigned __int8 paletteIndex; // 调色板索引
};

// 军队数据结构 - 存储军队的基本状态和信息
const struct  ArmyData : GameAccessConst
{
	__int16 valid;              // 有效性标志 (1=有效, 0=无效)
	__int16 army;               // 军队ID标识
	int status;                 // 军队状态 (移动、攻击、防御等)
	int reg;                    // 所属区域ID
	int role;                   // 军队角色 (进攻、防御、侦察等)
	int num_units;              // 单位总数
	int num_captains;           // 队长/军官数量
	int num_standard;           // 标准单位数量
	int num_decoys;             // 诱饵/假目标数量
	int city;                   // 关联的城市ID
	int navy;                   // 海军标识 (1=海军, 0=陆军)
	int human_frame;            // 最后人工操作的时间帧
	int hurry;                  // 急行军标志
	int target_o;               // 目标对象ID
	int target_who;             // 目标玩家ID
	Coord x;                    // X坐标
	Coord y;                    // Y坐标
	int angle;                  // 朝向角度
	int rally_dist;             // 集结距离
	WCoord muster_x;            // 集结地点X坐标 (世界坐标)
	WCoord muster_y;            // 集结地点Y坐标 (世界坐标)
	int muster_angle;           // 集结朝向角度
	int list[16];               // 单位ID列表 (最多16个单位)
	__int16 who;                // 所属玩家ID
	__int16 num_groups;         // 分组数量
};

// 军队输出结构 - 扩展军队数据，用于渲染和显示
struct  __declspec(align(4)) ArmyOut : ArmyData
{
	_BYTE gap98[4];  // 对齐填充，确保4字节对齐
};

// 军队完整结构 - 最终的军队对象
struct  __declspec(align(8)) Army : ArmyOut
{
	// 8字节对齐，优化内存访问
};

// 军队指针数组基类
struct __declspec(align(4)) ArrayBaseArmyPtr : ArrayBaseMaster
{
	int unk; // 虚函数表指针 ArrayBase<Army*>_vtbl* __vftable /*VFT*/
	Army** list;              // 军队指针数组
	unsigned __int8 flags;     // 数组标志位
};

// 军队指针简单复制数组
struct ArrayBaseSimpleCopyArmyPtr : ArrayBaseArmyPtr
{
	// 支持简单复制操作的军队指针数组
};

// 军队指针数组 - 添加当前索引支持
struct ArrayArmyPtr : ArrayBaseSimpleCopyArmyPtr
{
	int cur_index;  // 当前操作的索引位置
};

// 军队指针数组常量版本
const struct PtrArrayArmy : ArrayArmyPtr
{
	// 只读访问的军队指针数组
};

// 军队集合数据 - 管理多个玩家的军队
struct ArmiesData : GameAccessConst
{
	PtrArrayArmy lists[8];  // 8个玩家的军队列表数组
};

// 军队集合输出结构
const struct  __declspec(align(4)) ArmiesOut : ArmiesData
{
	_BYTE gapE0[4];  // 对齐填充
};

// 军队集合完整结构
const struct  __declspec(align(8)) Armies : ArmiesOut
{
	// 8字节对齐的完整军队集合
};

// 全局音效分类枚举 - 定义游戏中所有音效类型
enum SoundGlobalCat : __int32
{
	INVALID_SOUND_GLOBAL_CAT = 0xFFFFFFFF,  // 无效音效分类
	S_AGE_ADVANCE_PLAYER = 0x0,             // 玩家时代升级音效
	S_AGE_ADVANCE_OPPONENT = 0x1,          // 对手时代升级音效
	S_AGE_ADVANCE_ALLY = 0x2,              // 盟友时代升级音效
	S_ACCEPT_PROPOSAL = 0x3,               // 接受提议音效
	S_ALL_CLEAR = 0x4,                     // 全部清除音效
	S_ALLY_CAPITAL_RECOVERED = 0x5,        // 盟友首都收复音效
	S_ALLY_CAPITAL_TAKEN = 0x6,            // 盟友首都失守音效
	S_ALLY_RESIGNED = 0x7,                 // 盟友投降音效
	S_ALLY_UNDER_ATTACK = 0x8,             // 盟友被攻击音效
	S_ALREADY_RESEARCHING = 0x9,           // 已在研究中音效
	S_ATTRITION_WARNING = 0xA,             // 损耗警告音效
	S_BEING_ATTACKED = 0xB,                // 被攻击音效
	S_CITY_BEING_ATTACKED = 0xC,           // 城市被攻击音效
	S_BORDER_BREECHED = 0xD,               // 边境被突破音效
	S_BUTTON_CLICKED = 0xE,                // 按钮点击音效
	S_CANT_LAUNCH_NUKE = 0xF,              // 无法发射核弹音效
	S_CAPITAL_CAPTURED = 0x10,             // 首都占领音效
	S_CAPITAL_COUNTDOWN_BEGUN = 0x11,      // 首都倒计时开始音效
	S_CAPITAL_RETAKEN = 0x12,              // 首都夺回音效
	S_CAPITAL_WARNING = 0x13,              // 首都警告音效
	S_CITY_ASSIMILATED = 0x14,             // 城市同化音效
	S_CITY_UPGRADED = 0x15,                // 城市升级音效
	S_CITY_CAP_REACHED = 0x16,             // 城市上限达到音效
	S_CITY_DEPOP = 0x17,                   // 城市人口减少音效
	S_DECLINE_PROPOSAL = 0x18,             // 拒绝提议音效
	S_DEMO_CHARGE_TICK = 0x19,             // 演示收费提示音效
	S_DISBAND_ALREADY_GIVEN = 0x1A,        // 已解散单位音效
	S_DISBAND_COMPLETE = 0x1B,             // 解散完成音效
	S_ECON_CAP = 0x1C,                     // 经济上限音效
	S_ENEMY_CAP_CAPTURED = 0x1D,           // 敌方首都占领音效
	S_ENEMY_CAP_RECAPTURED = 0x1E,         // 敌方首都夺回音效
	S_ENEMY_CAP_TIMER_EXPIRED = 0x1F,      // 敌方首都计时器到期音效
	S_ENEMY_PRIEST_SPELL = 0x20,           // 敌方祭司法术音效
	S_ENEMY_RESEARCH_COMPLETE = 0x21,      // 敌方研究完成音效
	S_ENEMY_RESIGNED = 0x22,               // 敌方投降音效
	S_ENEMY_SPECIAL_FORCES_SPELL = 0x23,   // 敌方特种部队法术音效
	S_ENEMY_SPY_SPELL = 0x24,              // 敌方间谍法术音效
	S_FEEDBACK = 0x25,                     // 反馈音效
	S_FLIGHT_DISCOVERED = 0x26,            // 飞行单位发现音效
	S_FOUND_RARE_RESOURCE = 0x27,          // 发现稀有资源音效
	S_FRIEND_CAP_RECAPTURED = 0x28,        // 友方首都夺回音效
	S_FRIENDLY_CAP_CAPTURED = 0x29,         // 友方首都占领音效
	S_FRIENDLY_CAP_EXPIRED = 0x2A,         // 友方首都到期音效
	S_RALLY_POINT = 0x2B,                  // 集结点击中音效
	S_GENERAL_AMBUSH = 0x2C,               // 将军伏击音效
	S_GENERAL_AMBUSH_OFF = 0x2D,           // 将军伏击关闭音效
	S_GENERAL_DECOY = 0x2E,                // 将军诱饵音效
	S_GENERAL_MARCH = 0x2F,                // 将军行军音效
	S_GENERAL_MARCH_OFF = 0x30,            // 将军行军关闭音效
	S_GENERAL_RALLY = 0x31,                // 将军集结音效
	S_GENERAL_RALLY_OFF = 0x32,            // 将军集结关闭音效
	S_GOODY_BOX = 0x33,                    // 宝箱开启音效
	S_GOODY_POP_LOOKOUT = 0x34,            // 宝箱人口观察音效
	S_GOODY_POP_RESOURCE = 0x35,           // 宝箱资源音效
	S_GOODY_POP_TECH = 0x36,               // 宝箱科技音效
	S_GOODY_POP_UNIT = 0x37,               // 宝箱单位音效
	S_GOVERNMENT_CHANGE = 0x38,            // 政府变更音效
	S_GUNPOWDER_DISCOVERED = 0x39,         // 火药发现音效
	S_INCOMING_CHAT = 0x3A,                // 收到聊天音效
	S_INCOMING_PROPOSAL = 0x3B,            // 收到提议音效
	S_INFINITE_QUEUE = 0x3C,               // 无限队列音效
	S_INFINITE_QUEUE_OFF = 0x3D,           // 无限队列关闭音效
	S_INVALID_BUILD_LOCATION = 0x3E,       // 无效建筑位置音效
	S_INVALID_CHAT = 0x3F,                 // 无效聊天音效
	S_INVALID_ORDER = 0x40,                // 无效命令音效
	S_INVALID_PING = 0x41,                 // 无效ping音效
	S_INVALID_TARGET = 0x42,               // 无效目标音效
	S_MEET_NEW_PLAYER = 0x43,              // 遇到新玩家音效
	S_MENU_FEEDBACK = 0x44,                // 菜单反馈音效
	S_NO_NEW_TECH_FOUND = 0x45,            // 无新科技发现音效
	S_NOFF_NOFF_FOOD = 0x46,               // 食物不足提示音效
	S_NOFF_NOFF_GOLD = 0x47,               // 黄金不足提示音效
	S_NOFF_NOFF_METAL = 0x48,              // 金属不足提示音效
	S_NOFF_NOFF_OIL = 0x49,                // 石油不足提示音效
	S_NOFF_NOFF_RESOURCES = 0x4A,          // 资源不足提示音效
	S_NOFF_NOFF_TIMBER = 0x4B,             // 木材不足提示音效
	S_NOFF_NOFF_KNOWLEDGE = 0x4C,          // 知识不足提示音效
	S_NOT_ENOUGH_CRAFT = 0x4D,             // 工艺不足音效
	S_NOT_NEAR_OCEAN_FOR_TRANSPORT = 0x4E, // 不在运输海洋附近音效
	S_NUKE_DETECTED = 0x4F,                // 核弹检测到音效
	S_NUKE_HIT = 0x50,                     // 核弹命中音效
	S_NUKE_LAUNCHED = 0x51,                // 核弹发射音效
	S_NUKES_DISCOVERED = 0x52,             // 发现核武器音效
	S_ALLY_NUKES_DISCOVERED = 0x53,        // 盟友发现核武器音效
	S_ENEMY_NUKES_DISCOVERED = 0x54,       // 敌方发现核武器音效
	S_ALLY_NUKE_RESEARCH = 0x55,           // 盟友核研究音效
	S_ENEMY_NUKE_RESEARCH = 0x56,          // 敌方核研究音效
	S_PAUSE = 0x57,                        // 暂停音效
	S_PILFER = 0x58,                       // 窃取音效
	S_PING = 0x59,                         // Ping音效
	S_POP_INCREASED = 0x5A,                // 人口增加音效
	S_POP_LIMIT = 0x5B,                    // 人口限制音效
	S_POP_VICTORY_EXPIRED = 0x5C,          // 人口胜利到期音效
	S_POP_VICTORY_HALTED = 0x5D,           // 人口胜利中止音效
	S_POP_VICTORY_TIMER_BEGUN = 0x5E,      // 人口胜利计时开始音效
	S_POP_VICTORY_WARNING = 0x5F,          // 人口胜利警告音效
	S_PREF_CHANGE = 0x60,                  // 偏好改变音效
	S_PRIEST_COMPLETE = 0x61,              // 祭司完成音效
	S_RECEIVED_TRIBUTE = 0x62,             // 收到贡品音效
	S_RESEARCH_COMPLETE = 0x63,            // 研究完成音效
	S_SCOUT_ATTACKED = 0x64,               // 侦察兵被攻击音效
	S_SCOUT_IDLE = 0x65,                   // 侦察兵闲置音效
	S_SOMEONE_ELSE_LOSES = 0x66,           // 其他玩家失败音效
	S_SOUND_ALARM = 0x67,                  // 警报音效
	S_SPECIAL_FORCES_COMPLETE = 0x68,      // 特种部队完成音效
	S_SPECIAL_FORCES_JAM_ON = 0x69,        // 特种部队干扰开启音效
	S_SPECIAL_FORCES_JAM_OFF = 0x6A,       // 特种部队干扰关闭音效
	S_SPECIAL_FORCES_SNIPER = 0x6B,        // 特种部队狙击音效
	S_SPECIAL_FORCES_BLOW_TREAD = 0x6C,    // 特种部队破坏履带音效
	S_SPECIAL_FORCES_SABOTAGE_BOOM = 0x6D, // 特种部队破坏爆炸音效
	S_MISSFIRE_FROM_JAMMING = 0x6E,        // 干扰导致的哑火音效
	S_SPY_ACTION_BRIBE = 0x6F,             // 间谍行动贿赂音效
	S_SPY_COMPLETE = 0x70,                 // 间谍完成音效
	S_STOLE_TECH = 0x71,                  // 窃取科技音效
	S_THEY_DECLARE_WAR = 0x72,             // 他们宣战音效
	S_TOO_MANY_BUILDINGS = 0x73,           // 建筑过多音效
	S_WAR_WARNING = 0x74,                  // 战争警告音效
	S_WONDER_CAPTURED = 0x75,              // 奇观占领音效
	S_WONDER_DESTROYED = 0x76,             // 奇观摧毁音效
	S_WONDER_FINISHED = 0x77,              // 奇观完成音效
	S_WONDER_STARTED = 0x78,               // 奇观开始建造音效
	S_WONDER_VICTORY_START = 0x79,         // 奇观胜利开始音效
	S_WONDER_VICTORY_STOP = 0x7A,          // 奇观胜利停止音效
	S_WONDER_WARNING = 0x7B,               // 奇观警告音效
	S_YOU_CAPTURED_CITY = 0x7C,            // 你占领城市音效
	S_YOU_CHANGE_GOVERN = 0x7D,            // 你改变政府音效
	S_YOU_DECLARE_WAR = 0x7E,              // 你宣战音效
	S_YOU_LOSE = 0x7F,                     // 你失败音效
	S_YOU_RESIGN = 0x80,                   // 你投降音效
	S_YOU_WIN = 0x81,                      // 你胜利音效
	S_YOUR_CAP_TIMER_EXPIRED = 0x82,       // 你的首都计时器到期音效
	S_YOUR_CAPITAL_ATTACKED = 0x83,        // 你的首都被攻击音效
	S_YOUR_CAPITAL_RECOVERED = 0x84,       // 你的首都收复音效
	S_YOUR_CAPITAL_TAKEN = 0x85,           // 你的首都失守音效
	S_YOUR_CITY_CAPTURED = 0x86,           // 你的城市被占领音效
	S_GAME_START_COUNTDOWN = 0x87,         // 游戏开始倒计时音效
	S_CONTROL_GROUP_ACTIVATED = 0x88,      // 控制组激活音效
	S_SCREEN_GROUP_ACTIVATED = 0x89,       // 屏幕组激活音效
	S_CONTROL_GROUP_FORMED = 0x8A,         // 控制组形成音效
	S_SCREEN_GROUP_FORMED = 0x8B,          // 屏幕组形成音效
	S_CONSTRUCTION_BLOCKED = 0x8C,         // 建筑被阻挡音效
	S_BUILDING_DROPPED = 0x8D,             // 建筑放置音效
	S_WONDER_ASSED_OFF = 0x8E,             // 奇观分配关闭音效
	S_GAMESTART = 0x8F,                    // 游戏开始音效
	S_BUILDING_PLUNDERED = 0x90,           // 建筑掠夺音效
	S_CARAVAN_PLUNDERED = 0x91,            // 商队掠夺音效
	S_FIRST_CARAVAN = 0x92,                // 第一支商队音效
	S_FIRST_GATHER_BUILDING = 0x93,        // 第一个收集建筑音效
	S_GUARD_ACK = 0x94,                    // 守卫确认音效
	S_FOLLOW_ACK = 0x95,                   // 跟随确认音效
	S_AUTO_EXPLORE_ACK = 0x96,             // 自动探索确认音效
	S_BUILDING_QUEUE_FULL = 0x97,          // 建筑队列已满音效
	S_UNIT_PLACEMENT_BLOCKED = 0x98,       // 单位放置被阻挡音效
	S_CITY_LIMIT_REACHED = 0x99,           // 达到城市上限音效
	S_MISSILE_SHIELD = 0x9A,               // 导弹防御音效
	S_TIME_LIMIT_WARNING = 0x9B,           // 时间限制警告音效
	S_ENEMY_SIGHTED = 0x9C,                // 发现敌人音效
	S_RETURN_TO_BASE_ACK = 0x9D,           // 返回基地确认音效
	S_RECALL_AIRCRAFT_ACK = 0x9E,          // 召回飞机确认音效
	S_REPEAT_ORDERS_ON_ACK = 0x9F,         // 重复命令开启确认音效
	S_REPEAT_ORDERS_OFF_ACK = 0xA0,        // 重复命令关闭确认音效
	S_SCRAMBLE_ACK = 0xA1,                 // 紧急起飞确认音效
	S_HALT_ACK = 0xA2,                     // 停止确认音效
	S_EJECT_ACK = 0xA3,                    // 弹射确认音效
	S_BACK_TO_WORK_ACK = 0xA4,             // 返回工作确认音效
	S_TRANSPORT_ON_ACK = 0xA5,             // 运输开启确认音效
	S_TRANSPORT_OFF_ACK = 0xA6,            // 运输关闭确认音效
	S_FARM_GATHER_ACK = 0xA7,              // 农场收集确认音效
	S_WOODCUTTER_GATHER_ACK = 0xA8,        // 伐木工收集确认音效
	S_MINE_GATHER_ACK = 0xA9,              // 矿工收集确认音效
	S_OILWELL_GATHER_ACK = 0xAA,           // 油井收集确认音效
	S_UNIVERSITY_GATHER_ACK = 0xAB,        // 大学收集确认音效
	S_MERCHANT_ACK = 0xAC,                 // 商人确认音效
	S_TRADE_ACK = 0xAD,                    // 贸易确认音效
	S_DISEMBARK_ACK = 0xAE,                // 下船确认音效
	S_TOP_MENU_BUTTON = 0xAF,              // 顶部菜单按钮音效
	S_OPTIONS_BUTTON = 0xB0,               // 选项按钮音效
	S_OPTIONS_TAB = 0xB1,                  // 选项标签音效
	S_OPTIONS_CHECKBOX = 0xB2,             // 选项复选框音效
	S_OPTIONS_SLIDER = 0xB3,               // 选项滑块音效
	S_OPTIONS_LISTBOX = 0xB4,              // 选项列表框音效
	S_MENU_UP = 0xB5,                      // 菜单向上音效
	S_MENU_DOWN = 0xB6,                    // 菜单向下音效
	S_ABOUT_BOX_BUTTON = 0xB7,             // 关于框按钮音效
	S_ACHIEVEMENTS_TAB = 0xB8,             // 成就标签音效
	S_ACHIEVEMENTS_BUTTON = 0xB9,          // 成就按钮音效
	S_CTW_CARDWIN_CLICK = 0xBA,            // CTW卡牌窗口点击音效
	S_CTW_CARDWIN_BUTTON = 0xBB,           // CTW卡牌窗口按钮音效
	S_CTW_CARDWIN_AVAIL_CARDS_CLICK = 0xBC, // CTW可用卡牌点击音效
	S_CTW_CARDWIN_SELECT_CARDS_CLICK = 0xBD, // CTW选择卡牌点击音效
	S_CTW_DIPLOWIN_BUTTON = 0xBE,          // CTW外交窗口按钮音效
	S_CTW_FINALWIN_BUTTON = 0xBF,          // CTW最终窗口按钮音效
	S_CTW_INFOWIN_BUTTON = 0xC0,           // CTW信息窗口按钮音效
	S_CTW_MAINMENU_BUTTON = 0xC1,          // CTW主菜单按钮音效
	S_CTW_NEWSWIN_SELECT = 0xC2,           // CTW新闻窗口选择音效
	S_CTW_NEWSWIN_BUTTON = 0xC3,           // CTW新闻窗口按钮音效
	S_CTW_RULESWIN_BUTTON = 0xC4,          // CTW规则窗口按钮
	S_CTW_SETUPWIN_COMBO = 0xC5,           // CTW设置窗口组合框音效
	S_CTW_SETUPWIN_BUTTON = 0xC6,          // CTW设置窗口按钮音效
	S_CTW_SETUPWIN_LISTBOX = 0xC7,         // CTW设置窗口列表框音效
	S_CTW_STARTWIN_BUTTON = 0xC8,          // CTW开始窗口按钮音效
	S_CTW_VICTORYWIN_BUTTON = 0xC9,        // CTW胜利窗口按钮音效
	S_CTW_WONDERWIN_BUTTON = 0xCA,         // CTW奇观窗口按钮音效
	S_CTW_ENDGAMEWIN_BUTTON = 0xCB,        // CTW结束游戏窗口按钮音效
	S_CTW_CLICK_PIECE = 0xCC,              // CTW点击棋子音效
	S_CTW_DROP_PIECE = 0xCD,               // CTW放置棋子音效
	S_CTW_INVADED = 0xCE,                  // CTW被入侵音效
	S_CTW_DIPLO_MESSAGE = 0xCF,            // CTW外交消息音效
	S_CTW_DECLARE_WAR = 0xD0,              // CTW宣战音效
	S_CTW_GO_TO_WAR = 0xD1,                // CTW参战音效
	S_CTW_TRIBUTE = 0xD2,                  // CTW进贡音效
	S_CTW_DECLARE_PEACE = 0xD3,            // CTW宣布和平音效
	S_CTW_ALLIANCE = 0xD4,                 // CTW结盟音效
	S_CTW_AGE_ADVANCE = 0xD5,              // CTW时代进步音效
	S_CTW_UPGRADE_TERRITORY = 0xD6,        // CTW升级领土音效
	S_CTW_BUY_CARD = 0xD7,                 // CTW购买卡牌音效
	S_CTW_PLAY_CARD = 0xD8,                // CTW出牌音效
	S_CTW_BUTTON_PRESSED = 0xD9,           // CTW按钮按下音效
	S_CTW_ELIMINATE_ENEMY = 0xDA,          // CTW消灭敌人音效
	S_CTW_CONTINENT_CAPTURE = 0xDB,        // CTW大陆占领音效
	S_CTW_REINFORCE_ARRIVE = 0xDC,          // CTW援军到达音效
	S_CTW_ENDGAME_VICTORY = 0xDD,          // CTW终局胜利音效
	S_CTW_ENDGAME_DEFEAT = 0xDE,           // CTW终局失败音效
	S_CTW_DEFENSIVE_VICTORY = 0xDF,        // CTW防御胜利音效
	S_CTW_BUILD_WONDER = 0xE0,             // CTW建造奇观音效
	S_CTW_OVERRUN = 0xE1,                  // CTW碾压音效
	S_CTW_PLAYER_GOT_OVERRUN = 0xE2,       // CTW玩家被碾压音效
	S_CTW_OFFER_ACCEPT = 0xE3,             // CTW提议接受音效
	S_CTW_OFFER_REJECT = 0xE4,             // CTW提议拒绝音效
	S_GAMESPYCREATE_BUTTON = 0xE5,         // GameSpy创建按钮音效
	S_GAMESPYCREATE_COMBO_OPEN = 0xE6,     // GameSpy创建组合框打开音效
	S_GAMESPYCREATE_COMBO_SELECT = 0xE7,   // GameSpy创建组合框选择音效
	S_GAMESPYCREATE_CHECK = 0xE8,          // GameSpy创建复选框音效
	S_GAMESPYLOGIN_BUTTON = 0xE9,          // GameSpy登录按钮音效
	S_GAMESPYLOGIN_CHECK = 0xEA,           // GameSpy登录复选框音效
	S_GAMESPYSTAGING_BUTTON = 0xEB,        // GameSpy准备按钮音效
	S_GAMESPYPASSWORD_BUTTON = 0xEC,       // GameSpy密码按钮音效
	S_GAMESPYFILTER_BUTTON = 0xED,         // GameSpy过滤器按钮音效
	S_GAMESPYFILTER_CHECK = 0xEE,          // GameSpy过滤器复选框音效
	S_GAMESPYTITLE_BUTTON = 0xEF,          // GameSpy标题按钮音效
	S_GAMESPYTITLE_SORT_BUTTON_RIGHT = 0xF0, // GameSpy标题排序右按钮音效
	S_GAMESPYTITLE_SORT_BUTTON = 0xF1,     // GameSpy标题排序按钮音效
	S_GAMESPYTITLE_LISTBOX = 0xF2,         // GameSpy标题列表框音效
	S_GAMESPYTITLE_SEND_CHAT = 0xF3,       // GameSpy标题发送聊天音效
	S_GAMESPY_MINIMIZED_BUDDY_MSG = 0xF4,  // GameSpy最小化好友消息音效
	S_GAMESPYSTAGING_CHECK = 0xF5,         // GameSpy准备复选框音效
	S_GAMESPYSTAGING_COMBO_OPEN = 0xF6,    // GameSpy准备组合框打开音效
	S_GAMESPYSTAGING_COMBO_SELECT = 0xF7,  // GameSpy准备组合框选择音效
	S_DIPLOMACY_BUTTON = 0xF8,             // 外交按钮音效
	S_DIPLOMACY_CHAT_COMBO = 0xF9,         // 外交聊天组合框音效
	S_DIPLOMACY_SEND_CHAT = 0xFA,          // 外交发送聊天音效
	S_DIPLOMACY_OFFER_BUTTON = 0xFB,       // 外交提供按钮音效
	S_DIPLOMACY_DEMAND_BUTTON = 0xFC,      // 外交要求按钮音效
	S_DIPLOMACY_ACCEPT_BUTTON = 0xFD,      // 外交接受按钮音效
	S_DIPLOMACY_REJECT_BUTTON = 0xFE,      // 外交拒绝按钮音效
	S_DIPLOMACY_CLEAR_BUTTON = 0xFF,       // 外交清除按钮音效
	S_DIPLOMACY_DECLARE_BUTTON = 0x100,    // 外交宣布按钮音效
	S_DIPLOMACY_BACK_BUTTON = 0x101,       // 外交返回按钮音效
	S_DIPLOMACY_CHECKBOX = 0x102,           // 外交复选框音效
	S_DIPLOMACY_PROPOSE_ATTACK = 0x103,    // 外交提议攻击音效
	S_LOADWIN_BUTTON = 0x104,              // 加载窗口按钮音效
	S_LOADWIN_CLICK = 0x105,               // 加载窗口点击音效
	S_MAINMENU_BUTTON = 0x106,             // 主菜单按钮音效
	S_JOINWIN_DOUBLE_CLICK = 0x107,        // 加入窗口双击音效
	S_JOINWIN_CANCEL_BUTTON = 0x108,       // 加入窗口取消按钮音效
	S_JOINWIN_JOIN_BUTTON = 0x109,         // 加入窗口加入按钮音效
	S_JOINWIN_CREATE_BUTTON = 0x10A,       // 加入窗口创建按钮音效
	S_SETUPWIN_BUTTON = 0x10B,             // 设置窗口按钮音效
	S_SETUPWIN_START_BUTTON = 0x10C,       // 设置窗口开始按钮音效
	S_SETUPWIN_CANCEL_BUTTON = 0x10D,      // 设置窗口取消按钮音效
	S_SETUPWIN_SEND_CHAT = 0x10E,          // 设置窗口发送聊天音效
	S_SETUPWIN_COMBO = 0x10F,               // 设置窗口组合框音效
	S_SETUPWIN_COMBO_OPEN = 0x110,          // 设置窗口组合框打开音效
	S_SETUPWIN_CHECKBOX = 0x111,            // 设置窗口复选框音效
	S_SKILLTESTWIN_BUTTON = 0x112,          // 技能测试窗口按钮音效
	S_TUTORIALWIN_START_BUTTON = 0x113,     // 教程窗口开始按钮音效
	S_TUTORIALWIN_CANCEL_BUTTON = 0x114,    // 教程窗口取消按钮音效
	S_TUTORIALWIN_PICK = 0x115,            // 教程窗口选择音效
	S_TUTORIALWIN_DOUBLE_CLICK = 0x116,    // 教程窗口双击音效
	S_PING_SPLINE = 0x117,                 // 样条线ping音效
	S_GOODY_BOX_SELECT = 0x118,            // 宝箱选择音效
	S_RARE_RESOURCE_SELECT = 0x119,        // 稀有资源选择音效
	S_PLANE_OUT_OF_FUEL = 0x11A,           // 飞机燃料耗尽音效
	S_SETUPWIN_HOST_ACK = 0x11B,           // 设置窗口主机确认音效
	S_SETUPWIN_HOST_READY = 0x11C,         // 设置窗口主机就绪音效
	S_SETUPWIN_HOST_CLICK_IN = 0x11D,       // 设置窗口主机点击进入音效
	S_PING_GOODY = 0x11E,                  // 宝箱ping音效
	S_INVALID_TRADE = 0x11F,               // 无效交易音效
	S_INVALID_MERCHANT = 0x120,            // 无效商人音效
	S_MY_OWN_CHAT = 0x121,                 // 自己聊天音效
	S_MISSILE_DETECTED = 0x122,            // 导弹检测到音效
	S_MISSILE_LAUNCHED = 0x123,            // 导弹发射音效
	S_RAID_ATTACKED = 0x124,               // 突袭攻击音效
	S_AIR_RAID = 0x125,                    // 空袭音效
	S_MOUSEOVER_BUTTON = 0x126,            // 鼠标悬停按钮音效
	S_LANGAME_GAME_LISTED = 0x127,         // 局域网游戏列出音效
	S_SETUPWIN_CHAT_RECEIVED = 0x128,      // 设置窗口收到聊天音效
	S_SETUPWIN_PLAYER_ARRIVES = 0x129,     // 设置窗口玩家到达音效
	S_SETUPWIN_PLAYER_LEAVES = 0x12A,      // 设置窗口玩家离开音效
	S_GAME_START_COUNTDOWN_TICK = 0x12B,   // 游戏开始倒计时滴答音效
	S_GAME_START_COUNTDOWN_ABORTED = 0x12C, // 游戏开始倒计时中止音效
	S_ALERT_BUILDING_RAZED = 0x12D,        // 建筑被夷平警报音效
	S_ALERT_CITIZEN_IDLE = 0x12E,          // 公民闲置警报音效
	S_DECLAREPEACE = 0x12F,                // 宣布和平音效
	S_EFFECT_RESOURCE_LOST = 0x130,        // 资源丢失效果音效
	S_EFFECT_SPY_STEAL_RESOURCE = 0x131,   // 间谍窃取资源效果音效
	S_EFFECT_SPY_STOLE_RESOURCE = 0x132,   // 间谍已窃取资源效果音效
	S_TRANSPORTLOAD = 0x133,               // 运输装载音效
	S_TRANSPORTUNLOAD = 0x134,             // 运输卸载音效
	S_OTHER_NATION_DIPLO = 0x135,          // 其他国家外交音效
	S_QUEUE_BUILDING = 0x136,              // 建筑排队音效
	S_UNQUEUE_BUILDING = 0x137,            // 建筑取消排队音效
	S_UNIT_UPGRADE_COMPLETE = 0x138,       // 单位升级完成音效
	S_CANNON_TIME_ACTIVATED = 0x139,       // 加农炮时间激活音效
	S_CANNON_TIME_DEACTIVATED = 0x13A,     // 加农炮时间停用音效
	S_ATTACK_ORDER_ACK = 0x13B,            // 攻击命令确认音效
	S_GARRISON_ORDER_ACK = 0x13C,          // 驻守命令确认音效
	S_PATROL_ORDER_ACK = 0x13D,            // 巡逻命令确认音效
	S_BUILD_ORDER_ACK = 0x13E,             // 建造命令确认音效
	S_REPAIR_ORDER_ACK = 0x13F,            // 修理命令确认音效
	S_DIPLOMACY_OPEN = 0x140,              // 外交界面打开音效
	S_DIPLOMACY_CLOSE = 0x141,             // 外交界面关闭音效
	S_OBJECTIVES_OPEN = 0x142,             // 目标界面打开音效
	S_OBJECTIVES_CLOSE = 0x143,            // 目标界面关闭音效
	S_OPTIONS_OPEN = 0x144,                // 选项界面打开音效
	S_OPTIONS_CLOSE = 0x145,               // 选项界面关闭音效
	S_GAME_MENU_OPEN = 0x146,              // 游戏菜单打开音效
	S_GAME_MENU_CLOSE = 0x147,             // 游戏菜单关闭音效
	S_COLLAPSE_INTERFACE = 0x148,          // 折叠界面音效
	S_CHANGE_STANCE = 0x149,               // 改变姿态音效
	S_CHANGE_FORMATION = 0x14A,            // 改变阵型音效
	S_MARKET_BUY = 0x14B,                  // 市场购买音效
	S_MARKET_SELL = 0x14C,                 // 市场出售音效
	S_DISBAND_INCOMPLETE_BUILDING = 0x14D, // 解散未完成建筑音效
	S_TIPSWIN_CHECKBOX = 0x14E,            // 提示窗口复选框音效
	S_DIPLOMACY_CHAT_OPTION = 0x14F,       // 外交聊天选项音效
	S_POPUP_OPEN = 0x150,                  // 弹出窗口打开音效
	S_POPUP_CLOSE = 0x151,                 // 弹出窗口关闭音效
	S_AUTO_EXPLORE_OFF = 0x152,            // 自动探索关闭音效
	S_YOU_QUIT = 0x153,                    // 你退出音效
	S_CTW_CHECKBOX = 0x154,                // CTW复选框音效
	S_REPLAY_BUTTON = 0x155,               // 回放按钮音效
	S_GAME_SPEED_CHANGE = 0x156,           // 游戏速度改变音效
	S_TOGGLE_ON = 0x157,                   // 切换开启音效
	S_TOGGLE_OFF = 0x158,                  // 切换关闭音效
	S_GAMESPY_CHECKBOX = 0x159,            // GameSpy复选框音效
	S_GAMESPYBUDDY_BUTTON = 0x15A,         // GameSpy好友按钮音效
	S_GAMESPYBUDDY_WINDOW_MINIMIZE = 0x15B, // GameSpy好友窗口最小化音效
	S_GAMESPYBUDDY_WINDOW_MAXIMIZE = 0x15C, // GameSpy好友窗口最大化音效
	S_GAMESPYBUDDY_WINDOW_CLOSE = 0x15D,   // GameSpy好友窗口关闭音效
	S_GAMESPY_COMBO = 0x15E,               // GameSpy组合框音效
	S_GAMESPY_IGNORE_MENU_BUTTON = 0x15F,  // GameSpy忽略菜单按钮音效
	S_GAMESPY_GAME_LAUNCH_BUTTON = 0x160,  // GameSpy游戏启动按钮音效
	S_SPY_OURS_DONE_BRIBE = 0x161,         // 我方间谍完成贿赂音效
	S_SPY_OURS_DONE_INFORMER = 0x162,      // 我方间谍完成告密音效
	S_SPY_OURS_DONE_COUNTERINTEL = 0x163,  // 我方间谍完成反情报音效
	S_SPY_THEIRS_START_BRIBE = 0x164,      // 敌方间谍开始贿赂音效
	S_SPY_THEIRS_START_INFORMER = 0x165,   // 敌方间谍开始告密音效
	S_SPY_THEIRS_DONE_BRIBE = 0x166,       // 敌方间谍完成贿赂音效
	S_SPY_THEIRS_DONE_INFORMER = 0x167,    // 敌方间谍完成告密音效
	S_SPY_THEIRS_DONE_COUNTERINTEL = 0x168, // 敌方间谍完成反情报音效
	S_GOVERNMENT_CHANGE_PLAYER = 0x169,    // 玩家政府改变音效
	S_GOVERNMENT_CHANGE_OPPONENT = 0x16A,   // 对手政府改变音效
	S_CTW_NUKE_KEY_TURN = 0x16B,           // CTW核武关键回合音效
	S_CTW_NUKE_RED_BUTTON = 0x16C,         // CTW核武红色按钮音效
	S_CTW_BUILD_NUKE = 0x16D,              // CTW建造核武音效
	S_CTW_NEGOTIATE_LISTBOX = 0x16E,       // CTW谈判列表框音效
	S_YOUR_CAPITAL_MOVE = 0x16F,           // 你的首都移动音效
	S_OTHER_CAPITAL_MOVE = 0x170,         // 其他首都移动音效
	NUM_SOUND_GLOBAL_CATS = 0x171,         // 全局音效分类总数
};

// 日志结构 - 用于游戏日志记录
struct  Log
{
	int unk;        // 虚函数表指针 Log_vtbl* __vftable /*VFT*/
	int flags;      // 日志标志位
	A_iobuf* handle_aux;  // 辅助文件句柄
	A_iobuf* handle;      // 主文件句柄
	String file_aux;      // 辅助日志文件名
	String file;          // 主日志文件名
	int indent;          // 当前缩进级别
	int indent_aux;      // 辅助缩进级别
};

// 整数数组结构
struct ArrayInt : ArrayBaseSimpleCopyInt
{
	int cur_index;            // 当前索引位置
};

// 全局声音管理器
const struct SoundGlobal
{
	ArrayInt lookups[369];   // 369个音效查找表数组
};

// 数据遍历器 - 用于遍历游戏数据结构
struct  DataWalk
{
	int unk;        // 虚函数表指针 DataWalk_vtbl* __vftable /*VFT*/
	int input;      // 输入数据
	int checksum;   // 校验和
	int flags;      // 遍历标志位
};

// 类型数据基类 - 存储游戏对象类型的通用属性
struct  TypeData : GameAccessConst
{
	int unk;                // 虚函数表指针 TypeData_vtbl* __vftable /*VFT*/
	TypeIndex type;         // 类型索引
	unsigned int job_time;  // 工作/建造时间
	unsigned int res_time;  // 研究时间
	int tribe_mask;         // 部落掩码（哪些文明可用）
	int cat;                // 类别标识
	int costs[6];           // 6种资源成本数组
	TypeIndex preq[3];      // 前置条件类型索引数组
	TypeIndex from;         // 来源类型（升级来源）
	TypeIndex where;        // 建造位置类型
	TypeIndex upgrade;      // 升级目标类型
	TypeIndex jump;         // 跳跃目标类型
	TypeIndex obs;          // 观察者类型
	TypeIndex show[2];      // 显示相关类型
	int modified;           // 修改标志
	char grid_x;            // 网格X坐标
	char grid_y;            // 网格Y坐标
	String name;            // 内部名称
	String display_name;    // 显示名称
	String graph_name;      // 图形资源名称
	String help_name;       // 帮助名称
	String type_name;       // 类型名称
	String abbrev;          // 缩写
	String desc;            // 描述
};

// 类型输出结构 - 扩展类型数据，包含图形渲染信息
struct  TypeOut : TypeData
{
	__declspec(align(8)) char tex_id[8][3];    // 8个方向的纹理ID（3层）
	char small_tex_id[8][3];                   // 小尺寸纹理ID
	char tex_col[8][3];                        // 纹理列坐标
	char tex_row[8][3];                        // 纹理行坐标
	__int16 tex_x[8][3];                       // 纹理X偏移
	__int16 tex_y[8][3];                       // 纹理Y偏移
	char tex_clip[8][3];                       // 纹理裁剪信息
};

// 完整类型结构 - 组合数据和渲染信息
struct   __declspec(align(4)) Type : TypeOut
{
	_BYTE gap1C8[4];  // 对齐填充，确保4字节对齐
};

// 部落索引枚举
// 定义了游戏中所有可用的部落/文明ID
enum TribeIndex : __int32
{
	AZTECS = 0x0,           // 阿兹特克
	MAYA = 0x1,             // 玛雅
	INCA = 0x2,             // 印加
	BANTU = 0x3,            // 班图
	NUBIANS = 0x4,          // 努比亚
	GREEKS = 0x5,           // 希腊
	ROMANS = 0x6,           // 罗马
	EGYPTIANS = 0x7,        // 埃及
	TURKS = 0x8,            // 土耳其
	SPANISH = 0x9,          // 西班牙
	FRENCH = 0xA,           // 法国
	BRITISH = 0xB,          // 英国
	GERMANS = 0xC,          // 德国
	RUSSIANS = 0xD,         // 俄罗斯
	CHINESE = 0xE,          // 中国
	JAPANESE = 0xF,         // 日本
	KOREANS = 0x10,         // 韩国
	MONGOLS = 0x11,         // 蒙古
	IROQUOIS = 0x12,        // 易洛魁
	LAKOTA = 0x13,          // 拉科塔
	AMERICANS = 0x14,       // 美国
	INDIANS = 0x15,         // 印度
	DUTCH = 0x16,           // 荷兰
	PERSIANS = 0x17,        // 波斯
	NUM_TRIBES = 0x18,      // 部落总数：24个
	RANDOM_TRIBE = 0x18,    // 随机部落（24）
	RANDOM_OFFENSIVE = 0x19,    // 随机进攻型部落（25）
	RANDOM_DEFENSIVE = 0x1A,    // 随机防御型部落（26）
	RANDOM_ECONOMIC = 0x1B,     // 随机经济型部落（27）
	RANDOM_XPACK = 0x1C,        // 随机扩展包部落（28）
};

// 部落结构体
// 继承自GameAccessConst，包含一个部落的所有定义数据
struct Tribe : GameAccessConst
{
	_BYTE gap0[4];              // 填充字节，可能用于对齐或包含虚函数表指针
	String file;                // 部落配置文件名（如"PERSIANS.XML"）
	String name;                // 本地化显示名称（当前语言）
	String eng_name;            // 英文名称
	String old_name;            // 旧名称/历史名称
	int tribe;                  // 部落ID（对应TribeIndex枚举值）
	int barbarian;              // 是否为野蛮人阵营（0=否，1=是）
	int people;                 // 所属民族/种族分组
	int backup_build_continent; // 备用建筑风格（当主建筑风格不可用时使用）
	int build_continent;        // 主建筑风格（控制建筑外观）
	int unit_continent;         // 单位风格（控制单位外观）
	int text_substitute;        // 文本替换索引（用于本地化字符串替换）
	TypeIndex graft[352];       // 科技/单位/建筑树定义数组，共352个条目
};

// 部落数组基类
// 继承自ArrayBaseMaster，使用4字节对齐
struct __declspec(align(4)) ArrayBaseTribe : ArrayBaseMaster
{
	int unk;                    // 虚函数表指针（ArrayBase<Tribe>_vtbl* __vftable）
	Tribe* list;                // 部落数组指针
	unsigned __int8 flags;      // 状态标志位
};

// 部落对象数组
// 继承自ArrayBaseTribe
struct ObjectArrayTribe : ArrayBaseTribe
{
};

// 部落管理器
// 包含所有部落的数组
struct Tribes
{
	int unk;                    // 虚函数表指针（Tribes_vtbl* __vftable）
	ObjectArrayTribe list;      // 部落对象数组
};

// 内存类型枚举
enum MemType : __int32
{
	MEM_DEFAULT = 0x0,      // 默认内存类型
	MEM_HARDWARE = 0x1,     // 硬件内存
	MEM_SYSTEM = 0x2,       // 系统内存
	MEM_MANAGED = 0x3,      // 托管内存
};

// 图形系统类型枚举
enum GSType : __int32
{
	GS_SGL = 0x0,           // SGL图形系统
	GS_DDGL = 0x1,          // DDGL图形系统
	GS_D3DGL = 0x2,         // D3DGL图形系统
};

// 图形系统对象基类
struct  GSObject
{
	int unk;                // 虚函数表指针
	GSType type;            // 图形系统类型
	int dont_delete;        // 删除标志位
	int object_index;       // 对象索引
};

// 图形系统缓冲区对象
const struct  GSBuffer : GSObject
{
};

// 缓冲区基类
const struct  BufferBase
{
	int unk;                // 虚函数表指针
	GSBuffer* gs_buffer;    // 关联的图形系统缓冲区
	MemType mem_type;       // 内存类型
};

// 图像输入输出结构
const struct  ImageIO
{
	int unk;                // 虚函数表指针
	Color tint_color;       // 色调颜色
	unsigned __int8* tint_color_wide;      // 宽色调颜色指针
	unsigned __int8* tint_color_wide_base; // 宽色调颜色基指针
	int num_16_chunks;      // 16位色块数量
	int num_8_chunks;       // 8位色块数量
	int num_extra_16_pix;   // 额外16位像素数
	int num_extra_8_pix;    // 额外8位像素数
	int use_tint;           // 是否使用色调
};

class FontBase;
class TextureBase;
class Window;
class CursorBase;
class ButtonGroup;

// 图形系统字体对象
const struct  GSFont : GSObject
{
	String typeface;        // 字体名称
	FontBase* font;         // 字体基类指针
};

// 字体基类
struct  FontBase
{
	GSFont* gs_font;        // 图形系统字体对象
};

// 字体类
const struct  Font : FontBase
{
};

// 缓冲区类（继承自ImageIO和BufferBase）
const struct  Buffer : ImageIO, BufferBase
{
	int(__cdecl* write_func)(const String*, int, int, int);  // 写函数指针
	void(__cdecl* strings_func)(int, int);                   // 字符串处理函数指针
	char wrap_indent_start;      // 换行缩进起始
	char wrap_indent;            // 换行缩进
	char wrap_count;             // 换行计数
	Color internal_text_color;   // 内部文本颜色
	char text_mode_write;        // 文本写入模式
	char text_mode_break;         // 文本换行模式
	char text_mode_width;         // 文本宽度模式
	char multi_font;              // 多字体标志
	int temp_font_size[5];        // 临时字体大小数组
	int temp_font_style[5];       // 临时字体样式数组
	const Font* font[5];          // 字体指针数组
	Color text_color[5];          // 文本颜色数组
	Color text_shadow[5];         // 文本阴影颜色数组
	char shadow_x_off[5];         // 阴影X偏移数组
	char shadow_y_off[5];         // 阴影Y偏移数组
	int locked_for_reading;       // 读取锁定标志
	void* read_buffer;            // 读取缓冲区指针
};

// 图形系统纹理对象
struct  GSTexture : GSObject
{
	TextureBase* base;      // 纹理基类指针
	MemType mem_type;       // 内存类型
};

// 像素格式枚举
enum PixFormat : __int32
{
	PF_DEFAULT = 0x0,       // 默认像素格式
	PF_8 = 0x1,             // 8位像素格式
	PF_555 = 0x2,           // 555像素格式
	PF_565 = 0x4,           // 565像素格式
	PF_16 = 0x6,            // 16位像素格式
	PF_24 = 0x8,            // 24位像素格式
	PF_32 = 0x10,           // 32位像素格式
	PF_A4R4G4B4 = 0x10000,  // ARGB4444像素格式
	PF_DXT1 = 0x20000,      // DXT1压缩纹理
	PF_DXT2 = 0x40000,      // DXT2压缩纹理
	PF_DXT3 = 0x80000,      // DXT3压缩纹理
	PF_DXT4 = 0x100000,     // DXT4压缩纹理
	PF_DXT5 = 0x200000,     // DXT5压缩纹理
	PF_HDR = 0x400000,      // HDR高动态范围纹理
};

// 纹理基类
struct  TextureBase
{
	int unk;                // 虚函数表指针
	GSTexture* gs_texture;  // 图形系统纹理对象
};

// 纹理类（继承自ImageIO和TextureBase）
struct  Texture : ImageIO, TextureBase
{
	String filename;        // 文件名
	PixFormat format;       // 像素格式
	MemType memtype;        // 内存类型
	int miplevels;          // MIP层级数
	int load_flags;         // 加载标志
	int usage;              // 用途标志
};

// 矩形模板基类（short类型）
const struct RectTemplateBaseshort
{
	__int16 left;           // 左边界
	__int16 right;          // 右边界
	__int16 top;            // 上边界
	__int16 bottom;         // 下边界
};

// 矩形模板类（short类型）
const struct  RectTemplateshort : RectTemplateBaseshort
{
};

// 热点区域结构
struct  HotSpot
{
	RectTemplateshort rect; // 热点矩形区域
	int type;               // 热点类型
	int id;                 // 热点ID
	String id_string;       // 热点ID字符串
};

// 热点数组基类
struct  __declspec(align(4)) ArrayBaseHotSpot : ArrayBaseMaster
{
	int unk;                // 虚函数表指针
	HotSpot* list;          // 热点数组指针
	unsigned __int8 flags;  // 数组标志
};

// 热点对象数组
struct  ObjectArrayHotSpot : ArrayBaseHotSpot
{
};

// 热点窗口结构
struct  Spot
{
	Window* window;                 // 窗口指针
	ObjectArrayHotSpot hot_spot;    // 热点数组
};

// 图形系统光标对象
struct  GSCursor : GSObject
{
	CursorBase* cursor;     // 光标基类指针
};

// 光标基类
struct  CursorBase
{
	GSCursor* gs_cursor;    // 图形系统光标对象
};

// 光标类
struct  Cursor : CursorBase
{
	Texture texture;        // 光标纹理
};

// 窗口数组基类
struct  __declspec(align(4)) ArrayBaseWindow : ArrayBaseMaster
{
	int unk;                // 虚函数表指针
	Window** list;          // 窗口指针数组
	unsigned __int8 flags;  // 数组标志
};

// 简单拷贝窗口数组基类
struct  ArrayBaseSimpleCopyWindow : ArrayBaseWindow
{
};

// 窗口数组
struct  ArrayWindow : ArrayBaseSimpleCopyWindow
{
	int cur_index;          // 当前索引
};

// 窗口指针数组
struct  PtrArrayWindow : ArrayWindow
{
};

// 窗口基类
struct  Window
{
	int unk;                // 虚函数表指针
	int style;              // 窗口样式
	int flags;              // 窗口标志
	int id;                 // 窗口ID
	String id_string;       // 窗口ID字符串
	int unk1[3];            // 条件堆栈向量
	bool ignoreStackConditions;  // 是否忽略堆栈条件
	int unk2[3];            // 点击区域向量
	bool override_on_left_click_on_combo_boxes;  // 是否在组合框上覆盖左键点击
	__int16 orig_xs;        // 原始X大小
	__int16 orig_ys;        // 原始Y大小
	int spot_passover_id;   // 热点经过ID
	int spot_passover_type; // 热点经过类型
	RectTemplateshort spot_passover_rect;  // 热点经过矩形区域
	Spot win_spot;          // 窗口热点
	Window* parent;         // 父窗口指针
	Window* prev_focus;     // 上一个焦点窗口
	Window* default_focus;  // 默认焦点窗口
	PtrArrayWindow children_order;  // 子窗口顺序数组
	PtrArrayWindow children;        // 子窗口数组
	String caption;         // 窗口标题
	Color back_color;       // 背景颜色
	Font* caption_font;     // 标题字体
	Buffer* border_tile;    // 边框贴图
	Color nonclient_color;  // 非客户区颜色
	Color caption_color;    // 标题颜色
	Color caption_shadow;   // 标题阴影颜色
	Color color_bevel_up;   // 斜面上升颜色
	Color color_bevel_down; // 斜面下降颜色
	char caption_shadow_x_off;  // 标题阴影X偏移
	char caption_shadow_y_off;  // 标题阴影Y偏移
	char caption_height;   // 标题高度
	char border_thickness; // 边框厚度
	char bottom_border_thickness;  // 底部边框厚度
	char bevel_thickness;  // 斜面厚度
	__int16 min_xs;        // 最小X大小
	__int16 min_ys;        // 最小Y大小
	RectTemplateshort rect_client;     // 客户区矩形
	RectTemplateshort rect_nonclient;  // 非客户区矩形
	RectTemplateshort rect_clip;       // 裁剪矩形
	RectTemplateshort rect_screen_clip;  // 屏幕裁剪矩形
	char client_drag;      // 客户区拖动标志
	char client_resize;    // 客户区调整大小标志
	Cursor* cursor;        // 光标指针
	int stock_cursor;      // 库存光标索引
	__int16 last_mouse_x;  // 最后鼠标X坐标
	__int16 last_mouse_y;  // 最后鼠标Y坐标
};

// 图形窗口（继承自Window和Buffer）
struct  GraphicWin : Window, Buffer
{
};

// 带名称的窗口数组
struct  NamedArrayWindow : ArrayBaseWindow
{
	String* namelist;      // 名称列表指针
};

// 界面渲染索引结构
struct  IFaceRenderIndexing
{
	__int16 index;         // 索引
	__int16 offset;        // 偏移
	String name;           // 名称
	int id;                // ID
};

// 界面纹理结构
const struct  IFaceTex
{
	int id;                // 纹理ID
	RectTemplateshort rect;  // 纹理矩形区域
	int t;                 // 纹理类型/标志
};

// 界面渲染索引数组基类
struct  __declspec(align(4)) ArrayBaseIFaceRenderIndexing : ArrayBaseMaster
{
	int unk;                // 虚函数表指针
	IFaceRenderIndexing* list;  // 索引数组指针
	unsigned __int8 flags;  // 数组标志
};

// 界面渲染索引对象数组
struct  ObjectArrayIFaceRenderIndexing : ArrayBaseIFaceRenderIndexing
{
};

// 界面纹理数组基类
struct  __declspec(align(4)) ArrayBaseIFaceTex : ArrayBaseMaster
{
	int unk;                // 虚函数表指针
	IFaceTex* list;        // 纹理数组指针
	unsigned __int8 flags;  // 数组标志
};

// 带名称的界面纹理数组
struct  NamedArrayIFaceTex : ArrayBaseIFaceTex
{
	String* namelist;      // 名称列表指针
};

// 矩形数组基类
struct  __declspec(align(4)) ArrayBaseRectTemplateshort : ArrayBaseMaster
{
	int unk;                // 虚函数表指针
	RectTemplateshort* list;  // 矩形数组指针
	unsigned __int8 flags;  // 数组标志
};

// 带名称的矩形数组
struct  NamedArrayRectTemplateshort : ArrayBaseRectTemplateshort
{
	String* namelist;      // 名称列表指针
};

// 颜色数组基类
struct  __declspec(align(4)) ArrayBaseColor : ArrayBaseMaster
{
	int unk;                // 虚函数表指针
	Color* list;           // 颜色数组指针
	unsigned __int8 flags;  // 数组标志
};

// 带名称的颜色数组
struct  NamedArrayColor : ArrayBaseColor
{
	String* namelist;      // 名称列表指针
};

// 界面点结构
struct IFacePoint
{
	__int16 x;             // X坐标
	__int16 y;             // Y坐标
};

// 界面点数组基类
struct  __declspec(align(4)) ArrayBaseIFacePoint : ArrayBaseMaster
{
	int unk;                // 虚函数表指针
	IFacePoint* list;      // 点数组指针
	unsigned __int8 flags;  // 数组标志
};

// 带名称的界面点数组
struct  NamedArrayIFacePoint : ArrayBaseIFacePoint
{
	String* namelist;      // 名称列表指针
};

// 界面精灵结构
struct  IFaceSprite
{
	int x;                 // X坐标
	int y;                 // Y坐标
	IFaceTex tex;          // 关联的纹理
};

// 界面精灵数组基类
struct  __declspec(align(4)) ArrayBaseIFaceSprite : ArrayBaseMaster
{
	int unk;                // 虚函数表指针
	IFaceSprite* list;     // 精灵数组指针
	unsigned __int8 flags;  // 数组标志
};

// 带名称的界面精灵数组
struct  NamedArrayIFaceSprite : ArrayBaseIFaceSprite
{
	String* namelist;      // 名称列表指针
};

// 界面拉伸精灵结构
struct  IFaceStretchSprite
{
	RectTemplateshort rect;   // 矩形区域
	IFaceTex texs[3];         // 纹理数组（3个元素）
};

// 界面拉伸精灵数组基类
struct  __declspec(align(4)) ArrayBaseIFaceStretchSprite : ArrayBaseMaster
{
	int unk;                // 虚函数表指针
	IFaceStretchSprite* list;  // 拉伸精灵数组指针
	unsigned __int8 flags;  // 数组标志
};

// 带名称的界面拉伸精灵数组
struct  NamedArrayIFaceStretchSprite : ArrayBaseIFaceStretchSprite
{
	String* namelist;      // 名称列表指针
};

// 界面边框结构
struct  IFaceBorder
{
	IFaceTex corners[4];   // 角纹理数组
	IFaceTex edges[4];     // 边纹理数组
	IFaceTex extra[8];     // 额外纹理数组
};

// 界面边框数组基类
struct  __declspec(align(4)) ArrayBaseIFaceBorder : ArrayBaseMaster
{
	int unk;                // 虚函数表指针
	IFaceBorder** list;     // 边框指针数组
	unsigned __int8 flags;  // 数组标志
};

// 带名称的界面边框数组
struct  NamedArrayIFaceBorder : ArrayBaseIFaceBorder
{
	String* namelist;      // 名称列表指针
};

// 字符串数组基类
struct  __declspec(align(4)) ArrayBaseString : ArrayBaseMaster
{
	int unk;                // 虚函数表指针
	String* list;          // 字符串数组指针
	unsigned __int8 flags;  // 数组标志
};

// 字符串对象数组
const struct  ObjectArrayString : ArrayBaseString
{
};

// XML图形窗口（继承自GraphicWin）
struct  GraphicWinXML : GraphicWin
{
	__int16 child_width;           // 子窗口宽度
	__int16 child_height;          // 子窗口高度
	NamedArrayWindow xml_children;  // XML子窗口数组
	ObjectArrayIFaceRenderIndexing iface_window_renders;  // 界面窗口渲染索引
	int iface_window_index;        // 界面窗口索引
	NamedArrayWindow iface_buttons;  // 界面按钮数组
	ObjectArrayIFaceRenderIndexing iface_button_renders;  // 界面按钮渲染索引
	int iface_button_index;        // 界面按钮索引
	NamedArrayIFaceTex iface_texs;  // 界面纹理数组
	ObjectArrayIFaceRenderIndexing iface_tex_renders;  // 界面纹理渲染索引
	int iface_tex_index;           // 界面纹理索引
	NamedArrayRectTemplateshort iface_rects;  // 界面矩形数组
	ObjectArrayIFaceRenderIndexing iface_rect_renders;  // 界面矩形渲染索引
	int iface_rect_index;          // 界面矩形索引
	NamedArrayColor iface_colors;  // 界面颜色数组
	ObjectArrayIFaceRenderIndexing iface_color_renders;  // 界面颜色渲染索引
	int iface_color_index;         // 界面颜色索引
	NamedArrayIFacePoint iface_points;  // 界面点数组
	ObjectArrayIFaceRenderIndexing iface_point_renders;  // 界面点渲染索引
	int iface_point_index;         // 界面点索引
	NamedArrayIFaceSprite iface_sprites;  // 界面精灵数组
	ObjectArrayIFaceRenderIndexing iface_sprite_renders;  // 界面精灵渲染索引
	int iface_sprite_index;        // 界面精灵索引
	NamedArrayIFaceStretchSprite iface_stretch_sprites;  // 界面拉伸精灵数组
	ObjectArrayIFaceRenderIndexing iface_stretch_renders;  // 界面拉伸渲染索引
	int iface_stretch_index;       // 界面拉伸索引
	NamedArrayIFaceBorder iface_borders;  // 界面边框数组
	ObjectArrayString iface_tex_loads;   // 界面纹理加载数组
};

// 界面窗口（继承自GraphicWinXML）
struct   __declspec(align(4)) IFaceWindow : GraphicWinXML
{
	int visible;  // 可见性标志
};

// 重力窗口（继承自IFaceWindow，具有动画效果）
struct  GravWindow : IFaceWindow
{
	unsigned int begin_time;  // 开始时间
	unsigned int timing;      // 计时
	float start_x;           // 起始X坐标
	float start_y;           // 起始Y坐标
	float end_x;             // 结束X坐标
	float end_y;             // 结束Y坐标
	float vel_x;             // X轴速度
	float vel_y;             // Y轴速度
	float accel_x;           // X轴加速度
	float accel_y;           // Y轴加速度
};

// 帮助框窗口（继承自GravWindow）
struct  HelpBoxWin : GravWindow
{
	String base_string;  // 基础字符串
};

// ELO排行榜监听器接口
struct  ILeaderboardsForELOListener
{
	int unk;  // 虚函数表指针
};

// 计时器结构
struct  __declspec(align(4)) Time
{
	Window* parent;        // 父窗口指针
	int flags;            // 标志位
	unsigned int handle;  // 句柄
	void(__cdecl* callback)(int);  // 回调函数指针
	void(__cdecl* callback_extra)(int, int);  // 额外回调函数指针
	int extra_data;       // 额外数据
	int id;               // 计时器ID
	unsigned int delay;   // 延迟时间
	int message_queued;   // 消息队列标志
	int resolution;       // 分辨率
	int skip;             // 跳过计数
	bool running;         // 运行标志
};

// 按钮控件（继承自GraphicWin）
struct  Button : GraphicWin
{
	int flags;                     // 按钮标志
	int onoff;                     // 开关状态
	int pressed_delay;             // 按下延迟
	int pressed_interval_delay;    // 按下间隔延迟
	Time pressed_timer;            // 按下计时器
	int passover;                  // 经过状态
	int text_offset_x;             // 文本X偏移
	int text_offset_y;             // 文本Y偏移
	unsigned int passover_delay;   // 经过延迟
	unsigned int passover_time;    // 经过时间
	String string;                 // 按钮文本
	Color back_color;              // 背景颜色
	Color upper_bevel_color;       // 上斜面颜色
	Color lower_bevel_color;       // 下斜面颜色
	int bevel_thickness;           // 斜面厚度
	Color border_color;            // 边框颜色
	Color focus_box_color;         // 焦点框颜色
	int state;                     // 按钮状态
	unsigned int timing;           // 计时
	unsigned int timing_tracking;  // 跟踪计时
	ButtonGroup* group;            // 按钮组指针
};

// 按钮组
struct  ButtonGroup
{
	Button* buttons[32];  // 按钮指针数组
	int num_buttons;      // 按钮数量
	int selected;         // 选中按钮索引
	int group_flags;      // 按钮组标志
	int group_id;         // 按钮组ID
	int setting;          // 设置值
};

// 精灵数组基类
struct ArrayBaseSpriteBase : ArrayBaseMaster
{
	int unk[3];  // 保留位
	/* 成员函数声明（已注释） */
};

// 简单拷贝精灵数组基类
struct  ArrayBaseSimpleCopySpriteBase : ArrayBaseSpriteBase
{
};

// 精灵数组
struct  ArraySpriteBase : ArrayBaseSimpleCopySpriteBase
{
	int cur_index;  // 当前索引
};

// 精灵指针数组
struct  PtrArraySpriteBase : ArraySpriteBase
{
};

// 图形系统精灵对象
struct  GSSprite : GSObject
{
	PtrArraySpriteBase sprites;  // 精灵指针数组
};

// 精灵基类
struct  SpriteBase
{
	int unk;            // 虚函数表指针
	GSSprite* gs_sprite;  // 图形系统精灵对象
	MemType mem_type;   // 内存类型
};

// 浮点数数组基类
struct  __declspec(align(4)) ArrayBasefloat : ArrayBaseMaster
{
	int unk;                // 虚函数表指针
	float* list;           // 浮点数组指针
	unsigned __int8 flags;  // 数组标志
};

// 简单拷贝浮点数数组基类
struct  ArrayBaseSimpleCopyfloat : ArrayBasefloat
{
};

// 浮点数数组
struct  Arrayfloat : ArrayBaseSimpleCopyfloat
{
	int cur_index;  // 当前索引
};

// 精灵类（继承自ImageIO和SpriteBase）
struct  Sprite : ImageIO, SpriteBase
{
	int real_width;        // 实际宽度
	int real_height;       // 实际高度
	int sprite_width;      // 精灵宽度
	int sprite_height;     // 精灵高度
	int x_offset;          // X偏移
	int y_offset;          // Y偏移
	int load_mip_levels;   // 加载MIP层级
	MemType load_mem_type; // 加载内存类型
	int load_flags;        // 加载标志
	String name;           // 精灵名称
	Arrayfloat discrete_levels;  // 离散层级数组
	Buffer* load_buffer;   // 加载缓冲区指针
};

// 滚动条控件（继承自GraphicWin）
struct   __declspec(align(4)) Scroll : GraphicWin
{
	int flags;                     // 滚动条标志
	Color border_color;            // 边框颜色
	int range_low;                 // 范围下限
	int range_high;                // 范围上限
	int range_inverted;            // 范围反转标志
	int position;                  // 当前位置
	int delay;                     // 延迟
	int speed;                     // 滚动速度
	int delay_time;                // 延迟时间
	int repeat_time;               // 重复时间
	int scrolling;                 // 滚动中标志
	int paging;                    // 分页标志
	int paging_on;                 // 分页开启标志
	int scroll_increment;          // 滚动增量
	Color thumb_color;             // 滑块颜色
	RectTemplateshort thumb_rect;  // 滑块矩形区域
	Color button_color;            // 按钮颜色
	int bar_thickness;             // 条厚度
	Color bar_color;               // 条颜色
	int bevel_thickness;           // 斜面厚度
	Color bevel_upper_color;       // 上斜面颜色
	Color bevel_lower_color;       // 下斜面颜色
	Button button1;                // 按钮1
	Button button2;                // 按钮2
};

// 回收器字符串列表条目
struct  RecyclerStringListEntry
{
};

// 字符串列表条目
struct  StringListEntry : RecyclerStringListEntry
{
	String string;   // 字符串
	String prefix;   // 前缀
	int flags;       // 标志
	int id;          // ID
	int extra;       // 额外数据
};

// 字符串列表条目数组基类
struct  __declspec(align(4)) ArrayBaseStringListEntry : ArrayBaseMaster
{
	int unk;                        // 虚函数表指针
	StringListEntry** list;         // 条目指针数组
	unsigned __int8 flags;          // 数组标志
};

// 简单拷贝字符串列表条目数组基类
struct  ArrayBaseSimpleCopyStringListEntry : ArrayBaseStringListEntry
{
};

// 字符串列表条目数组
struct  ArrayStringListEntry : ArrayBaseSimpleCopyStringListEntry
{
	int cur_index;  // 当前索引
};

// 字符串列表条目指针数组
struct  PtrArrayStringListEntry : ArrayStringListEntry
{
};

// 字符串列表
struct  StringList : PtrArrayStringListEntry
{
	int change_count;  // 变更计数
};

// 字符串框控件（继承自GraphicWin）
struct  StringBox : GraphicWin
{
	int invert;                     // 反转标志
	int line_limit;                 // 行限制
	int stick_to_bottom;            // 是否粘附到底部
	__declspec(align(1)) Scroll scroll;  // 滚动条
	StringList* x_stringlist;       // 外部字符串列表指针
	StringList stringlist;          // 内部字符串列表
	int stringlist_change_count;    // 字符串列表变更计数
};
// 对话框控件（继承自GraphicWin）
struct  Dialog : GraphicWin
{
	int style;                      // 对话框样式
	int dialog_flags;               // 对话框标志
	int x;                          // X坐标
	int y;                          // Y坐标
	int xs;                         // 宽度
	int ys;                         // 高度
	int indent;                     // 缩进
	int top_padding;                // 顶部内边距
	int bottom_padding;             // 底部内边距
	int margin_padding;              // 外边距
	int item_padding;               // 项内边距
	int item_height;                // 项高度
	int num_columns;                // 列数
	int num_rows;                   // 行数
	int calc_num_columns;           // 计算列数
	int calc_num_rows;              // 计算行数
	int calc_width;                 // 计算宽度
	int calc_height;                // 计算高度
	int calc_item_width;            // 计算项宽度
	int calc_item_height;           // 计算项高度
	Color dialog_back_color;        // 对话框背景颜色
	const Font* dialog_font[3];     // 对话框字体数组
	Color dialog_text_color[3];     // 对话框文本颜色数组
	Color dialog_shadow[3];         // 对话框阴影颜色数组
	int dialog_shadow_off_x[3];     // 对话框阴影X偏移数组
	int dialog_shadow_off_y[3];     // 对话框阴影Y偏移数组
	Color border_bevel_upper;       // 边框上斜面颜色
	Color border_bevel_lower;       // 边框下斜面颜色
	int border_bevel_thickness;     // 边框斜面厚度
	Color focus_color;              // 焦点颜色
	StringList* strings;            // 字符串列表指针
	StringList* ext_strings;       // 外部字符串列表指针
	StringList int_strings;         // 内部字符串列表
	int state_flag;                 // 状态标志
	int ghost_flag;                 // 幽灵标志（透明/禁用状态）
};

// 弹出窗口音效结构
struct  PopupWave
{
	String filename;    // 文件名
	int wave_number;    // 音效编号
	unsigned int volume; // 音量
	unsigned int fade_time; // 淡入淡出时间
	int pitch;          // 音高
	int pan;            // 声道平衡
};

// 基础弹出窗口（继承自GraphicWin）
struct  BasePop : GraphicWin
{
	GraphicWin* external_parent;    // 外部父窗口
	int external_x;                 // 外部X坐标
	int external_y;                 // 外部Y坐标
	int external_xs;                // 外部宽度
	int external_ys;                // 外部高度
	GraphicWin* work;               // 工作窗口指针
	int result;                     // 结果
	int def_or_len;                 // 默认值或长度
	String caption;                 // 标题
	RectTemplateshort sprite_rect;  // 精灵矩形区域
	Button ok;                      // 确定按钮
	Button cancel;                  // 取消按钮
	int num_buttons;                // 按钮数量
	Button* buttons[8];             // 按钮指针数组
	Sprite sprite_internal;         // 内部精灵
	Sprite* lone_sprite;            // 独立精灵指针
	Buffer* back_tile_b;            // 背景贴图缓冲区
	Sprite* back_tile;              // 背景贴图精灵
	Sprite* center_sprite;          // 中心精灵
	StringBox string_box;           // 字符串框
	StringList buttonlist;          // 按钮列表
	StringList stringlist;          // 字符串列表
	StringList itemlist;            // 项目列表
	StringList defaultlist;         // 默认列表
	int left_padding;               // 左内边距
	int right_padding;              // 右内边距
	int top_padding;                // 顶部内边距
	int bottom_padding;             // 底部内边距
	int margin_padding;             // 外边距
	int object_padding;             // 对象内边距
	int text_indent;                // 文本缩进
	bool centre_string_text;        // 是否居中文本
	void(__cdecl* list_draw_func)(GraphicWin*, int, int, int, int, int);  // 列表绘制函数指针
	int(__cdecl* list_write_func)(GraphicWin*, int, int, RectTemplateshort*, const String*);  // 列表写入函数指针
	String dialog_edit_default;     // 对话框编辑默认值
	int dialog_type;                // 对话框类型
	int dialog_state_flag;          // 对话框状态标志
	int dialog_width;               // 对话框宽度
	int dialog_height;              // 对话框高度
	int dialog_indent;              // 对话框缩进
	int dialog_force_item_height;   // 对话框强制项高度
	int dialog_rows;                // 对话框行数
	int dialog_cols;                // 对话框列数
	int dialog_autosize;            // 对话框自动调整大小标志
	Dialog* dialog;                 // 对话框指针
	PopupWave popup_wave[2];        // 弹出窗口音效数组
	void(__cdecl* popwave_func)(PopupWave*, int);  // 弹出音效函数指针
	Spot spots;                     // 热点
	int window_style;               // 窗口样式
	int popup_flags;                // 弹出窗口标志
	int extra_flags;                // 额外标志
	int calc_num_buttons;           // 计算按钮数量
	int calc_x;                     // 计算X坐标
	int calc_y;                     // 计算Y坐标
	int calc_width;                 // 计算宽度
	int calc_height;                // 计算高度
	int calc_box_height;            // 计算框高度
	int calc_item_height;           // 计算项高度
	int calc_button_width;          // 计算按钮宽度
	int calc_button_height;         // 计算按钮高度
	int calc_string_height;         // 计算字符串高度
	int calc_sprite_width;          // 计算精灵宽度
	int calc_sprite_height;         // 计算精灵高度
	int calc_margin_padding;        // 计算外边距
	int calc_object_padding;        // 计算对象内边距
	int calc_top_padding;           // 计算顶部内边距
	int calc_bottom_padding;        // 计算底部内边距
	int calc_left_padding;          // 计算左内边距
	int calc_right_padding;         // 计算右内边距
	int numeric_edit;               // 数字编辑标志
	int base_x;                     // 基础X坐标
	int base_y;                     // 基础Y坐标
	int special;                    // 特殊标志
	unsigned int time_out;          // 超时时间
	unsigned int time_out_start;    // 超时开始时间
	int sprite_scale_num;           // 精灵缩放分子
	int sprite_scale_den;           // 精灵缩放分母
	Color back_color;               // 背景颜色
	Font* string_font[4];           // 字符串字体数组
	Color string_color[4];           // 字符串颜色数组
	Color string_shadow[4];         // 字符串阴影颜色数组
	int string_shadow_off_x[4];     // 字符串阴影X偏移数组
	int string_shadow_off_y[4];     // 字符串阴影Y偏移数组
	int(__cdecl* sprite_click)(int);       // 精灵点击函数指针
	int(__cdecl* sprite_double_click)(int); // 精灵双击函数指针
	Font* button_font[3];            // 按钮字体数组
	Color button_color[3];           // 按钮颜色数组
	Color button_shadow[3];          // 按钮阴影颜色数组
	int button_shadow_off_x[3];      // 按钮阴影X偏移数组
	int button_shadow_off_y[3];      // 按钮阴影Y偏移数组
	Color button_back;               // 按钮背景颜色
	Color button_upper_bevel_color;  // 按钮上斜面颜色
	Color button_lower_bevel_color;  // 按钮下斜面颜色
	int button_bevel_thickness;      // 按钮斜面厚度
	Color button_border_color;       // 按钮边框颜色
	Color button_focus_box_color;    // 按钮焦点框颜色
	String ok_text;                  // 确定按钮文本
	String cancel_text;              // 取消按钮文本
	const Window* parent;            // 父窗口指针
};

// 弹出窗口（继承自BasePop和GameAccessConst）
const struct  Popup : BasePop, GameAccessConst
{
	_BYTE gap18F4[4];      // 填充字节
	int popup_id;          // 弹出窗口ID
	int extra_data;        // 额外数据
	int extra_data2;       // 额外数据2
	IFaceTex texs[3][3];   // 界面纹理数组（3x3）
};

// 游戏模组数组基类
struct  __declspec(align(4)) ArrayBaseGameMod : ArrayBaseMaster
{
	int unk;                // 虚函数表指针
	GameMod* list;          // 游戏模组数组指针
	unsigned __int8 flags;  // 数组标志
};

// 游戏模组对象数组
const struct  ObjectArrayGameMod : ArrayBaseGameMod
{
};

// 游戏模组集合
struct  __declspec(align(2)) GameMods
{
	ObjectArrayGameMod mod_list;  // 模组列表
	unsigned __int8 initialized;  // 初始化标志
	unsigned __int8 force_load;   // 强制加载标志
	bool mSolo;                   // 单人游戏标志
};

// 下拉菜单项结构
struct  PullDownStruct
{
	Color color;            // 颜色
	String text_left;       // 左侧文本
	String text_right;      // 右侧文本
	int id;                 // ID
	int flags;              // 标志
	int key_index;          // 键索引
};

// 下拉菜单项数组基类
struct  __declspec(align(4)) ArrayBasePullDownStruct : ArrayBaseMaster
{
	int unk;                // 虚函数表指针
	PullDownStruct* list;   // 下拉菜单项数组指针
	unsigned __int8 flags;  // 数组标志
};

// 下拉菜单项对象数组
struct  ObjectArrayPullDownStruct : ArrayBasePullDownStruct
{
};

// 下拉菜单控件（继承自GraphicWin）
struct   __declspec(align(4)) PullDown : GraphicWin
{
	int flags;                          // 下拉菜单标志
	ObjectArrayPullDownStruct items;    // 下拉菜单项数组
	void(__cdecl* pulldown_callback)(int);  // 下拉菜单回调函数指针
	int(__cdecl* loop_callback)();     // 循环回调函数指针
	int max_length;                     // 最大长度
	int selected;                       // 选中项索引
	int num_visible_items;              // 可见项数量
	int first_item;                     // 第一项索引
	int last_item;                      // 最后一项索引
	unsigned int last_time;             // 最后时间
	unsigned __int16 scroll_delay;      // 滚动延迟
	unsigned __int8 needs_scroll;       // 需要滚动标志
	unsigned __int8 scrolling;          // 滚动中标志
	unsigned __int8 changed;            // 已改变标志
	bool ignore_first_click;            // 忽略第一次点击标志
	__declspec(align(4)) int force_width;  // 强制宽度
	Window* notify_win;                 // 通知窗口
	int(__cdecl* fill_func)(GraphicWin*, int, RectTemplateshort*);  // 填充函数指针
	int(__cdecl* backfill_func)(GraphicWin*);  // 背景填充函数指针
};

// 组合框条目结构
struct  ComboBoxEntry
{
	Color color;        // 颜色
	Color color2;       // 颜色2
	int id;             // ID
	int dx;             // X偏移
	int dy;             // Y偏移
	String string;      // 字符串
	int flags;          // 标志
};

// 组合框条目数组基类
struct  __declspec(align(4)) ArrayBaseComboBoxEntry : ArrayBaseMaster
{
	int unk;                // 虚函数表指针
	ComboBoxEntry** list;   // 组合框条目指针数组
	unsigned __int8 flags;  // 数组标志
};

// 简单拷贝组合框条目数组基类
struct  ArrayBaseSimpleCopyComboBoxEntry : ArrayBaseComboBoxEntry
{
};

// 组合框条目数组
struct  ArrayComboBoxEntry : ArrayBaseSimpleCopyComboBoxEntry
{
	int cur_index;  // 当前索引
};

// 组合框控件（继承自GraphicWin）
struct  __declspec(align(4)) ComboBox : GraphicWin
{
	ArrayComboBoxEntry entries;  // 组合框条目数组
	__declspec(align(1)) PullDown pull;  // 下拉菜单
	String title;               // 标题
	int flags;                  // 标志
	int selected;               // 选中项索引
	int margin_padding;         // 外边距
	Color text_color;           // 文本颜色
	Color disabled_text_color;  // 禁用文本颜色
	Color back_color;           // 背景颜色
	Color disabled_back_color;  // 禁用背景颜色
	Color border_color;         // 边框颜色
	bool supressDropDown;       // 禁止下拉标志
};

// 复选框控件（继承自GraphicWin）
struct  __declspec(align(4)) CheckBox : GraphicWin
{
	String string;      // 文本
	unsigned __int8 state;  // 状态
	char padding;       // 填充
};

// 杂项访问类
struct  MiscAccess
{
};

// 帮助框（继承自GraphicWin和MiscAccess）
struct  HelpBox : GraphicWin, MiscAccess
{
	String base_key;            // 基础键
	StringList string_list;     // 字符串列表
	StringList string_list_2;   // 字符串列表2
	int box_width;              // 框宽度
	int box_height;             // 框高度
	String curr_help_key;       // 当前帮助键
	String curr_help_key_2;     // 当前帮助键2
	String curr_string;         // 当前字符串
	RectTemplateshort curr_rect;  // 当前矩形区域
	unsigned int start_time;     // 开始时间
	int timing;                 // 计时
};

// 设置窗口子窗口（继承自GravWindow和GameAccess）
struct  SetupWinChild : GravWindow, GameAccess
{
};

// 玩家设置窗口（继承自SetupWinChild）
struct  SetupWinPlayers : SetupWinChild
{
};

// 规则设置窗口（继承自SetupWinChild）
struct  SetupWinRules : SetupWinChild
{
};

// 自定义设置窗口（继承自SetupWinChild）
struct  SetupWinCustom : SetupWinChild
{
};

// 无符号64位整数数组基类
struct  __declspec(align(4)) ArrayBaseunsigned__int64 : ArrayBaseMaster
{
	int unk;                // 虚函数表指针
	unsigned __int64* list; // 无符号64位整数数组指针
	unsigned __int8 flags;  // 数组标志
};

// 简单拷贝无符号64位整数数组基类
struct  ArrayBaseSimpleCopyunsigned__int64 : ArrayBaseunsigned__int64
{
};

// 无符号64位整数数组
struct  Arrayunsigned__int64 : ArrayBaseSimpleCopyunsigned__int64
{
	int cur_index;  // 当前索引
};

// 设置窗口（继承自HelpBoxWin、ILeaderboardsForELOListener和GameAccess）
const struct   __declspec(align(4)) SetupWin : HelpBoxWin, ILeaderboardsForELOListener, GameAccess
{
	_BYTE gap4AC[4];  // 填充字节
	Popup file_transfer_popup;  // 文件传输弹出窗口
	String save_game_name;      // 保存游戏名称
	String default_scen_path;   // 默认场景路径
	String custom_scen_path;    // 自定义场景路径
	String default_script_path; // 默认脚本路径
	String custom_script_path;  // 自定义脚本路径
	ObjectArrayString custom_scen_list;   // 自定义场景列表
	ObjectArrayString custom_script_list; // 自定义脚本列表
	Arrayunsigned__int64 scen_mod_list;   // 场景模组列表
	Arrayunsigned__int64 script_mod_list; // 脚本模组列表
	int num_scen_in_game_dir;   // 游戏目录中的场景数量
	int num_script_in_game_dir; // 游戏目录中的脚本数量
	int num_scen_in_mod_dir;    // 模组目录中的场景数量
	int num_script_in_mod_dir;  // 模组目录中的脚本数量
	int result;                 // 结果
	int flags;                  // 标志
	bool is_ranked;             // 是否排位
	int unk3[4];               // 数据连接状态
	int last_value;             // 最后值
	int chat_count;             // 聊天计数
	int flooded;                // 洪水攻击标志
	unsigned int flood_protection;  // 洪水保护
	unsigned int last_chat;     // 最后聊天时间
	int interface_needs_update; // 界面需要更新标志
	unsigned __int8 use_mods_path;  // 使用模组路径标志
	unsigned __int8 use_old_path;   // 使用旧路径标志
	unsigned __int8 scen_script_change;  // 场景脚本更改标志
	__declspec(align(2)) IFaceTex texs_tab_up[3];    // 标签页向上纹理数组
	IFaceTex texs_tab_down[3];  // 标签页向下纹理数组
	RectTemplateshort title_rects[30];  // 标题矩形数组
	GameMods gamemods;          // 游戏模组
	int mod_synced;             // 模组同步标志
	ComboBox* combo_boxes[78];  // 组合框指针数组
	CheckBox* check_buttons[11]; // 复选框指针数组
	CheckBox* ready_boxes[8];    // 准备复选框指针数组
	StringBox* elo_boxes[8];     // ELO框指针数组
	StringBox* game_elo_box;     // 游戏ELO框指针
	StringBox* desc_box;         // 描述框指针
	Font* font_small;            // 小字体
	Font* font_medium;           // 中字体
	Font* font_large;            // 大字体
	HelpBox help_box;            // 帮助框
	String crr_help;             // 当前帮助
	int unk;                     // 帮助块指针
	Time ready_timer;            // 准备计时器
	SetupWinPlayers players_win; // 玩家设置窗口
	SetupWinRules rules_win;     // 规则设置窗口
	SetupWinCustom custom_win;   // 自定义设置窗口
	unsigned int gamespy_quickmatch_time;  // Gamespy快速匹配时间
	int unk1[2];                 // ELO助手智能指针
	unsigned int m_elo_check_attempts;  // ELO检查尝试次数
	bool m_local_player_data_changed[8];  // 本地玩家数据已更改标志数组
	bool m_local_game_data_changed;       // 本地游戏数据已更改标志
	__declspec(align(4)) Time m_apply_button_timer;  // 应用按钮计时器
	Time m_local_countdown_timer;         // 本地倒计时计时器
	int m_local_countdown_steps_left;     // 本地倒计时剩余步数
	int m_local_countdown_steps_max;      // 本地倒计时最大步数
	Time m_cancel_start_button_timer;     // 取消开始按钮计时器
	bool m_combo_locally_changed[78];     // 组合框本地更改标志数组
	bool m_checkbox_locally_changed[11];  // 复选框本地更改标志数组
};



// 字符串表结构，继承自对象数组字符串
const struct  StringTable : ObjectArrayString
{
};

// 玩家偏好设置索引枚举
// 重命名说明：原枚举名$FF44B57C8E42D8A0B477FFB9DB84CE4B是编译器生成的随机名
// 重命名为PlayerPrefsIndexEnum，明确表示这是玩家偏好设置的索引枚举
enum PlayerPrefsIndexEnum : __int32
{
	PLAYERPREFS_PREFS = 0x0,                    // 基础偏好设置
	PLAYERPREFS_FLAGS = 0x1,                    // 标志位设置
	PLAYERPREFS_TRIBE = 0x2,                    // 部落选择
	PLAYERPREFS_STATWIN_MODE = 0x3,             // 统计窗口模式
	PLAYERPREFS_STAT_MODE = 0x4,                // 统计模式
	PLAYERPREFS_VERBOSITY = 0x5,                // 详细程度
	PLAYERPREFS_ZOOM_IN = 0x6,                  // 放大快捷键
	PLAYERPREFS_ZOOM_OUT = 0x7,                 // 缩小快捷键
	PLAYERPREFS_DETAIL = 0x8,                   // 细节等级
	PLAYERPREFS_RES = 0x9,                      // 分辨率设置
	PLAYERPREFS_MUSIC_VOL = 0xA,                // 音乐音量
	PLAYERPREFS_SOUND_VOL = 0xB,                // 音效音量
	PLAYERPREFS_MESSAGE_LENGTH = 0xC,           // 消息长度
	PLAYERPREFS_SCROLL_SPEED = 0xD,             // 滚动速度
	PLAYERPREFS_PEASANT_STANCE = 0xE,           // 农民姿态
	PLAYERPREFS_PEASANTS_WAIT = 0xF,            // 农民等待设置
	PLAYERPREFS_BUILDING_STANCE = 0x10,         // 建筑姿态
	PLAYERPREFS_TAUNT_VOL = 0x11,               // 嘲讽音量
	PLAYERPREFS_FULLSCREEN = 0x12,              // 全屏设置
	PLAYERPREFS_DISABLE_CROSS_NETWORK_PLAY = 0x13, // 禁用跨网络游戏
	PLAYERPREFS_LANGUAGE = 0x14,                // 语言设置
	NUM_PREFSINDEX = 0x15,                      // 偏好设置索引总数
};

// 玩家偏好设置字段结构体
// 重命名说明：原结构体名$D4E00B92FCC34F9DC0171D6677FA97C6是编译器生成的随机名
// 重命名为PlayerPrefsFields，明确表示这是玩家偏好设置的字段集合
struct PlayerPrefsFields
{
	int prefs;          // 基础偏好
	int flags;          // 标志位
	int tribe;          // 部落
	int statwin_mode;   // 统计窗口模式
	int stat_mode;      // 统计模式
	int verbosity;      // 详细程度
	int zoom_in;        // 放大
	int zoom_out;       // 缩小
	int detail;         // 细节等级
	int res;            // 分辨率
	int music_vol;      // 音乐音量
	int sound_vol;      // 音效音量
	int message_length; // 消息长度
	int scroll_speed;   // 滚动速度
	int peasants;       // 农民设置
	int peasants_wait;  // 农民等待
	int buildings;      // 建筑设置
	int taunt_vol;      // 嘲讽音量
	int fullscreen;     // 全屏
	int disable_cross_network_play; // 禁用跨网络游戏
	int language;       // 语言
};

// 玩家偏好设置联合体
// 重命名说明：原联合体名$EEA98EBFEFEEAD8124573FCDDCF337EE是编译器生成的随机名
// 重命名为PlayerPrefsUnion，明确表示这是玩家偏好设置的联合体
union PlayerPrefsUnion
{
	PlayerPrefsFields fields;  // 结构体方式访问，原字段名__s0
	int array[21];           // 数组方式访问
};

// 玩家偏好设置主结构体
struct PlayerPrefs
{
	// 重命名说明：原字段名___u0是编译器生成的随机名
	// 重命名为data，明确表示这是偏好设置的数据部分
	PlayerPrefsUnion data;          // 偏好设置数据
	unsigned __int8 game_params[2][30]; // 游戏参数
};

// 带名称的对象数组字符串结构体
struct  NamedObjectArrayString : ArrayBaseString
{
	String* namelist;  // 名称列表
};

// 简单复制整数数组基类
struct  ArrayBaseSimpleCopyint : ArrayBaseInt
{
};

// 简单整数数组结构体
const struct  SimpleArrayint : ArrayBaseSimpleCopyint
{
	int cur_index;  // 当前索引
};

// GameSpy好友请求结构体
struct  GameSpyBuddyRequest
{
	int profile_id;  // 档案ID
	String nick;     // 昵称
};

// GameSpy好友请求数组基类
struct  __declspec(align(4)) ArrayBaseGameSpyBuddyRequest : ArrayBaseMaster
{
	int unk;//ArrayBase<GameSpyBuddyRequest>_vtbl* __vftable /*VFT*/;
	GameSpyBuddyRequest* list;    // 请求列表
	unsigned __int8 flags;       // 标志位
};

// GameSpy好友请求对象数组
struct  ObjectArrayGameSpyBuddyRequest : ArrayBaseGameSpyBuddyRequest
{
};

// 玩家档案结构体，包含游戏设置和个人偏好
const struct  PlayerProfile : GameAccess, MiscAccess
{
	_BYTE gap0;                          // 对齐填充
	String directory;                     // 存档目录
	ObjectArrayString player_names;      // 玩家名称列表
	int current_name_index;              // 当前使用的名称索引
	PlayerPrefs prefs;                   // 偏好设置
	BitMask_22 notify_flags;             // 通知标志位
	int main_open;                       // 主菜单是否打开
	int market_open;                     // 市场是否打开
	int resource_open;                   // 资源界面是否打开
	int infra_open;                      // 基础设施界面是否打开
	int mini_lib_open;                   // 迷你库是否打开
	int graphics_states[25];             // 图形状态数组
	int graphics_levels[25];             // 图形等级数组
	int show_tips;                       // 是否显示提示
	int tip_index;                       // 当前提示索引
	int played_game;                     // 是否玩过游戏
	int last_slots[8];                   // 最后使用的槽位
	int last_tribes[8];                  // 最后使用的部落
	int last_whos[8];                    // 最后使用的角色
	int last_diffs[8];                    // 最后使用的难度
	int last_teams[8];                   // 最后使用的队伍
	unsigned int host_port;              // 主机端口
	unsigned int local_port;             // 本地端口
	String ip_override;                  // IP覆盖设置
	String last_ip_address;              // 最后连接的IP地址
	String last_campaign_won;            // 最后赢得的战役
	String last_scenario_won;            // 最后赢得的场景
	String last_scenario;                // 最后游玩的场景
	String last_campaign;                // 最后游玩的战役
	NamedObjectArrayString ctw_continue_files; // 继续游戏文件列表
	String gs_email;                     // GameSpy邮箱
	String gs_nick;                      // GameSpy昵称
	String gs_password;                  // GameSpy密码
	int gs_save_password;                // 是否保存密码
	int gs_firewall;                     // 防火墙设置
	String gs_last_game_name;            // 最后游戏名称
	int gs_qm_map_style;                 // 快速比赛地图风格
	int gs_qm_team_style;                // 快速比赛队伍风格
	int gs_qm_game_rules;                // 快速比赛游戏规则
	int gs_qm_num_players;               // 快速比赛玩家数量
	int gs_qm_min_rating;                // 快速比赛最低评分
	int gs_qm_max_rating;                // 快速比赛最高评分
	int gs_qm_tribe;                     // 快速比赛部落
	int gs_qm_strict;                    // 快速比赛严格模式
	int gs_qm_prevent_hosting;           // 快速比赛防止托管
	int gs_team_style;                   // 队伍风格
	int gs_map_style;                    // 地图风格
	int gs_map_size;                     // 地图大小
	int gs_max_players;                  // 最大玩家数
	int gs_game_rules;                   // 游戏规则
	int gs_cannon_times;                 // 加农炮时间
	int gs_game_speed;                   // 游戏速度
	unsigned __int8 gs_tournament_play;  // 锦标赛模式
	unsigned __int8 gs_require_random_teams; // 要求随机队伍
	unsigned __int8 gs_require_random_nations; // 要求随机国家
	unsigned __int8 gs_turbo_resources;   // 加速资源
	unsigned __int8 gs_free_pause;        // 自由暂停
	unsigned __int8 gs_filter_team_styles_any; // 过滤任何队伍风格
	unsigned __int8 gs_filter_team_styles[14]; // 队伍风格过滤器
	unsigned __int8 gs_filter_map_styles_any; // 过滤任何地图风格
	unsigned __int8 gs_filter_map_styles[23]; // 地图风格过滤器
	unsigned __int8 gs_filter_map_sizes_any; // 过滤任何地图大小
	unsigned __int8 gs_filter_map_sizes[7]; // 地图大小过滤器
	unsigned __int8 gs_filter_cannon_times_any; // 过滤任何加农炮时间
	unsigned __int8 gs_filter_cannon_times[5]; // 加农炮时间过滤器
	unsigned __int8 gs_filter_game_rules_any; // 过滤任何游戏规则
	unsigned __int8 gs_filter_game_rules[12]; // 游戏规则过滤器
	unsigned __int8 gs_filter_game_speeds_any; // 过滤任何游戏速度
	unsigned __int8 gs_filter_game_speeds[4]; // 游戏速度过滤器
	unsigned __int8 gs_filter_misc_flags_any; // 过滤任何杂项标志
	unsigned __int8 gs_filter_misc_flags[7]; // 杂项标志过滤器
	unsigned __int8 gs_filter_any;        // 任何过滤器
	SimpleArrayint gs_ignore_id_list;    // 忽略ID列表
	ObjectArrayString gs_ignore_nick_list; // 忽略昵称列表
	String gs_last_group_cat;            // 最后分组类别
	int gs_last_group_index;             // 最后分组索引
	ObjectArrayGameSpyBuddyRequest gs_buddy_requests; // 好友请求列表
	String filename;                     // 文件名
	_RTL_CRITICAL_SECTION m_criticalSection; // 临界区用于线程安全
};

// 随机数生成器结构体
struct  Random
{
	unsigned int random_seed;  // 随机数种子
};

// 游戏日志类型枚举
enum GameLogType : __int32
{
	GAMELOG_STARTING_INDEX = 0x0,     // 起始索引
	GLOG_MISC = 0x1,                   // 杂项日志
	GLOG_PERFORMANCE = 0x2,           // 性能日志
	GLOG_COMMANDMANAGER = 0x3,        // 命令管理器日志
	GLOG_TURN_TUNING = 0x4,           // 回合调优日志
	GLOG_TURNCONTROL = 0x5,           // 回合控制日志
	GLOG_TIMESYNC = 0x6,              // 时间同步日志
	GLOG_NETDAEMON = 0x7,             // 网络守护进程日志
	GLOG_DROPCONTROL = 0x8,           // 丢弃控制日志
	GLOG_CONNECTIONDATA = 0x9,        // 连接数据日志
	GLOG_WORLD = 0xA,                 // 世界日志
	GLOG_CITIES = 0xB,                // 城市日志
	GLOG_BUILDS = 0xC,                // 建筑日志
	GLOG_UNITS = 0xD,                 // 单位日志
	GLOG_ANIMALS = 0xE,               // 动物日志
	GLOG_WALLS = 0xF,                 // 城墙日志
	GLOG_AMMO = 0x10,                 // 弹药日志
	GLOG_DEATHS = 0x11,               // 死亡日志
	GLOG_GROUPS = 0x12,               // 组日志
	GLOG_LEADERS = 0x13,              // 领导者日志
	GLOG_GUYS = 0x14,                 // 人员日志
	GLOG_GRAPHICCHADS = 0x15,         // 图形角色日志
	GLOG_GRAPHICEVENTS = 0x16,        // 图形事件日志
	GLOG_GOODS = 0x17,                // 物品日志
	GLOG_ITEMS = 0x18,                // 道具日志
	GLOG_ANIMCHECK = 0x19,            // 动画检查日志
	GLOG_PROGRESSCHART = 0x1A,        // 进度图表日志
	GLOG_MAPMAKE = 0x1B,              // 地图制作日志
	GLOG_TERRAIN = 0x1C,              // 地形日志
	GLOG_PATHFINDER = 0x1D,           // 路径查找器日志
	GLOG_CHECKSUM = 0x1E,             // 校验和日志
	GLOG_SOUND = 0x1F,                // 声音日志
	GLOG_RULES = 0x20,                // 规则日志
	GLOG_SCRIPT = 0x21,               // 脚本日志
	GLOG_GPIECE_VERIFY = 0x22,        // 图形部件验证日志
	GLOG_GAMESPY = 0x23,              // GameSpy日志
	NUM_GAMELOGTYPES = 0x24,          // 日志类型总数
};

// 游戏日志模式枚举
enum GameLogMode : __int32
{
	GAMELOGMODE_NONE = 0x0,           // 无模式
	GAMELOGMODE_START_GAME = 0x1,     // 游戏开始模式
	GAMELOGMODE_END_GAME = 0x2,       // 游戏结束模式
	GAMELOGMODE_START_FRAME = 0x3,    // 帧开始模式
	GAMELOGMODE_END_FRAME = 0x4,      // 帧结束模式
	NUM_GAMELOGMODES = 0x5,           // 日志模式总数
};

// 随机日志条目结构体
struct  RandomLogEntry
{
	int frame;     // 帧数
	String file;   // 文件名
	int line;      // 行号
	int seed;      // 种子值
};

// 随机日志条目数组基类
struct  __declspec(align(4)) ArrayBaseRandomLogEntry : ArrayBaseMaster
{
	int unk;//ArrayBase<RandomLogEntry>_vtbl* __vftable /*VFT*/;
	RandomLogEntry* list;             // 日志条目列表
	unsigned __int8 flags;           // 标志位
};

// 随机日志条目对象数组
struct  ObjectArrayRandomLogEntry : ArrayBaseRandomLogEntry
{
};

// 游戏日志结构体，用于记录游戏运行时的各种信息
const struct  GameLog : Log, GameAccessConst, MiscAccess
{
	_BYTE gap40;                        // 对齐填充
	GameLogMode current_mode;           // 当前日志模式
	GameLogType current_type;           // 当前日志类型
	int current_detail;                 // 当前详细程度
	int detail_override;                // 详细程度覆盖
	int do_dump_all;                    // 是否转储所有日志
	int last_frame_logged;              // 最后记录的帧
	int logging_game_frame;             // 正在记录的游戏帧
	int last_frame_logged_aux;          // 辅助最后记录帧
	int logging_game_frame_aux;         // 辅助记录游戏帧
	int checksum_count;                 // 校验和计数
	int checksum_dump;                  // 校验和转储
	int checksum_break;                 // 校验和中断
	int log_start_frame;                // 日志开始帧
	int log_end_frame;                  // 日志结束帧
	String file_name;                   // 日志文件名
	String dump_name;                   // 转储文件名
	int random_log_pos;                 // 随机日志位置
	ObjectArrayRandomLogEntry random_log_entries; // 随机日志条目
	unsigned __int8 details[5][36];     // 详细设置数组
};

struct  XMLNode
{
	int unk;//XMLNode_vtbl* __vftable /*VFT*/; // 虚函数表指针
	IXMLDOMNode* node;             // DOM节点指针
	int unk1;//tinyxml2::XMLNode* tinyNode; // TinyXML2节点指针
	String post_tag;               // 后标签
};

const struct  XMLElement : XMLNode
{
	IXMLDOMElement* element;      // DOM元素指针
	int unk;//tinyxml2::XMLElement* tinyElement; // TinyXML2元素指针
};



const struct  Constants
{
	int unit_formation_spacing;               // 单位编队间距
	int unit_move_speed;                       // 单位移动速度
	int unit_turn_speed;                       // 单位转向速度
	int unit_pack_turn_bonus;                  // 单位打包转向加成
	int unit_block_radius;                     // 单位阻挡半径
	int unit_guy_spacing;                      // 单位人员间距
	int unit_respond_range;                    // 单位响应范围
	int unit_defensive_respond_range;          // 单位防御响应范围
	int unit_guard_respond_range;              // 单位守卫响应范围
	int unit_build_respond_range;              // 单位建造响应范围
	int unit_gather_respond_range;             // 单位采集响应范围
	int aircraft_respond_range;                // 飞机响应范围
	int bomber_respond_range;                  // 轰炸机响应范围
	int ship_defensive_respond_range;           // 船只防御响应范围
	int target_radius;                         // 目标半径
	int military_transport_bonus;              // 军事运输加成
	int range_inaccuracy;                      // 射程不准确度
	int height_increment;                      // 高度增量
	int height_bonus;                          // 高度加成
	int flank_bonus;                           // 侧翼加成
	int cavalry_flank_bonus;                   // 骑兵侧翼加成
	int vehicle_flank_bonus;                   // 车辆侧翼加成
	int rocky_modifier;                        // 岩石地形修正
	int overkill_frames;                       // 过度杀伤帧数
	int overkill_damage;                       // 过度杀伤伤害
	int entrenchment_modifier;                 // 堑壕修成修正
	int river_modifier;                        // 河流修正
	int recapture_city_modifier;               // 夺回城市修正
	int one_age_down;                          // 落后一个时代
	int two_ages_down;                         // 落后两个时代
	int three_ages_down;                       // 落后三个时代
	int four_ages_down;                        // 落后四个时代
	int five_ages_down;                        // 落后五个时代
	int unit_train_distance;                   // 单位训练距离
	int unit_train_max_distance;               // 单位最大训练距离
	int boat_train_distance;                   // 船只训练距离
	int boat_train_max_distance;               // 船只最大训练距离
	int boat_garrison_max_distance;             // 船只驻守最大距离
	int unit_board_distance;                   // 单位登船距离
	int unit_disembark_distance;               // 单位下船距离
	int air_unit_mana_recharge;                // 空中单位法力恢复
	int max_aircraft_per_carrier;              // 每艘航母最大飞机数
	int max_aircraft_per_airbase;              // 每个空军基地最大飞机数
	int dock_radius;                           // 码头半径
	int mine_radius;                           // 矿山半径
	int woodcutter_radius;                    // 伐木场半径
	int fort_upgrade_terr[4];                  // 堡垒升级所需领土
	int temple_upgrade_terr[5];                // 神庙升级所需领土
	int civic_upgrade_terr[8];                 // 市政升级所需领土
	int capital_territory_bonus;               // 首都领土加成
	int city_level_territory_bonus[3];         // 城市等级领土加成
	int fort_territory_multiplier;             // 堡垒领土乘数
	int city_territory_multiplier;             // 城市领土乘数
	int territory_base;                        // 领土基础值
	int territory_limit_base;                  // 领土限制基础值
	int territory_limit_civic;                 // 市政领土限制
	int territory_limit_city;                  // 城市领土限制
	int territory_den;                         // 领土分母
	int territory_num;                         // 领土分子
	int city_center_radius;                    // 城市中心半径
	int city_center_pop_radius;                // 城市中心人口半径
	int city_capture_radius;                   // 城市占领半径
	int city_spacing;                          // 城市间距
	int relax_city_spacing;                    // 宽松城市间距
	int first_city_near_coast;                 // 首城近海岸
	int fort_spacing;                          // 堡垒间距
	int fort_to_enemy_city_spacing;             // 堡垒到敌方城市间距
	int city_buildings;                        // 城市建筑数量
	int metro_buildings;                       // 大都市建筑数量
	int building_hp_upgrade;                   // 建筑生命值升级
	int temple_upgrade_hp[5];                  // 神庙生命值升级
	int temple_upgrade_range[5];               // 神庙射程升级
	int fort_upgrade_range[5];                 // 堡垒射程升级
	int fort_upgrade_los[5];                   // 堡垒视野升级
	int tower_fort_range[4];                   // 塔楼/堡垒射程
	int tower_fort_los[4];                     // 塔楼/堡垒视野
	int attrition_upgrade[4];                  // 损耗升级
	int attrition_improved[4];                 // 损耗改善
	int siege_attrition;                       // 围城损耗
	int militia_attrition;                     // 民兵损耗
	int attrition_aged_up;                     // 升级时代损耗
	int troops_upgrade_los;                    // 部队视野升级
	int spy_upgrade_los;                       // 间谍视野升级
	int spy_bribe_upgrade_range;               // 间谍贿赂升级范围
	int spy_informer_upgrade_range;            // 间谍线人升级范围
	int spy_upgrade_hp[4];                     // 间谍生命值升级
	int general_upgrade_los;                   // 将军视野升级
	int spy_general_cost;                      // 间谍将军成本
	int jam_unit_radar_prob;                   // 干扰单位雷达概率
	int unit_rate_base;                        // 单位基础训练速率
	int unit_rate_progression;                 // 单位训练速率递进
	int accel_train;                           // 加速训练
	int accel_construct;                       // 加速建造
	int accel_research;                        // 加速研究
	int starting_goods[6];                     // 起始资源
	int basic_gather[6];                       // 基础采集率
	int city_gather[6];                        // 城市采集率
	int gather_rate;                           // 采集速率
	int peasant_rate;                          // 农民速率
	int scholar_rate[6];                       // 学者速率
	int oil_rate;                              // 石油速率
	int farms_per_city_base;                   // 每城基础农场数
	int farms_per_city_level;                  // 每城每级农场数
	int fishermen_bonus[5];                    // 渔民加成
	int granary_bonus[5];                      // 粮仓加成
	int lumbermill_bonus[5];                   // 锯木厂加成
	int smelter_bonus[5];                      // 冶炼厂加成
	int refinery_bonus;                        // 炼油厂加成
	int base_tribute;                          // 基础贡品
	int commerce_tribute;                      // 商业贡品
	int city_plunder_per_level;               // 每级城市掠夺
	int capital_plunder;                       // 首都掠夺
	int capital_plunder_assassin;              // 首都掠夺（刺客）
	int merchants_bonus[5];                    // 商人加成
	int village_taxes;                         // 村庄税收
	int building_taxes;                        // 建筑税收
	int market_taxes;                          // 市场税收
	int temple_taxes;                          // 神庙税收
	int territory_taxes[5];                    // 领土税收
	int village_literacy;                      // 村庄识字率
	int university_literacy;                   // 大学识字率
	int library_literacy;                      // 图书馆识字率
	int unit_cost_factor;                      // 单位成本系数
	int build_cost_factor;                     // 建造成本系数
	int tech_cost_factor;                      // 科技成本系数
	int spell_cost_factor;                     // 法术成本系数
	int tech_science_discount;                 // 科技科学折扣
	int tech_science_speedup;                  // 科技科学加速
	int tech_age_behind_discount;              // 科技时代落后折扣
	int tech_age_behind_knowledge_discount;    // 科技时代落后知识折扣
	int tech_color_behind_discount;            // 科技颜色落后折扣
	int tech_color_behind_knowledge_discount;  // 科技颜色落后知识折扣
	int build_support_factor;                  // 建造支持系数
	int disband_city_rate;                     // 解散城市比率
	int disband_senate_rate;                   // 解散元老院比率
	int military_upgrade_discount;             // 军事升级折扣
	int military_unit_discount;                // 军事单位折扣
	int unit_refit_max_cost;                   // 单位改装最大成本
	int unit_scholar_ramp_max;                 // 单位学者最大增幅
	int unit_worker_ramp_max;                  // 单位工人最大增幅
	int unit_other_civilian_ramp_max;          // 单位其他平民最大增幅
	int unit_military_ramp_max;                // 单位军事最大增幅
	int research_premium;                       // 研究溢价
	int research_tick_premium;                  // 研究每Tick溢价
	int ramp_final;                            // 最终增幅
	int plunder;                               // 掠夺
	int caravan_plunder;                       // 商队掠夺
	int general_plunder;                       // 将军掠夺
	int capital_build_time;                    // 首都建造时间
	int min_pop_limit;                         // 最小人口限制
	int pop_cap[8];                            // 人口上限（各时代？）
	int military_pop;                          // 军事人口
	int village_pop;                           // 村庄人口
	int granary_pop;                           // 粮仓人口
	int max_pop_limit;                         // 最大人口限制
	int commando_min_damage;                   // 突击队最小伤害
	int special_min_damage;                    // 特殊单位最小伤害
	int elite_min_damage;                      // 精英单位最小伤害
	int commerce_cap[8];                       // 商业上限（各时代？）
	int lumber_commerce;                       // 木材商业
	int global_prosperity;                     // 全球繁荣度
	int pyramids_commerce;                     // 金字塔商业
	int pyramids_city_limit;                   // 金字塔城市限制
	int pyramids_food;                         // 金字塔食物
	int pyramids_city_discount;                // 金字塔城市折扣
	int colossus_wealth;                       // 巨像财富
	int colossus_pop_cap;                      // 巨像人口上限
	int colossus_caravan;                      // 巨像商队
	int colossus_commerce;                     // 巨像商业
	int hanging_gardens_knowledge;             // 空中花园知识
	int hanging_gardens_build_time;            // 空中花园建造时间
	int hanging_gardens_upgrades;              // 空中花园升级
	int hanging_gardens_industry_discount;     // 空中花园工业折扣
	int terra_cotta_attack;                    // 兵马俑攻击
	int terra_cotta_range;                     // 兵马俑射程
	int terra_cotta_cost;                      // 兵马俑成本
	int terra_cotta_free;                      // 免费兵马俑
	int terra_cotta_delay;                     // 兵马俑延迟
	int colosseum_territory_bonus;             // 斗兽场领土加成
	int colosseum_attrition;                   // 斗兽场损耗
	int colosseum_fort_range;                  // 斗兽场堡垒射程
	int colosseum_fort_borders;                // 斗兽场堡垒边界
	int colosseum_fort_upgrades;               // 斗兽场堡垒升级
	int colosseum_fort_cost;                   // 斗兽场堡垒成本
	int colosseum_barracks_cost;               // 斗兽场兵营成本
	int forbidden_city_gather;                 // 紫禁城采集
	int forbidden_city_base_gather;            // 紫禁城基础采集
	int tikal_timber;                          // 蒂卡尔木材
	int tikal_timber_commerce;                 // 蒂卡尔木材商业
	int tikal_temple_borders;                  // 蒂卡尔神庙边界
	int tikal_temple_range;                    // 蒂卡尔神庙射程
	int tikal_temple_hp;                       // 蒂卡尔神庙生命值
	int tikal_temple_cost;                     // 蒂卡尔神庙成本
	int tikal_temple_upgrades;                 // 蒂卡尔神庙升级
	int porcelain_ships;                       // 瓷器船只
	int porcelain_rare;                        // 瓷器稀有度
	int porcelain_market;                      // 瓷器市场
	int red_fort_heal;                         // 红堡治疗
	int red_fort_fortification;                // 红堡防御工事
	int red_fort_tactics;                      // 红堡战术
	int red_fort_air_defense;                  // 红堡防空
	int red_fort_fort_hps;                     // 红堡堡垒生命值
	int angkor_research;                       // 吴哥研究
	int angkor_metal;                          // 吴哥金属
	int angkor_metal_commerce;                 // 吴哥金属商业
	int angkor_ships;                          // 吴哥船只
	int versailles_knowledge_costs;            // 凡尔赛知识成本
	int versailles_units_move;                 // 凡尔赛单位移动
	int versailles_building_speed;            // 凡尔赛建造速度
	int versailles_supply_heal_rate;           // 凡尔赛补给治疗率
	int versailles_generals_no_knowledge;      // 凡尔赛将军无需知识
	int versailles_affects_university_upgrades; // 凡尔赛影响大学升级
	int versailles_affects_misc_upgrades;      // 凡尔赛影响杂项升级
	int taj_building_hp;                       // 泰姬陵建筑生命值
	int taj_wealth;                            // 泰姬陵财富
	int taj_wealth_commerce;                   // 泰姬陵财富商业
	int taj_caravan;                           // 泰姬陵商队
	int taj_farms;                             // 泰姬陵农场
	int kremlin_commerce;                      // 克里姆林宫商业
	int kremlin_attrition;                     // 克里姆林宫损耗
	int kremlin_spy;                           // 克里姆林宫间谍
	int kremlin_farms;                         // 克里姆林宫农场
	int kremlin_spy_instant;                   // 克里姆林宫间谍即刻
	int liberty_units;                         // 自由单位
	int liberty_attrition;                     // 自由损耗
	int liberty_siege_range;                   // 自由围城射程
	int liberty_bombers;                       // 自由轰炸机
	int liberty_missiles;                      // 自由导弹
	int liberty_free_upgrades;                 // 自由免费升级
	int liberty_air_defense;                   // 自由防空
	int eiffel_tower_territory_bonus;         // 埃菲尔铁塔领土加成
	int eiffel_oil;                            // 埃菲尔铁塔石油
	int eiffel_oil_commerce;                   // 埃菲尔铁塔石油商业
	int eiffel_siege_range;                   // 埃菲尔铁塔围城射程
	int super_buy;                             // 超级购买
	int super_sell;                            // 超级出售
	int super_missiles;                        // 超级导弹
	int super_immune;                          // 超级免疫
	int space_air_range;                       // 太空空中射程
	int space_air_attack;                      // 太空空中攻击
	int space_air_speed;                       // 太空空中速度
	int space_air_cost;                        // 太空空中成本
	int aztec_slay_bonus;                      // 阿兹特克斩杀加成
	int aztec_slay_cap;                        // 阿兹特克斩杀上限
	int aztec_move_speed;                      // 阿兹特克移动速度
	int aztec_plunder;                         // 阿兹特克掠夺
	int aztec_barracks_light;                  // 阿兹特克兵营轻步兵
	int aztec_max_light;                       // 阿兹特克最大轻步兵
	int aztec_free_military;                   // 阿兹特克免费军事单位
	int maya_garrison_arrows;                  // 玛雅驻守箭矢
	int maya_building_hp;                      // 玛雅建筑生命值
	int maya_building_speed;                   // 玛雅建造速度
	int maya_building_timber;                  // 玛雅建筑木材
	int inca_wealth_cap;                       // 印加财富上限
	int inca_wealth_per_miner;                 // 印加每个矿工财富
	int inca_refund;                           // 印加退款
	int bantu_city_limit;                      // 班图城市限制
	int bantu_pop_cap;                         // 班图人口上限
	int bantu_unit_upgrades;                   // 班图单位升级
	int bantu_final_pop_cap;                   // 班图最终人口上限
	int bantu_units_move;                      // 班图单位移动
	int bantu_city_cost;                       // 班图城市成本
	int nubian_rare;                           // 努比亚稀有
	int nubian_caravan_limit;                  // 努比亚商队限制
	int nubian_free_caravan;                   // 努比亚免费商队
	int nubian_merchants;                      // 努比亚商人
	int nubian_hit_points;                     // 努比亚生命值
	int nubian_market_prices;                  // 努比亚市场价格
	int greek_research_speed;                  // 希腊研究速度
	int greek_research_cost;                   // 希腊研究成本
	int greek_knowledge_early;                 // 希腊早期知识
	int greek_university_early;                // 希腊早期大学
	int greek_start_scholars;                  // 希腊起始学者
	int greek_age_knowledge;                   // 希腊时代知识
	int greek_classical;                       // 希腊古典时代
	int greek_library_cost;                    // 希腊图书馆成本
	int greek_scholars_fast;                   // 希腊学者快速
	int greek_delay_knowledge;                 // 希腊知识延迟
	int roman_fort_hp;                         // 罗马堡垒生命值
	int roman_fort_range;                      // 罗马堡垒射程
	int roman_fort_borders;                    // 罗马堡垒边界
	int roman_fort_early;                      // 罗马早期堡垒
	int roman_fort_cost;                       // 罗马堡垒成本
	int roman_fort_speed;                      // 罗马堡垒速度
	int roman_fort_upgrades;                   // 罗马堡垒升级
	int roman_barracks_legion;                 // 罗马兵团结成
	int roman_max_legion;                      // 罗马最大合成
	int roman_city_gather;                     // 罗马城市采集
	int roman_age_for_1_legion;                // 罗马合成1所需时代
	int roman_age_for_2_legions;               // 罗马合成2所需时代
	int roman_age_for_3_legions;               // 罗马合成3所需时代
	int roman_legion_cheap;                    // 罗马合成廉价
	int roman_legion_fast;                     // 罗马合成快速
	int roman_free_military;                   // 罗马免费军事单位
	int egyptian_wonders;                      // 埃及奇观
	int egyptian_granary_early;                // 埃及早期粮仓
	int egyptian_granary_upgrades;             // 埃及粮仓升级
	int egyptian_scholars_food;                // 埃及学者食物
	int egyptian_wonders_early;                // 埃及早期奇观
	int egyptian_farms_per_city_base;          // 埃及每城基础农场数
	int egyptian_food_commerce;                // 埃及食物商业
	int egyptian_farm_wealth;                  // 埃及农场财富
	int turk_siege_range;                      // 土耳其围城射程
	int turk_siege_los;                        // 土耳其围城视野
	int turk_assimilate;                       // 土耳其同化
	int turk_free_siege;                       // 土耳其免费围城单位
	int turk_free_siege_upgrades;              // 土耳其免费围城升级
	int turk_pack;                             // 土耳其打包
	int turk_military_cheap;                   // 土耳其军事廉价
	int turk_citizen;                          // 土耳其公民
	int spanish_los;                           // 西班牙视野
	int spanish_extra_scout;                   // 西班牙额外侦察兵
	int spanish_free_trireme;                  // 西班牙免费三列桨座战船
	int spanish_ruins_base;                    // 西班牙废墟基础
	int spanish_ruins;                         // 西班牙废墟
	int spanish_commandos;                     // 西班牙突击队
	int spanish_scout_upgrades;                // 西班牙侦察兵升级
	int french_supply_heal_rate;               // 法国补给治疗率
	int french_special_craft;                  // 法国特殊工艺
	int french_special_cost;                   // 法国特殊成本
	int french_special_speed;                  // 法国特殊速度
	int french_siege_cost;                     // 法国围城成本
	int french_siege_speed;                    // 法国围城速度
	int french_free_general;                   // 法国免费将军
	int french_free_supply;                    // 法国免费补给
	int french_entrench;                       // 法国堑壕
	int french_siege_move;                     // 法国围城移动
	int french_lumbermill_early;               // 法国早期锯木厂
	int french_lumbermill_upgrades;            // 法国锯木厂升级
	int french_woodies;                        // 法国木材
	int french_timber_commerce;                // 法国木材商业
	int british_commerce;                      // 英国商业
	int british_ship_speed;                    // 英国船只速度
	int british_archer_speed;                  // 英国弓箭手速度
	int british_archer_upgrades;               // 英国弓箭手升级
	int british_aa_cost;                       // 英国防空炮成本
	int british_aa_speed;                      // 英国防空炮速度
	int british_free_ship;                     // 英国免费船只
	int british_taxation;                      // 英国税收
	int british_tower_range;                   // 英国塔楼射程
	int british_age_for_1_archer;              // 英国1个弓箭手所需时代
	int british_age_for_2_archers;             // 英国2个弓箭手所需时代
	int british_age_for_3_archers;             // 英国3个弓箭手所需时代
	int british_taxation_discount;             // 英国税收折扣
	int british_free_fishermen;                // 英国免费渔民
	int german_submarine_cost;                 // 德国潜艇成本
	int german_submarine_speed;                // 德国潜艇速度
	int german_air_speed;                      // 德国空中速度
	int german_metal_early;                    // 德国早期金属
	int german_metal_upgrades;                 // 德国金属升级
	int german_free_fighter;                   // 德国免费战斗机
	int german_free_bomber;                    // 德国免费轰炸机
	int german_mine_cost;                      // 德国矿山成本
	int german_miners;                         // 德国矿工
	int german_heavy_infantry;                 // 德国重步兵
	int german_light_cavalry;                  // 德国轻骑兵
	int german_industry_upgrades;              // 德国工业升级
	int german_industry_discount;              // 德国工业折扣
	int german_completion_bonus;               // 德国完成加成
	int german_buildings_early;                // 德国早期建筑
	int german_industry_early;                 // 德国早期工业
	int german_city_gather;                    // 德国城市采集
	int russian_attrition;                     // 俄国损耗
	int russian_attrition_upgrades;            // 俄国损耗升级
	int russian_oil;                           // 俄国石油
	int russian_communism;                     // 俄国共产主义
	int russian_uber_spies;                   // 俄国超级间谍
	int russian_borders;                       // 俄国边界
	int russian_borders_per_age;               // 俄国每时代边界
	int russian_spy_cost;                      // 俄国间谍成本
	int russian_cossack_damage;                // 俄国哥萨克伤害
	int russian_plunder_steal;                 // 俄国掠夺窃取
	int russian_free_civic;                    // 俄国免费市政
	int chinese_knowledge_upgrades;            // 中国知识升级
	int chinese_citizen_instant;               // 中国公民即刻
	int chinese_citizen_creation;              // 中国公民创建
	int chinese_large_city;                    // 中国大城市
	int chinese_large_cities;                  // 中国大城市数量
	int chinese_herbal_lore;                   // 中国草药知识
	int chinese_science_discount;              // 中国科学折扣
	int japanese_damage;                       // 日本伤害
	int japanese_barracks_cost;                // 日本兵营成本
	int japanese_barracks_speed;               // 日本兵营速度
	int japanese_ship_cost;                    // 日本船只成本
	int japanese_carrier_speed;                // 日本航母速度
	int japanese_farms_cheaper;                // 日本农场更便宜
	int japanese_fishing_boats;                // 日本渔船
	int korean_citizens[8];                    // 韩国公民
	int korean_temple_upgrades;                // 韩国神庙升级
	int korean_temple_tax_upgrades;            // 韩国神庙税收升级
	int korean_militia_upgrades;               // 韩国民兵升级
	int korean_build_under_fire;               // 韩国在火力下建造
	int korean_repair;                         // 韩国修理
	int korean_tower_cost;                     // 韩国塔楼成本
	int mongol_stable_cost;                    // 蒙古马厩成本
	int mongol_stable_speed;                   // 蒙古马厩速度
	int mongol_attrition;                      // 蒙古损耗
	int mongol_free_cavalry;                   // 蒙古免费骑兵
	int mongol_free_forage;                    // 蒙古免费草料
	int mongol_nomadic_food;                   // 蒙古游牧食物
	int mongol_start_cavalry;                  // 蒙古起始骑兵
	int mongol_three_mil_cavalry;              // 蒙古三个军事骑兵
	int iroquois_los;                          // 易洛魁视野
	int iroquois_food;                         // 易洛魁食物
	int iroquois_senate;                       // 易洛魁元老院
	int iroquois_heal_rate[4];                 // 易洛魁治疗率
	int iroquois_free_scout;                   // 易洛魁免费侦察兵
	int iroquois_scout_upgrades;               // 易洛魁侦察兵升级
	int iroquois_govs_early;                   // 易洛魁早期政府
	int iroquois_extra_hits;                   // 易洛魁额外命中
	int iroquois_quick_senate;                 // 易洛魁快速元老院
	int iroquois_spear_speed[4];               // 易洛魁长矛速度
	int lakota_food;                           // 拉科塔食物
	int lakota_herbal_lore;                    // 拉科塔草药知识
	int lakota_raze_speed;                     // 拉科塔摧毁速度
	int lakota_raze_price;                      // 拉科塔摧毁价格
	int lakota_cav_upgrades;                   // 拉科塔骑兵升级
	int lakota_cav_dmg_bonus;                  // 拉科塔骑兵伤害加成
	int americans_free_scholar;                // 美国免费学者
	int americans_free_bomber;                 // 美国免费轰炸机
	int americans_aircraft;                    // 美国飞机
	int americans_marine_speed_bonus;          // 美国海军陆战队速度加成
	int americans_marine_hp_bonus;             // 美国海军陆战队生命值加成
	int americans_marine_entrench;             // 美国海军陆战队堑壕
	int americans_starting_farms;              // 美国起始农场
	int americans_free_science;                // 美国免费科学
	int americans_science_discount;            // 美国科学折扣
	int americans_upgrade_discount;            // 美国升级折扣
	int americans_barracks_gather;             // 美国兵营造集
	int indians_city_radius;                   // 印度城市半径
	int indians_caravan;                       // 印度商队
	int indians_elephant_cost;                 // 印度战象成本
	int indians_elephant_upgrades;             // 印度战象升级
	int dutch_free_commerce;                   // 荷兰免费商业
	int dutch_commerce_discount;               // 荷兰商业折扣
	int dutch_fort_placement;                  // 荷兰堡垒放置
	int dutch_interest;                        // 荷兰利息
	int dutch_interest_cap;                    // 荷兰利息上限
	int dutch_free_light_ship;                 // 荷兰免费轻型船只
	int dutch_fort_speed;                      // 荷兰堡垒速度
	int dutch_attack_bonus;                    // 荷兰攻击加成
	int dutch_hp_bonus;                        // 荷兰生命值加成
	int dutch_ship_discount;                   // 荷兰船只折扣
	int persians_despotism;                    // 波斯专制主义
	int persians_bonus_food;                   // 波斯额外食物
	int persians_civic_discount;               // 波斯市政折扣
	int persians_taxation;                     // 波斯税收
	int relics_research_speed;                 // 遗迹研究速度
	int wine_unit_upgrades;                    // 葡萄酒单位升级
	int papyrus_science_military;              // 纸莎草科学军事
	int dye_civic_commerce;                    // 染料市政商业
	int silk_commerce;                         // 丝绸商业
	int furs_military;                         // 皮毛军事
	int silk_caravan;                          // 丝绸商队
	int spice_caravan_income;                  // 香料商队收入
	int salt_barracks_cost;                    // 食盐兵营成本
	int horses_stable_cost;                    // 马匹马厩成本
	int rubber_autoplant_cost;                 // 橡胶自动种植成本
	int sulphur_siege_cost;                    // 硫磺围城成本
	int amber_market;                          // 琥珀市场
	int silver_age_cost;                       // 白银时代成本
	int tobacco_building_speed;                // 烟草建造速度
	int marble_wonder_cost;                    // 大理石奇观成本
	int furs_los;                              // 皮毛视野
	int cotton_creation_speed;                 // 棉花创建速度
	int bison_granary_cost;                    // 野牛粮仓成本
	int copper_factory_hp;                     // 铜工厂生命值
	int peacocks_pop;                          // 孔雀人口
	int sugar_food_cost;                       // 糖食物成本
	int diamonds_commerce;                     // 钻石商业
	int gems_territory_bonus;                  // 宝石领土加成
	int aluminum_air_cost;                     // 铝空中成本
	int aluminum_air_speed;                   // 铝空中速度
	int whales_ships_move;                     // 鲸鱼船只移动
	int obsidian_archers_range;                // 黑曜石弓箭手射程
	int obsidian_archers_attack;               // 黑曜石弓箭手攻击
	int wool_citizens_cost;                    // 羊毛公民成本
	int wool_citizens_speed;                  // 羊毛公民速度
	int coal_timber_cost;                      // 煤炭木材成本
	int uranium_nuke_cost;                     // 铀核弹成本
	int uranium_nuke_speed;                    // 铀核弹速度
	int titanium_attrition;                    // 钛损耗
	int cattle_citizen_armor;                  // 牛公民护甲
	int dogs_scout_los;                        // 狗侦察兵视野
	int olive_farms;                           // 橄榄农场
	int gypsum_cost;                           // 石膏成本
	int beaver_free_scout_merch;               // 海狸免费侦察商人
	int gold_wealth_cost;                      // 黄金财富成本
	int rum_naval_range;                       // 朗姆酒海军射程
	int coffee_income_bonus;                   // 咖啡收入加成
	int bananas_hp_bonus;                      // 香蕉生命值加成
	int salmon_naval_cost;                     // 鲑鱼海军成本
	int iron_metal_cost;                       // 铁金属成本
	int maize_ramping_bonus;                   // 玉米递增加成
	int incense_temple_research;               // 香庙研究
	int despotism_military_cheaper;            // 专制主义军事更便宜
	int despotism_military_cheaper2;           // 专制主义军事更便宜2
	int despotism_military_cheaper3;           // 专制主义军事更便宜3
	int republic_commerce_bonus;               // 共和国商业加成
	int republic_commerce_bonus2;              // 共和国商业加成2
	int republic_commerce_bonus3;              // 共和国商业加成3
	int monarchy_unit_prod;                    // 君主制单位生产
	int monarchy_unit_prod2;                   // 君主制单位生产2
	int democracy_tech_bonus;                  // 民主科技加成
	int democracy_tech_bonus2;                 // 民主科技加成2
	int socialism_unit_bonus;                  // 社会主义单位加成
	int capitalism_oil_prod;                   // 资本主义石油生产
	int capitalism_oil_gift;                   // 资本主义石油礼物
	int gov_hero_respawn;                      // 政府英雄重生
	int mtn_tiny_size;                         // 微型山脉大小
	int mtn_small_size;                        // 小型山脉大小
	int mtn_medium_size;                       // 中型山脉大小
	int mtn_large_size;                        // 大型山脉大小
	int mtn_huge_size;                         // 巨型山脉大小
	int mtn_tiny_gather;                       // 微型山脉采集
	int mtn_small_gather;                      // 小型山脉采集
	int mtn_medium_gather;                     // 中型山脉采集
	int mtn_large_gather;                      // 大型山脉采集
	int mtn_huge_gather;                       // 巨型山脉采集
	int min_continent_spacing;                 // 最小大陆间距
	int ctw_starting_tribute;                  // 征服世界起始贡品
	int ctw_no_attack_bonus;                   // 征服世界无攻击加成
	int ctw_no_attack_bonus_cap;               // 征服世界无攻击加成上限
	int ctw_trib_no_attack;                    // 征服世界部落无攻击
	int ctw_continent_bonus;                   // 征服世界大陆加成
	int ctw_attrition;                         // 征服世界损耗
	int ctw_base_war_cost;                     // 征服世界基础战争成本
	int ctw_war_cost_stance_time_x;            // 征服世界战争成本姿态时间乘数
	int ctw_base_peace_cost;                   // 征服世界基础和平成本
	int ctw_peace_cost_att_x;                  // 征服世界和平成本态度乘数
	int ctw_base_build_cost;                   // 征服世界基础建造成本
	int ctw_build_cost_time_held_x;            // 征服世界建造成本持有时间乘数
	int ctw_base_card_cost;                    // 征服世界基础卡片成本
	int ctw_card_cost_num_purchased_x;         // 征服世界卡片成本购买数量乘数
	int ctw_card_cost_ramp_cap;                // 征服世界卡片成本递增上限
	int ctw_base_territory_cost;               // 征服世界基础领土成本
	int ctw_territory_cost_att_x;              // 征服世界领土成本态度乘数
	int ctw_territory_cost_str_x;              // 征服世界领土成本实力乘数
	int ctw_territory_min_emp_size;           // 征服世界领土最小帝国规模
	int ctw_territory_max_att;                 // 征服世界领土最大态度
	int ctw_max_attitude;                      // 征服世界最大态度
	int ctw_start_attitude;                    // 征服世界起始态度
	int ctw_num_opp_for_larger_map;            // 征服世界更大地图对手数量
	int ctw_min_keep_alliance;                 // 征服世界最小保持联盟
	int ctw_break_alliance_prob_x_att;         // 征服世界打破联盟概率乘态度
	int ctw_capital_starting_infra;            // 征服世界首都起始基础设施
	int ctw_nomad_starting_res_x;              // 征服世界游牧起始资源乘数
	int ctw_max_infra_special_scen;            // 征服世界最大基础设施特殊场景
	int ctw_max_treachery_infra;               // 征服世界最大背叛基础设施
	int ctw_age_cost;                          // 征服世界时代成本
	int ctw_eureka_techs;                      // 征服世界尤里卡科技
	int ctw_eureka_all_techs;                  // 征服世界尤里卡所有科技
	int ctw_max_bribe_att;                     // 征服世界最大贿赂态度
	int ctw_cit_per_extra_city;                // 征服世界每额外城市公民
	int ctw_ai_barb_chance;                    // 征服世界AI蛮族几率
	int ctw_ai_stronger_chance;                // 征服世界AI更强几率
	int ctw_additional_ally_inc;               // 征服世界额外盟友增加
	int ctw_break_bribe_x;                     // 征服世界打破贿赂乘数
	int ctw_ally_war_cost_x;                   // 征服世界盟友战争成本乘数
	int ctw_ai_all_cards_num;                  // 征服世界AI所有卡片数量
	int ctw_ai_all_cards_prob;                 // 征服世界AI所有卡片概率
	int ctw_ai_tac_card_prob;                  // 征服世界AI战术卡片概率
	int ctw_ai_tac_card_ally_prob;             // 征服世界AI战术卡片盟友概率
	int ctw_bribe_trib_min;                    // 征服世界贿赂部落最小
	int ctw_bribe_tough_hate_acc_prob;         // 征服世界贿赂顽强仇恨接受概率
	int ctw_bribe_tough_acc_prob;              // 征服世界贿赂顽强接受概率
	int ctw_bribe_acc_prob;                    // 征服世界贿赂接受概率
	int ctw_demand_trib_tough_prob;            // 征服世界要求部落顽强概率
	int ctw_demand_trib_prob;                  // 征服世界要求部落概率
	int ctw_overrun_peace_prob;                // 征服世界压倒性和平概率
	int ctw_overrun_easiest_prob;              // 征服世界压倒性最简单概率
	int ctw_overrun_easy_prob;                 // 征服世界压倒性简单概率
	int ctw_overrun_moderate_prob;             // 征服世界压倒性中等概率
	int ctw_overrun_tough_prob;                // 征服世界压倒性顽强概率
	int ctw_def_victory_bonus;                 // 征服世界防御胜利加成
	int ctw_wonder_min_civics;                 // 征服世界奇观最小市政
	int ctw_conquest_time_limit;               // 征服世界征服时间限制
	int ctw_great_thinker_discount;            // 征服世界伟大思想家折扣
	int ctw_great_thinker_time;                // 征服世界伟大思想家时间
	int ctw_market_bonus_buy;                  // 征服世界市场购买加成
	int ctw_market_bonus_sell;                 // 征服世界市场出售加成
	int ctw_heal_bonus;                        // 征服世界治疗加成
	int ctw_prod_rate_bonus;                  // 征服世界生产速率加成
	int ctw_max_wonder_cards;                  // 征服世界最大奇观卡片
	int ctw_num_bonus_elephants;               // 征服世界额外战象数量
	int ctw_num_bonus_spies;                   // 征服世界额外间谍数量
	int ctw_colony_blockade_turns;             // 征服世界殖民地封锁回合
	int ctw_steal_trib_amt;                    // 征服世界窃取部落数量
	int ctw_missionaries_bonus;                // 征服世界传教士加成
	int ctw_num_bonus_citizens;                // 征服世界额外公民数量
	int ctw_nuke_base;                         // 征服世界核弹基础
	int ctw_nuke_ramp;                         // 征服世界核弹递增
	int ctw_nuke_launch_turns;                 // 征服世界核弹发射回合
	int ctw_espionage_cost;                    // 征服世界间谍活动成本
	int ctw_nuclear_enemy_war_cost;            // 征服世界核敌人战争成本
	int ctw_nuclear_war_age_discount;          // 征服世界核战争时代折扣
	int ctw_defcon_war_discount;               // 征服世界防御条件战争折扣
	int ctw_terr_income_base;                  // 征服世界领土收入基础
	int ctw_terr_income_x;                     // 征服世界领土收入乘数
	int ctw_ally_failure_comp;                 // 征服世界盟友失败补偿
	int ctw_parmenio_cav;                      // 征服世界帕曼尼翁骑兵
	int ctw_memnon_infra;                      // 征服世界门农基础设施
	int ctw_spitamenes_archers;                // 征服世界斯皮塔米尼斯弓箭手
	int alexander_attack;                      // 亚历山大攻击
	int alexander_heavy_inf_attack;            // 亚历山大重步兵攻击
	int alexander_forced_march_speed;          // 亚历山大强行军速度
	int parmenio_heavy_cav_attack;             // 帕曼尼翁重骑兵攻击
	int parmenio_radius_adjust;                // 帕曼尼翁半径调整
	int parmenio_ambush_time;                  // 帕曼尼翁伏击时间
	int parmenio_ambush_cost;                  // 帕曼尼翁伏击成本
	int ptolemy_range_bonus;                   // 托勒密集射程加成
	int ptolemy_los_bonus;                     // 托勒密集视野加成
	int ptolemy_siege_attack;                  // 托勒密集围城攻击
	int ptolemy_armor;                         // 托勒密集护甲
	int darius_armor;                          // 大流士护甲
	int spitamenes_horse_archer_attack;       // 斯皮塔米尼斯弓骑兵攻击
	int spitamenes_cav_speed;                  // 斯皮塔米尼斯骑兵速度
	int porus_elephant_speed;                  // 波罗斯战象速度
	int porus_decoys;                          // 波罗斯诱饵
	int memnon_regen_rate;                     // 门农恢复率
	int memnon_merc_attack;                    // 门农雇佣兵攻击
	int memnon_merc_armor;                     // 门农雇佣兵护甲
	int antipater_heal_rate;                    // 安提帕特治疗率
	int antipater_garrison_attack_bonus;       // 安提帕特驻军攻击加成
	int antipater_entrench_bonus;              // 安提帕特堑壕加成
	int antipater_entrench_rate;               // 安提帕特堑壕率
	int schwarzenberg_commandos;               // 施瓦岑贝格突击队
	int napoleon_siege_attack;                 // 拿破仑围城攻击
	int napoleon_siege_range;                  // 拿破仑围城射程
	int napoleon_pack;                         // 拿破仑打包
	int napoleon_siege_speed;                  // 拿破仑围城速度
	int wellington_radius;                     // 威灵顿半径
	int wellington_defense;                    // 威灵顿防御
	int wellington_siege_attack;               // 威灵顿围城攻击
	int charles_speed;                         // 查尔斯速度
	int charles_unit_cost;                     // 查尔斯单位成本
	int djezzar_attack;                        // 杰扎尔攻击
	int blucher_cav_attack;                    // 布吕歇尔骑兵攻击
	int blucher_cav_armor;                     // 布吕歇尔骑兵护甲
	int blucher_cav_speed;                     // 布吕歇尔骑兵速度
	int kutosov_decoys;                        // 库图佐夫诱饵
	int kutosov_radius;                        // 库图佐夫半径
	int tower_garrison_upgrade;                // 塔楼驻军升级
	int fort_garrison_upgrade;                 // 堡垒驻军升级
	int unit_heal_rate[4];                     // 单位治疗率
	int supply_heal_rate;                      // 补给治疗率
	int civilian_heal_rate;                    // 平民治疗率
	int aircraft_heal_rate[4];                 // 飞机治疗率
	int city_heal_rate;                        // 城市治疗率
	int bombing_mana_cost;                     // 轰炸法力消耗
	int sam_site_reload_chance;                // 萨姆导弹重装概率
	int sam_site_reload_time;                  // 萨姆导弹重装时间
	int artillery_under_attack_fires_slowly;  // 被攻击时火炮射击变慢
	int goody_box;                             // 礼盒
	int goody_box_age;                         // 礼盒时代
	int food_bonus_for_farm;                   // 农场食物加成
	int oil_bonus_for_well;                    // 油井石油加成
	int knowledge_bonus_for_university;        // 大学知识加成
	int timber_bonus_per_wood_slot;            // 每个木材点木材加成
	int metal_bonus_per_mine_slot;             // 每个矿山金属加成
	int river_resource_value;                  // 河流资源值
	int town_hp_bonus;                         // 城镇生命值加成
	int senate_hp_bonus;                       // 元老院生命值加成
	int senate_armor_bonus;                    // 元老院护甲加成
	int forced_march_speed;                    // 强行军速度
	int general_speed_bonus;                   // 将军速度加成
	int general_radius;                        // 将军半径
	int general_building_range;                // 将军建筑范围
	int general_building_attack;               // 将军建筑攻击
	int general_rally_armor;                   // 将军集结护甲
	int mil_patriot_radius_bonus;              // 军事爱国者半径加成
	int econ_patriot_radius_bonus;             // 经济爱国者半径加成
	int thedespot_plunder;                     // 暴君掠夺
	int thedespot_unit_plunder;                // 暴君单位掠夺
	int thesenator_build_armor;                // 元老院建筑护甲
	int themonarch_cav_armor;                  // 君主骑兵护甲
	int themonarch_cav_attack;                 // 君主骑兵攻击
	int thepresident_unit_build_speed;         // 总统单位建造速度
	int thepresident_militia_attack_bonus;     // 总统民兵攻击加成
	int thepresident_militia_armor_bonus;      // 总统民兵护甲加成
	int thepresident_building_speed;           // 总统建造速度
	int thecitizen_attack_bonus;               // 公民攻击加成
	int thecitizen_armor_bonus;                // 公民护甲加成
	int thecitizen_assimilation_speed;         // 公民同化速度
	int theceo_production_bonus;               // CEO生产加成
	int theceo_unit_range;                     // CEO单位射程
	int theceo_unit_los;                       // CEO单位视野
	int supply_radius;                         // 补给半径
	int supply_radius_upgrade;                 // 补给半径升级
	int supply_hp_upgrade[4];                  // 补给生命值升级
	int truck_radius;                         // 卡车半径
	int siege_out_of_supply_reload;           // 围城补给不足重装
	int artillery_out_of_supply_reload;        // 火炮补给不足重装
	int decoy_time;                            // 诱饵时间
	int caravan_attack_bonus;                  // 商队攻击加成
	int market_basement;                       // 市场地下室
	int market_equilibrium;                    // 市场均衡
	int market_min_variance;                   // 市场最小方差
	int market_min_trend;                      // 市场最小趋势
	int market_trend_range;                    // 市场趋势范围
	int market_cycle_rate;                     // 市场周期率
	int market_supply_demand;                  // 市场供需
	int paradrop_range;                        // 伞降范围
	int ally_to_war_delay;                     // 盟友到战争延迟
	int ally_to_war_grace;                     // 盟友到战争宽限期
	int timer_refresh_ratio;                   // 计时器刷新比率
	int retake_capital;                        // 夺回首都
	int wonder_timer;                          // 奇观计时器
	int wonder_age;                            // 奇观时代
	int popwin_timer;                          // 人口胜利计时器
	int armageddon;                            // 末日决战
	int armageddon_per_nation;                 // 末日决战每国家
	int armageddon_per_team;                   // 末日决战每团队
	int nuke_embargo_base;                     // 核弹禁运基础
	int nuke_embargo_nation;                   // 核弹禁运国家
	int nuke_embargo_world;                    // 核弹禁运世界
	int reassimilation;                        // 重新同化
	int assimilation_timer;                     // 同化计时器
	int peace_attrition;                       // 和平损耗
	int assassin_attrition;                    // 刺客损耗
	int attrition;                             // 损耗
	XMLElement curr_element;                   // 当前XML元素
};


struct  ScriptFuncSet
{
	int unk;//ScriptFuncSet_vtbl* __vftable /*VFT*/;
	String name;
	int begin_func;
	int end_func;
	int index;
};

struct  ScenarioData
{
	_BYTE gap0[8];
};

const struct  ScenarioFuncSet : ScriptFuncSet, ScenarioData
{
};

