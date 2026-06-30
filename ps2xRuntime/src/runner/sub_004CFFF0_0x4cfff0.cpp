#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CFFF0
// Address: 0x4cfff0 - 0x4d0460
void sub_004CFFF0_0x4cfff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CFFF0_0x4cfff0");
#endif

    switch (ctx->pc) {
        case 0x4cfff0u: goto label_4cfff0;
        case 0x4cfff4u: goto label_4cfff4;
        case 0x4cfff8u: goto label_4cfff8;
        case 0x4cfffcu: goto label_4cfffc;
        case 0x4d0000u: goto label_4d0000;
        case 0x4d0004u: goto label_4d0004;
        case 0x4d0008u: goto label_4d0008;
        case 0x4d000cu: goto label_4d000c;
        case 0x4d0010u: goto label_4d0010;
        case 0x4d0014u: goto label_4d0014;
        case 0x4d0018u: goto label_4d0018;
        case 0x4d001cu: goto label_4d001c;
        case 0x4d0020u: goto label_4d0020;
        case 0x4d0024u: goto label_4d0024;
        case 0x4d0028u: goto label_4d0028;
        case 0x4d002cu: goto label_4d002c;
        case 0x4d0030u: goto label_4d0030;
        case 0x4d0034u: goto label_4d0034;
        case 0x4d0038u: goto label_4d0038;
        case 0x4d003cu: goto label_4d003c;
        case 0x4d0040u: goto label_4d0040;
        case 0x4d0044u: goto label_4d0044;
        case 0x4d0048u: goto label_4d0048;
        case 0x4d004cu: goto label_4d004c;
        case 0x4d0050u: goto label_4d0050;
        case 0x4d0054u: goto label_4d0054;
        case 0x4d0058u: goto label_4d0058;
        case 0x4d005cu: goto label_4d005c;
        case 0x4d0060u: goto label_4d0060;
        case 0x4d0064u: goto label_4d0064;
        case 0x4d0068u: goto label_4d0068;
        case 0x4d006cu: goto label_4d006c;
        case 0x4d0070u: goto label_4d0070;
        case 0x4d0074u: goto label_4d0074;
        case 0x4d0078u: goto label_4d0078;
        case 0x4d007cu: goto label_4d007c;
        case 0x4d0080u: goto label_4d0080;
        case 0x4d0084u: goto label_4d0084;
        case 0x4d0088u: goto label_4d0088;
        case 0x4d008cu: goto label_4d008c;
        case 0x4d0090u: goto label_4d0090;
        case 0x4d0094u: goto label_4d0094;
        case 0x4d0098u: goto label_4d0098;
        case 0x4d009cu: goto label_4d009c;
        case 0x4d00a0u: goto label_4d00a0;
        case 0x4d00a4u: goto label_4d00a4;
        case 0x4d00a8u: goto label_4d00a8;
        case 0x4d00acu: goto label_4d00ac;
        case 0x4d00b0u: goto label_4d00b0;
        case 0x4d00b4u: goto label_4d00b4;
        case 0x4d00b8u: goto label_4d00b8;
        case 0x4d00bcu: goto label_4d00bc;
        case 0x4d00c0u: goto label_4d00c0;
        case 0x4d00c4u: goto label_4d00c4;
        case 0x4d00c8u: goto label_4d00c8;
        case 0x4d00ccu: goto label_4d00cc;
        case 0x4d00d0u: goto label_4d00d0;
        case 0x4d00d4u: goto label_4d00d4;
        case 0x4d00d8u: goto label_4d00d8;
        case 0x4d00dcu: goto label_4d00dc;
        case 0x4d00e0u: goto label_4d00e0;
        case 0x4d00e4u: goto label_4d00e4;
        case 0x4d00e8u: goto label_4d00e8;
        case 0x4d00ecu: goto label_4d00ec;
        case 0x4d00f0u: goto label_4d00f0;
        case 0x4d00f4u: goto label_4d00f4;
        case 0x4d00f8u: goto label_4d00f8;
        case 0x4d00fcu: goto label_4d00fc;
        case 0x4d0100u: goto label_4d0100;
        case 0x4d0104u: goto label_4d0104;
        case 0x4d0108u: goto label_4d0108;
        case 0x4d010cu: goto label_4d010c;
        case 0x4d0110u: goto label_4d0110;
        case 0x4d0114u: goto label_4d0114;
        case 0x4d0118u: goto label_4d0118;
        case 0x4d011cu: goto label_4d011c;
        case 0x4d0120u: goto label_4d0120;
        case 0x4d0124u: goto label_4d0124;
        case 0x4d0128u: goto label_4d0128;
        case 0x4d012cu: goto label_4d012c;
        case 0x4d0130u: goto label_4d0130;
        case 0x4d0134u: goto label_4d0134;
        case 0x4d0138u: goto label_4d0138;
        case 0x4d013cu: goto label_4d013c;
        case 0x4d0140u: goto label_4d0140;
        case 0x4d0144u: goto label_4d0144;
        case 0x4d0148u: goto label_4d0148;
        case 0x4d014cu: goto label_4d014c;
        case 0x4d0150u: goto label_4d0150;
        case 0x4d0154u: goto label_4d0154;
        case 0x4d0158u: goto label_4d0158;
        case 0x4d015cu: goto label_4d015c;
        case 0x4d0160u: goto label_4d0160;
        case 0x4d0164u: goto label_4d0164;
        case 0x4d0168u: goto label_4d0168;
        case 0x4d016cu: goto label_4d016c;
        case 0x4d0170u: goto label_4d0170;
        case 0x4d0174u: goto label_4d0174;
        case 0x4d0178u: goto label_4d0178;
        case 0x4d017cu: goto label_4d017c;
        case 0x4d0180u: goto label_4d0180;
        case 0x4d0184u: goto label_4d0184;
        case 0x4d0188u: goto label_4d0188;
        case 0x4d018cu: goto label_4d018c;
        case 0x4d0190u: goto label_4d0190;
        case 0x4d0194u: goto label_4d0194;
        case 0x4d0198u: goto label_4d0198;
        case 0x4d019cu: goto label_4d019c;
        case 0x4d01a0u: goto label_4d01a0;
        case 0x4d01a4u: goto label_4d01a4;
        case 0x4d01a8u: goto label_4d01a8;
        case 0x4d01acu: goto label_4d01ac;
        case 0x4d01b0u: goto label_4d01b0;
        case 0x4d01b4u: goto label_4d01b4;
        case 0x4d01b8u: goto label_4d01b8;
        case 0x4d01bcu: goto label_4d01bc;
        case 0x4d01c0u: goto label_4d01c0;
        case 0x4d01c4u: goto label_4d01c4;
        case 0x4d01c8u: goto label_4d01c8;
        case 0x4d01ccu: goto label_4d01cc;
        case 0x4d01d0u: goto label_4d01d0;
        case 0x4d01d4u: goto label_4d01d4;
        case 0x4d01d8u: goto label_4d01d8;
        case 0x4d01dcu: goto label_4d01dc;
        case 0x4d01e0u: goto label_4d01e0;
        case 0x4d01e4u: goto label_4d01e4;
        case 0x4d01e8u: goto label_4d01e8;
        case 0x4d01ecu: goto label_4d01ec;
        case 0x4d01f0u: goto label_4d01f0;
        case 0x4d01f4u: goto label_4d01f4;
        case 0x4d01f8u: goto label_4d01f8;
        case 0x4d01fcu: goto label_4d01fc;
        case 0x4d0200u: goto label_4d0200;
        case 0x4d0204u: goto label_4d0204;
        case 0x4d0208u: goto label_4d0208;
        case 0x4d020cu: goto label_4d020c;
        case 0x4d0210u: goto label_4d0210;
        case 0x4d0214u: goto label_4d0214;
        case 0x4d0218u: goto label_4d0218;
        case 0x4d021cu: goto label_4d021c;
        case 0x4d0220u: goto label_4d0220;
        case 0x4d0224u: goto label_4d0224;
        case 0x4d0228u: goto label_4d0228;
        case 0x4d022cu: goto label_4d022c;
        case 0x4d0230u: goto label_4d0230;
        case 0x4d0234u: goto label_4d0234;
        case 0x4d0238u: goto label_4d0238;
        case 0x4d023cu: goto label_4d023c;
        case 0x4d0240u: goto label_4d0240;
        case 0x4d0244u: goto label_4d0244;
        case 0x4d0248u: goto label_4d0248;
        case 0x4d024cu: goto label_4d024c;
        case 0x4d0250u: goto label_4d0250;
        case 0x4d0254u: goto label_4d0254;
        case 0x4d0258u: goto label_4d0258;
        case 0x4d025cu: goto label_4d025c;
        case 0x4d0260u: goto label_4d0260;
        case 0x4d0264u: goto label_4d0264;
        case 0x4d0268u: goto label_4d0268;
        case 0x4d026cu: goto label_4d026c;
        case 0x4d0270u: goto label_4d0270;
        case 0x4d0274u: goto label_4d0274;
        case 0x4d0278u: goto label_4d0278;
        case 0x4d027cu: goto label_4d027c;
        case 0x4d0280u: goto label_4d0280;
        case 0x4d0284u: goto label_4d0284;
        case 0x4d0288u: goto label_4d0288;
        case 0x4d028cu: goto label_4d028c;
        case 0x4d0290u: goto label_4d0290;
        case 0x4d0294u: goto label_4d0294;
        case 0x4d0298u: goto label_4d0298;
        case 0x4d029cu: goto label_4d029c;
        case 0x4d02a0u: goto label_4d02a0;
        case 0x4d02a4u: goto label_4d02a4;
        case 0x4d02a8u: goto label_4d02a8;
        case 0x4d02acu: goto label_4d02ac;
        case 0x4d02b0u: goto label_4d02b0;
        case 0x4d02b4u: goto label_4d02b4;
        case 0x4d02b8u: goto label_4d02b8;
        case 0x4d02bcu: goto label_4d02bc;
        case 0x4d02c0u: goto label_4d02c0;
        case 0x4d02c4u: goto label_4d02c4;
        case 0x4d02c8u: goto label_4d02c8;
        case 0x4d02ccu: goto label_4d02cc;
        case 0x4d02d0u: goto label_4d02d0;
        case 0x4d02d4u: goto label_4d02d4;
        case 0x4d02d8u: goto label_4d02d8;
        case 0x4d02dcu: goto label_4d02dc;
        case 0x4d02e0u: goto label_4d02e0;
        case 0x4d02e4u: goto label_4d02e4;
        case 0x4d02e8u: goto label_4d02e8;
        case 0x4d02ecu: goto label_4d02ec;
        case 0x4d02f0u: goto label_4d02f0;
        case 0x4d02f4u: goto label_4d02f4;
        case 0x4d02f8u: goto label_4d02f8;
        case 0x4d02fcu: goto label_4d02fc;
        case 0x4d0300u: goto label_4d0300;
        case 0x4d0304u: goto label_4d0304;
        case 0x4d0308u: goto label_4d0308;
        case 0x4d030cu: goto label_4d030c;
        case 0x4d0310u: goto label_4d0310;
        case 0x4d0314u: goto label_4d0314;
        case 0x4d0318u: goto label_4d0318;
        case 0x4d031cu: goto label_4d031c;
        case 0x4d0320u: goto label_4d0320;
        case 0x4d0324u: goto label_4d0324;
        case 0x4d0328u: goto label_4d0328;
        case 0x4d032cu: goto label_4d032c;
        case 0x4d0330u: goto label_4d0330;
        case 0x4d0334u: goto label_4d0334;
        case 0x4d0338u: goto label_4d0338;
        case 0x4d033cu: goto label_4d033c;
        case 0x4d0340u: goto label_4d0340;
        case 0x4d0344u: goto label_4d0344;
        case 0x4d0348u: goto label_4d0348;
        case 0x4d034cu: goto label_4d034c;
        case 0x4d0350u: goto label_4d0350;
        case 0x4d0354u: goto label_4d0354;
        case 0x4d0358u: goto label_4d0358;
        case 0x4d035cu: goto label_4d035c;
        case 0x4d0360u: goto label_4d0360;
        case 0x4d0364u: goto label_4d0364;
        case 0x4d0368u: goto label_4d0368;
        case 0x4d036cu: goto label_4d036c;
        case 0x4d0370u: goto label_4d0370;
        case 0x4d0374u: goto label_4d0374;
        case 0x4d0378u: goto label_4d0378;
        case 0x4d037cu: goto label_4d037c;
        case 0x4d0380u: goto label_4d0380;
        case 0x4d0384u: goto label_4d0384;
        case 0x4d0388u: goto label_4d0388;
        case 0x4d038cu: goto label_4d038c;
        case 0x4d0390u: goto label_4d0390;
        case 0x4d0394u: goto label_4d0394;
        case 0x4d0398u: goto label_4d0398;
        case 0x4d039cu: goto label_4d039c;
        case 0x4d03a0u: goto label_4d03a0;
        case 0x4d03a4u: goto label_4d03a4;
        case 0x4d03a8u: goto label_4d03a8;
        case 0x4d03acu: goto label_4d03ac;
        case 0x4d03b0u: goto label_4d03b0;
        case 0x4d03b4u: goto label_4d03b4;
        case 0x4d03b8u: goto label_4d03b8;
        case 0x4d03bcu: goto label_4d03bc;
        case 0x4d03c0u: goto label_4d03c0;
        case 0x4d03c4u: goto label_4d03c4;
        case 0x4d03c8u: goto label_4d03c8;
        case 0x4d03ccu: goto label_4d03cc;
        case 0x4d03d0u: goto label_4d03d0;
        case 0x4d03d4u: goto label_4d03d4;
        case 0x4d03d8u: goto label_4d03d8;
        case 0x4d03dcu: goto label_4d03dc;
        case 0x4d03e0u: goto label_4d03e0;
        case 0x4d03e4u: goto label_4d03e4;
        case 0x4d03e8u: goto label_4d03e8;
        case 0x4d03ecu: goto label_4d03ec;
        case 0x4d03f0u: goto label_4d03f0;
        case 0x4d03f4u: goto label_4d03f4;
        case 0x4d03f8u: goto label_4d03f8;
        case 0x4d03fcu: goto label_4d03fc;
        case 0x4d0400u: goto label_4d0400;
        case 0x4d0404u: goto label_4d0404;
        case 0x4d0408u: goto label_4d0408;
        case 0x4d040cu: goto label_4d040c;
        case 0x4d0410u: goto label_4d0410;
        case 0x4d0414u: goto label_4d0414;
        case 0x4d0418u: goto label_4d0418;
        case 0x4d041cu: goto label_4d041c;
        case 0x4d0420u: goto label_4d0420;
        case 0x4d0424u: goto label_4d0424;
        case 0x4d0428u: goto label_4d0428;
        case 0x4d042cu: goto label_4d042c;
        case 0x4d0430u: goto label_4d0430;
        case 0x4d0434u: goto label_4d0434;
        case 0x4d0438u: goto label_4d0438;
        case 0x4d043cu: goto label_4d043c;
        case 0x4d0440u: goto label_4d0440;
        case 0x4d0444u: goto label_4d0444;
        case 0x4d0448u: goto label_4d0448;
        case 0x4d044cu: goto label_4d044c;
        case 0x4d0450u: goto label_4d0450;
        case 0x4d0454u: goto label_4d0454;
        case 0x4d0458u: goto label_4d0458;
        case 0x4d045cu: goto label_4d045c;
        default: break;
    }

    ctx->pc = 0x4cfff0u;

