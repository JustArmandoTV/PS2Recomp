#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049A010
// Address: 0x49a010 - 0x49a4b0
void sub_0049A010_0x49a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A010_0x49a010");
#endif

    switch (ctx->pc) {
        case 0x49a010u: goto label_49a010;
        case 0x49a014u: goto label_49a014;
        case 0x49a018u: goto label_49a018;
        case 0x49a01cu: goto label_49a01c;
        case 0x49a020u: goto label_49a020;
        case 0x49a024u: goto label_49a024;
        case 0x49a028u: goto label_49a028;
        case 0x49a02cu: goto label_49a02c;
        case 0x49a030u: goto label_49a030;
        case 0x49a034u: goto label_49a034;
        case 0x49a038u: goto label_49a038;
        case 0x49a03cu: goto label_49a03c;
        case 0x49a040u: goto label_49a040;
        case 0x49a044u: goto label_49a044;
        case 0x49a048u: goto label_49a048;
        case 0x49a04cu: goto label_49a04c;
        case 0x49a050u: goto label_49a050;
        case 0x49a054u: goto label_49a054;
        case 0x49a058u: goto label_49a058;
        case 0x49a05cu: goto label_49a05c;
        case 0x49a060u: goto label_49a060;
        case 0x49a064u: goto label_49a064;
        case 0x49a068u: goto label_49a068;
        case 0x49a06cu: goto label_49a06c;
        case 0x49a070u: goto label_49a070;
        case 0x49a074u: goto label_49a074;
        case 0x49a078u: goto label_49a078;
        case 0x49a07cu: goto label_49a07c;
        case 0x49a080u: goto label_49a080;
        case 0x49a084u: goto label_49a084;
        case 0x49a088u: goto label_49a088;
        case 0x49a08cu: goto label_49a08c;
        case 0x49a090u: goto label_49a090;
        case 0x49a094u: goto label_49a094;
        case 0x49a098u: goto label_49a098;
        case 0x49a09cu: goto label_49a09c;
        case 0x49a0a0u: goto label_49a0a0;
        case 0x49a0a4u: goto label_49a0a4;
        case 0x49a0a8u: goto label_49a0a8;
        case 0x49a0acu: goto label_49a0ac;
        case 0x49a0b0u: goto label_49a0b0;
        case 0x49a0b4u: goto label_49a0b4;
        case 0x49a0b8u: goto label_49a0b8;
        case 0x49a0bcu: goto label_49a0bc;
        case 0x49a0c0u: goto label_49a0c0;
        case 0x49a0c4u: goto label_49a0c4;
        case 0x49a0c8u: goto label_49a0c8;
        case 0x49a0ccu: goto label_49a0cc;
        case 0x49a0d0u: goto label_49a0d0;
        case 0x49a0d4u: goto label_49a0d4;
        case 0x49a0d8u: goto label_49a0d8;
        case 0x49a0dcu: goto label_49a0dc;
        case 0x49a0e0u: goto label_49a0e0;
        case 0x49a0e4u: goto label_49a0e4;
        case 0x49a0e8u: goto label_49a0e8;
        case 0x49a0ecu: goto label_49a0ec;
        case 0x49a0f0u: goto label_49a0f0;
        case 0x49a0f4u: goto label_49a0f4;
        case 0x49a0f8u: goto label_49a0f8;
        case 0x49a0fcu: goto label_49a0fc;
        case 0x49a100u: goto label_49a100;
        case 0x49a104u: goto label_49a104;
        case 0x49a108u: goto label_49a108;
        case 0x49a10cu: goto label_49a10c;
        case 0x49a110u: goto label_49a110;
        case 0x49a114u: goto label_49a114;
        case 0x49a118u: goto label_49a118;
        case 0x49a11cu: goto label_49a11c;
        case 0x49a120u: goto label_49a120;
        case 0x49a124u: goto label_49a124;
        case 0x49a128u: goto label_49a128;
        case 0x49a12cu: goto label_49a12c;
        case 0x49a130u: goto label_49a130;
        case 0x49a134u: goto label_49a134;
        case 0x49a138u: goto label_49a138;
        case 0x49a13cu: goto label_49a13c;
        case 0x49a140u: goto label_49a140;
        case 0x49a144u: goto label_49a144;
        case 0x49a148u: goto label_49a148;
        case 0x49a14cu: goto label_49a14c;
        case 0x49a150u: goto label_49a150;
        case 0x49a154u: goto label_49a154;
        case 0x49a158u: goto label_49a158;
        case 0x49a15cu: goto label_49a15c;
        case 0x49a160u: goto label_49a160;
        case 0x49a164u: goto label_49a164;
        case 0x49a168u: goto label_49a168;
        case 0x49a16cu: goto label_49a16c;
        case 0x49a170u: goto label_49a170;
        case 0x49a174u: goto label_49a174;
        case 0x49a178u: goto label_49a178;
        case 0x49a17cu: goto label_49a17c;
        case 0x49a180u: goto label_49a180;
        case 0x49a184u: goto label_49a184;
        case 0x49a188u: goto label_49a188;
        case 0x49a18cu: goto label_49a18c;
        case 0x49a190u: goto label_49a190;
        case 0x49a194u: goto label_49a194;
        case 0x49a198u: goto label_49a198;
        case 0x49a19cu: goto label_49a19c;
        case 0x49a1a0u: goto label_49a1a0;
        case 0x49a1a4u: goto label_49a1a4;
        case 0x49a1a8u: goto label_49a1a8;
        case 0x49a1acu: goto label_49a1ac;
        case 0x49a1b0u: goto label_49a1b0;
        case 0x49a1b4u: goto label_49a1b4;
        case 0x49a1b8u: goto label_49a1b8;
        case 0x49a1bcu: goto label_49a1bc;
        case 0x49a1c0u: goto label_49a1c0;
        case 0x49a1c4u: goto label_49a1c4;
        case 0x49a1c8u: goto label_49a1c8;
        case 0x49a1ccu: goto label_49a1cc;
        case 0x49a1d0u: goto label_49a1d0;
        case 0x49a1d4u: goto label_49a1d4;
        case 0x49a1d8u: goto label_49a1d8;
        case 0x49a1dcu: goto label_49a1dc;
        case 0x49a1e0u: goto label_49a1e0;
        case 0x49a1e4u: goto label_49a1e4;
        case 0x49a1e8u: goto label_49a1e8;
        case 0x49a1ecu: goto label_49a1ec;
        case 0x49a1f0u: goto label_49a1f0;
        case 0x49a1f4u: goto label_49a1f4;
        case 0x49a1f8u: goto label_49a1f8;
        case 0x49a1fcu: goto label_49a1fc;
        case 0x49a200u: goto label_49a200;
        case 0x49a204u: goto label_49a204;
        case 0x49a208u: goto label_49a208;
        case 0x49a20cu: goto label_49a20c;
        case 0x49a210u: goto label_49a210;
        case 0x49a214u: goto label_49a214;
        case 0x49a218u: goto label_49a218;
        case 0x49a21cu: goto label_49a21c;
        case 0x49a220u: goto label_49a220;
        case 0x49a224u: goto label_49a224;
        case 0x49a228u: goto label_49a228;
        case 0x49a22cu: goto label_49a22c;
        case 0x49a230u: goto label_49a230;
        case 0x49a234u: goto label_49a234;
        case 0x49a238u: goto label_49a238;
        case 0x49a23cu: goto label_49a23c;
        case 0x49a240u: goto label_49a240;
        case 0x49a244u: goto label_49a244;
        case 0x49a248u: goto label_49a248;
        case 0x49a24cu: goto label_49a24c;
        case 0x49a250u: goto label_49a250;
        case 0x49a254u: goto label_49a254;
        case 0x49a258u: goto label_49a258;
        case 0x49a25cu: goto label_49a25c;
        case 0x49a260u: goto label_49a260;
        case 0x49a264u: goto label_49a264;
        case 0x49a268u: goto label_49a268;
        case 0x49a26cu: goto label_49a26c;
        case 0x49a270u: goto label_49a270;
        case 0x49a274u: goto label_49a274;
        case 0x49a278u: goto label_49a278;
        case 0x49a27cu: goto label_49a27c;
        case 0x49a280u: goto label_49a280;
        case 0x49a284u: goto label_49a284;
        case 0x49a288u: goto label_49a288;
        case 0x49a28cu: goto label_49a28c;
        case 0x49a290u: goto label_49a290;
        case 0x49a294u: goto label_49a294;
        case 0x49a298u: goto label_49a298;
        case 0x49a29cu: goto label_49a29c;
        case 0x49a2a0u: goto label_49a2a0;
        case 0x49a2a4u: goto label_49a2a4;
        case 0x49a2a8u: goto label_49a2a8;
        case 0x49a2acu: goto label_49a2ac;
        case 0x49a2b0u: goto label_49a2b0;
        case 0x49a2b4u: goto label_49a2b4;
        case 0x49a2b8u: goto label_49a2b8;
        case 0x49a2bcu: goto label_49a2bc;
        case 0x49a2c0u: goto label_49a2c0;
        case 0x49a2c4u: goto label_49a2c4;
        case 0x49a2c8u: goto label_49a2c8;
        case 0x49a2ccu: goto label_49a2cc;
        case 0x49a2d0u: goto label_49a2d0;
        case 0x49a2d4u: goto label_49a2d4;
        case 0x49a2d8u: goto label_49a2d8;
        case 0x49a2dcu: goto label_49a2dc;
        case 0x49a2e0u: goto label_49a2e0;
        case 0x49a2e4u: goto label_49a2e4;
        case 0x49a2e8u: goto label_49a2e8;
        case 0x49a2ecu: goto label_49a2ec;
        case 0x49a2f0u: goto label_49a2f0;
        case 0x49a2f4u: goto label_49a2f4;
        case 0x49a2f8u: goto label_49a2f8;
        case 0x49a2fcu: goto label_49a2fc;
        case 0x49a300u: goto label_49a300;
        case 0x49a304u: goto label_49a304;
        case 0x49a308u: goto label_49a308;
        case 0x49a30cu: goto label_49a30c;
        case 0x49a310u: goto label_49a310;
        case 0x49a314u: goto label_49a314;
        case 0x49a318u: goto label_49a318;
        case 0x49a31cu: goto label_49a31c;
        case 0x49a320u: goto label_49a320;
        case 0x49a324u: goto label_49a324;
        case 0x49a328u: goto label_49a328;
        case 0x49a32cu: goto label_49a32c;
        case 0x49a330u: goto label_49a330;
        case 0x49a334u: goto label_49a334;
        case 0x49a338u: goto label_49a338;
        case 0x49a33cu: goto label_49a33c;
        case 0x49a340u: goto label_49a340;
        case 0x49a344u: goto label_49a344;
        case 0x49a348u: goto label_49a348;
        case 0x49a34cu: goto label_49a34c;
        case 0x49a350u: goto label_49a350;
        case 0x49a354u: goto label_49a354;
        case 0x49a358u: goto label_49a358;
        case 0x49a35cu: goto label_49a35c;
        case 0x49a360u: goto label_49a360;
        case 0x49a364u: goto label_49a364;
        case 0x49a368u: goto label_49a368;
        case 0x49a36cu: goto label_49a36c;
        case 0x49a370u: goto label_49a370;
        case 0x49a374u: goto label_49a374;
        case 0x49a378u: goto label_49a378;
        case 0x49a37cu: goto label_49a37c;
        case 0x49a380u: goto label_49a380;
        case 0x49a384u: goto label_49a384;
        case 0x49a388u: goto label_49a388;
        case 0x49a38cu: goto label_49a38c;
        case 0x49a390u: goto label_49a390;
        case 0x49a394u: goto label_49a394;
        case 0x49a398u: goto label_49a398;
        case 0x49a39cu: goto label_49a39c;
        case 0x49a3a0u: goto label_49a3a0;
        case 0x49a3a4u: goto label_49a3a4;
        case 0x49a3a8u: goto label_49a3a8;
        case 0x49a3acu: goto label_49a3ac;
        case 0x49a3b0u: goto label_49a3b0;
        case 0x49a3b4u: goto label_49a3b4;
        case 0x49a3b8u: goto label_49a3b8;
        case 0x49a3bcu: goto label_49a3bc;
        case 0x49a3c0u: goto label_49a3c0;
        case 0x49a3c4u: goto label_49a3c4;
        case 0x49a3c8u: goto label_49a3c8;
        case 0x49a3ccu: goto label_49a3cc;
        case 0x49a3d0u: goto label_49a3d0;
        case 0x49a3d4u: goto label_49a3d4;
        case 0x49a3d8u: goto label_49a3d8;
        case 0x49a3dcu: goto label_49a3dc;
        case 0x49a3e0u: goto label_49a3e0;
        case 0x49a3e4u: goto label_49a3e4;
        case 0x49a3e8u: goto label_49a3e8;
        case 0x49a3ecu: goto label_49a3ec;
        case 0x49a3f0u: goto label_49a3f0;
        case 0x49a3f4u: goto label_49a3f4;
        case 0x49a3f8u: goto label_49a3f8;
        case 0x49a3fcu: goto label_49a3fc;
        case 0x49a400u: goto label_49a400;
        case 0x49a404u: goto label_49a404;
        case 0x49a408u: goto label_49a408;
        case 0x49a40cu: goto label_49a40c;
        case 0x49a410u: goto label_49a410;
        case 0x49a414u: goto label_49a414;
        case 0x49a418u: goto label_49a418;
        case 0x49a41cu: goto label_49a41c;
        case 0x49a420u: goto label_49a420;
        case 0x49a424u: goto label_49a424;
        case 0x49a428u: goto label_49a428;
        case 0x49a42cu: goto label_49a42c;
        case 0x49a430u: goto label_49a430;
        case 0x49a434u: goto label_49a434;
        case 0x49a438u: goto label_49a438;
        case 0x49a43cu: goto label_49a43c;
        case 0x49a440u: goto label_49a440;
        case 0x49a444u: goto label_49a444;
        case 0x49a448u: goto label_49a448;
        case 0x49a44cu: goto label_49a44c;
        case 0x49a450u: goto label_49a450;
        case 0x49a454u: goto label_49a454;
        case 0x49a458u: goto label_49a458;
        case 0x49a45cu: goto label_49a45c;
        case 0x49a460u: goto label_49a460;
        case 0x49a464u: goto label_49a464;
        case 0x49a468u: goto label_49a468;
        case 0x49a46cu: goto label_49a46c;
        case 0x49a470u: goto label_49a470;
        case 0x49a474u: goto label_49a474;
        case 0x49a478u: goto label_49a478;
        case 0x49a47cu: goto label_49a47c;
        case 0x49a480u: goto label_49a480;
        case 0x49a484u: goto label_49a484;
        case 0x49a488u: goto label_49a488;
        case 0x49a48cu: goto label_49a48c;
        case 0x49a490u: goto label_49a490;
        case 0x49a494u: goto label_49a494;
        case 0x49a498u: goto label_49a498;
        case 0x49a49cu: goto label_49a49c;
        case 0x49a4a0u: goto label_49a4a0;
        case 0x49a4a4u: goto label_49a4a4;
        case 0x49a4a8u: goto label_49a4a8;
        case 0x49a4acu: goto label_49a4ac;
        default: break;
    }

    ctx->pc = 0x49a010u;

