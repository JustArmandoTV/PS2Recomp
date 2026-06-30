#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F0010
// Address: 0x4f0010 - 0x4f0490
void sub_004F0010_0x4f0010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0010_0x4f0010");
#endif

    switch (ctx->pc) {
        case 0x4f0010u: goto label_4f0010;
        case 0x4f0014u: goto label_4f0014;
        case 0x4f0018u: goto label_4f0018;
        case 0x4f001cu: goto label_4f001c;
        case 0x4f0020u: goto label_4f0020;
        case 0x4f0024u: goto label_4f0024;
        case 0x4f0028u: goto label_4f0028;
        case 0x4f002cu: goto label_4f002c;
        case 0x4f0030u: goto label_4f0030;
        case 0x4f0034u: goto label_4f0034;
        case 0x4f0038u: goto label_4f0038;
        case 0x4f003cu: goto label_4f003c;
        case 0x4f0040u: goto label_4f0040;
        case 0x4f0044u: goto label_4f0044;
        case 0x4f0048u: goto label_4f0048;
        case 0x4f004cu: goto label_4f004c;
        case 0x4f0050u: goto label_4f0050;
        case 0x4f0054u: goto label_4f0054;
        case 0x4f0058u: goto label_4f0058;
        case 0x4f005cu: goto label_4f005c;
        case 0x4f0060u: goto label_4f0060;
        case 0x4f0064u: goto label_4f0064;
        case 0x4f0068u: goto label_4f0068;
        case 0x4f006cu: goto label_4f006c;
        case 0x4f0070u: goto label_4f0070;
        case 0x4f0074u: goto label_4f0074;
        case 0x4f0078u: goto label_4f0078;
        case 0x4f007cu: goto label_4f007c;
        case 0x4f0080u: goto label_4f0080;
        case 0x4f0084u: goto label_4f0084;
        case 0x4f0088u: goto label_4f0088;
        case 0x4f008cu: goto label_4f008c;
        case 0x4f0090u: goto label_4f0090;
        case 0x4f0094u: goto label_4f0094;
        case 0x4f0098u: goto label_4f0098;
        case 0x4f009cu: goto label_4f009c;
        case 0x4f00a0u: goto label_4f00a0;
        case 0x4f00a4u: goto label_4f00a4;
        case 0x4f00a8u: goto label_4f00a8;
        case 0x4f00acu: goto label_4f00ac;
        case 0x4f00b0u: goto label_4f00b0;
        case 0x4f00b4u: goto label_4f00b4;
        case 0x4f00b8u: goto label_4f00b8;
        case 0x4f00bcu: goto label_4f00bc;
        case 0x4f00c0u: goto label_4f00c0;
        case 0x4f00c4u: goto label_4f00c4;
        case 0x4f00c8u: goto label_4f00c8;
        case 0x4f00ccu: goto label_4f00cc;
        case 0x4f00d0u: goto label_4f00d0;
        case 0x4f00d4u: goto label_4f00d4;
        case 0x4f00d8u: goto label_4f00d8;
        case 0x4f00dcu: goto label_4f00dc;
        case 0x4f00e0u: goto label_4f00e0;
        case 0x4f00e4u: goto label_4f00e4;
        case 0x4f00e8u: goto label_4f00e8;
        case 0x4f00ecu: goto label_4f00ec;
        case 0x4f00f0u: goto label_4f00f0;
        case 0x4f00f4u: goto label_4f00f4;
        case 0x4f00f8u: goto label_4f00f8;
        case 0x4f00fcu: goto label_4f00fc;
        case 0x4f0100u: goto label_4f0100;
        case 0x4f0104u: goto label_4f0104;
        case 0x4f0108u: goto label_4f0108;
        case 0x4f010cu: goto label_4f010c;
        case 0x4f0110u: goto label_4f0110;
        case 0x4f0114u: goto label_4f0114;
        case 0x4f0118u: goto label_4f0118;
        case 0x4f011cu: goto label_4f011c;
        case 0x4f0120u: goto label_4f0120;
        case 0x4f0124u: goto label_4f0124;
        case 0x4f0128u: goto label_4f0128;
        case 0x4f012cu: goto label_4f012c;
        case 0x4f0130u: goto label_4f0130;
        case 0x4f0134u: goto label_4f0134;
        case 0x4f0138u: goto label_4f0138;
        case 0x4f013cu: goto label_4f013c;
        case 0x4f0140u: goto label_4f0140;
        case 0x4f0144u: goto label_4f0144;
        case 0x4f0148u: goto label_4f0148;
        case 0x4f014cu: goto label_4f014c;
        case 0x4f0150u: goto label_4f0150;
        case 0x4f0154u: goto label_4f0154;
        case 0x4f0158u: goto label_4f0158;
        case 0x4f015cu: goto label_4f015c;
        case 0x4f0160u: goto label_4f0160;
        case 0x4f0164u: goto label_4f0164;
        case 0x4f0168u: goto label_4f0168;
        case 0x4f016cu: goto label_4f016c;
        case 0x4f0170u: goto label_4f0170;
        case 0x4f0174u: goto label_4f0174;
        case 0x4f0178u: goto label_4f0178;
        case 0x4f017cu: goto label_4f017c;
        case 0x4f0180u: goto label_4f0180;
        case 0x4f0184u: goto label_4f0184;
        case 0x4f0188u: goto label_4f0188;
        case 0x4f018cu: goto label_4f018c;
        case 0x4f0190u: goto label_4f0190;
        case 0x4f0194u: goto label_4f0194;
        case 0x4f0198u: goto label_4f0198;
        case 0x4f019cu: goto label_4f019c;
        case 0x4f01a0u: goto label_4f01a0;
        case 0x4f01a4u: goto label_4f01a4;
        case 0x4f01a8u: goto label_4f01a8;
        case 0x4f01acu: goto label_4f01ac;
        case 0x4f01b0u: goto label_4f01b0;
        case 0x4f01b4u: goto label_4f01b4;
        case 0x4f01b8u: goto label_4f01b8;
        case 0x4f01bcu: goto label_4f01bc;
        case 0x4f01c0u: goto label_4f01c0;
        case 0x4f01c4u: goto label_4f01c4;
        case 0x4f01c8u: goto label_4f01c8;
        case 0x4f01ccu: goto label_4f01cc;
        case 0x4f01d0u: goto label_4f01d0;
        case 0x4f01d4u: goto label_4f01d4;
        case 0x4f01d8u: goto label_4f01d8;
        case 0x4f01dcu: goto label_4f01dc;
        case 0x4f01e0u: goto label_4f01e0;
        case 0x4f01e4u: goto label_4f01e4;
        case 0x4f01e8u: goto label_4f01e8;
        case 0x4f01ecu: goto label_4f01ec;
        case 0x4f01f0u: goto label_4f01f0;
        case 0x4f01f4u: goto label_4f01f4;
        case 0x4f01f8u: goto label_4f01f8;
        case 0x4f01fcu: goto label_4f01fc;
        case 0x4f0200u: goto label_4f0200;
        case 0x4f0204u: goto label_4f0204;
        case 0x4f0208u: goto label_4f0208;
        case 0x4f020cu: goto label_4f020c;
        case 0x4f0210u: goto label_4f0210;
        case 0x4f0214u: goto label_4f0214;
        case 0x4f0218u: goto label_4f0218;
        case 0x4f021cu: goto label_4f021c;
        case 0x4f0220u: goto label_4f0220;
        case 0x4f0224u: goto label_4f0224;
        case 0x4f0228u: goto label_4f0228;
        case 0x4f022cu: goto label_4f022c;
        case 0x4f0230u: goto label_4f0230;
        case 0x4f0234u: goto label_4f0234;
        case 0x4f0238u: goto label_4f0238;
        case 0x4f023cu: goto label_4f023c;
        case 0x4f0240u: goto label_4f0240;
        case 0x4f0244u: goto label_4f0244;
        case 0x4f0248u: goto label_4f0248;
        case 0x4f024cu: goto label_4f024c;
        case 0x4f0250u: goto label_4f0250;
        case 0x4f0254u: goto label_4f0254;
        case 0x4f0258u: goto label_4f0258;
        case 0x4f025cu: goto label_4f025c;
        case 0x4f0260u: goto label_4f0260;
        case 0x4f0264u: goto label_4f0264;
        case 0x4f0268u: goto label_4f0268;
        case 0x4f026cu: goto label_4f026c;
        case 0x4f0270u: goto label_4f0270;
        case 0x4f0274u: goto label_4f0274;
        case 0x4f0278u: goto label_4f0278;
        case 0x4f027cu: goto label_4f027c;
        case 0x4f0280u: goto label_4f0280;
        case 0x4f0284u: goto label_4f0284;
        case 0x4f0288u: goto label_4f0288;
        case 0x4f028cu: goto label_4f028c;
        case 0x4f0290u: goto label_4f0290;
        case 0x4f0294u: goto label_4f0294;
        case 0x4f0298u: goto label_4f0298;
        case 0x4f029cu: goto label_4f029c;
        case 0x4f02a0u: goto label_4f02a0;
        case 0x4f02a4u: goto label_4f02a4;
        case 0x4f02a8u: goto label_4f02a8;
        case 0x4f02acu: goto label_4f02ac;
        case 0x4f02b0u: goto label_4f02b0;
        case 0x4f02b4u: goto label_4f02b4;
        case 0x4f02b8u: goto label_4f02b8;
        case 0x4f02bcu: goto label_4f02bc;
        case 0x4f02c0u: goto label_4f02c0;
        case 0x4f02c4u: goto label_4f02c4;
        case 0x4f02c8u: goto label_4f02c8;
        case 0x4f02ccu: goto label_4f02cc;
        case 0x4f02d0u: goto label_4f02d0;
        case 0x4f02d4u: goto label_4f02d4;
        case 0x4f02d8u: goto label_4f02d8;
        case 0x4f02dcu: goto label_4f02dc;
        case 0x4f02e0u: goto label_4f02e0;
        case 0x4f02e4u: goto label_4f02e4;
        case 0x4f02e8u: goto label_4f02e8;
        case 0x4f02ecu: goto label_4f02ec;
        case 0x4f02f0u: goto label_4f02f0;
        case 0x4f02f4u: goto label_4f02f4;
        case 0x4f02f8u: goto label_4f02f8;
        case 0x4f02fcu: goto label_4f02fc;
        case 0x4f0300u: goto label_4f0300;
        case 0x4f0304u: goto label_4f0304;
        case 0x4f0308u: goto label_4f0308;
        case 0x4f030cu: goto label_4f030c;
        case 0x4f0310u: goto label_4f0310;
        case 0x4f0314u: goto label_4f0314;
        case 0x4f0318u: goto label_4f0318;
        case 0x4f031cu: goto label_4f031c;
        case 0x4f0320u: goto label_4f0320;
        case 0x4f0324u: goto label_4f0324;
        case 0x4f0328u: goto label_4f0328;
        case 0x4f032cu: goto label_4f032c;
        case 0x4f0330u: goto label_4f0330;
        case 0x4f0334u: goto label_4f0334;
        case 0x4f0338u: goto label_4f0338;
        case 0x4f033cu: goto label_4f033c;
        case 0x4f0340u: goto label_4f0340;
        case 0x4f0344u: goto label_4f0344;
        case 0x4f0348u: goto label_4f0348;
        case 0x4f034cu: goto label_4f034c;
        case 0x4f0350u: goto label_4f0350;
        case 0x4f0354u: goto label_4f0354;
        case 0x4f0358u: goto label_4f0358;
        case 0x4f035cu: goto label_4f035c;
        case 0x4f0360u: goto label_4f0360;
        case 0x4f0364u: goto label_4f0364;
        case 0x4f0368u: goto label_4f0368;
        case 0x4f036cu: goto label_4f036c;
        case 0x4f0370u: goto label_4f0370;
        case 0x4f0374u: goto label_4f0374;
        case 0x4f0378u: goto label_4f0378;
        case 0x4f037cu: goto label_4f037c;
        case 0x4f0380u: goto label_4f0380;
        case 0x4f0384u: goto label_4f0384;
        case 0x4f0388u: goto label_4f0388;
        case 0x4f038cu: goto label_4f038c;
        case 0x4f0390u: goto label_4f0390;
        case 0x4f0394u: goto label_4f0394;
        case 0x4f0398u: goto label_4f0398;
        case 0x4f039cu: goto label_4f039c;
        case 0x4f03a0u: goto label_4f03a0;
        case 0x4f03a4u: goto label_4f03a4;
        case 0x4f03a8u: goto label_4f03a8;
        case 0x4f03acu: goto label_4f03ac;
        case 0x4f03b0u: goto label_4f03b0;
        case 0x4f03b4u: goto label_4f03b4;
        case 0x4f03b8u: goto label_4f03b8;
        case 0x4f03bcu: goto label_4f03bc;
        case 0x4f03c0u: goto label_4f03c0;
        case 0x4f03c4u: goto label_4f03c4;
        case 0x4f03c8u: goto label_4f03c8;
        case 0x4f03ccu: goto label_4f03cc;
        case 0x4f03d0u: goto label_4f03d0;
        case 0x4f03d4u: goto label_4f03d4;
        case 0x4f03d8u: goto label_4f03d8;
        case 0x4f03dcu: goto label_4f03dc;
        case 0x4f03e0u: goto label_4f03e0;
        case 0x4f03e4u: goto label_4f03e4;
        case 0x4f03e8u: goto label_4f03e8;
        case 0x4f03ecu: goto label_4f03ec;
        case 0x4f03f0u: goto label_4f03f0;
        case 0x4f03f4u: goto label_4f03f4;
        case 0x4f03f8u: goto label_4f03f8;
        case 0x4f03fcu: goto label_4f03fc;
        case 0x4f0400u: goto label_4f0400;
        case 0x4f0404u: goto label_4f0404;
        case 0x4f0408u: goto label_4f0408;
        case 0x4f040cu: goto label_4f040c;
        case 0x4f0410u: goto label_4f0410;
        case 0x4f0414u: goto label_4f0414;
        case 0x4f0418u: goto label_4f0418;
        case 0x4f041cu: goto label_4f041c;
        case 0x4f0420u: goto label_4f0420;
        case 0x4f0424u: goto label_4f0424;
        case 0x4f0428u: goto label_4f0428;
        case 0x4f042cu: goto label_4f042c;
        case 0x4f0430u: goto label_4f0430;
        case 0x4f0434u: goto label_4f0434;
        case 0x4f0438u: goto label_4f0438;
        case 0x4f043cu: goto label_4f043c;
        case 0x4f0440u: goto label_4f0440;
        case 0x4f0444u: goto label_4f0444;
        case 0x4f0448u: goto label_4f0448;
        case 0x4f044cu: goto label_4f044c;
        case 0x4f0450u: goto label_4f0450;
        case 0x4f0454u: goto label_4f0454;
        case 0x4f0458u: goto label_4f0458;
        case 0x4f045cu: goto label_4f045c;
        case 0x4f0460u: goto label_4f0460;
        case 0x4f0464u: goto label_4f0464;
        case 0x4f0468u: goto label_4f0468;
        case 0x4f046cu: goto label_4f046c;
        case 0x4f0470u: goto label_4f0470;
        case 0x4f0474u: goto label_4f0474;
        case 0x4f0478u: goto label_4f0478;
        case 0x4f047cu: goto label_4f047c;
        case 0x4f0480u: goto label_4f0480;
        case 0x4f0484u: goto label_4f0484;
        case 0x4f0488u: goto label_4f0488;
        case 0x4f048cu: goto label_4f048c;
        default: break;
    }

    ctx->pc = 0x4f0010u;