label_4cfff0:
    // 0x4cfff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cfff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4cfff4:
    // 0x4cfff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cfff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4cfff8:
    // 0x4cfff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cfff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cfffc:
    // 0x4cfffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cfffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d0000:
    // 0x4d0000: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d0000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d0004:
    // 0x4d0004: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4d0008:
    if (ctx->pc == 0x4D0008u) {
        ctx->pc = 0x4D0008u;
            // 0x4d0008: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D000Cu;
        goto label_4d000c;
    }
    ctx->pc = 0x4D0004u;
    {
        const bool branch_taken_0x4d0004 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0004u;
            // 0x4d0008: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0004) {
            ctx->pc = 0x4D0138u;
            goto label_4d0138;
        }
    }
    ctx->pc = 0x4D000Cu;
label_4d000c:
    // 0x4d000c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d000cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d0010:
    // 0x4d0010: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d0010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d0014:
    // 0x4d0014: 0x24631f80  addiu       $v1, $v1, 0x1F80
    ctx->pc = 0x4d0014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8064));
label_4d0018:
    // 0x4d0018: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d0018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4d001c:
    // 0x4d001c: 0x24421fb8  addiu       $v0, $v0, 0x1FB8
    ctx->pc = 0x4d001cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8120));
label_4d0020:
    // 0x4d0020: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d0020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4d0024:
    // 0x4d0024: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4d0024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4d0028:
    // 0x4d0028: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4d0028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4d002c:
    // 0x4d002c: 0xc0407c0  jal         func_101F00