label_49a010:
    // 0x49a010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49a010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49a014:
    // 0x49a014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49a014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_49a018:
    // 0x49a018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49a018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49a01c:
    // 0x49a01c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49a01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49a020:
    // 0x49a020: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49a020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49a024:
    // 0x49a024: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_49a028:
    if (ctx->pc == 0x49A028u) {
        ctx->pc = 0x49A028u;
            // 0x49a028: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49A02Cu;
        goto label_49a02c;
    }
    ctx->pc = 0x49A024u;
    {
        const bool branch_taken_0x49a024 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A024u;
            // 0x49a028: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a024) {
            ctx->pc = 0x49A158u;
            goto label_49a158;
        }
    }
    ctx->pc = 0x49A02Cu;
label_49a02c:
    // 0x49a02c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49a02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_49a030:
    // 0x49a030: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49a030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_49a034:
    // 0x49a034: 0x2463fb40  addiu       $v1, $v1, -0x4C0
    ctx->pc = 0x49a034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966080));
label_49a038:
    // 0x49a038: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x49a038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
label_49a03c:
    // 0x49a03c: 0x2442fb78  addiu       $v0, $v0, -0x488
    ctx->pc = 0x49a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966136));
label_49a040:
    // 0x49a040: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x49a040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_49a044:
    // 0x49a044: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x49a044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_49a048:
    // 0x49a048: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x49a048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_49a04c:
    // 0x49a04c: 0xc0407c0  jal         func_101F00