label_4f0010:
    // 0x4f0010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f0010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f0014:
    // 0x4f0014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f0014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4f0018:
    // 0x4f0018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f0018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f001c:
    // 0x4f001c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f001cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f0020:
    // 0x4f0020: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f0020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f0024:
    // 0x4f0024: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4f0028:
    if (ctx->pc == 0x4F0028u) {
        ctx->pc = 0x4F0028u;
            // 0x4f0028: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F002Cu;
        goto label_4f002c;
    }
    ctx->pc = 0x4F0024u;
    {
        const bool branch_taken_0x4f0024 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0024u;
            // 0x4f0028: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0024) {
            ctx->pc = 0x4F0158u;
            goto label_4f0158;
        }
    }
    ctx->pc = 0x4F002Cu;
label_4f002c:
    // 0x4f002c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f002cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f0030:
    // 0x4f0030: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f0030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f0034:
    // 0x4f0034: 0x24633f10  addiu       $v1, $v1, 0x3F10
    ctx->pc = 0x4f0034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16144));
label_4f0038:
    // 0x4f0038: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x4f0038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_4f003c:
    // 0x4f003c: 0x24423f48  addiu       $v0, $v0, 0x3F48
    ctx->pc = 0x4f003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16200));
label_4f0040:
    // 0x4f0040: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4f0040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4f0044:
    // 0x4f0044: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4f0044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4f0048:
    // 0x4f0048: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4f0048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4f004c:
    // 0x4f004c: 0xc0407c0  jal         func_101F00