label_4d0030:
    if (ctx->pc == 0x4D0030u) {
        ctx->pc = 0x4D0030u;
            // 0x4d0030: 0x24a50150  addiu       $a1, $a1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 336));
        ctx->pc = 0x4D0034u;
        goto label_4d0034;
    }
    ctx->pc = 0x4D002Cu;
    SET_GPR_U32(ctx, 31, 0x4D0034u);
    ctx->pc = 0x4D0030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D002Cu;
            // 0x4d0030: 0x24a50150  addiu       $a1, $a1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0034u; }
        if (ctx->pc != 0x4D0034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0034u; }
        if (ctx->pc != 0x4D0034u) { return; }
    }
    ctx->pc = 0x4D0034u;
label_4d0034:
    // 0x4d0034: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4d0034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4d0038:
    // 0x4d0038: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4d003c:
    if (ctx->pc == 0x4D003Cu) {
        ctx->pc = 0x4D003Cu;
            // 0x4d003c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4D0040u;
        goto label_4d0040;
    }
    ctx->pc = 0x4D0038u;
    {
        const bool branch_taken_0x4d0038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0038) {
            ctx->pc = 0x4D003Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0038u;
            // 0x4d003c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D004Cu;
            goto label_4d004c;
        }
    }
    ctx->pc = 0x4D0040u;
label_4d0040:
    // 0x4d0040: 0xc07507c  jal         func_1D41F0
label_4d0044:
    if (ctx->pc == 0x4D0044u) {
        ctx->pc = 0x4D0044u;
            // 0x4d0044: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4D0048u;
        goto label_4d0048;
    }
    ctx->pc = 0x4D0040u;
    SET_GPR_U32(ctx, 31, 0x4D0048u);
    ctx->pc = 0x4D0044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0040u;
            // 0x4d0044: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0048u; }
        if (ctx->pc != 0x4D0048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0048u; }
        if (ctx->pc != 0x4D0048u) { return; }
    }
    ctx->pc = 0x4D0048u;
label_4d0048:
    // 0x4d0048: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4d0048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4d004c:
    // 0x4d004c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4d0050:
    if (ctx->pc == 0x4D0050u) {
        ctx->pc = 0x4D0050u;
            // 0x4d0050: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4D0054u;
        goto label_4d0054;
    }
    ctx->pc = 0x4D004Cu;
    {
        const bool branch_taken_0x4d004c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d004c) {
            ctx->pc = 0x4D0050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D004Cu;
            // 0x4d0050: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D007Cu;
            goto label_4d007c;
        }
    }
    ctx->pc = 0x4D0054u;
label_4d0054:
    // 0x4d0054: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4d0058:
    if (ctx->pc == 0x4D0058u) {
        ctx->pc = 0x4D005Cu;
        goto label_4d005c;
    }
    ctx->pc = 0x4D0054u;
    {
        const bool branch_taken_0x4d0054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0054) {
            ctx->pc = 0x4D0078u;
            goto label_4d0078;
        }
    }
    ctx->pc = 0x4D005Cu;
label_4d005c:
    // 0x4d005c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d0060:
    if (ctx->pc == 0x4D0060u) {
        ctx->pc = 0x4D0064u;
        goto label_4d0064;
    }
    ctx->pc = 0x4D005Cu;
    {
        const bool branch_taken_0x4d005c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d005c) {
            ctx->pc = 0x4D0078u;
            goto label_4d0078;
        }
    }
    ctx->pc = 0x4D0064u;
label_4d0064:
    // 0x4d0064: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4d0064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4d0068:
    // 0x4d0068: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4d006c:
    if (ctx->pc == 0x4D006Cu) {
        ctx->pc = 0x4D0070u;
        goto label_4d0070;
    }
    ctx->pc = 0x4D0068u;
    {
        const bool branch_taken_0x4d0068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0068) {
            ctx->pc = 0x4D0078u;
            goto label_4d0078;
        }
    }
    ctx->pc = 0x4D0070u;
label_4d0070:
    // 0x4d0070: 0xc0400a8  jal         func_1002A0
label_4d0074:
    if (ctx->pc == 0x4D0074u) {
        ctx->pc = 0x4D0078u;
        goto label_4d0078;
    }
    ctx->pc = 0x4D0070u;
    SET_GPR_U32(ctx, 31, 0x4D0078u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0078u; }
        if (ctx->pc != 0x4D0078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0078u; }
        if (ctx->pc != 0x4D0078u) { return; }
    }
    ctx->pc = 0x4D0078u;
label_4d0078:
    // 0x4d0078: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4d0078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4d007c:
    // 0x4d007c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4d0080:
    if (ctx->pc == 0x4D0080u) {
        ctx->pc = 0x4D0080u;
            // 0x4d0080: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4D0084u;
        goto label_4d0084;
    }
    ctx->pc = 0x4D007Cu;
    {
        const bool branch_taken_0x4d007c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d007c) {
            ctx->pc = 0x4D0080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D007Cu;
            // 0x4d0080: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D00ACu;
            goto label_4d00ac;
        }
    }
    ctx->pc = 0x4D0084u;
label_4d0084:
    // 0x4d0084: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4d0088:
    if (ctx->pc == 0x4D0088u) {
        ctx->pc = 0x4D008Cu;
        goto label_4d008c;
    }
    ctx->pc = 0x4D0084u;
    {
        const bool branch_taken_0x4d0084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0084) {
            ctx->pc = 0x4D00A8u;
            goto label_4d00a8;
        }
    }
    ctx->pc = 0x4D008Cu;