label_49a050:
    if (ctx->pc == 0x49A050u) {
        ctx->pc = 0x49A050u;
            // 0x49a050: 0x24a5a170  addiu       $a1, $a1, -0x5E90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943088));
        ctx->pc = 0x49A054u;
        goto label_49a054;
    }
    ctx->pc = 0x49A04Cu;
    SET_GPR_U32(ctx, 31, 0x49A054u);
    ctx->pc = 0x49A050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A04Cu;
            // 0x49a050: 0x24a5a170  addiu       $a1, $a1, -0x5E90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A054u; }
        if (ctx->pc != 0x49A054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A054u; }
        if (ctx->pc != 0x49A054u) { return; }
    }
    ctx->pc = 0x49A054u;
label_49a054:
    // 0x49a054: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x49a054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_49a058:
    // 0x49a058: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_49a05c:
    if (ctx->pc == 0x49A05Cu) {
        ctx->pc = 0x49A05Cu;
            // 0x49a05c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x49A060u;
        goto label_49a060;
    }
    ctx->pc = 0x49A058u;
    {
        const bool branch_taken_0x49a058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a058) {
            ctx->pc = 0x49A05Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49A058u;
            // 0x49a05c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49A06Cu;
            goto label_49a06c;
        }
    }
    ctx->pc = 0x49A060u;
label_49a060:
    // 0x49a060: 0xc07507c  jal         func_1D41F0
label_49a064:
    if (ctx->pc == 0x49A064u) {
        ctx->pc = 0x49A064u;
            // 0x49a064: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x49A068u;
        goto label_49a068;
    }
    ctx->pc = 0x49A060u;
    SET_GPR_U32(ctx, 31, 0x49A068u);
    ctx->pc = 0x49A064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A060u;
            // 0x49a064: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A068u; }
        if (ctx->pc != 0x49A068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A068u; }
        if (ctx->pc != 0x49A068u) { return; }
    }
    ctx->pc = 0x49A068u;
label_49a068:
    // 0x49a068: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x49a068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_49a06c:
    // 0x49a06c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_49a070:
    if (ctx->pc == 0x49A070u) {
        ctx->pc = 0x49A070u;
            // 0x49a070: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x49A074u;
        goto label_49a074;
    }
    ctx->pc = 0x49A06Cu;
    {
        const bool branch_taken_0x49a06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a06c) {
            ctx->pc = 0x49A070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49A06Cu;
            // 0x49a070: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49A09Cu;
            goto label_49a09c;
        }
    }
    ctx->pc = 0x49A074u;
label_49a074:
    // 0x49a074: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49a078:
    if (ctx->pc == 0x49A078u) {
        ctx->pc = 0x49A07Cu;
        goto label_49a07c;
    }
    ctx->pc = 0x49A074u;
    {
        const bool branch_taken_0x49a074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a074) {
            ctx->pc = 0x49A098u;
            goto label_49a098;
        }
    }
    ctx->pc = 0x49A07Cu;
label_49a07c:
    // 0x49a07c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_49a080:
    if (ctx->pc == 0x49A080u) {
        ctx->pc = 0x49A084u;
        goto label_49a084;
    }
    ctx->pc = 0x49A07Cu;
    {
        const bool branch_taken_0x49a07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a07c) {
            ctx->pc = 0x49A098u;
            goto label_49a098;
        }
    }
    ctx->pc = 0x49A084u;
label_49a084:
    // 0x49a084: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x49a084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_49a088:
    // 0x49a088: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_49a08c:
    if (ctx->pc == 0x49A08Cu) {
        ctx->pc = 0x49A090u;
        goto label_49a090;
    }
    ctx->pc = 0x49A088u;
    {
        const bool branch_taken_0x49a088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a088) {
            ctx->pc = 0x49A098u;
            goto label_49a098;
        }
    }
    ctx->pc = 0x49A090u;
label_49a090:
    // 0x49a090: 0xc0400a8  jal         func_1002A0
label_49a094:
    if (ctx->pc == 0x49A094u) {
        ctx->pc = 0x49A098u;
        goto label_49a098;
    }
    ctx->pc = 0x49A090u;
    SET_GPR_U32(ctx, 31, 0x49A098u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A098u; }
        if (ctx->pc != 0x49A098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A098u; }
        if (ctx->pc != 0x49A098u) { return; }
    }
    ctx->pc = 0x49A098u;
label_49a098:
    // 0x49a098: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x49a098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_49a09c:
    // 0x49a09c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_49a0a0:
    if (ctx->pc == 0x49A0A0u) {
        ctx->pc = 0x49A0A0u;
            // 0x49a0a0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x49A0A4u;
        goto label_49a0a4;
    }
    ctx->pc = 0x49A09Cu;
    {
        const bool branch_taken_0x49a09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a09c) {
            ctx->pc = 0x49A0A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49A09Cu;
            // 0x49a0a0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49A0CCu;
            goto label_49a0cc;
        }
    }
    ctx->pc = 0x49A0A4u;