label_4f0050:
    if (ctx->pc == 0x4F0050u) {
        ctx->pc = 0x4F0050u;
            // 0x4f0050: 0x24a50170  addiu       $a1, $a1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 368));
        ctx->pc = 0x4F0054u;
        goto label_4f0054;
    }
    ctx->pc = 0x4F004Cu;
    SET_GPR_U32(ctx, 31, 0x4F0054u);
    ctx->pc = 0x4F0050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F004Cu;
            // 0x4f0050: 0x24a50170  addiu       $a1, $a1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0054u; }
        if (ctx->pc != 0x4F0054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0054u; }
        if (ctx->pc != 0x4F0054u) { return; }
    }
    ctx->pc = 0x4F0054u;
label_4f0054:
    // 0x4f0054: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4f0054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4f0058:
    // 0x4f0058: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4f005c:
    if (ctx->pc == 0x4F005Cu) {
        ctx->pc = 0x4F005Cu;
            // 0x4f005c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4F0060u;
        goto label_4f0060;
    }
    ctx->pc = 0x4F0058u;
    {
        const bool branch_taken_0x4f0058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0058) {
            ctx->pc = 0x4F005Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0058u;
            // 0x4f005c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F006Cu;
            goto label_4f006c;
        }
    }
    ctx->pc = 0x4F0060u;
label_4f0060:
    // 0x4f0060: 0xc07507c  jal         func_1D41F0
label_4f0064:
    if (ctx->pc == 0x4F0064u) {
        ctx->pc = 0x4F0064u;
            // 0x4f0064: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4F0068u;
        goto label_4f0068;
    }
    ctx->pc = 0x4F0060u;
    SET_GPR_U32(ctx, 31, 0x4F0068u);
    ctx->pc = 0x4F0064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0060u;
            // 0x4f0064: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0068u; }
        if (ctx->pc != 0x4F0068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0068u; }
        if (ctx->pc != 0x4F0068u) { return; }
    }
    ctx->pc = 0x4F0068u;
label_4f0068:
    // 0x4f0068: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4f0068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4f006c:
    // 0x4f006c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4f0070:
    if (ctx->pc == 0x4F0070u) {
        ctx->pc = 0x4F0070u;
            // 0x4f0070: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4F0074u;
        goto label_4f0074;
    }
    ctx->pc = 0x4F006Cu;
    {
        const bool branch_taken_0x4f006c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f006c) {
            ctx->pc = 0x4F0070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F006Cu;
            // 0x4f0070: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F009Cu;
            goto label_4f009c;
        }
    }
    ctx->pc = 0x4F0074u;
label_4f0074:
    // 0x4f0074: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4f0078:
    if (ctx->pc == 0x4F0078u) {
        ctx->pc = 0x4F007Cu;
        goto label_4f007c;
    }
    ctx->pc = 0x4F0074u;
    {
        const bool branch_taken_0x4f0074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0074) {
            ctx->pc = 0x4F0098u;
            goto label_4f0098;
        }
    }
    ctx->pc = 0x4F007Cu;
label_4f007c:
    // 0x4f007c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4f0080:
    if (ctx->pc == 0x4F0080u) {
        ctx->pc = 0x4F0084u;
        goto label_4f0084;
    }
    ctx->pc = 0x4F007Cu;
    {
        const bool branch_taken_0x4f007c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f007c) {
            ctx->pc = 0x4F0098u;
            goto label_4f0098;
        }
    }
    ctx->pc = 0x4F0084u;
label_4f0084:
    // 0x4f0084: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4f0084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4f0088:
    // 0x4f0088: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4f008c:
    if (ctx->pc == 0x4F008Cu) {
        ctx->pc = 0x4F0090u;
        goto label_4f0090;
    }
    ctx->pc = 0x4F0088u;
    {
        const bool branch_taken_0x4f0088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0088) {
            ctx->pc = 0x4F0098u;
            goto label_4f0098;
        }
    }
    ctx->pc = 0x4F0090u;
label_4f0090:
    // 0x4f0090: 0xc0400a8  jal         func_1002A0
label_4f0094:
    if (ctx->pc == 0x4F0094u) {
        ctx->pc = 0x4F0098u;
        goto label_4f0098;
    }
    ctx->pc = 0x4F0090u;
    SET_GPR_U32(ctx, 31, 0x4F0098u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0098u; }
        if (ctx->pc != 0x4F0098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0098u; }
        if (ctx->pc != 0x4F0098u) { return; }
    }
    ctx->pc = 0x4F0098u;
label_4f0098:
    // 0x4f0098: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4f0098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4f009c:
    // 0x4f009c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4f00a0:
    if (ctx->pc == 0x4F00A0u) {
        ctx->pc = 0x4F00A0u;
            // 0x4f00a0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4F00A4u;
        goto label_4f00a4;
    }
    ctx->pc = 0x4F009Cu;
    {
        const bool branch_taken_0x4f009c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f009c) {
            ctx->pc = 0x4F00A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F009Cu;
            // 0x4f00a0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F00CCu;
            goto label_4f00cc;
        }
    }
    ctx->pc = 0x4F00A4u;
