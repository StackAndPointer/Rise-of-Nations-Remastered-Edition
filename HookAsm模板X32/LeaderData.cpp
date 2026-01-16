
#include "HookAddr.h"
#include "Enums.h"
#include "GlobalVariable.h"


/**
 * @brief 判断两个领导者是否在同一队伍中
 *
 * 此函数用于检查游戏中的两个领导者是否属于同一队伍，支持多种队伍模式
 * 和特殊规则。函数考虑了队伍样式、特殊标记、游戏帧数和严格模式等因素。
 *
 * @param leaderData 当前领导者对象
 * @param placeholder 占位符参数（可能是游戏索引或上下文标识）
 * @param whom 要比较的领导者索引
 * @param strict 严格模式标志：0-宽松模式，1-严格模式
 * @return BOOL 返回TRUE表示在同一队伍，FALSE表示不在同一队伍
 */
BOOL __fastcall LeaderData__is_team(LeaderData* leaderData, int placeholder, int whom, int strict)
{
    // 局部变量声明
    const Game* game;                 // 指向游戏全局数据的指针
    unsigned __int8 team_style;       // 队伍样式配置
    int player_index;                 // 玩家索引
    int target_player_index;          // 目标玩家索引
    unsigned char team;               // 队伍编号

    // 1. 检查是否是同一个领导者（自身判断）
    if (whom == leaderData->who) {
        return TRUE;  // 自身总是与自己在同一队伍
    }

    // 2. 获取游戏全局数据和队伍样式
    game = GameAccessConst__gamec;  // 全局游戏数据
    team_style = game->info.gameSettings.fields.team_style;  // 队伍样式配置

    // 3. 特殊队伍样式7的处理逻辑
    if (team_style == 7) {
        // 3.1 检查当前领导者是否有特殊标记且队伍为8
        player_index = LeaderData__get_player(leaderData, placeholder);
        if ((game->info.player[player_index].flags & 1) != 0 &&  // 特殊标志位1
            game->info.player[player_index].team == 8) {         // 队伍编号为8
            return FALSE;  // 特殊标记的玩家不在任何队伍
        }

        // 3.2 检查目标领导者是否有特殊标记且队伍为8
        target_player_index = LeaderData__get_player(
            &GameAccessConst__leadersc->list[whom],
            placeholder
        );
        if ((game->info.player[target_player_index].flags & 1) != 0 &&  // 特殊标志位1
            game->info.player[target_player_index].team == 8) {         // 队伍编号为8
            return FALSE;  // 特殊标记的玩家不在任何队伍
        }
    }

    // 4. 非严格模式下的盟友检查
    if (game->frame && !strict) {
        // 游戏帧数不为0且非严格模式时，检查是否为盟友
        return LeaderData__is_ally(leaderData, placeholder, whom);
    }

    // 5. 基础队伍编号比较
    // 5.1 获取当前领导者的队伍编号
    player_index = LeaderData__get_player(leaderData, placeholder);
    team = game->info.player[player_index].team;

    // 5.2 获取目标领导者的队伍编号
    target_player_index = LeaderData__get_player(
       &GameAccessConst__leadersc->list[whom],
        placeholder
    );
    unsigned char target_team = game->info.player[target_player_index].team;

    // 5.3 检查队伍编号
    if ((team > 3) ||              // 队伍编号必须有效（0-3）
        (team != target_team)) {   // 队伍编号必须相同
        return FALSE;  // 不在同一队伍
    }

    // 6. 严格模式下的额外检查
    if (game->frame && strict &&  // 游戏帧数不为0且严格模式
        (!team_style ||           // 队伍样式为0
            team_style == 11 ||      // 队伍样式为11
            team_style == 8)) {      // 队伍样式为8
        // 在这些特定队伍样式下，还需检查是否为盟友
        return LeaderData__is_ally(leaderData, placeholder, whom);
    }

    // 7. 所有检查通过，返回TRUE
    return TRUE;
}

 int __fastcall LeaderData__get_player(LeaderData* leaderData, int placeholder) {
	 return Old_LeaderData__get_player(leaderData, placeholder);
 }
 BOOL __fastcall LeaderData__is_ally(LeaderData* leaderData, int placeholder, int whom) {
     return Old_LeaderData__is_ally(leaderData, placeholder,whom);
 }