label_49a0a4:
    // 0x49a0a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49a0a8:
    if (ctx->pc == 0x49A0A8u) {
        ctx->pc = 0x49A0ACu;
        goto label_49a0ac;
    }
    ctx->pc = 0x49A0A4u;
    {
        const bool branch_taken_0x49a0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a0a4) {
            ctx->pc = 0x49A0C8u;
            goto label_49a0c8;
        }
    }
    ctx->pc = 0x49A0ACu;
label_49a0ac:
    // 0x49a0ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_49a0b0:
    if (ctx->pc == 0x49A0B0u) {
        ctx->pc = 0x49A0B4u;
        goto label_49a0b4;
    }
    ctx->pc = 0x49A0ACu;
    {
        const bool branch_taken_0x49a0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a0ac) {
            ctx->pc = 0x49A0C8u;
            goto label_49a0c8;
        }
    }
    ctx->pc = 0x49A0B4u;
label_49a0b4:
    // 0x49a0b4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x49a0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_49a0b8:
    // 0x49a0b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_49a0bc:
    if (ctx->pc == 0x49A0BCu) {
        ctx->pc = 0x49A0C0u;
        goto label_49a0c0;
    }
    ctx->pc = 0x49A0B8u;
    {
        const bool branch_taken_0x49a0b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a0b8) {
            ctx->pc = 0x49A0C8u;
            goto label_49a0c8;
        }
    }
    ctx->pc = 0x49A0C0u;
label_49a0c0:
    // 0x49a0c0: 0xc0400a8  jal         func_1002A0
label_49a0c4:
    if (ctx->pc == 0x49A0C4u) {
        ctx->pc = 0x49A0C8u;
        goto label_49a0c8;
    }
    ctx->pc = 0x49A0C0u;
    SET_GPR_U32(ctx, 31, 0x49A0C8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A0C8u; }
        if (ctx->pc != 0x49A0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A0C8u; }
        if (ctx->pc != 0x49A0C8u) { return; }
    }
    ctx->pc = 0x49A0C8u;
label_49a0c8:
    // 0x49a0c8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x49a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_49a0cc:
    // 0x49a0cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_49a0d0:
    if (ctx->pc == 0x49A0D0u) {
        ctx->pc = 0x49A0D4u;
        goto label_49a0d4;
    }
    ctx->pc = 0x49A0CCu;
    {
        const bool branch_taken_0x49a0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a0cc) {
            ctx->pc = 0x49A0E8u;
            goto label_49a0e8;
        }
    }
    ctx->pc = 0x49A0D4u;
label_49a0d4:
    // 0x49a0d4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_49a0d8:
    // 0x49a0d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_49a0dc:
    // 0x49a0dc: 0x2463fb28  addiu       $v1, $v1, -0x4D8
    ctx->pc = 0x49a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966056));
label_49a0e0:
    // 0x49a0e0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x49a0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_49a0e4:
    // 0x49a0e4: 0xac407c08  sw          $zero, 0x7C08($v0)
    ctx->pc = 0x49a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31752), GPR_U32(ctx, 0));
label_49a0e8:
    // 0x49a0e8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_49a0ec:
    if (ctx->pc == 0x49A0ECu) {
        ctx->pc = 0x49A0ECu;
            // 0x49a0ec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x49A0F0u;
        goto label_49a0f0;
    }
    ctx->pc = 0x49A0E8u;
    {
        const bool branch_taken_0x49a0e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a0e8) {
            ctx->pc = 0x49A0ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49A0E8u;
            // 0x49a0ec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49A144u;
            goto label_49a144;
        }
    }
    ctx->pc = 0x49A0F0u;
label_49a0f0:
    // 0x49a0f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49a0f4:
    // 0x49a0f4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x49a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_49a0f8:
    // 0x49a0f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x49a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_49a0fc:
    // 0x49a0fc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x49a0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_49a100:
    // 0x49a100: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_49a104:
    if (ctx->pc == 0x49A104u) {
        ctx->pc = 0x49A104u;
            // 0x49a104: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x49A108u;
        goto label_49a108;
    }
    ctx->pc = 0x49A100u;
    {
        const bool branch_taken_0x49a100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a100) {
            ctx->pc = 0x49A104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49A100u;
            // 0x49a104: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49A11Cu;
            goto label_49a11c;
        }
    }
    ctx->pc = 0x49A108u;
label_49a108:
    // 0x49a108: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49a108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49a10c:
    // 0x49a10c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49a10cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49a110:
    // 0x49a110: 0x320f809  jalr        $t9
label_49a114:
    if (ctx->pc == 0x49A114u) {
        ctx->pc = 0x49A114u;
            // 0x49a114: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49A118u;
        goto label_49a118;
    }
    ctx->pc = 0x49A110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49A118u);
        ctx->pc = 0x49A114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A110u;
            // 0x49a114: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49A118u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49A118u; }
            if (ctx->pc != 0x49A118u) { return; }
        }
        }
    }
    ctx->pc = 0x49A118u;
label_49a118:
    // 0x49a118: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x49a118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_49a11c:
    // 0x49a11c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_49a120:
    if (ctx->pc == 0x49A120u) {
        ctx->pc = 0x49A120u;
            // 0x49a120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49A124u;
        goto label_49a124;
    }
    ctx->pc = 0x49A11Cu;
    {
        const bool branch_taken_0x49a11c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a11c) {
            ctx->pc = 0x49A120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49A11Cu;
            // 0x49a120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49A138u;
            goto label_49a138;
        }
    }
    ctx->pc = 0x49A124u;
label_49a124:
    // 0x49a124: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49a124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49a128:
    // 0x49a128: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49a128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49a12c:
    // 0x49a12c: 0x320f809  jalr        $t9
label_49a130:
    if (ctx->pc == 0x49A130u) {
        ctx->pc = 0x49A130u;
            // 0x49a130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49A134u;
        goto label_49a134;
    }
    ctx->pc = 0x49A12Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49A134u);
        ctx->pc = 0x49A130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A12Cu;
            // 0x49a130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49A134u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49A134u; }
            if (ctx->pc != 0x49A134u) { return; }
        }
        }
    }
    ctx->pc = 0x49A134u;
label_49a134:
    // 0x49a134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49a134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49a138:
    // 0x49a138: 0xc075bf8  jal         func_1D6FE0
label_49a13c:
    if (ctx->pc == 0x49A13Cu) {
        ctx->pc = 0x49A13Cu;
            // 0x49a13c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49A140u;
        goto label_49a140;
    }
    ctx->pc = 0x49A138u;
    SET_GPR_U32(ctx, 31, 0x49A140u);
    ctx->pc = 0x49A13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A138u;
            // 0x49a13c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A140u; }
        if (ctx->pc != 0x49A140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A140u; }
        if (ctx->pc != 0x49A140u) { return; }
    }
    ctx->pc = 0x49A140u;
label_49a140:
    // 0x49a140: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x49a140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_49a144:
    // 0x49a144: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49a144u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_49a148:
    // 0x49a148: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_49a14c:
    if (ctx->pc == 0x49A14Cu) {
        ctx->pc = 0x49A14Cu;
            // 0x49a14c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49A150u;
        goto label_49a150;
    }
    ctx->pc = 0x49A148u;
    {
        const bool branch_taken_0x49a148 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49a148) {
            ctx->pc = 0x49A14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49A148u;
            // 0x49a14c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49A15Cu;
            goto label_49a15c;
        }
    }
    ctx->pc = 0x49A150u;