label_4d008c:
    // 0x4d008c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d0090:
    if (ctx->pc == 0x4D0090u) {
        ctx->pc = 0x4D0094u;
        goto label_4d0094;
    }
    ctx->pc = 0x4D008Cu;
    {
        const bool branch_taken_0x4d008c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d008c) {
            ctx->pc = 0x4D00A8u;
            goto label_4d00a8;
        }
    }
    ctx->pc = 0x4D0094u;
label_4d0094:
    // 0x4d0094: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4d0094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4d0098:
    // 0x4d0098: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4d009c:
    if (ctx->pc == 0x4D009Cu) {
        ctx->pc = 0x4D00A0u;
        goto label_4d00a0;
    }
    ctx->pc = 0x4D0098u;
    {
        const bool branch_taken_0x4d0098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0098) {
            ctx->pc = 0x4D00A8u;
            goto label_4d00a8;
        }
    }
    ctx->pc = 0x4D00A0u;
label_4d00a0:
    // 0x4d00a0: 0xc0400a8  jal         func_1002A0
label_4d00a4:
    if (ctx->pc == 0x4D00A4u) {
        ctx->pc = 0x4D00A8u;
        goto label_4d00a8;
    }
    ctx->pc = 0x4D00A0u;
    SET_GPR_U32(ctx, 31, 0x4D00A8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D00A8u; }
        if (ctx->pc != 0x4D00A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D00A8u; }
        if (ctx->pc != 0x4D00A8u) { return; }
    }
    ctx->pc = 0x4D00A8u;
label_4d00a8:
    // 0x4d00a8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4d00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4d00ac:
    // 0x4d00ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d00b0:
    if (ctx->pc == 0x4D00B0u) {
        ctx->pc = 0x4D00B4u;
        goto label_4d00b4;
    }
    ctx->pc = 0x4D00ACu;
    {
        const bool branch_taken_0x4d00ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d00ac) {
            ctx->pc = 0x4D00C8u;
            goto label_4d00c8;
        }
    }
    ctx->pc = 0x4D00B4u;
label_4d00b4:
    // 0x4d00b4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d00b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d00b8:
    // 0x4d00b8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d00b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4d00bc:
    // 0x4d00bc: 0x24631f68  addiu       $v1, $v1, 0x1F68
    ctx->pc = 0x4d00bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8040));
label_4d00c0:
    // 0x4d00c0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4d00c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4d00c4:
    // 0x4d00c4: 0xac40aa28  sw          $zero, -0x55D8($v0)
    ctx->pc = 0x4d00c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945320), GPR_U32(ctx, 0));
label_4d00c8:
    // 0x4d00c8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4d00cc:
    if (ctx->pc == 0x4D00CCu) {
        ctx->pc = 0x4D00CCu;
            // 0x4d00cc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4D00D0u;
        goto label_4d00d0;
    }
    ctx->pc = 0x4D00C8u;
    {
        const bool branch_taken_0x4d00c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d00c8) {
            ctx->pc = 0x4D00CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D00C8u;
            // 0x4d00cc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D0124u;
            goto label_4d0124;
        }
    }
    ctx->pc = 0x4D00D0u;
label_4d00d0:
    // 0x4d00d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4d00d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4d00d4:
    // 0x4d00d4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4d00d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4d00d8:
    // 0x4d00d8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d00d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4d00dc:
    // 0x4d00dc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4d00dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4d00e0:
    // 0x4d00e0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d00e4:
    if (ctx->pc == 0x4D00E4u) {
        ctx->pc = 0x4D00E4u;
            // 0x4d00e4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4D00E8u;
        goto label_4d00e8;
    }
    ctx->pc = 0x4D00E0u;
    {
        const bool branch_taken_0x4d00e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d00e0) {
            ctx->pc = 0x4D00E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D00E0u;
            // 0x4d00e4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D00FCu;
            goto label_4d00fc;
        }
    }
    ctx->pc = 0x4D00E8u;
label_4d00e8:
    // 0x4d00e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d00e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d00ec:
    // 0x4d00ec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d00ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d00f0:
    // 0x4d00f0: 0x320f809  jalr        $t9
label_4d00f4:
    if (ctx->pc == 0x4D00F4u) {
        ctx->pc = 0x4D00F4u;
            // 0x4d00f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D00F8u;
        goto label_4d00f8;
    }
    ctx->pc = 0x4D00F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D00F8u);
        ctx->pc = 0x4D00F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D00F0u;
            // 0x4d00f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D00F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D00F8u; }
            if (ctx->pc != 0x4D00F8u) { return; }
        }
        }
    }
    ctx->pc = 0x4D00F8u;
label_4d00f8:
    // 0x4d00f8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4d00f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4d00fc:
    // 0x4d00fc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d0100:
    if (ctx->pc == 0x4D0100u) {
        ctx->pc = 0x4D0100u;
            // 0x4d0100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0104u;
        goto label_4d0104;
    }
    ctx->pc = 0x4D00FCu;
    {
        const bool branch_taken_0x4d00fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d00fc) {
            ctx->pc = 0x4D0100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D00FCu;
            // 0x4d0100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D0118u;
            goto label_4d0118;
        }
    }
    ctx->pc = 0x4D0104u;
label_4d0104:
    // 0x4d0104: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d0104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d0108:
    // 0x4d0108: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d0108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d010c:
    // 0x4d010c: 0x320f809  jalr        $t9
label_4d0110:
    if (ctx->pc == 0x4D0110u) {
        ctx->pc = 0x4D0110u;
            // 0x4d0110: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D0114u;
        goto label_4d0114;
    }
    ctx->pc = 0x4D010Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D0114u);
        ctx->pc = 0x4D0110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D010Cu;
            // 0x4d0110: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D0114u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D0114u; }
            if (ctx->pc != 0x4D0114u) { return; }
        }
        }
    }
    ctx->pc = 0x4D0114u;
label_4d0114:
    // 0x4d0114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d0114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d0118:
    // 0x4d0118: 0xc075bf8  jal         func_1D6FE0
label_4d011c:
    if (ctx->pc == 0x4D011Cu) {
        ctx->pc = 0x4D011Cu;
            // 0x4d011c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0120u;
        goto label_4d0120;
    }
    ctx->pc = 0x4D0118u;
    SET_GPR_U32(ctx, 31, 0x4D0120u);
    ctx->pc = 0x4D011Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0118u;
            // 0x4d011c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0120u; }
        if (ctx->pc != 0x4D0120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0120u; }
        if (ctx->pc != 0x4D0120u) { return; }
    }
    ctx->pc = 0x4D0120u;
label_4d0120:
    // 0x4d0120: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4d0120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4d0124:
    // 0x4d0124: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d0124u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4d0128:
    // 0x4d0128: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4d012c:
    if (ctx->pc == 0x4D012Cu) {
        ctx->pc = 0x4D012Cu;
            // 0x4d012c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0130u;
        goto label_4d0130;
    }
    ctx->pc = 0x4D0128u;
    {
        const bool branch_taken_0x4d0128 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d0128) {
            ctx->pc = 0x4D012Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0128u;
            // 0x4d012c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D013Cu;
            goto label_4d013c;
        }
    }
    ctx->pc = 0x4D0130u;
label_4d0130:
    // 0x4d0130: 0xc0400a8  jal         func_1002A0
label_4d0134:
    if (ctx->pc == 0x4D0134u) {
        ctx->pc = 0x4D0134u;
            // 0x4d0134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0138u;
        goto label_4d0138;
    }
    ctx->pc = 0x4D0130u;
    SET_GPR_U32(ctx, 31, 0x4D0138u);
    ctx->pc = 0x4D0134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0130u;
            // 0x4d0134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0138u; }
        if (ctx->pc != 0x4D0138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0138u; }
        if (ctx->pc != 0x4D0138u) { return; }
    }
    ctx->pc = 0x4D0138u;