label_4f00a4:
    // 0x4f00a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4f00a8:
    if (ctx->pc == 0x4F00A8u) {
        ctx->pc = 0x4F00ACu;
        goto label_4f00ac;
    }
    ctx->pc = 0x4F00A4u;
    {
        const bool branch_taken_0x4f00a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f00a4) {
            ctx->pc = 0x4F00C8u;
            goto label_4f00c8;
        }
    }
    ctx->pc = 0x4F00ACu;
label_4f00ac:
    // 0x4f00ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4f00b0:
    if (ctx->pc == 0x4F00B0u) {
        ctx->pc = 0x4F00B4u;
        goto label_4f00b4;
    }
    ctx->pc = 0x4F00ACu;
    {
        const bool branch_taken_0x4f00ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f00ac) {
            ctx->pc = 0x4F00C8u;
            goto label_4f00c8;
        }
    }
    ctx->pc = 0x4F00B4u;
label_4f00b4:
    // 0x4f00b4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4f00b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4f00b8:
    // 0x4f00b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4f00bc:
    if (ctx->pc == 0x4F00BCu) {
        ctx->pc = 0x4F00C0u;
        goto label_4f00c0;
    }
    ctx->pc = 0x4F00B8u;
    {
        const bool branch_taken_0x4f00b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f00b8) {
            ctx->pc = 0x4F00C8u;
            goto label_4f00c8;
        }
    }
    ctx->pc = 0x4F00C0u;
label_4f00c0:
    // 0x4f00c0: 0xc0400a8  jal         func_1002A0
label_4f00c4:
    if (ctx->pc == 0x4F00C4u) {
        ctx->pc = 0x4F00C8u;
        goto label_4f00c8;
    }
    ctx->pc = 0x4F00C0u;
    SET_GPR_U32(ctx, 31, 0x4F00C8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F00C8u; }
        if (ctx->pc != 0x4F00C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F00C8u; }
        if (ctx->pc != 0x4F00C8u) { return; }
    }
    ctx->pc = 0x4F00C8u;
label_4f00c8:
    // 0x4f00c8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4f00c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4f00cc:
    // 0x4f00cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4f00d0:
    if (ctx->pc == 0x4F00D0u) {
        ctx->pc = 0x4F00D4u;
        goto label_4f00d4;
    }
    ctx->pc = 0x4F00CCu;
    {
        const bool branch_taken_0x4f00cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f00cc) {
            ctx->pc = 0x4F00E8u;
            goto label_4f00e8;
        }
    }
    ctx->pc = 0x4F00D4u;
label_4f00d4:
    // 0x4f00d4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f00d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f00d8:
    // 0x4f00d8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4f00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4f00dc:
    // 0x4f00dc: 0x24633ef8  addiu       $v1, $v1, 0x3EF8
    ctx->pc = 0x4f00dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16120));
label_4f00e0:
    // 0x4f00e0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4f00e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4f00e4:
    // 0x4f00e4: 0xac40aad8  sw          $zero, -0x5528($v0)
    ctx->pc = 0x4f00e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945496), GPR_U32(ctx, 0));
label_4f00e8:
    // 0x4f00e8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4f00ec:
    if (ctx->pc == 0x4F00ECu) {
        ctx->pc = 0x4F00ECu;
            // 0x4f00ec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4F00F0u;
        goto label_4f00f0;
    }
    ctx->pc = 0x4F00E8u;
    {
        const bool branch_taken_0x4f00e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f00e8) {
            ctx->pc = 0x4F00ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F00E8u;
            // 0x4f00ec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F0144u;
            goto label_4f0144;
        }
    }
    ctx->pc = 0x4F00F0u;
label_4f00f0:
    // 0x4f00f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f00f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f00f4:
    // 0x4f00f4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4f00f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4f00f8:
    // 0x4f00f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4f00f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4f00fc:
    // 0x4f00fc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4f00fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4f0100:
    // 0x4f0100: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4f0104:
    if (ctx->pc == 0x4F0104u) {
        ctx->pc = 0x4F0104u;
            // 0x4f0104: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4F0108u;
        goto label_4f0108;
    }
    ctx->pc = 0x4F0100u;
    {
        const bool branch_taken_0x4f0100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0100) {
            ctx->pc = 0x4F0104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0100u;
            // 0x4f0104: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F011Cu;
            goto label_4f011c;
        }
    }
    ctx->pc = 0x4F0108u;
label_4f0108:
    // 0x4f0108: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f0108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f010c:
    // 0x4f010c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4f010cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4f0110:
    // 0x4f0110: 0x320f809  jalr        $t9
label_4f0114:
    if (ctx->pc == 0x4F0114u) {
        ctx->pc = 0x4F0114u;
            // 0x4f0114: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F0118u;
        goto label_4f0118;
    }
    ctx->pc = 0x4F0110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F0118u);
        ctx->pc = 0x4F0114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0110u;
            // 0x4f0114: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F0118u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F0118u; }
            if (ctx->pc != 0x4F0118u) { return; }
        }
        }
    }
    ctx->pc = 0x4F0118u;
label_4f0118:
    // 0x4f0118: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4f0118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4f011c:
    // 0x4f011c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4f0120:
    if (ctx->pc == 0x4F0120u) {
        ctx->pc = 0x4F0120u;
            // 0x4f0120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0124u;
        goto label_4f0124;
    }
    ctx->pc = 0x4F011Cu;
    {
        const bool branch_taken_0x4f011c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f011c) {
            ctx->pc = 0x4F0120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F011Cu;
            // 0x4f0120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F0138u;
            goto label_4f0138;
        }
    }
    ctx->pc = 0x4F0124u;
label_4f0124:
    // 0x4f0124: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f0124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f0128:
    // 0x4f0128: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4f0128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4f012c:
    // 0x4f012c: 0x320f809  jalr        $t9
label_4f0130:
    if (ctx->pc == 0x4F0130u) {
        ctx->pc = 0x4F0130u;
            // 0x4f0130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F0134u;
        goto label_4f0134;
    }
    ctx->pc = 0x4F012Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F0134u);
        ctx->pc = 0x4F0130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F012Cu;
            // 0x4f0130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F0134u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F0134u; }
            if (ctx->pc != 0x4F0134u) { return; }
        }
        }
    }
    ctx->pc = 0x4F0134u;
label_4f0134:
    // 0x4f0134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f0134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f0138:
    // 0x4f0138: 0xc075bf8  jal         func_1D6FE0
label_4f013c:
    if (ctx->pc == 0x4F013Cu) {
        ctx->pc = 0x4F013Cu;
            // 0x4f013c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0140u;
        goto label_4f0140;
    }
    ctx->pc = 0x4F0138u;
    SET_GPR_U32(ctx, 31, 0x4F0140u);
    ctx->pc = 0x4F013Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0138u;
            // 0x4f013c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0140u; }
        if (ctx->pc != 0x4F0140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0140u; }
        if (ctx->pc != 0x4F0140u) { return; }
    }
    ctx->pc = 0x4F0140u;
label_4f0140:
    // 0x4f0140: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4f0140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4f0144:
    // 0x4f0144: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f0144u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4f0148:
    // 0x4f0148: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4f014c:
    if (ctx->pc == 0x4F014Cu) {
        ctx->pc = 0x4F014Cu;
            // 0x4f014c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0150u;
        goto label_4f0150;
    }
    ctx->pc = 0x4F0148u;
    {
        const bool branch_taken_0x4f0148 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f0148) {
            ctx->pc = 0x4F014Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0148u;
            // 0x4f014c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F015Cu;
            goto label_4f015c;
        }
    }
    ctx->pc = 0x4F0150u;