label_49a150:
    // 0x49a150: 0xc0400a8  jal         func_1002A0
label_49a154:
    if (ctx->pc == 0x49A154u) {
        ctx->pc = 0x49A154u;
            // 0x49a154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49A158u;
        goto label_49a158;
    }
    ctx->pc = 0x49A150u;
    SET_GPR_U32(ctx, 31, 0x49A158u);
    ctx->pc = 0x49A154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A150u;
            // 0x49a154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A158u; }
        if (ctx->pc != 0x49A158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A158u; }
        if (ctx->pc != 0x49A158u) { return; }
    }
    ctx->pc = 0x49A158u;
label_49a158:
    // 0x49a158: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49a158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49a15c:
    // 0x49a15c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49a15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_49a160:
    // 0x49a160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49a160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49a164:
    // 0x49a164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49a164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49a168:
    // 0x49a168: 0x3e00008  jr          $ra
label_49a16c:
    if (ctx->pc == 0x49A16Cu) {
        ctx->pc = 0x49A16Cu;
            // 0x49a16c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49A170u;
        goto label_49a170;
    }
    ctx->pc = 0x49A168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A168u;
            // 0x49a16c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49A170u;
label_49a170:
    // 0x49a170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49a170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49a174:
    // 0x49a174: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49a174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_49a178:
    // 0x49a178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49a178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49a17c:
    // 0x49a17c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49a17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49a180:
    // 0x49a180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49a180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49a184:
    // 0x49a184: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_49a188:
    if (ctx->pc == 0x49A188u) {
        ctx->pc = 0x49A188u;
            // 0x49a188: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49A18Cu;
        goto label_49a18c;
    }
    ctx->pc = 0x49A184u;
    {
        const bool branch_taken_0x49a184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A184u;
            // 0x49a188: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a184) {
            ctx->pc = 0x49A24Cu;
            goto label_49a24c;
        }
    }
    ctx->pc = 0x49A18Cu;
label_49a18c:
    // 0x49a18c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_49a190:
    // 0x49a190: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49a190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_49a194:
    // 0x49a194: 0x2463fbe0  addiu       $v1, $v1, -0x420
    ctx->pc = 0x49a194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966240));
label_49a198:
    // 0x49a198: 0x2442fc20  addiu       $v0, $v0, -0x3E0
    ctx->pc = 0x49a198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966304));
label_49a19c:
    // 0x49a19c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_49a1a0:
    // 0x49a1a0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x49a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_49a1a4:
    // 0x49a1a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49a1a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49a1a8:
    // 0x49a1a8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x49a1a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_49a1ac:
    // 0x49a1ac: 0x320f809  jalr        $t9
label_49a1b0:
    if (ctx->pc == 0x49A1B0u) {
        ctx->pc = 0x49A1B4u;
        goto label_49a1b4;
    }
    ctx->pc = 0x49A1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49A1B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49A1B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49A1B4u; }
            if (ctx->pc != 0x49A1B4u) { return; }
        }
        }
    }
    ctx->pc = 0x49A1B4u;
label_49a1b4:
    // 0x49a1b4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_49a1b8:
    if (ctx->pc == 0x49A1B8u) {
        ctx->pc = 0x49A1B8u;
            // 0x49a1b8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x49A1BCu;
        goto label_49a1bc;
    }
    ctx->pc = 0x49A1B4u;
    {
        const bool branch_taken_0x49a1b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a1b4) {
            ctx->pc = 0x49A1B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49A1B4u;
            // 0x49a1b8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49A238u;
            goto label_49a238;
        }
    }
    ctx->pc = 0x49A1BCu;
label_49a1bc:
    // 0x49a1bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x49a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_49a1c0:
    // 0x49a1c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49a1c4:
    // 0x49a1c4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x49a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_49a1c8:
    // 0x49a1c8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x49a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_49a1cc:
    // 0x49a1cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49a1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_49a1d0:
    // 0x49a1d0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x49a1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_49a1d4:
    // 0x49a1d4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x49a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_49a1d8:
    // 0x49a1d8: 0xc0aecc4  jal         func_2BB310
label_49a1dc:
    if (ctx->pc == 0x49A1DCu) {
        ctx->pc = 0x49A1DCu;
            // 0x49a1dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49A1E0u;
        goto label_49a1e0;
    }
    ctx->pc = 0x49A1D8u;
    SET_GPR_U32(ctx, 31, 0x49A1E0u);
    ctx->pc = 0x49A1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A1D8u;
            // 0x49a1dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A1E0u; }
        if (ctx->pc != 0x49A1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A1E0u; }
        if (ctx->pc != 0x49A1E0u) { return; }
    }
    ctx->pc = 0x49A1E0u;
label_49a1e0:
    // 0x49a1e0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x49a1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_49a1e4:
    // 0x49a1e4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x49a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_49a1e8:
    // 0x49a1e8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_49a1ec:
    if (ctx->pc == 0x49A1ECu) {
        ctx->pc = 0x49A1ECu;
            // 0x49a1ec: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x49A1F0u;
        goto label_49a1f0;
    }
    ctx->pc = 0x49A1E8u;
    {
        const bool branch_taken_0x49a1e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a1e8) {
            ctx->pc = 0x49A1ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49A1E8u;
            // 0x49a1ec: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49A204u;
            goto label_49a204;
        }
    }
    ctx->pc = 0x49A1F0u;
label_49a1f0:
    // 0x49a1f0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x49a1f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_49a1f4:
    // 0x49a1f4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49a1f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49a1f8:
    // 0x49a1f8: 0x320f809  jalr        $t9
label_49a1fc:
    if (ctx->pc == 0x49A1FCu) {
        ctx->pc = 0x49A1FCu;
            // 0x49a1fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49A200u;
        goto label_49a200;
    }
    ctx->pc = 0x49A1F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49A200u);
        ctx->pc = 0x49A1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A1F8u;
            // 0x49a1fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49A200u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49A200u; }
            if (ctx->pc != 0x49A200u) { return; }
        }
        }
    }
    ctx->pc = 0x49A200u;
label_49a200:
    // 0x49a200: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x49a200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_49a204:
    // 0x49a204: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x49a204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_49a208:
    // 0x49a208: 0xc0aec9c  jal         func_2BB270
label_49a20c:
    if (ctx->pc == 0x49A20Cu) {
        ctx->pc = 0x49A20Cu;
            // 0x49a20c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x49A210u;
        goto label_49a210;
    }
    ctx->pc = 0x49A208u;
    SET_GPR_U32(ctx, 31, 0x49A210u);
    ctx->pc = 0x49A20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A208u;
            // 0x49a20c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A210u; }
        if (ctx->pc != 0x49A210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A210u; }
        if (ctx->pc != 0x49A210u) { return; }
    }
    ctx->pc = 0x49A210u;
label_49a210:
    // 0x49a210: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x49a210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_49a214:
    // 0x49a214: 0xc0aec88  jal         func_2BB220