label_4d0138:
    // 0x4d0138: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4d0138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d013c:
    // 0x4d013c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d013cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d0140:
    // 0x4d0140: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d0140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d0144:
    // 0x4d0144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d0144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d0148:
    // 0x4d0148: 0x3e00008  jr          $ra
label_4d014c:
    if (ctx->pc == 0x4D014Cu) {
        ctx->pc = 0x4D014Cu;
            // 0x4d014c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D0150u;
        goto label_4d0150;
    }
    ctx->pc = 0x4D0148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D014Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0148u;
            // 0x4d014c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D0150u;
label_4d0150:
    // 0x4d0150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d0150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d0154:
    // 0x4d0154: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d0154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d0158:
    // 0x4d0158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d0158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d015c:
    // 0x4d015c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d015cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d0160:
    // 0x4d0160: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d0160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d0164:
    // 0x4d0164: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_4d0168:
    if (ctx->pc == 0x4D0168u) {
        ctx->pc = 0x4D0168u;
            // 0x4d0168: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D016Cu;
        goto label_4d016c;
    }
    ctx->pc = 0x4D0164u;
    {
        const bool branch_taken_0x4d0164 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0164u;
            // 0x4d0168: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0164) {
            ctx->pc = 0x4D01B8u;
            goto label_4d01b8;
        }
    }
    ctx->pc = 0x4D016Cu;
label_4d016c:
    // 0x4d016c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d016cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d0170:
    // 0x4d0170: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d0170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d0174:
    // 0x4d0174: 0x24632020  addiu       $v1, $v1, 0x2020
    ctx->pc = 0x4d0174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8224));
label_4d0178:
    // 0x4d0178: 0x24422060  addiu       $v0, $v0, 0x2060
    ctx->pc = 0x4d0178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8288));
label_4d017c:
    // 0x4d017c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d017cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4d0180:
    // 0x4d0180: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4d0180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4d0184:
    // 0x4d0184: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d0184u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d0188:
    // 0x4d0188: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4d0188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4d018c:
    // 0x4d018c: 0x320f809  jalr        $t9
label_4d0190:
    if (ctx->pc == 0x4D0190u) {
        ctx->pc = 0x4D0194u;
        goto label_4d0194;
    }
    ctx->pc = 0x4D018Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D0194u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D0194u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D0194u; }
            if (ctx->pc != 0x4D0194u) { return; }
        }
        }
    }
    ctx->pc = 0x4D0194u;
label_4d0194:
    // 0x4d0194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d0194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d0198:
    // 0x4d0198: 0xc12e684  jal         func_4B9A10
label_4d019c:
    if (ctx->pc == 0x4D019Cu) {
        ctx->pc = 0x4D019Cu;
            // 0x4d019c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D01A0u;
        goto label_4d01a0;
    }
    ctx->pc = 0x4D0198u;
    SET_GPR_U32(ctx, 31, 0x4D01A0u);
    ctx->pc = 0x4D019Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0198u;
            // 0x4d019c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9A10u;
    if (runtime->hasFunction(0x4B9A10u)) {
        auto targetFn = runtime->lookupFunction(0x4B9A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D01A0u; }
        if (ctx->pc != 0x4D01A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9A10_0x4b9a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D01A0u; }
        if (ctx->pc != 0x4D01A0u) { return; }
    }
    ctx->pc = 0x4D01A0u;
label_4d01a0:
    // 0x4d01a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4d01a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4d01a4:
    // 0x4d01a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d01a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4d01a8:
    // 0x4d01a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4d01ac:
    if (ctx->pc == 0x4D01ACu) {
        ctx->pc = 0x4D01ACu;
            // 0x4d01ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D01B0u;
        goto label_4d01b0;
    }
    ctx->pc = 0x4D01A8u;
    {
        const bool branch_taken_0x4d01a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d01a8) {
            ctx->pc = 0x4D01ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D01A8u;
            // 0x4d01ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D01BCu;
            goto label_4d01bc;
        }
    }
    ctx->pc = 0x4D01B0u;
label_4d01b0:
    // 0x4d01b0: 0xc0400a8  jal         func_1002A0
label_4d01b4:
    if (ctx->pc == 0x4D01B4u) {
        ctx->pc = 0x4D01B4u;
            // 0x4d01b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D01B8u;
        goto label_4d01b8;
    }
    ctx->pc = 0x4D01B0u;
    SET_GPR_U32(ctx, 31, 0x4D01B8u);
    ctx->pc = 0x4D01B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D01B0u;
            // 0x4d01b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D01B8u; }
        if (ctx->pc != 0x4D01B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D01B8u; }
        if (ctx->pc != 0x4D01B8u) { return; }
    }
    ctx->pc = 0x4D01B8u;
label_4d01b8:
    // 0x4d01b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4d01b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d01bc:
    // 0x4d01bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d01bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d01c0:
    // 0x4d01c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d01c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d01c4:
    // 0x4d01c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d01c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d01c8:
    // 0x4d01c8: 0x3e00008  jr          $ra
label_4d01cc:
    if (ctx->pc == 0x4D01CCu) {
        ctx->pc = 0x4D01CCu;
            // 0x4d01cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D01D0u;
        goto label_4d01d0;
    }
    ctx->pc = 0x4D01C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D01CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D01C8u;
            // 0x4d01cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D01D0u;
label_4d01d0:
    // 0x4d01d0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x4d01d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_4d01d4:
    // 0x4d01d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4d01d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d01d8:
    // 0x4d01d8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4d01d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4d01dc:
    // 0x4d01dc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4d01dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4d01e0:
    // 0x4d01e0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4d01e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4d01e4:
    // 0x4d01e4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4d01e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4d01e8:
    // 0x4d01e8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4d01e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4d01ec:
    // 0x4d01ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4d01ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4d01f0:
    // 0x4d01f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4d01f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4d01f4:
    // 0x4d01f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4d01f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4d01f8:
    // 0x4d01f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4d01f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4d01fc:
    // 0x4d01fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4d01fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4d0200:
    // 0x4d0200: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4d0200u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4d0204:
    // 0x4d0204: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4d0204u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4d0208:
    // 0x4d0208: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_4d020c:
    if (ctx->pc == 0x4D020Cu) {
        ctx->pc = 0x4D020Cu;
            // 0x4d020c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0210u;
        goto label_4d0210;
    }
    ctx->pc = 0x4D0208u;
    {
        const bool branch_taken_0x4d0208 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4D020Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0208u;
            // 0x4d020c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0208) {
            ctx->pc = 0x4D026Cu;
            goto label_4d026c;
        }
    }
    ctx->pc = 0x4D0210u;
label_4d0210:
    // 0x4d0210: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4d0210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4d0214:
    // 0x4d0214: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
label_4d0218:
    if (ctx->pc == 0x4D0218u) {
        ctx->pc = 0x4D0218u;
            // 0x4d0218: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4D021Cu;
        goto label_4d021c;
    }
    ctx->pc = 0x4D0214u;
    {
        const bool branch_taken_0x4d0214 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d0214) {
            ctx->pc = 0x4D0218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0214u;
            // 0x4d0218: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D0258u;
            goto label_4d0258;
        }
    }
    ctx->pc = 0x4D021Cu;