label_4f0150:
    // 0x4f0150: 0xc0400a8  jal         func_1002A0
label_4f0154:
    if (ctx->pc == 0x4F0154u) {
        ctx->pc = 0x4F0154u;
            // 0x4f0154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0158u;
        goto label_4f0158;
    }
    ctx->pc = 0x4F0150u;
    SET_GPR_U32(ctx, 31, 0x4F0158u);
    ctx->pc = 0x4F0154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0150u;
            // 0x4f0154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0158u; }
        if (ctx->pc != 0x4F0158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0158u; }
        if (ctx->pc != 0x4F0158u) { return; }
    }
    ctx->pc = 0x4F0158u;
label_4f0158:
    // 0x4f0158: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4f0158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f015c:
    // 0x4f015c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f015cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f0160:
    // 0x4f0160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f0160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f0164:
    // 0x4f0164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f0164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f0168:
    // 0x4f0168: 0x3e00008  jr          $ra
label_4f016c:
    if (ctx->pc == 0x4F016Cu) {
        ctx->pc = 0x4F016Cu;
            // 0x4f016c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4F0170u;
        goto label_4f0170;
    }
    ctx->pc = 0x4F0168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F016Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0168u;
            // 0x4f016c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F0170u;
label_4f0170:
    // 0x4f0170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f0170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f0174:
    // 0x4f0174: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f0174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4f0178:
    // 0x4f0178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f0178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f017c:
    // 0x4f017c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f017cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f0180:
    // 0x4f0180: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f0180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f0184:
    // 0x4f0184: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_4f0188:
    if (ctx->pc == 0x4F0188u) {
        ctx->pc = 0x4F0188u;
            // 0x4f0188: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F018Cu;
        goto label_4f018c;
    }
    ctx->pc = 0x4F0184u;
    {
        const bool branch_taken_0x4f0184 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0184u;
            // 0x4f0188: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0184) {
            ctx->pc = 0x4F01FCu;
            goto label_4f01fc;
        }
    }
    ctx->pc = 0x4F018Cu;
label_4f018c:
    // 0x4f018c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f018cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f0190:
    // 0x4f0190: 0x24423fb0  addiu       $v0, $v0, 0x3FB0
    ctx->pc = 0x4f0190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16304));
label_4f0194:
    // 0x4f0194: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4f0194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4f0198:
    // 0x4f0198: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f0198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f019c:
    // 0x4f019c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4f019cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4f01a0:
    // 0x4f01a0: 0x320f809  jalr        $t9
label_4f01a4:
    if (ctx->pc == 0x4F01A4u) {
        ctx->pc = 0x4F01A8u;
        goto label_4f01a8;
    }
    ctx->pc = 0x4F01A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F01A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F01A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F01A8u; }
            if (ctx->pc != 0x4F01A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4F01A8u;
label_4f01a8:
    // 0x4f01a8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x4f01a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_4f01ac:
    // 0x4f01ac: 0x26240054  addiu       $a0, $s1, 0x54
    ctx->pc = 0x4f01acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_4f01b0:
    // 0x4f01b0: 0x24a50220  addiu       $a1, $a1, 0x220
    ctx->pc = 0x4f01b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 544));
label_4f01b4:
    // 0x4f01b4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x4f01b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4f01b8:
    // 0x4f01b8: 0xc0407e8  jal         func_101FA0
label_4f01bc:
    if (ctx->pc == 0x4F01BCu) {
        ctx->pc = 0x4F01BCu;
            // 0x4f01bc: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4F01C0u;
        goto label_4f01c0;
    }
    ctx->pc = 0x4F01B8u;
    SET_GPR_U32(ctx, 31, 0x4F01C0u);
    ctx->pc = 0x4F01BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F01B8u;
            // 0x4f01bc: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F01C0u; }
        if (ctx->pc != 0x4F01C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F01C0u; }
        if (ctx->pc != 0x4F01C0u) { return; }
    }
    ctx->pc = 0x4F01C0u;
label_4f01c0:
    // 0x4f01c0: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_4f01c4:
    if (ctx->pc == 0x4F01C4u) {
        ctx->pc = 0x4F01C4u;
            // 0x4f01c4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4F01C8u;
        goto label_4f01c8;
    }
    ctx->pc = 0x4F01C0u;
    {
        const bool branch_taken_0x4f01c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f01c0) {
            ctx->pc = 0x4F01C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F01C0u;
            // 0x4f01c4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F01E8u;
            goto label_4f01e8;
        }
    }
    ctx->pc = 0x4F01C8u;
label_4f01c8:
    // 0x4f01c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f01c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f01cc:
    // 0x4f01cc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x4f01ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_4f01d0:
    // 0x4f01d0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_4f01d4:
    if (ctx->pc == 0x4F01D4u) {
        ctx->pc = 0x4F01D4u;
            // 0x4f01d4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4F01D8u;
        goto label_4f01d8;
    }
    ctx->pc = 0x4F01D0u;
    {
        const bool branch_taken_0x4f01d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F01D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F01D0u;
            // 0x4f01d4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f01d0) {
            ctx->pc = 0x4F01E4u;
            goto label_4f01e4;
        }
    }
    ctx->pc = 0x4F01D8u;
label_4f01d8:
    // 0x4f01d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f01d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f01dc:
    // 0x4f01dc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4f01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4f01e0:
    // 0x4f01e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4f01e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4f01e4:
    // 0x4f01e4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4f01e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4f01e8:
    // 0x4f01e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f01e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4f01ec:
    // 0x4f01ec: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4f01f0:
    if (ctx->pc == 0x4F01F0u) {
        ctx->pc = 0x4F01F0u;
            // 0x4f01f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F01F4u;
        goto label_4f01f4;
    }
    ctx->pc = 0x4F01ECu;
    {
        const bool branch_taken_0x4f01ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f01ec) {
            ctx->pc = 0x4F01F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F01ECu;
            // 0x4f01f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F0200u;
            goto label_4f0200;
        }
    }
    ctx->pc = 0x4F01F4u;
label_4f01f4:
    // 0x4f01f4: 0xc0400a8  jal         func_1002A0
label_4f01f8:
    if (ctx->pc == 0x4F01F8u) {
        ctx->pc = 0x4F01F8u;
            // 0x4f01f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F01FCu;
        goto label_4f01fc;
    }
    ctx->pc = 0x4F01F4u;
    SET_GPR_U32(ctx, 31, 0x4F01FCu);
    ctx->pc = 0x4F01F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F01F4u;
            // 0x4f01f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F01FCu; }
        if (ctx->pc != 0x4F01FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F01FCu; }
        if (ctx->pc != 0x4F01FCu) { return; }
    }
    ctx->pc = 0x4F01FCu;
label_4f01fc:
    // 0x4f01fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4f01fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f0200:
    // 0x4f0200: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f0200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f0204:
    // 0x4f0204: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f0204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f0208:
    // 0x4f0208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f0208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f020c:
    // 0x4f020c: 0x3e00008  jr          $ra
label_4f0210:
    if (ctx->pc == 0x4F0210u) {
        ctx->pc = 0x4F0210u;
            // 0x4f0210: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4F0214u;
        goto label_4f0214;
    }
    ctx->pc = 0x4F020Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F020Cu;
            // 0x4f0210: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F0214u;
label_4f0214:
    // 0x4f0214: 0x0  nop
    ctx->pc = 0x4f0214u;
    // NOP