label_49a218:
    if (ctx->pc == 0x49A218u) {
        ctx->pc = 0x49A218u;
            // 0x49a218: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x49A21Cu;
        goto label_49a21c;
    }
    ctx->pc = 0x49A214u;
    SET_GPR_U32(ctx, 31, 0x49A21Cu);
    ctx->pc = 0x49A218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A214u;
            // 0x49a218: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A21Cu; }
        if (ctx->pc != 0x49A21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A21Cu; }
        if (ctx->pc != 0x49A21Cu) { return; }
    }
    ctx->pc = 0x49A21Cu;
label_49a21c:
    // 0x49a21c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x49a21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_49a220:
    // 0x49a220: 0xc0aec0c  jal         func_2BB030
label_49a224:
    if (ctx->pc == 0x49A224u) {
        ctx->pc = 0x49A224u;
            // 0x49a224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49A228u;
        goto label_49a228;
    }
    ctx->pc = 0x49A220u;
    SET_GPR_U32(ctx, 31, 0x49A228u);
    ctx->pc = 0x49A224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A220u;
            // 0x49a224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A228u; }
        if (ctx->pc != 0x49A228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A228u; }
        if (ctx->pc != 0x49A228u) { return; }
    }
    ctx->pc = 0x49A228u;
label_49a228:
    // 0x49a228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49a228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49a22c:
    // 0x49a22c: 0xc0aeaa8  jal         func_2BAAA0
label_49a230:
    if (ctx->pc == 0x49A230u) {
        ctx->pc = 0x49A230u;
            // 0x49a230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49A234u;
        goto label_49a234;
    }
    ctx->pc = 0x49A22Cu;
    SET_GPR_U32(ctx, 31, 0x49A234u);
    ctx->pc = 0x49A230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A22Cu;
            // 0x49a230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A234u; }
        if (ctx->pc != 0x49A234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A234u; }
        if (ctx->pc != 0x49A234u) { return; }
    }
    ctx->pc = 0x49A234u;
label_49a234:
    // 0x49a234: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x49a234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_49a238:
    // 0x49a238: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49a238u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_49a23c:
    // 0x49a23c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_49a240:
    if (ctx->pc == 0x49A240u) {
        ctx->pc = 0x49A240u;
            // 0x49a240: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49A244u;
        goto label_49a244;
    }
    ctx->pc = 0x49A23Cu;
    {
        const bool branch_taken_0x49a23c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49a23c) {
            ctx->pc = 0x49A240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49A23Cu;
            // 0x49a240: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49A250u;
            goto label_49a250;
        }
    }
    ctx->pc = 0x49A244u;
label_49a244:
    // 0x49a244: 0xc0400a8  jal         func_1002A0
label_49a248:
    if (ctx->pc == 0x49A248u) {
        ctx->pc = 0x49A248u;
            // 0x49a248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49A24Cu;
        goto label_49a24c;
    }
    ctx->pc = 0x49A244u;
    SET_GPR_U32(ctx, 31, 0x49A24Cu);
    ctx->pc = 0x49A248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A244u;
            // 0x49a248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A24Cu; }
        if (ctx->pc != 0x49A24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A24Cu; }
        if (ctx->pc != 0x49A24Cu) { return; }
    }
    ctx->pc = 0x49A24Cu;
label_49a24c:
    // 0x49a24c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49a24cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49a250:
    // 0x49a250: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49a250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_49a254:
    // 0x49a254: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49a254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49a258:
    // 0x49a258: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49a258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49a25c:
    // 0x49a25c: 0x3e00008  jr          $ra
label_49a260:
    if (ctx->pc == 0x49A260u) {
        ctx->pc = 0x49A260u;
            // 0x49a260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49A264u;
        goto label_49a264;
    }
    ctx->pc = 0x49A25Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A25Cu;
            // 0x49a260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49A264u;
label_49a264:
    // 0x49a264: 0x0  nop
    ctx->pc = 0x49a264u;
    // NOP
label_49a268:
    // 0x49a268: 0x0  nop
    ctx->pc = 0x49a268u;
    // NOP
label_49a26c:
    // 0x49a26c: 0x0  nop
    ctx->pc = 0x49a26cu;
    // NOP
label_49a270:
    // 0x49a270: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x49a270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_49a274:
    // 0x49a274: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x49a274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_49a278:
    // 0x49a278: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x49a278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_49a27c:
    // 0x49a27c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x49a27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_49a280:
    // 0x49a280: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x49a280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_49a284:
    // 0x49a284: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x49a284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_49a288:
    // 0x49a288: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49a288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_49a28c:
    // 0x49a28c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49a28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49a290:
    // 0x49a290: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49a290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49a294:
    // 0x49a294: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49a294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49a298:
    // 0x49a298: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x49a298u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_49a29c:
    // 0x49a29c: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_49a2a0:
    if (ctx->pc == 0x49A2A0u) {
        ctx->pc = 0x49A2A0u;
            // 0x49a2a0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49A2A4u;
        goto label_49a2a4;
    }
    ctx->pc = 0x49A29Cu;
    {
        const bool branch_taken_0x49a29c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x49A2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A29Cu;
            // 0x49a2a0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a29c) {
            ctx->pc = 0x49A2ECu;
            goto label_49a2ec;
        }
    }
    ctx->pc = 0x49A2A4u;
label_49a2a4:
    // 0x49a2a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x49a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49a2a8:
    // 0x49a2a8: 0x50a30043  beql        $a1, $v1, . + 4 + (0x43 << 2)
label_49a2ac:
    if (ctx->pc == 0x49A2ACu) {
        ctx->pc = 0x49A2ACu;
            // 0x49a2ac: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x49A2B0u;
        goto label_49a2b0;
    }
    ctx->pc = 0x49A2A8u;
    {
        const bool branch_taken_0x49a2a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x49a2a8) {
            ctx->pc = 0x49A2ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49A2A8u;
            // 0x49a2ac: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49A3B8u;
            goto label_49a3b8;
        }
    }
    ctx->pc = 0x49A2B0u;
label_49a2b0:
    // 0x49a2b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x49a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49a2b4:
    // 0x49a2b4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_49a2b8:
    if (ctx->pc == 0x49A2B8u) {
        ctx->pc = 0x49A2BCu;
        goto label_49a2bc;
    }
    ctx->pc = 0x49A2B4u;
    {
        const bool branch_taken_0x49a2b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x49a2b4) {
            ctx->pc = 0x49A2C4u;
            goto label_49a2c4;
        }
    }
    ctx->pc = 0x49A2BCu;
label_49a2bc:
    // 0x49a2bc: 0x1000003d  b           . + 4 + (0x3D << 2)
label_49a2c0:
    if (ctx->pc == 0x49A2C0u) {
        ctx->pc = 0x49A2C4u;
        goto label_49a2c4;
    }
    ctx->pc = 0x49A2BCu;
    {
        const bool branch_taken_0x49a2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a2bc) {
            ctx->pc = 0x49A3B4u;
            goto label_49a3b4;
        }
    }
    ctx->pc = 0x49A2C4u;
label_49a2c4:
    // 0x49a2c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_49a2c8:
    // 0x49a2c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49a2c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49a2cc:
    // 0x49a2cc: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x49a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_49a2d0:
    // 0x49a2d0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x49a2d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_49a2d4:
    // 0x49a2d4: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x49a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_49a2d8:
    // 0x49a2d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x49a2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_49a2dc:
    // 0x49a2dc: 0x320f809  jalr        $t9