label_4d021c:
    // 0x4d021c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4d021cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d0220:
    // 0x4d0220: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4d0224:
    if (ctx->pc == 0x4D0224u) {
        ctx->pc = 0x4D0228u;
        goto label_4d0228;
    }
    ctx->pc = 0x4D0220u;
    {
        const bool branch_taken_0x4d0220 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d0220) {
            ctx->pc = 0x4D0230u;
            goto label_4d0230;
        }
    }
    ctx->pc = 0x4D0228u;
label_4d0228:
    // 0x4d0228: 0x1000007f  b           . + 4 + (0x7F << 2)
label_4d022c:
    if (ctx->pc == 0x4D022Cu) {
        ctx->pc = 0x4D022Cu;
            // 0x4d022c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4D0230u;
        goto label_4d0230;
    }
    ctx->pc = 0x4D0228u;
    {
        const bool branch_taken_0x4d0228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D022Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0228u;
            // 0x4d022c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0228) {
            ctx->pc = 0x4D0428u;
            goto label_4d0428;
        }
    }
    ctx->pc = 0x4D0230u;
label_4d0230:
    // 0x4d0230: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d0230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d0234:
    // 0x4d0234: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d0234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d0238:
    // 0x4d0238: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4d0238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4d023c:
    // 0x4d023c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4d023cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4d0240:
    // 0x4d0240: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4d0240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4d0244:
    // 0x4d0244: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4d0244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4d0248:
    // 0x4d0248: 0x320f809  jalr        $t9
label_4d024c:
    if (ctx->pc == 0x4D024Cu) {
        ctx->pc = 0x4D024Cu;
            // 0x4d024c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4D0250u;
        goto label_4d0250;
    }
    ctx->pc = 0x4D0248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D0250u);
        ctx->pc = 0x4D024Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0248u;
            // 0x4d024c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D0250u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D0250u; }
            if (ctx->pc != 0x4D0250u) { return; }
        }
        }
    }
    ctx->pc = 0x4D0250u;
label_4d0250:
    // 0x4d0250: 0x10000074  b           . + 4 + (0x74 << 2)
label_4d0254:
    if (ctx->pc == 0x4D0254u) {
        ctx->pc = 0x4D0258u;
        goto label_4d0258;
    }
    ctx->pc = 0x4D0250u;
    {
        const bool branch_taken_0x4d0250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0250) {
            ctx->pc = 0x4D0424u;
            goto label_4d0424;
        }
    }
    ctx->pc = 0x4D0258u;
label_4d0258:
    // 0x4d0258: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4d0258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4d025c:
    // 0x4d025c: 0x320f809  jalr        $t9
label_4d0260:
    if (ctx->pc == 0x4D0260u) {
        ctx->pc = 0x4D0264u;
        goto label_4d0264;
    }
    ctx->pc = 0x4D025Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D0264u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D0264u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D0264u; }
            if (ctx->pc != 0x4D0264u) { return; }
        }
        }
    }
    ctx->pc = 0x4D0264u;
label_4d0264:
    // 0x4d0264: 0x1000006f  b           . + 4 + (0x6F << 2)
label_4d0268:
    if (ctx->pc == 0x4D0268u) {
        ctx->pc = 0x4D026Cu;
        goto label_4d026c;
    }
    ctx->pc = 0x4D0264u;
    {
        const bool branch_taken_0x4d0264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0264) {
            ctx->pc = 0x4D0424u;
            goto label_4d0424;
        }
    }
    ctx->pc = 0x4D026Cu;
label_4d026c:
    // 0x4d026c: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x4d026cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_4d0270:
    // 0x4d0270: 0x12e0006c  beqz        $s7, . + 4 + (0x6C << 2)
label_4d0274:
    if (ctx->pc == 0x4D0274u) {
        ctx->pc = 0x4D0278u;
        goto label_4d0278;
    }
    ctx->pc = 0x4D0270u;
    {
        const bool branch_taken_0x4d0270 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0270) {
            ctx->pc = 0x4D0424u;
            goto label_4d0424;
        }
    }
    ctx->pc = 0x4D0278u;
label_4d0278:
    // 0x4d0278: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4d0278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4d027c:
    // 0x4d027c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4d027cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4d0280:
    // 0x4d0280: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x4d0280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4d0284:
    // 0x4d0284: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4d0284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4d0288:
    // 0x4d0288: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x4d0288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4d028c:
    // 0x4d028c: 0x26d20084  addiu       $s2, $s6, 0x84
    ctx->pc = 0x4d028cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_4d0290:
    // 0x4d0290: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4d0290u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d0294:
    // 0x4d0294: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4d0294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d0298:
    // 0x4d0298: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x4d0298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4d029c:
    // 0x4d029c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d029cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d02a0:
    // 0x4d02a0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x4d02a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4d02a4:
    // 0x4d02a4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d02a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4d02a8:
    // 0x4d02a8: 0xc4547b70  lwc1        $f20, 0x7B70($v0)
    ctx->pc = 0x4d02a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 31600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4d02ac:
    // 0x4d02ac: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4d02acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4d02b0:
    // 0x4d02b0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4d02b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4d02b4:
    // 0x4d02b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4d02b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d02b8:
    // 0x4d02b8: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x4d02b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_4d02bc:
    // 0x4d02bc: 0x245e0010  addiu       $fp, $v0, 0x10
    ctx->pc = 0x4d02bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4d02c0:
    // 0x4d02c0: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x4d02c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_4d02c4:
    // 0x4d02c4: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x4d02c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_4d02c8:
    // 0x4d02c8: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x4d02c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4d02cc:
    // 0x4d02cc: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x4d02ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_4d02d0:
    // 0x4d02d0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x4d02d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_4d02d4:
    // 0x4d02d4: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x4d02d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_4d02d8:
    // 0x4d02d8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4d02d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4d02dc:
    // 0x4d02dc: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x4d02dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d02e0:
    // 0x4d02e0: 0xc0d639c  jal         func_358E70
label_4d02e4:
    if (ctx->pc == 0x4D02E4u) {
        ctx->pc = 0x4D02E4u;
            // 0x4d02e4: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->pc = 0x4D02E8u;
        goto label_4d02e8;
    }
    ctx->pc = 0x4D02E0u;
    SET_GPR_U32(ctx, 31, 0x4D02E8u);
    ctx->pc = 0x4D02E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D02E0u;
            // 0x4d02e4: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D02E8u; }
        if (ctx->pc != 0x4D02E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D02E8u; }
        if (ctx->pc != 0x4D02E8u) { return; }
    }
    ctx->pc = 0x4D02E8u;
label_4d02e8:
    // 0x4d02e8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_4d02ec:
    if (ctx->pc == 0x4D02ECu) {
        ctx->pc = 0x4D02F0u;
        goto label_4d02f0;
    }
    ctx->pc = 0x4D02E8u;
    {
        const bool branch_taken_0x4d02e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d02e8) {
            ctx->pc = 0x4D03D0u;
            goto label_4d03d0;
        }
    }
    ctx->pc = 0x4D02F0u;
label_4d02f0:
    // 0x4d02f0: 0xc0d1c14  jal         func_347050
label_4d02f4:
    if (ctx->pc == 0x4D02F4u) {
        ctx->pc = 0x4D02F4u;
            // 0x4d02f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D02F8u;
        goto label_4d02f8;
    }
    ctx->pc = 0x4D02F0u;
    SET_GPR_U32(ctx, 31, 0x4D02F8u);
    ctx->pc = 0x4D02F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D02F0u;
            // 0x4d02f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D02F8u; }
        if (ctx->pc != 0x4D02F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D02F8u; }
        if (ctx->pc != 0x4D02F8u) { return; }
    }
    ctx->pc = 0x4D02F8u;