label_4f0218:
    // 0x4f0218: 0x0  nop
    ctx->pc = 0x4f0218u;
    // NOP
label_4f021c:
    // 0x4f021c: 0x0  nop
    ctx->pc = 0x4f021cu;
    // NOP
label_4f0220:
    // 0x4f0220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f0220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f0224:
    // 0x4f0224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f0224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4f0228:
    // 0x4f0228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f0228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f022c:
    // 0x4f022c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f022cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f0230:
    // 0x4f0230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f0230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f0234:
    // 0x4f0234: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_4f0238:
    if (ctx->pc == 0x4F0238u) {
        ctx->pc = 0x4F0238u;
            // 0x4f0238: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F023Cu;
        goto label_4f023c;
    }
    ctx->pc = 0x4F0234u;
    {
        const bool branch_taken_0x4f0234 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0234u;
            // 0x4f0238: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0234) {
            ctx->pc = 0x4F0298u;
            goto label_4f0298;
        }
    }
    ctx->pc = 0x4F023Cu;
label_4f023c:
    // 0x4f023c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f023cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f0240:
    // 0x4f0240: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x4f0240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
label_4f0244:
    // 0x4f0244: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_4f0248:
    if (ctx->pc == 0x4F0248u) {
        ctx->pc = 0x4F0248u;
            // 0x4f0248: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4F024Cu;
        goto label_4f024c;
    }
    ctx->pc = 0x4F0244u;
    {
        const bool branch_taken_0x4f0244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0244u;
            // 0x4f0248: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0244) {
            ctx->pc = 0x4F0280u;
            goto label_4f0280;
        }
    }
    ctx->pc = 0x4F024Cu;
label_4f024c:
    // 0x4f024c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f024cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f0250:
    // 0x4f0250: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x4f0250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_4f0254:
    // 0x4f0254: 0xc0d37dc  jal         func_34DF70
label_4f0258:
    if (ctx->pc == 0x4F0258u) {
        ctx->pc = 0x4F0258u;
            // 0x4f0258: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4F025Cu;
        goto label_4f025c;
    }
    ctx->pc = 0x4F0254u;
    SET_GPR_U32(ctx, 31, 0x4F025Cu);
    ctx->pc = 0x4F0258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0254u;
            // 0x4f0258: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F025Cu; }
        if (ctx->pc != 0x4F025Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F025Cu; }
        if (ctx->pc != 0x4F025Cu) { return; }
    }
    ctx->pc = 0x4F025Cu;
label_4f025c:
    // 0x4f025c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_4f0260:
    if (ctx->pc == 0x4F0260u) {
        ctx->pc = 0x4F0260u;
            // 0x4f0260: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4F0264u;
        goto label_4f0264;
    }
    ctx->pc = 0x4F025Cu;
    {
        const bool branch_taken_0x4f025c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f025c) {
            ctx->pc = 0x4F0260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F025Cu;
            // 0x4f0260: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F0284u;
            goto label_4f0284;
        }
    }
    ctx->pc = 0x4F0264u;
label_4f0264:
    // 0x4f0264: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f0264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f0268:
    // 0x4f0268: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x4f0268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_4f026c:
    // 0x4f026c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_4f0270:
    if (ctx->pc == 0x4F0270u) {
        ctx->pc = 0x4F0270u;
            // 0x4f0270: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4F0274u;
        goto label_4f0274;
    }
    ctx->pc = 0x4F026Cu;
    {
        const bool branch_taken_0x4f026c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F026Cu;
            // 0x4f0270: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f026c) {
            ctx->pc = 0x4F0280u;
            goto label_4f0280;
        }
    }
    ctx->pc = 0x4F0274u;
label_4f0274:
    // 0x4f0274: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f0274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f0278:
    // 0x4f0278: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4f0278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4f027c:
    // 0x4f027c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f027cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4f0280:
    // 0x4f0280: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4f0280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4f0284:
    // 0x4f0284: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f0284u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4f0288:
    // 0x4f0288: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4f028c:
    if (ctx->pc == 0x4F028Cu) {
        ctx->pc = 0x4F028Cu;
            // 0x4f028c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0290u;
        goto label_4f0290;
    }
    ctx->pc = 0x4F0288u;
    {
        const bool branch_taken_0x4f0288 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f0288) {
            ctx->pc = 0x4F028Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0288u;
            // 0x4f028c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F029Cu;
            goto label_4f029c;
        }
    }
    ctx->pc = 0x4F0290u;
label_4f0290:
    // 0x4f0290: 0xc0400a8  jal         func_1002A0
label_4f0294:
    if (ctx->pc == 0x4F0294u) {
        ctx->pc = 0x4F0294u;
            // 0x4f0294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0298u;
        goto label_4f0298;
    }
    ctx->pc = 0x4F0290u;
    SET_GPR_U32(ctx, 31, 0x4F0298u);
    ctx->pc = 0x4F0294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0290u;
            // 0x4f0294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0298u; }
        if (ctx->pc != 0x4F0298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0298u; }
        if (ctx->pc != 0x4F0298u) { return; }
    }
    ctx->pc = 0x4F0298u;
label_4f0298:
    // 0x4f0298: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f0298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f029c:
    // 0x4f029c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f029cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f02a0:
    // 0x4f02a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f02a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f02a4:
    // 0x4f02a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f02a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f02a8:
    // 0x4f02a8: 0x3e00008  jr          $ra
label_4f02ac:
    if (ctx->pc == 0x4F02ACu) {
        ctx->pc = 0x4F02ACu;
            // 0x4f02ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4F02B0u;
        goto label_4f02b0;
    }
    ctx->pc = 0x4F02A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F02ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F02A8u;
            // 0x4f02ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F02B0u;
label_4f02b0:
    // 0x4f02b0: 0x240342a4  addiu       $v1, $zero, 0x42A4
    ctx->pc = 0x4f02b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17060));
label_4f02b4:
    // 0x4f02b4: 0x3e00008  jr          $ra
label_4f02b8:
    if (ctx->pc == 0x4F02B8u) {
        ctx->pc = 0x4F02B8u;
            // 0x4f02b8: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x4F02BCu;
        goto label_4f02bc;
    }
    ctx->pc = 0x4F02B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F02B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F02B4u;
            // 0x4f02b8: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F02BCu;
label_4f02bc:
    // 0x4f02bc: 0x0  nop
    ctx->pc = 0x4f02bcu;
    // NOP
label_4f02c0:
    // 0x4f02c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f02c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4f02c4:
    // 0x4f02c4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4f02c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4f02c8:
    // 0x4f02c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f02c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f02cc:
    // 0x4f02cc: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x4f02ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4f02d0:
    // 0x4f02d0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4f02d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4f02d4:
    // 0x4f02d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4f02d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f02d8:
    // 0x4f02d8: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
label_4f02dc:
    if (ctx->pc == 0x4F02DCu) {
        ctx->pc = 0x4F02DCu;
            // 0x4f02dc: 0x8c840070  lw          $a0, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->pc = 0x4F02E0u;
        goto label_4f02e0;
    }
    ctx->pc = 0x4F02D8u;
    {
        const bool branch_taken_0x4f02d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f02d8) {
            ctx->pc = 0x4F02DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F02D8u;
            // 0x4f02dc: 0x8c840070  lw          $a0, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F031Cu;
            goto label_4f031c;
        }
    }
    ctx->pc = 0x4F02E0u;
