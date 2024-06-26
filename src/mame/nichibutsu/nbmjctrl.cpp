// license: BSD-3-Clause
// copyright-holders: Takahiro Nogi, Dirk Best
/***************************************************************************

    Nichibutsu Mahjong control panel

***************************************************************************/

#include "emu.h"
#include "nbmjctrl.h"

INPUT_PORTS_START( nbmjctrl )
	PORT_START("P1_KEY0")
	PORT_BIT(0x01, IP_ACTIVE_LOW, IPT_START1)
	PORT_BIT(0x02, IP_ACTIVE_LOW, IPT_MAHJONG_KAN)
	PORT_BIT(0x04, IP_ACTIVE_LOW, IPT_MAHJONG_M)
	PORT_BIT(0x08, IP_ACTIVE_LOW, IPT_MAHJONG_I)
	PORT_BIT(0x10, IP_ACTIVE_LOW, IPT_MAHJONG_E)
	PORT_BIT(0x20, IP_ACTIVE_LOW, IPT_MAHJONG_A)
	PORT_BIT(0xc0, IP_ACTIVE_LOW, IPT_UNUSED)

	PORT_START("P1_KEY1")
	PORT_BIT(0x01, IP_ACTIVE_LOW, IPT_MAHJONG_BET)
	PORT_BIT(0x02, IP_ACTIVE_LOW, IPT_MAHJONG_REACH)
	PORT_BIT(0x04, IP_ACTIVE_LOW, IPT_MAHJONG_N)
	PORT_BIT(0x08, IP_ACTIVE_LOW, IPT_MAHJONG_J)
	PORT_BIT(0x10, IP_ACTIVE_LOW, IPT_MAHJONG_F)
	PORT_BIT(0x20, IP_ACTIVE_LOW, IPT_MAHJONG_B)
	PORT_BIT(0xc0, IP_ACTIVE_LOW, IPT_UNUSED)

	PORT_START("P1_KEY2")
	PORT_BIT(0x01, IP_ACTIVE_LOW, IPT_UNKNOWN)
	PORT_BIT(0x02, IP_ACTIVE_LOW, IPT_MAHJONG_RON)
	PORT_BIT(0x04, IP_ACTIVE_LOW, IPT_MAHJONG_CHI)
	PORT_BIT(0x08, IP_ACTIVE_LOW, IPT_MAHJONG_K)
	PORT_BIT(0x10, IP_ACTIVE_LOW, IPT_MAHJONG_G)
	PORT_BIT(0x20, IP_ACTIVE_LOW, IPT_MAHJONG_C)
	PORT_BIT(0xc0, IP_ACTIVE_LOW, IPT_UNUSED)

	PORT_START("P1_KEY3")
	PORT_BIT(0x01, IP_ACTIVE_LOW, IPT_UNKNOWN)
	PORT_BIT(0x02, IP_ACTIVE_LOW, IPT_UNKNOWN)
	PORT_BIT(0x04, IP_ACTIVE_LOW, IPT_MAHJONG_PON)
	PORT_BIT(0x08, IP_ACTIVE_LOW, IPT_MAHJONG_L)
	PORT_BIT(0x10, IP_ACTIVE_LOW, IPT_MAHJONG_H)
	PORT_BIT(0x20, IP_ACTIVE_LOW, IPT_MAHJONG_D)
	PORT_BIT(0xc0, IP_ACTIVE_LOW, IPT_UNUSED)

	PORT_START("P1_KEY4")
	PORT_BIT(0x01, IP_ACTIVE_LOW, IPT_MAHJONG_SMALL)
	PORT_BIT(0x02, IP_ACTIVE_LOW, IPT_MAHJONG_BIG)
	PORT_BIT(0x04, IP_ACTIVE_LOW, IPT_MAHJONG_FLIP_FLOP)
	PORT_BIT(0x08, IP_ACTIVE_LOW, IPT_MAHJONG_DOUBLE_UP)
	PORT_BIT(0x10, IP_ACTIVE_LOW, IPT_MAHJONG_SCORE)
	PORT_BIT(0x20, IP_ACTIVE_LOW, IPT_MAHJONG_LAST_CHANCE)
	PORT_BIT(0xc0, IP_ACTIVE_LOW, IPT_UNUSED)

	PORT_START("P2_KEY0")
	PORT_BIT(0x01, IP_ACTIVE_LOW, IPT_START2)
	PORT_BIT(0x02, IP_ACTIVE_LOW, IPT_MAHJONG_KAN) PORT_PLAYER(2)
	PORT_BIT(0x04, IP_ACTIVE_LOW, IPT_MAHJONG_M)   PORT_PLAYER(2)
	PORT_BIT(0x08, IP_ACTIVE_LOW, IPT_MAHJONG_I)   PORT_PLAYER(2)
	PORT_BIT(0x10, IP_ACTIVE_LOW, IPT_MAHJONG_E)   PORT_PLAYER(2)
	PORT_BIT(0x20, IP_ACTIVE_LOW, IPT_MAHJONG_A)   PORT_PLAYER(2)
	PORT_BIT(0xc0, IP_ACTIVE_LOW, IPT_UNUSED)

	PORT_START("P2_KEY1")
	PORT_BIT(0x01, IP_ACTIVE_LOW, IPT_MAHJONG_BET)   PORT_PLAYER(2)
	PORT_BIT(0x02, IP_ACTIVE_LOW, IPT_MAHJONG_REACH) PORT_PLAYER(2)
	PORT_BIT(0x04, IP_ACTIVE_LOW, IPT_MAHJONG_N)     PORT_PLAYER(2)
	PORT_BIT(0x08, IP_ACTIVE_LOW, IPT_MAHJONG_J)     PORT_PLAYER(2)
	PORT_BIT(0x10, IP_ACTIVE_LOW, IPT_MAHJONG_F)     PORT_PLAYER(2)
	PORT_BIT(0x20, IP_ACTIVE_LOW, IPT_MAHJONG_B)     PORT_PLAYER(2)
	PORT_BIT(0xc0, IP_ACTIVE_LOW, IPT_UNUSED)

	PORT_START("P2_KEY2")
	PORT_BIT(0x01, IP_ACTIVE_LOW, IPT_UNKNOWN)
	PORT_BIT(0x02, IP_ACTIVE_LOW, IPT_MAHJONG_RON) PORT_PLAYER(2)
	PORT_BIT(0x04, IP_ACTIVE_LOW, IPT_MAHJONG_CHI) PORT_PLAYER(2)
	PORT_BIT(0x08, IP_ACTIVE_LOW, IPT_MAHJONG_K)   PORT_PLAYER(2)
	PORT_BIT(0x10, IP_ACTIVE_LOW, IPT_MAHJONG_G)   PORT_PLAYER(2)
	PORT_BIT(0x20, IP_ACTIVE_LOW, IPT_MAHJONG_C)   PORT_PLAYER(2)
	PORT_BIT(0xc0, IP_ACTIVE_LOW, IPT_UNUSED)

	PORT_START("P2_KEY3")
	PORT_BIT(0x01, IP_ACTIVE_LOW, IPT_UNKNOWN)
	PORT_BIT(0x02, IP_ACTIVE_LOW, IPT_UNKNOWN)
	PORT_BIT(0x04, IP_ACTIVE_LOW, IPT_MAHJONG_PON) PORT_PLAYER(2)
	PORT_BIT(0x08, IP_ACTIVE_LOW, IPT_MAHJONG_L)   PORT_PLAYER(2)
	PORT_BIT(0x10, IP_ACTIVE_LOW, IPT_MAHJONG_H)   PORT_PLAYER(2)
	PORT_BIT(0x20, IP_ACTIVE_LOW, IPT_MAHJONG_D)   PORT_PLAYER(2)
	PORT_BIT(0xc0, IP_ACTIVE_LOW, IPT_UNUSED)

	PORT_START("P2_KEY4")
	PORT_BIT(0x01, IP_ACTIVE_LOW, IPT_MAHJONG_SMALL)       PORT_PLAYER(2)
	PORT_BIT(0x02, IP_ACTIVE_LOW, IPT_MAHJONG_BIG)         PORT_PLAYER(2)
	PORT_BIT(0x04, IP_ACTIVE_LOW, IPT_MAHJONG_FLIP_FLOP)   PORT_PLAYER(2)
	PORT_BIT(0x08, IP_ACTIVE_LOW, IPT_MAHJONG_DOUBLE_UP)   PORT_PLAYER(2)
	PORT_BIT(0x10, IP_ACTIVE_LOW, IPT_MAHJONG_SCORE)       PORT_PLAYER(2)
	PORT_BIT(0x20, IP_ACTIVE_LOW, IPT_MAHJONG_LAST_CHANCE) PORT_PLAYER(2)
	PORT_BIT(0xc0, IP_ACTIVE_LOW, IPT_UNUSED)
INPUT_PORTS_END