label_4d02f8:
    // 0x4d02f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4d02f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d02fc:
    // 0x4d02fc: 0xc04f278  jal         func_13C9E0
label_4d0300:
    if (ctx->pc == 0x4D0300u) {
        ctx->pc = 0x4D0300u;
            // 0x4d0300: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4D0304u;
        goto label_4d0304;
    }
    ctx->pc = 0x4D02FCu;
    SET_GPR_U32(ctx, 31, 0x4D0304u);
    ctx->pc = 0x4D0300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D02FCu;
            // 0x4d0300: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0304u; }
        if (ctx->pc != 0x4D0304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0304u; }
        if (ctx->pc != 0x4D0304u) { return; }
    }
    ctx->pc = 0x4D0304u;
label_4d0304:
    // 0x4d0304: 0xc0d1c10  jal         func_347040
label_4d0308:
    if (ctx->pc == 0x4D0308u) {
        ctx->pc = 0x4D0308u;
            // 0x4d0308: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D030Cu;
        goto label_4d030c;
    }
    ctx->pc = 0x4D0304u;
    SET_GPR_U32(ctx, 31, 0x4D030Cu);
    ctx->pc = 0x4D0308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0304u;
            // 0x4d0308: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D030Cu; }
        if (ctx->pc != 0x4D030Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D030Cu; }
        if (ctx->pc != 0x4D030Cu) { return; }
    }
    ctx->pc = 0x4D030Cu;
label_4d030c:
    // 0x4d030c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4d030cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d0310:
    // 0x4d0310: 0xc04ce80  jal         func_133A00
label_4d0314:
    if (ctx->pc == 0x4D0314u) {
        ctx->pc = 0x4D0314u;
            // 0x4d0314: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4D0318u;
        goto label_4d0318;
    }
    ctx->pc = 0x4D0310u;
    SET_GPR_U32(ctx, 31, 0x4D0318u);
    ctx->pc = 0x4D0314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0310u;
            // 0x4d0314: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0318u; }
        if (ctx->pc != 0x4D0318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0318u; }
        if (ctx->pc != 0x4D0318u) { return; }
    }
    ctx->pc = 0x4D0318u;
label_4d0318:
    // 0x4d0318: 0xc0d4108  jal         func_350420
label_4d031c:
    if (ctx->pc == 0x4D031Cu) {
        ctx->pc = 0x4D0320u;
        goto label_4d0320;
    }
    ctx->pc = 0x4D0318u;
    SET_GPR_U32(ctx, 31, 0x4D0320u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0320u; }
        if (ctx->pc != 0x4D0320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0320u; }
        if (ctx->pc != 0x4D0320u) { return; }
    }
    ctx->pc = 0x4D0320u;
label_4d0320:
    // 0x4d0320: 0xc0b36b4  jal         func_2CDAD0
label_4d0324:
    if (ctx->pc == 0x4D0324u) {
        ctx->pc = 0x4D0324u;
            // 0x4d0324: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0328u;
        goto label_4d0328;
    }
    ctx->pc = 0x4D0320u;
    SET_GPR_U32(ctx, 31, 0x4D0328u);
    ctx->pc = 0x4D0324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0320u;
            // 0x4d0324: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0328u; }
        if (ctx->pc != 0x4D0328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0328u; }
        if (ctx->pc != 0x4D0328u) { return; }
    }
    ctx->pc = 0x4D0328u;
label_4d0328:
    // 0x4d0328: 0xc0b9c64  jal         func_2E7190
label_4d032c:
    if (ctx->pc == 0x4D032Cu) {
        ctx->pc = 0x4D032Cu;
            // 0x4d032c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0330u;
        goto label_4d0330;
    }
    ctx->pc = 0x4D0328u;
    SET_GPR_U32(ctx, 31, 0x4D0330u);
    ctx->pc = 0x4D032Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0328u;
            // 0x4d032c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0330u; }
        if (ctx->pc != 0x4D0330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0330u; }
        if (ctx->pc != 0x4D0330u) { return; }
    }
    ctx->pc = 0x4D0330u;
label_4d0330:
    // 0x4d0330: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4d0330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d0334:
    // 0x4d0334: 0xc0d4104  jal         func_350410
label_4d0338:
    if (ctx->pc == 0x4D0338u) {
        ctx->pc = 0x4D0338u;
            // 0x4d0338: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D033Cu;
        goto label_4d033c;
    }
    ctx->pc = 0x4D0334u;
    SET_GPR_U32(ctx, 31, 0x4D033Cu);
    ctx->pc = 0x4D0338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0334u;
            // 0x4d0338: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D033Cu; }
        if (ctx->pc != 0x4D033Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D033Cu; }
        if (ctx->pc != 0x4D033Cu) { return; }
    }
    ctx->pc = 0x4D033Cu;
label_4d033c:
    // 0x4d033c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4d033cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d0340:
    // 0x4d0340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d0340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d0344:
    // 0x4d0344: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d0344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d0348:
    // 0x4d0348: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x4d0348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4d034c:
    // 0x4d034c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4d034cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d0350:
    // 0x4d0350: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4d0350u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d0354:
    // 0x4d0354: 0xc0d40ac  jal         func_3502B0
label_4d0358:
    if (ctx->pc == 0x4D0358u) {
        ctx->pc = 0x4D0358u;
            // 0x4d0358: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4D035Cu;
        goto label_4d035c;
    }
    ctx->pc = 0x4D0354u;
    SET_GPR_U32(ctx, 31, 0x4D035Cu);
    ctx->pc = 0x4D0358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0354u;
            // 0x4d0358: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D035Cu; }
        if (ctx->pc != 0x4D035Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D035Cu; }
        if (ctx->pc != 0x4D035Cu) { return; }
    }
    ctx->pc = 0x4D035Cu;
label_4d035c:
    // 0x4d035c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4d035cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4d0360:
    // 0x4d0360: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_4d0364:
    if (ctx->pc == 0x4D0364u) {
        ctx->pc = 0x4D0364u;
            // 0x4d0364: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4D0368u;
        goto label_4d0368;
    }
    ctx->pc = 0x4D0360u;
    {
        const bool branch_taken_0x4d0360 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0360u;
            // 0x4d0364: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0360) {
            ctx->pc = 0x4D03D0u;
            goto label_4d03d0;
        }
    }
    ctx->pc = 0x4D0368u;
label_4d0368:
    // 0x4d0368: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4d0368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d036c:
    // 0x4d036c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x4d036cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4d0370:
    // 0x4d0370: 0xc134118  jal         func_4D0460
label_4d0374:
    if (ctx->pc == 0x4D0374u) {
        ctx->pc = 0x4D0374u;
            // 0x4d0374: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->pc = 0x4D0378u;
        goto label_4d0378;
    }
    ctx->pc = 0x4D0370u;
    SET_GPR_U32(ctx, 31, 0x4D0378u);
    ctx->pc = 0x4D0374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0370u;
            // 0x4d0374: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D0460u;
    if (runtime->hasFunction(0x4D0460u)) {
        auto targetFn = runtime->lookupFunction(0x4D0460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0378u; }
        if (ctx->pc != 0x4D0378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D0460_0x4d0460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0378u; }
        if (ctx->pc != 0x4D0378u) { return; }
    }
    ctx->pc = 0x4D0378u;
label_4d0378:
    // 0x4d0378: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4d0378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4d037c:
    // 0x4d037c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4d037cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4d0380:
    // 0x4d0380: 0xc04cd60  jal         func_133580