label_4f02e0:
    // 0x4f02e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4f02e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4f02e4:
    // 0x4f02e4: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_4f02e8:
    if (ctx->pc == 0x4F02E8u) {
        ctx->pc = 0x4F02ECu;
        goto label_4f02ec;
    }
    ctx->pc = 0x4F02E4u;
    {
        const bool branch_taken_0x4f02e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f02e4) {
            ctx->pc = 0x4F0348u;
            goto label_4f0348;
        }
    }
    ctx->pc = 0x4F02ECu;
label_4f02ec:
    // 0x4f02ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4f02ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f02f0:
    // 0x4f02f0: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4f02f4:
    if (ctx->pc == 0x4F02F4u) {
        ctx->pc = 0x4F02F4u;
            // 0x4f02f4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4F02F8u;
        goto label_4f02f8;
    }
    ctx->pc = 0x4F02F0u;
    {
        const bool branch_taken_0x4f02f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f02f0) {
            ctx->pc = 0x4F02F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F02F0u;
            // 0x4f02f4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F0300u;
            goto label_4f0300;
        }
    }
    ctx->pc = 0x4F02F8u;
label_4f02f8:
    // 0x4f02f8: 0x10000013  b           . + 4 + (0x13 << 2)
label_4f02fc:
    if (ctx->pc == 0x4F02FCu) {
        ctx->pc = 0x4F0300u;
        goto label_4f0300;
    }
    ctx->pc = 0x4F02F8u;
    {
        const bool branch_taken_0x4f02f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f02f8) {
            ctx->pc = 0x4F0348u;
            goto label_4f0348;
        }
    }
    ctx->pc = 0x4F0300u;
label_4f0300:
    // 0x4f0300: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x4f0300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_4f0304:
    // 0x4f0304: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4f0304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4f0308:
    // 0x4f0308: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4f0308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4f030c:
    // 0x4f030c: 0x320f809  jalr        $t9
label_4f0310:
    if (ctx->pc == 0x4F0310u) {
        ctx->pc = 0x4F0310u;
            // 0x4f0310: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4F0314u;
        goto label_4f0314;
    }
    ctx->pc = 0x4F030Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F0314u);
        ctx->pc = 0x4F0310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F030Cu;
            // 0x4f0310: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F0314u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F0314u; }
            if (ctx->pc != 0x4F0314u) { return; }
        }
        }
    }
    ctx->pc = 0x4F0314u;
label_4f0314:
    // 0x4f0314: 0x1000000c  b           . + 4 + (0xC << 2)
label_4f0318:
    if (ctx->pc == 0x4F0318u) {
        ctx->pc = 0x4F031Cu;
        goto label_4f031c;
    }
    ctx->pc = 0x4F0314u;
    {
        const bool branch_taken_0x4f0314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0314) {
            ctx->pc = 0x4F0348u;
            goto label_4f0348;
        }
    }
    ctx->pc = 0x4F031Cu;
label_4f031c:
    // 0x4f031c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4f0320:
    if (ctx->pc == 0x4F0320u) {
        ctx->pc = 0x4F0324u;
        goto label_4f0324;
    }
    ctx->pc = 0x4F031Cu;
    {
        const bool branch_taken_0x4f031c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f031c) {
            ctx->pc = 0x4F0348u;
            goto label_4f0348;
        }
    }
    ctx->pc = 0x4F0324u;
label_4f0324:
    // 0x4f0324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f0324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f0328:
    // 0x4f0328: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4f0328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4f032c:
    // 0x4f032c: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x4f032cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4f0330:
    // 0x4f0330: 0x0  nop
    ctx->pc = 0x4f0330u;
    // NOP
label_4f0334:
    // 0x4f0334: 0x0  nop
    ctx->pc = 0x4f0334u;
    // NOP
label_4f0338:
    // 0x4f0338: 0x0  nop
    ctx->pc = 0x4f0338u;
    // NOP
label_4f033c:
    // 0x4f033c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4f0340:
    if (ctx->pc == 0x4F0340u) {
        ctx->pc = 0x4F0344u;
        goto label_4f0344;
    }
    ctx->pc = 0x4F033Cu;
    {
        const bool branch_taken_0x4f033c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f033c) {
            ctx->pc = 0x4F0328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f0328;
        }
    }
    ctx->pc = 0x4F0344u;
label_4f0344:
    // 0x4f0344: 0x0  nop
    ctx->pc = 0x4f0344u;
    // NOP
label_4f0348:
    // 0x4f0348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f0348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f034c:
    // 0x4f034c: 0x3e00008  jr          $ra
label_4f0350:
    if (ctx->pc == 0x4F0350u) {
        ctx->pc = 0x4F0350u;
            // 0x4f0350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4F0354u;
        goto label_4f0354;
    }
    ctx->pc = 0x4F034Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F034Cu;
            // 0x4f0350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F0354u;
label_4f0354:
    // 0x4f0354: 0x0  nop
    ctx->pc = 0x4f0354u;
    // NOP
label_4f0358:
    // 0x4f0358: 0x0  nop
    ctx->pc = 0x4f0358u;
    // NOP
label_4f035c:
    // 0x4f035c: 0x0  nop
    ctx->pc = 0x4f035cu;
    // NOP
label_4f0360:
    // 0x4f0360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f0360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f0364:
    // 0x4f0364: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4f0364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f0368:
    // 0x4f0368: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f0368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f036c:
    // 0x4f036c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f036cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f0370:
    // 0x4f0370: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4f0370u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4f0374:
    // 0x4f0374: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4f0378:
    if (ctx->pc == 0x4F0378u) {
        ctx->pc = 0x4F0378u;
            // 0x4f0378: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F037Cu;
        goto label_4f037c;
    }
    ctx->pc = 0x4F0374u;
    {
        const bool branch_taken_0x4f0374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4F0378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0374u;
            // 0x4f0378: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0374) {
            ctx->pc = 0x4F03A8u;
            goto label_4f03a8;
        }
    }
    ctx->pc = 0x4F037Cu;
label_4f037c:
    // 0x4f037c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4f037cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4f0380:
    // 0x4f0380: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4f0384:
    if (ctx->pc == 0x4F0384u) {
        ctx->pc = 0x4F0384u;
            // 0x4f0384: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4F0388u;
        goto label_4f0388;
    }
    ctx->pc = 0x4F0380u;
    {
        const bool branch_taken_0x4f0380 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f0380) {
            ctx->pc = 0x4F0384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0380u;
            // 0x4f0384: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F039Cu;
            goto label_4f039c;
        }
    }
    ctx->pc = 0x4F0388u;
label_4f0388:
    // 0x4f0388: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4f0388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f038c:
    // 0x4f038c: 0x10a3001c  beq         $a1, $v1, . + 4 + (0x1C << 2)
label_4f0390:
    if (ctx->pc == 0x4F0390u) {
        ctx->pc = 0x4F0394u;
        goto label_4f0394;
    }
    ctx->pc = 0x4F038Cu;
    {
        const bool branch_taken_0x4f038c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f038c) {
            ctx->pc = 0x4F0400u;
            goto label_4f0400;
        }
    }
    ctx->pc = 0x4F0394u;
label_4f0394:
    // 0x4f0394: 0x1000001a  b           . + 4 + (0x1A << 2)
label_4f0398:
    if (ctx->pc == 0x4F0398u) {
        ctx->pc = 0x4F039Cu;
        goto label_4f039c;
    }
    ctx->pc = 0x4F0394u;
    {
        const bool branch_taken_0x4f0394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0394) {
            ctx->pc = 0x4F0400u;
            goto label_4f0400;
        }
    }
    ctx->pc = 0x4F039Cu;