label_49a2e0:
    if (ctx->pc == 0x49A2E0u) {
        ctx->pc = 0x49A2E0u;
            // 0x49a2e0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x49A2E4u;
        goto label_49a2e4;
    }
    ctx->pc = 0x49A2DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49A2E4u);
        ctx->pc = 0x49A2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A2DCu;
            // 0x49a2e0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49A2E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49A2E4u; }
            if (ctx->pc != 0x49A2E4u) { return; }
        }
        }
    }
    ctx->pc = 0x49A2E4u;
label_49a2e4:
    // 0x49a2e4: 0x10000033  b           . + 4 + (0x33 << 2)
label_49a2e8:
    if (ctx->pc == 0x49A2E8u) {
        ctx->pc = 0x49A2ECu;
        goto label_49a2ec;
    }
    ctx->pc = 0x49A2E4u;
    {
        const bool branch_taken_0x49a2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a2e4) {
            ctx->pc = 0x49A3B4u;
            goto label_49a3b4;
        }
    }
    ctx->pc = 0x49A2ECu;
label_49a2ec:
    // 0x49a2ec: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x49a2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_49a2f0:
    // 0x49a2f0: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
label_49a2f4:
    if (ctx->pc == 0x49A2F4u) {
        ctx->pc = 0x49A2F8u;
        goto label_49a2f8;
    }
    ctx->pc = 0x49A2F0u;
    {
        const bool branch_taken_0x49a2f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a2f0) {
            ctx->pc = 0x49A3B4u;
            goto label_49a3b4;
        }
    }
    ctx->pc = 0x49A2F8u;
label_49a2f8:
    // 0x49a2f8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x49a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_49a2fc:
    // 0x49a2fc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x49a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_49a300:
    // 0x49a300: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x49a300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_49a304:
    // 0x49a304: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x49a304u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_49a308:
    // 0x49a308: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x49a308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_49a30c:
    // 0x49a30c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x49a30cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49a310:
    // 0x49a310: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x49a310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49a314:
    // 0x49a314: 0x8cb40130  lw          $s4, 0x130($a1)
    ctx->pc = 0x49a314u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_49a318:
    // 0x49a318: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49a318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49a31c:
    // 0x49a31c: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x49a31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_49a320:
    // 0x49a320: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49a320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49a324:
    // 0x49a324: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x49a324u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_49a328:
    // 0x49a328: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x49a328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_49a32c:
    // 0x49a32c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49a32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49a330:
    // 0x49a330: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x49a330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_49a334:
    // 0x49a334: 0x24960010  addiu       $s6, $a0, 0x10
    ctx->pc = 0x49a334u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_49a338:
    // 0x49a338: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x49a338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_49a33c:
    // 0x49a33c: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x49a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_49a340:
    // 0x49a340: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x49a340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_49a344:
    // 0x49a344: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x49a344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_49a348:
    // 0x49a348: 0x27a7010c  addiu       $a3, $sp, 0x10C
    ctx->pc = 0x49a348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_49a34c:
    // 0x49a34c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x49a34cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_49a350:
    // 0x49a350: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x49a350u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_49a354:
    // 0x49a354: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x49a354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_49a358:
    // 0x49a358: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x49a358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49a35c:
    // 0x49a35c: 0xc126a58  jal         func_49A960
label_49a360:
    if (ctx->pc == 0x49A360u) {
        ctx->pc = 0x49A360u;
            // 0x49a360: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49A364u;
        goto label_49a364;
    }
    ctx->pc = 0x49A35Cu;
    SET_GPR_U32(ctx, 31, 0x49A364u);
    ctx->pc = 0x49A360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A35Cu;
            // 0x49a360: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49A960u;
    if (runtime->hasFunction(0x49A960u)) {
        auto targetFn = runtime->lookupFunction(0x49A960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A364u; }
        if (ctx->pc != 0x49A364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049A960_0x49a960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A364u; }
        if (ctx->pc != 0x49A364u) { return; }
    }
    ctx->pc = 0x49A364u;
label_49a364:
    // 0x49a364: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x49a364u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_49a368:
    // 0x49a368: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x49a368u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_49a36c:
    // 0x49a36c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_49a370:
    if (ctx->pc == 0x49A370u) {
        ctx->pc = 0x49A370u;
            // 0x49a370: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x49A374u;
        goto label_49a374;
    }
    ctx->pc = 0x49A36Cu;
    {
        const bool branch_taken_0x49a36c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A36Cu;
            // 0x49a370: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a36c) {
            ctx->pc = 0x49A33Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49a33c;
        }
    }
    ctx->pc = 0x49A374u;
label_49a374:
    // 0x49a374: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49a374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49a378:
    // 0x49a378: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x49a378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_49a37c:
    // 0x49a37c: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_49a380:
    if (ctx->pc == 0x49A380u) {
        ctx->pc = 0x49A384u;
        goto label_49a384;
    }
    ctx->pc = 0x49A37Cu;
    {
        const bool branch_taken_0x49a37c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x49a37c) {
            ctx->pc = 0x49A3B4u;
            goto label_49a3b4;
        }
    }
    ctx->pc = 0x49A384u;
label_49a384:
    // 0x49a384: 0xc04e738  jal         func_139CE0
label_49a388:
    if (ctx->pc == 0x49A388u) {
        ctx->pc = 0x49A388u;
            // 0x49a388: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x49A38Cu;
        goto label_49a38c;
    }
    ctx->pc = 0x49A384u;
    SET_GPR_U32(ctx, 31, 0x49A38Cu);
    ctx->pc = 0x49A388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A384u;
            // 0x49a388: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A38Cu; }
        if (ctx->pc != 0x49A38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A38Cu; }
        if (ctx->pc != 0x49A38Cu) { return; }
    }
    ctx->pc = 0x49A38Cu;
label_49a38c:
    // 0x49a38c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49a390:
    // 0x49a390: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x49a390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_49a394:
    // 0x49a394: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x49a394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_49a398:
    // 0x49a398: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x49a398u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_49a39c:
    // 0x49a39c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49a3a0:
    // 0x49a3a0: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x49a3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_49a3a4:
    // 0x49a3a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49a3a8:
    // 0x49a3a8: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x49a3a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_49a3ac:
    // 0x49a3ac: 0xc055754  jal         func_155D50
label_49a3b0:
    if (ctx->pc == 0x49A3B0u) {
        ctx->pc = 0x49A3B0u;
            // 0x49a3b0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x49A3B4u;
        goto label_49a3b4;
    }
    ctx->pc = 0x49A3ACu;
    SET_GPR_U32(ctx, 31, 0x49A3B4u);
    ctx->pc = 0x49A3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A3ACu;
            // 0x49a3b0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A3B4u; }
        if (ctx->pc != 0x49A3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A3B4u; }
        if (ctx->pc != 0x49A3B4u) { return; }
    }
    ctx->pc = 0x49A3B4u;