label_4d0384:
    if (ctx->pc == 0x4D0384u) {
        ctx->pc = 0x4D0384u;
            // 0x4d0384: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4D0388u;
        goto label_4d0388;
    }
    ctx->pc = 0x4D0380u;
    SET_GPR_U32(ctx, 31, 0x4D0388u);
    ctx->pc = 0x4D0384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0380u;
            // 0x4d0384: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0388u; }
        if (ctx->pc != 0x4D0388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0388u; }
        if (ctx->pc != 0x4D0388u) { return; }
    }
    ctx->pc = 0x4D0388u;
label_4d0388:
    // 0x4d0388: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4d0388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d038c:
    // 0x4d038c: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x4d038cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4d0390:
    // 0x4d0390: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4d0390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4d0394:
    // 0x4d0394: 0xc04e4a4  jal         func_139290
label_4d0398:
    if (ctx->pc == 0x4D0398u) {
        ctx->pc = 0x4D0398u;
            // 0x4d0398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D039Cu;
        goto label_4d039c;
    }
    ctx->pc = 0x4D0394u;
    SET_GPR_U32(ctx, 31, 0x4D039Cu);
    ctx->pc = 0x4D0398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0394u;
            // 0x4d0398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D039Cu; }
        if (ctx->pc != 0x4D039Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D039Cu; }
        if (ctx->pc != 0x4D039Cu) { return; }
    }
    ctx->pc = 0x4D039Cu;
label_4d039c:
    // 0x4d039c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4d039cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4d03a0:
    // 0x4d03a0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4d03a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4d03a4:
    // 0x4d03a4: 0x320f809  jalr        $t9
label_4d03a8:
    if (ctx->pc == 0x4D03A8u) {
        ctx->pc = 0x4D03A8u;
            // 0x4d03a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D03ACu;
        goto label_4d03ac;
    }
    ctx->pc = 0x4D03A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D03ACu);
        ctx->pc = 0x4D03A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D03A4u;
            // 0x4d03a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D03ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D03ACu; }
            if (ctx->pc != 0x4D03ACu) { return; }
        }
        }
    }
    ctx->pc = 0x4D03ACu;
label_4d03ac:
    // 0x4d03ac: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x4d03acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4d03b0:
    // 0x4d03b0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4d03b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4d03b4:
    // 0x4d03b4: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x4d03b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4d03b8:
    // 0x4d03b8: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x4d03b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4d03bc:
    // 0x4d03bc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4d03bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d03c0:
    // 0x4d03c0: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4d03c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_4d03c4:
    // 0x4d03c4: 0xc04cfcc  jal         func_133F30
label_4d03c8:
    if (ctx->pc == 0x4D03C8u) {
        ctx->pc = 0x4D03C8u;
            // 0x4d03c8: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D03CCu;
        goto label_4d03cc;
    }
    ctx->pc = 0x4D03C4u;
    SET_GPR_U32(ctx, 31, 0x4D03CCu);
    ctx->pc = 0x4D03C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D03C4u;
            // 0x4d03c8: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D03CCu; }
        if (ctx->pc != 0x4D03CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D03CCu; }
        if (ctx->pc != 0x4D03CCu) { return; }
    }
    ctx->pc = 0x4D03CCu;
label_4d03cc:
    // 0x4d03cc: 0x0  nop
    ctx->pc = 0x4d03ccu;
    // NOP
label_4d03d0:
    // 0x4d03d0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4d03d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4d03d4:
    // 0x4d03d4: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x4d03d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_4d03d8:
    // 0x4d03d8: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_4d03dc:
    if (ctx->pc == 0x4D03DCu) {
        ctx->pc = 0x4D03DCu;
            // 0x4d03dc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4D03E0u;
        goto label_4d03e0;
    }
    ctx->pc = 0x4D03D8u;
    {
        const bool branch_taken_0x4d03d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D03DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D03D8u;
            // 0x4d03dc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d03d8) {
            ctx->pc = 0x4D02C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d02c4;
        }
    }
    ctx->pc = 0x4D03E0u;
label_4d03e0:
    // 0x4d03e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d03e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d03e4:
    // 0x4d03e4: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x4d03e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4d03e8:
    // 0x4d03e8: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_4d03ec:
    if (ctx->pc == 0x4D03ECu) {
        ctx->pc = 0x4D03F0u;
        goto label_4d03f0;
    }
    ctx->pc = 0x4D03E8u;
    {
        const bool branch_taken_0x4d03e8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4d03e8) {
            ctx->pc = 0x4D0424u;
            goto label_4d0424;
        }
    }
    ctx->pc = 0x4D03F0u;
label_4d03f0:
    // 0x4d03f0: 0xc04e738  jal         func_139CE0
label_4d03f4:
    if (ctx->pc == 0x4D03F4u) {
        ctx->pc = 0x4D03F4u;
            // 0x4d03f4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x4D03F8u;
        goto label_4d03f8;
    }
    ctx->pc = 0x4D03F0u;
    SET_GPR_U32(ctx, 31, 0x4D03F8u);
    ctx->pc = 0x4D03F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D03F0u;
            // 0x4d03f4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D03F8u; }
        if (ctx->pc != 0x4D03F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D03F8u; }
        if (ctx->pc != 0x4D03F8u) { return; }
    }
    ctx->pc = 0x4D03F8u;
label_4d03f8:
    // 0x4d03f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d03f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d03fc:
    // 0x4d03fc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4d03fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d0400:
    // 0x4d0400: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4d0400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4d0404:
    // 0x4d0404: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4d0404u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4d0408:
    // 0x4d0408: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d0408u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d040c:
    // 0x4d040c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d040cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d0410:
    // 0x4d0410: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4d0410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4d0414:
    // 0x4d0414: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d0414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d0418:
    // 0x4d0418: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4d0418u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4d041c:
    // 0x4d041c: 0xc055d28  jal         func_1574A0
label_4d0420:
    if (ctx->pc == 0x4D0420u) {
        ctx->pc = 0x4D0420u;
            // 0x4d0420: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0424u;
        goto label_4d0424;
    }
    ctx->pc = 0x4D041Cu;
    SET_GPR_U32(ctx, 31, 0x4D0424u);
    ctx->pc = 0x4D0420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D041Cu;
            // 0x4d0420: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0424u; }
        if (ctx->pc != 0x4D0424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0424u; }
        if (ctx->pc != 0x4D0424u) { return; }
    }
    ctx->pc = 0x4D0424u;
label_4d0424:
    // 0x4d0424: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4d0424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4d0428:
    // 0x4d0428: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4d0428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4d042c:
    // 0x4d042c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4d042cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4d0430:
    // 0x4d0430: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4d0430u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4d0434:
    // 0x4d0434: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4d0434u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4d0438:
    // 0x4d0438: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4d0438u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4d043c:
    // 0x4d043c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4d043cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4d0440:
    // 0x4d0440: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4d0440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4d0444:
    // 0x4d0444: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4d0444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d0448:
    // 0x4d0448: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4d0448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d044c:
    // 0x4d044c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4d044cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d0450:
    // 0x4d0450: 0x3e00008  jr          $ra
label_4d0454:
    if (ctx->pc == 0x4D0454u) {
        ctx->pc = 0x4D0454u;
            // 0x4d0454: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x4D0458u;
        goto label_4d0458;
    }
    ctx->pc = 0x4D0450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0450u;
            // 0x4d0454: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D0458u;
label_4d0458:
    // 0x4d0458: 0x0  nop
    ctx->pc = 0x4d0458u;
    // NOP
label_4d045c:
    // 0x4d045c: 0x0  nop
    ctx->pc = 0x4d045cu;
    // NOP
}