label_4f039c:
    // 0x4f039c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4f039cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4f03a0:
    // 0x4f03a0: 0x320f809  jalr        $t9
label_4f03a4:
    if (ctx->pc == 0x4F03A4u) {
        ctx->pc = 0x4F03A8u;
        goto label_4f03a8;
    }
    ctx->pc = 0x4F03A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F03A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F03A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F03A8u; }
            if (ctx->pc != 0x4F03A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4F03A8u;
label_4f03a8:
    // 0x4f03a8: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x4f03a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4f03ac:
    // 0x4f03ac: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
label_4f03b0:
    if (ctx->pc == 0x4F03B0u) {
        ctx->pc = 0x4F03B4u;
        goto label_4f03b4;
    }
    ctx->pc = 0x4F03ACu;
    {
        const bool branch_taken_0x4f03ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f03ac) {
            ctx->pc = 0x4F0400u;
            goto label_4f0400;
        }
    }
    ctx->pc = 0x4F03B4u;
label_4f03b4:
    // 0x4f03b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4f03b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f03b8:
    // 0x4f03b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4f03b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f03bc:
    // 0x4f03bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4f03bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f03c0:
    // 0x4f03c0: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x4f03c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4f03c4:
    // 0x4f03c4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4f03c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_4f03c8:
    // 0x4f03c8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4f03c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f03cc:
    // 0x4f03cc: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x4f03ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_4f03d0:
    // 0x4f03d0: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
label_4f03d4:
    if (ctx->pc == 0x4F03D4u) {
        ctx->pc = 0x4F03D8u;
        goto label_4f03d8;
    }
    ctx->pc = 0x4F03D0u;
    {
        const bool branch_taken_0x4f03d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4f03d0) {
            ctx->pc = 0x4F03F0u;
            goto label_4f03f0;
        }
    }
    ctx->pc = 0x4F03D8u;
label_4f03d8:
    // 0x4f03d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_4f03dc:
    if (ctx->pc == 0x4F03DCu) {
        ctx->pc = 0x4F03E0u;
        goto label_4f03e0;
    }
    ctx->pc = 0x4F03D8u;
    {
        const bool branch_taken_0x4f03d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f03d8) {
            ctx->pc = 0x4F03E8u;
            goto label_4f03e8;
        }
    }
    ctx->pc = 0x4F03E0u;
label_4f03e0:
    // 0x4f03e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_4f03e4:
    if (ctx->pc == 0x4F03E4u) {
        ctx->pc = 0x4F03E8u;
        goto label_4f03e8;
    }
    ctx->pc = 0x4F03E0u;
    {
        const bool branch_taken_0x4f03e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f03e0) {
            ctx->pc = 0x4F03F0u;
            goto label_4f03f0;
        }
    }
    ctx->pc = 0x4F03E8u;
label_4f03e8:
    // 0x4f03e8: 0xaca40050  sw          $a0, 0x50($a1)
    ctx->pc = 0x4f03e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 4));
label_4f03ec:
    // 0x4f03ec: 0x0  nop
    ctx->pc = 0x4f03ecu;
    // NOP
label_4f03f0:
    // 0x4f03f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4f03f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_4f03f4:
    // 0x4f03f4: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x4f03f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_4f03f8:
    // 0x4f03f8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_4f03fc:
    if (ctx->pc == 0x4F03FCu) {
        ctx->pc = 0x4F03FCu;
            // 0x4f03fc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x4F0400u;
        goto label_4f0400;
    }
    ctx->pc = 0x4F03F8u;
    {
        const bool branch_taken_0x4f03f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F03FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F03F8u;
            // 0x4f03fc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f03f8) {
            ctx->pc = 0x4F03C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f03c0;
        }
    }
    ctx->pc = 0x4F0400u;
label_4f0400:
    // 0x4f0400: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f0400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f0404:
    // 0x4f0404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f0404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f0408:
    // 0x4f0408: 0x3e00008  jr          $ra
label_4f040c:
    if (ctx->pc == 0x4F040Cu) {
        ctx->pc = 0x4F040Cu;
            // 0x4f040c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4F0410u;
        goto label_4f0410;
    }
    ctx->pc = 0x4F0408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F040Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0408u;
            // 0x4f040c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F0410u;
label_4f0410:
    // 0x4f0410: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f0410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4f0414:
    // 0x4f0414: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4f0414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4f0418:
    // 0x4f0418: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f0418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4f041c:
    // 0x4f041c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f041cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f0420:
    // 0x4f0420: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f0420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f0424:
    // 0x4f0424: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f0424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f0428:
    // 0x4f0428: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4f0428u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4f042c:
    // 0x4f042c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4f0430:
    if (ctx->pc == 0x4F0430u) {
        ctx->pc = 0x4F0430u;
            // 0x4f0430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0434u;
        goto label_4f0434;
    }
    ctx->pc = 0x4F042Cu;
    {
        const bool branch_taken_0x4f042c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F042Cu;
            // 0x4f0430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f042c) {
            ctx->pc = 0x4F0468u;
            goto label_4f0468;
        }
    }
    ctx->pc = 0x4F0434u;
label_4f0434:
    // 0x4f0434: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4f0434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f0438:
    // 0x4f0438: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4f0438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f043c:
    // 0x4f043c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4f043cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4f0440:
    // 0x4f0440: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4f0440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4f0444:
    // 0x4f0444: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4f0444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f0448:
    // 0x4f0448: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f0448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f044c:
    // 0x4f044c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x4f044cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_4f0450:
    // 0x4f0450: 0x320f809  jalr        $t9
label_4f0454:
    if (ctx->pc == 0x4F0454u) {
        ctx->pc = 0x4F0458u;
        goto label_4f0458;
    }
    ctx->pc = 0x4F0450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F0458u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F0458u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F0458u; }
            if (ctx->pc != 0x4F0458u) { return; }
        }
        }
    }
    ctx->pc = 0x4F0458u;
label_4f0458:
    // 0x4f0458: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4f0458u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4f045c:
    // 0x4f045c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4f045cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4f0460:
    // 0x4f0460: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4f0464:
    if (ctx->pc == 0x4F0464u) {
        ctx->pc = 0x4F0464u;
            // 0x4f0464: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4F0468u;
        goto label_4f0468;
    }
    ctx->pc = 0x4F0460u;
    {
        const bool branch_taken_0x4f0460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F0464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0460u;
            // 0x4f0464: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0460) {
            ctx->pc = 0x4F043Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f043c;
        }
    }
    ctx->pc = 0x4F0468u;
label_4f0468:
    // 0x4f0468: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f0468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4f046c:
    // 0x4f046c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f046cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f0470:
    // 0x4f0470: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f0470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f0474:
    // 0x4f0474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f0474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f0478:
    // 0x4f0478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f0478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f047c:
    // 0x4f047c: 0x3e00008  jr          $ra
label_4f0480:
    if (ctx->pc == 0x4F0480u) {
        ctx->pc = 0x4F0480u;
            // 0x4f0480: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4F0484u;
        goto label_4f0484;
    }
    ctx->pc = 0x4F047Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F047Cu;
            // 0x4f0480: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F0484u;
label_4f0484:
    // 0x4f0484: 0x0  nop
    ctx->pc = 0x4f0484u;
    // NOP
label_4f0488:
    // 0x4f0488: 0x0  nop
    ctx->pc = 0x4f0488u;
    // NOP
label_4f048c:
    // 0x4f048c: 0x0  nop
    ctx->pc = 0x4f048cu;
    // NOP
}