label_49a3b4:
    // 0x49a3b4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x49a3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_49a3b8:
    // 0x49a3b8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x49a3b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_49a3bc:
    // 0x49a3bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x49a3bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_49a3c0:
    // 0x49a3c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x49a3c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49a3c4:
    // 0x49a3c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49a3c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49a3c8:
    // 0x49a3c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49a3c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49a3cc:
    // 0x49a3cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49a3ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49a3d0:
    // 0x49a3d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49a3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49a3d4:
    // 0x49a3d4: 0x3e00008  jr          $ra
label_49a3d8:
    if (ctx->pc == 0x49A3D8u) {
        ctx->pc = 0x49A3D8u;
            // 0x49a3d8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x49A3DCu;
        goto label_49a3dc;
    }
    ctx->pc = 0x49A3D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A3D4u;
            // 0x49a3d8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49A3DCu;
label_49a3dc:
    // 0x49a3dc: 0x0  nop
    ctx->pc = 0x49a3dcu;
    // NOP
label_49a3e0:
    // 0x49a3e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49a3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_49a3e4:
    // 0x49a3e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x49a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_49a3e8:
    // 0x49a3e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49a3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49a3ec:
    // 0x49a3ec: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x49a3ecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_49a3f0:
    // 0x49a3f0: 0x50a3000d  beql        $a1, $v1, . + 4 + (0xD << 2)
label_49a3f4:
    if (ctx->pc == 0x49A3F4u) {
        ctx->pc = 0x49A3F4u;
            // 0x49a3f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x49A3F8u;
        goto label_49a3f8;
    }
    ctx->pc = 0x49A3F0u;
    {
        const bool branch_taken_0x49a3f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x49a3f0) {
            ctx->pc = 0x49A3F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49A3F0u;
            // 0x49a3f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49A428u;
            goto label_49a428;
        }
    }
    ctx->pc = 0x49A3F8u;
label_49a3f8:
    // 0x49a3f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x49a3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49a3fc:
    // 0x49a3fc: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_49a400:
    if (ctx->pc == 0x49A400u) {
        ctx->pc = 0x49A400u;
            // 0x49a400: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x49A404u;
        goto label_49a404;
    }
    ctx->pc = 0x49A3FCu;
    {
        const bool branch_taken_0x49a3fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x49a3fc) {
            ctx->pc = 0x49A400u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49A3FCu;
            // 0x49a400: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49A418u;
            goto label_49a418;
        }
    }
    ctx->pc = 0x49A404u;
label_49a404:
    // 0x49a404: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x49a404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49a408:
    // 0x49a408: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_49a40c:
    if (ctx->pc == 0x49A40Cu) {
        ctx->pc = 0x49A410u;
        goto label_49a410;
    }
    ctx->pc = 0x49A408u;
    {
        const bool branch_taken_0x49a408 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x49a408) {
            ctx->pc = 0x49A424u;
            goto label_49a424;
        }
    }
    ctx->pc = 0x49A410u;
label_49a410:
    // 0x49a410: 0x10000004  b           . + 4 + (0x4 << 2)
label_49a414:
    if (ctx->pc == 0x49A414u) {
        ctx->pc = 0x49A418u;
        goto label_49a418;
    }
    ctx->pc = 0x49A410u;
    {
        const bool branch_taken_0x49a410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a410) {
            ctx->pc = 0x49A424u;
            goto label_49a424;
        }
    }
    ctx->pc = 0x49A418u;
label_49a418:
    // 0x49a418: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x49a418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_49a41c:
    // 0x49a41c: 0x320f809  jalr        $t9
label_49a420:
    if (ctx->pc == 0x49A420u) {
        ctx->pc = 0x49A424u;
        goto label_49a424;
    }
    ctx->pc = 0x49A41Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49A424u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49A424u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49A424u; }
            if (ctx->pc != 0x49A424u) { return; }
        }
        }
    }
    ctx->pc = 0x49A424u;
label_49a424:
    // 0x49a424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49a424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49a428:
    // 0x49a428: 0x3e00008  jr          $ra
label_49a42c:
    if (ctx->pc == 0x49A42Cu) {
        ctx->pc = 0x49A42Cu;
            // 0x49a42c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x49A430u;
        goto label_49a430;
    }
    ctx->pc = 0x49A428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A428u;
            // 0x49a42c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49A430u;
label_49a430:
    // 0x49a430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49a430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_49a434:
    // 0x49a434: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x49a434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_49a438:
    // 0x49a438: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49a438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_49a43c:
    // 0x49a43c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49a43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49a440:
    // 0x49a440: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49a440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49a444:
    // 0x49a444: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49a444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49a448:
    // 0x49a448: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x49a448u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_49a44c:
    // 0x49a44c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_49a450:
    if (ctx->pc == 0x49A450u) {
        ctx->pc = 0x49A450u;
            // 0x49a450: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49A454u;
        goto label_49a454;
    }
    ctx->pc = 0x49A44Cu;
    {
        const bool branch_taken_0x49a44c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A44Cu;
            // 0x49a450: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a44c) {
            ctx->pc = 0x49A488u;
            goto label_49a488;
        }
    }
    ctx->pc = 0x49A454u;
label_49a454:
    // 0x49a454: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49a454u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49a458:
    // 0x49a458: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x49a458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49a45c:
    // 0x49a45c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x49a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_49a460:
    // 0x49a460: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x49a460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_49a464:
    // 0x49a464: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x49a464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49a468:
    // 0x49a468: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49a468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49a46c:
    // 0x49a46c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x49a46cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_49a470:
    // 0x49a470: 0x320f809  jalr        $t9
label_49a474:
    if (ctx->pc == 0x49A474u) {
        ctx->pc = 0x49A478u;
        goto label_49a478;
    }
    ctx->pc = 0x49A470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49A478u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49A478u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49A478u; }
            if (ctx->pc != 0x49A478u) { return; }
        }
        }
    }
    ctx->pc = 0x49A478u;
label_49a478:
    // 0x49a478: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x49a478u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_49a47c:
    // 0x49a47c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x49a47cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_49a480:
    // 0x49a480: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_49a484:
    if (ctx->pc == 0x49A484u) {
        ctx->pc = 0x49A484u;
            // 0x49a484: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x49A488u;
        goto label_49a488;
    }
    ctx->pc = 0x49A480u;
    {
        const bool branch_taken_0x49a480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A480u;
            // 0x49a484: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a480) {
            ctx->pc = 0x49A45Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49a45c;
        }
    }
    ctx->pc = 0x49A488u;
label_49a488:
    // 0x49a488: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x49a488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_49a48c:
    // 0x49a48c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49a48cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49a490:
    // 0x49a490: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49a490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49a494:
    // 0x49a494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49a494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49a498:
    // 0x49a498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49a498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49a49c:
    // 0x49a49c: 0x3e00008  jr          $ra
label_49a4a0:
    if (ctx->pc == 0x49A4A0u) {
        ctx->pc = 0x49A4A0u;
            // 0x49a4a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x49A4A4u;
        goto label_49a4a4;
    }
    ctx->pc = 0x49A49Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A49Cu;
            // 0x49a4a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49A4A4u;
label_49a4a4:
    // 0x49a4a4: 0x0  nop
    ctx->pc = 0x49a4a4u;
    // NOP
label_49a4a8:
    // 0x49a4a8: 0x0  nop
    ctx->pc = 0x49a4a8u;
    // NOP
label_49a4ac:
    // 0x49a4ac: 0x0  nop
    ctx->pc = 0x49a4acu;
    // NOP
}
