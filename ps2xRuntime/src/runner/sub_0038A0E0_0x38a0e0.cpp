#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038A0E0
// Address: 0x38a0e0 - 0x38a4b0
void sub_0038A0E0_0x38a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A0E0_0x38a0e0");
#endif

    switch (ctx->pc) {
        case 0x38a0e0u: goto label_38a0e0;
        case 0x38a0e4u: goto label_38a0e4;
        case 0x38a0e8u: goto label_38a0e8;
        case 0x38a0ecu: goto label_38a0ec;
        case 0x38a0f0u: goto label_38a0f0;
        case 0x38a0f4u: goto label_38a0f4;
        case 0x38a0f8u: goto label_38a0f8;
        case 0x38a0fcu: goto label_38a0fc;
        case 0x38a100u: goto label_38a100;
        case 0x38a104u: goto label_38a104;
        case 0x38a108u: goto label_38a108;
        case 0x38a10cu: goto label_38a10c;
        case 0x38a110u: goto label_38a110;
        case 0x38a114u: goto label_38a114;
        case 0x38a118u: goto label_38a118;
        case 0x38a11cu: goto label_38a11c;
        case 0x38a120u: goto label_38a120;
        case 0x38a124u: goto label_38a124;
        case 0x38a128u: goto label_38a128;
        case 0x38a12cu: goto label_38a12c;
        case 0x38a130u: goto label_38a130;
        case 0x38a134u: goto label_38a134;
        case 0x38a138u: goto label_38a138;
        case 0x38a13cu: goto label_38a13c;
        case 0x38a140u: goto label_38a140;
        case 0x38a144u: goto label_38a144;
        case 0x38a148u: goto label_38a148;
        case 0x38a14cu: goto label_38a14c;
        case 0x38a150u: goto label_38a150;
        case 0x38a154u: goto label_38a154;
        case 0x38a158u: goto label_38a158;
        case 0x38a15cu: goto label_38a15c;
        case 0x38a160u: goto label_38a160;
        case 0x38a164u: goto label_38a164;
        case 0x38a168u: goto label_38a168;
        case 0x38a16cu: goto label_38a16c;
        case 0x38a170u: goto label_38a170;
        case 0x38a174u: goto label_38a174;
        case 0x38a178u: goto label_38a178;
        case 0x38a17cu: goto label_38a17c;
        case 0x38a180u: goto label_38a180;
        case 0x38a184u: goto label_38a184;
        case 0x38a188u: goto label_38a188;
        case 0x38a18cu: goto label_38a18c;
        case 0x38a190u: goto label_38a190;
        case 0x38a194u: goto label_38a194;
        case 0x38a198u: goto label_38a198;
        case 0x38a19cu: goto label_38a19c;
        case 0x38a1a0u: goto label_38a1a0;
        case 0x38a1a4u: goto label_38a1a4;
        case 0x38a1a8u: goto label_38a1a8;
        case 0x38a1acu: goto label_38a1ac;
        case 0x38a1b0u: goto label_38a1b0;
        case 0x38a1b4u: goto label_38a1b4;
        case 0x38a1b8u: goto label_38a1b8;
        case 0x38a1bcu: goto label_38a1bc;
        case 0x38a1c0u: goto label_38a1c0;
        case 0x38a1c4u: goto label_38a1c4;
        case 0x38a1c8u: goto label_38a1c8;
        case 0x38a1ccu: goto label_38a1cc;
        case 0x38a1d0u: goto label_38a1d0;
        case 0x38a1d4u: goto label_38a1d4;
        case 0x38a1d8u: goto label_38a1d8;
        case 0x38a1dcu: goto label_38a1dc;
        case 0x38a1e0u: goto label_38a1e0;
        case 0x38a1e4u: goto label_38a1e4;
        case 0x38a1e8u: goto label_38a1e8;
        case 0x38a1ecu: goto label_38a1ec;
        case 0x38a1f0u: goto label_38a1f0;
        case 0x38a1f4u: goto label_38a1f4;
        case 0x38a1f8u: goto label_38a1f8;
        case 0x38a1fcu: goto label_38a1fc;
        case 0x38a200u: goto label_38a200;
        case 0x38a204u: goto label_38a204;
        case 0x38a208u: goto label_38a208;
        case 0x38a20cu: goto label_38a20c;
        case 0x38a210u: goto label_38a210;
        case 0x38a214u: goto label_38a214;
        case 0x38a218u: goto label_38a218;
        case 0x38a21cu: goto label_38a21c;
        case 0x38a220u: goto label_38a220;
        case 0x38a224u: goto label_38a224;
        case 0x38a228u: goto label_38a228;
        case 0x38a22cu: goto label_38a22c;
        case 0x38a230u: goto label_38a230;
        case 0x38a234u: goto label_38a234;
        case 0x38a238u: goto label_38a238;
        case 0x38a23cu: goto label_38a23c;
        case 0x38a240u: goto label_38a240;
        case 0x38a244u: goto label_38a244;
        case 0x38a248u: goto label_38a248;
        case 0x38a24cu: goto label_38a24c;
        case 0x38a250u: goto label_38a250;
        case 0x38a254u: goto label_38a254;
        case 0x38a258u: goto label_38a258;
        case 0x38a25cu: goto label_38a25c;
        case 0x38a260u: goto label_38a260;
        case 0x38a264u: goto label_38a264;
        case 0x38a268u: goto label_38a268;
        case 0x38a26cu: goto label_38a26c;
        case 0x38a270u: goto label_38a270;
        case 0x38a274u: goto label_38a274;
        case 0x38a278u: goto label_38a278;
        case 0x38a27cu: goto label_38a27c;
        case 0x38a280u: goto label_38a280;
        case 0x38a284u: goto label_38a284;
        case 0x38a288u: goto label_38a288;
        case 0x38a28cu: goto label_38a28c;
        case 0x38a290u: goto label_38a290;
        case 0x38a294u: goto label_38a294;
        case 0x38a298u: goto label_38a298;
        case 0x38a29cu: goto label_38a29c;
        case 0x38a2a0u: goto label_38a2a0;
        case 0x38a2a4u: goto label_38a2a4;
        case 0x38a2a8u: goto label_38a2a8;
        case 0x38a2acu: goto label_38a2ac;
        case 0x38a2b0u: goto label_38a2b0;
        case 0x38a2b4u: goto label_38a2b4;
        case 0x38a2b8u: goto label_38a2b8;
        case 0x38a2bcu: goto label_38a2bc;
        case 0x38a2c0u: goto label_38a2c0;
        case 0x38a2c4u: goto label_38a2c4;
        case 0x38a2c8u: goto label_38a2c8;
        case 0x38a2ccu: goto label_38a2cc;
        case 0x38a2d0u: goto label_38a2d0;
        case 0x38a2d4u: goto label_38a2d4;
        case 0x38a2d8u: goto label_38a2d8;
        case 0x38a2dcu: goto label_38a2dc;
        case 0x38a2e0u: goto label_38a2e0;
        case 0x38a2e4u: goto label_38a2e4;
        case 0x38a2e8u: goto label_38a2e8;
        case 0x38a2ecu: goto label_38a2ec;
        case 0x38a2f0u: goto label_38a2f0;
        case 0x38a2f4u: goto label_38a2f4;
        case 0x38a2f8u: goto label_38a2f8;
        case 0x38a2fcu: goto label_38a2fc;
        case 0x38a300u: goto label_38a300;
        case 0x38a304u: goto label_38a304;
        case 0x38a308u: goto label_38a308;
        case 0x38a30cu: goto label_38a30c;
        case 0x38a310u: goto label_38a310;
        case 0x38a314u: goto label_38a314;
        case 0x38a318u: goto label_38a318;
        case 0x38a31cu: goto label_38a31c;
        case 0x38a320u: goto label_38a320;
        case 0x38a324u: goto label_38a324;
        case 0x38a328u: goto label_38a328;
        case 0x38a32cu: goto label_38a32c;
        case 0x38a330u: goto label_38a330;
        case 0x38a334u: goto label_38a334;
        case 0x38a338u: goto label_38a338;
        case 0x38a33cu: goto label_38a33c;
        case 0x38a340u: goto label_38a340;
        case 0x38a344u: goto label_38a344;
        case 0x38a348u: goto label_38a348;
        case 0x38a34cu: goto label_38a34c;
        case 0x38a350u: goto label_38a350;
        case 0x38a354u: goto label_38a354;
        case 0x38a358u: goto label_38a358;
        case 0x38a35cu: goto label_38a35c;
        case 0x38a360u: goto label_38a360;
        case 0x38a364u: goto label_38a364;
        case 0x38a368u: goto label_38a368;
        case 0x38a36cu: goto label_38a36c;
        case 0x38a370u: goto label_38a370;
        case 0x38a374u: goto label_38a374;
        case 0x38a378u: goto label_38a378;
        case 0x38a37cu: goto label_38a37c;
        case 0x38a380u: goto label_38a380;
        case 0x38a384u: goto label_38a384;
        case 0x38a388u: goto label_38a388;
        case 0x38a38cu: goto label_38a38c;
        case 0x38a390u: goto label_38a390;
        case 0x38a394u: goto label_38a394;
        case 0x38a398u: goto label_38a398;
        case 0x38a39cu: goto label_38a39c;
        case 0x38a3a0u: goto label_38a3a0;
        case 0x38a3a4u: goto label_38a3a4;
        case 0x38a3a8u: goto label_38a3a8;
        case 0x38a3acu: goto label_38a3ac;
        case 0x38a3b0u: goto label_38a3b0;
        case 0x38a3b4u: goto label_38a3b4;
        case 0x38a3b8u: goto label_38a3b8;
        case 0x38a3bcu: goto label_38a3bc;
        case 0x38a3c0u: goto label_38a3c0;
        case 0x38a3c4u: goto label_38a3c4;
        case 0x38a3c8u: goto label_38a3c8;
        case 0x38a3ccu: goto label_38a3cc;
        case 0x38a3d0u: goto label_38a3d0;
        case 0x38a3d4u: goto label_38a3d4;
        case 0x38a3d8u: goto label_38a3d8;
        case 0x38a3dcu: goto label_38a3dc;
        case 0x38a3e0u: goto label_38a3e0;
        case 0x38a3e4u: goto label_38a3e4;
        case 0x38a3e8u: goto label_38a3e8;
        case 0x38a3ecu: goto label_38a3ec;
        case 0x38a3f0u: goto label_38a3f0;
        case 0x38a3f4u: goto label_38a3f4;
        case 0x38a3f8u: goto label_38a3f8;
        case 0x38a3fcu: goto label_38a3fc;
        case 0x38a400u: goto label_38a400;
        case 0x38a404u: goto label_38a404;
        case 0x38a408u: goto label_38a408;
        case 0x38a40cu: goto label_38a40c;
        case 0x38a410u: goto label_38a410;
        case 0x38a414u: goto label_38a414;
        case 0x38a418u: goto label_38a418;
        case 0x38a41cu: goto label_38a41c;
        case 0x38a420u: goto label_38a420;
        case 0x38a424u: goto label_38a424;
        case 0x38a428u: goto label_38a428;
        case 0x38a42cu: goto label_38a42c;
        case 0x38a430u: goto label_38a430;
        case 0x38a434u: goto label_38a434;
        case 0x38a438u: goto label_38a438;
        case 0x38a43cu: goto label_38a43c;
        case 0x38a440u: goto label_38a440;
        case 0x38a444u: goto label_38a444;
        case 0x38a448u: goto label_38a448;
        case 0x38a44cu: goto label_38a44c;
        case 0x38a450u: goto label_38a450;
        case 0x38a454u: goto label_38a454;
        case 0x38a458u: goto label_38a458;
        case 0x38a45cu: goto label_38a45c;
        case 0x38a460u: goto label_38a460;
        case 0x38a464u: goto label_38a464;
        case 0x38a468u: goto label_38a468;
        case 0x38a46cu: goto label_38a46c;
        case 0x38a470u: goto label_38a470;
        case 0x38a474u: goto label_38a474;
        case 0x38a478u: goto label_38a478;
        case 0x38a47cu: goto label_38a47c;
        case 0x38a480u: goto label_38a480;
        case 0x38a484u: goto label_38a484;
        case 0x38a488u: goto label_38a488;
        case 0x38a48cu: goto label_38a48c;
        case 0x38a490u: goto label_38a490;
        case 0x38a494u: goto label_38a494;
        case 0x38a498u: goto label_38a498;
        case 0x38a49cu: goto label_38a49c;
        case 0x38a4a0u: goto label_38a4a0;
        case 0x38a4a4u: goto label_38a4a4;
        case 0x38a4a8u: goto label_38a4a8;
        case 0x38a4acu: goto label_38a4ac;
        default: break;
    }

    ctx->pc = 0x38a0e0u;

label_38a0e0:
    // 0x38a0e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x38a0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_38a0e4:
    // 0x38a0e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x38a0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_38a0e8:
    // 0x38a0e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x38a0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_38a0ec:
    // 0x38a0ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38a0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_38a0f0:
    // 0x38a0f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x38a0f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38a0f4:
    // 0x38a0f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38a0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38a0f8:
    // 0x38a0f8: 0x2683000c  addiu       $v1, $s4, 0xC
    ctx->pc = 0x38a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_38a0fc:
    // 0x38a0fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38a0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38a100:
    // 0x38a100: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x38a100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38a104:
    // 0x38a104: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38a104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38a108:
    // 0x38a108: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38a108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38a10c:
    // 0x38a10c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x38a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_38a110:
    // 0x38a110: 0x8ce40db0  lw          $a0, 0xDB0($a3)
    ctx->pc = 0x38a110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3504)));
label_38a114:
    // 0x38a114: 0x108000de  beqz        $a0, . + 4 + (0xDE << 2)
label_38a118:
    if (ctx->pc == 0x38A118u) {
        ctx->pc = 0x38A118u;
            // 0x38a118: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38A11Cu;
        goto label_38a11c;
    }
    ctx->pc = 0x38A114u;
    {
        const bool branch_taken_0x38a114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A114u;
            // 0x38a118: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a114) {
            ctx->pc = 0x38A490u;
            goto label_38a490;
        }
    }
    ctx->pc = 0x38A11Cu;
label_38a11c:
    // 0x38a11c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x38a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_38a120:
    // 0x38a120: 0x508300dc  beql        $a0, $v1, . + 4 + (0xDC << 2)
label_38a124:
    if (ctx->pc == 0x38A124u) {
        ctx->pc = 0x38A124u;
            // 0x38a124: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x38A128u;
        goto label_38a128;
    }
    ctx->pc = 0x38A120u;
    {
        const bool branch_taken_0x38a120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38a120) {
            ctx->pc = 0x38A124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38A120u;
            // 0x38a124: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38A494u;
            goto label_38a494;
        }
    }
    ctx->pc = 0x38A128u;
label_38a128:
    // 0x38a128: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x38a128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_38a12c:
    // 0x38a12c: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
label_38a130:
    if (ctx->pc == 0x38A130u) {
        ctx->pc = 0x38A130u;
            // 0x38a130: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x38A134u;
        goto label_38a134;
    }
    ctx->pc = 0x38A12Cu;
    {
        const bool branch_taken_0x38a12c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x38a12c) {
            ctx->pc = 0x38A130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38A12Cu;
            // 0x38a130: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38A140u;
            goto label_38a140;
        }
    }
    ctx->pc = 0x38A134u;
label_38a134:
    // 0x38a134: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_38a138:
    if (ctx->pc == 0x38A138u) {
        ctx->pc = 0x38A13Cu;
        goto label_38a13c;
    }
    ctx->pc = 0x38A134u;
    {
        const bool branch_taken_0x38a134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a134) {
            ctx->pc = 0x38A490u;
            goto label_38a490;
        }
    }
    ctx->pc = 0x38A13Cu;
label_38a13c:
    // 0x38a13c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x38a13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_38a140:
    // 0x38a140: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x38a140u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_38a144:
    // 0x38a144: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x38a144u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_38a148:
    // 0x38a148: 0x102000d1  beqz        $at, . + 4 + (0xD1 << 2)
label_38a14c:
    if (ctx->pc == 0x38A14Cu) {
        ctx->pc = 0x38A150u;
        goto label_38a150;
    }
    ctx->pc = 0x38A148u;
    {
        const bool branch_taken_0x38a148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a148) {
            ctx->pc = 0x38A490u;
            goto label_38a490;
        }
    }
    ctx->pc = 0x38A150u;
label_38a150:
    // 0x38a150: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x38a150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_38a154:
    // 0x38a154: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38a154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_38a158:
    // 0x38a158: 0x24845e10  addiu       $a0, $a0, 0x5E10
    ctx->pc = 0x38a158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24080));
label_38a15c:
    // 0x38a15c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38a160:
    // 0x38a160: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x38a160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38a164:
    // 0x38a164: 0x600008  jr          $v1
label_38a168:
    if (ctx->pc == 0x38A168u) {
        ctx->pc = 0x38A16Cu;
        goto label_38a16c;
    }
    ctx->pc = 0x38A164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x38A16Cu: goto label_38a16c;
            case 0x38A300u: goto label_38a300;
            case 0x38A31Cu: goto label_38a31c;
            case 0x38A34Cu: goto label_38a34c;
            case 0x38A490u: goto label_38a490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x38A16Cu;
label_38a16c:
    // 0x38a16c: 0x8e2211d4  lw          $v0, 0x11D4($s1)
    ctx->pc = 0x38a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4564)));
label_38a170:
    // 0x38a170: 0x38430002  xori        $v1, $v0, 0x2
    ctx->pc = 0x38a170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_38a174:
    // 0x38a174: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x38a174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_38a178:
    // 0x38a178: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x38a178u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_38a17c:
    // 0x38a17c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x38a17cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_38a180:
    // 0x38a180: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x38a180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38a184:
    // 0x38a184: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_38a188:
    if (ctx->pc == 0x38A188u) {
        ctx->pc = 0x38A188u;
            // 0x38a188: 0x8e220d70  lw          $v0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->pc = 0x38A18Cu;
        goto label_38a18c;
    }
    ctx->pc = 0x38A184u;
    {
        const bool branch_taken_0x38a184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a184) {
            ctx->pc = 0x38A188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38A184u;
            // 0x38a188: 0x8e220d70  lw          $v0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38A1A4u;
            goto label_38a1a4;
        }
    }
    ctx->pc = 0x38A18Cu;
label_38a18c:
    // 0x38a18c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38a18cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38a190:
    // 0x38a190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38a194:
    // 0x38a194: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x38a194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_38a198:
    // 0x38a198: 0x320f809  jalr        $t9
label_38a19c:
    if (ctx->pc == 0x38A19Cu) {
        ctx->pc = 0x38A19Cu;
            // 0x38a19c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x38A1A0u;
        goto label_38a1a0;
    }
    ctx->pc = 0x38A198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A1A0u);
        ctx->pc = 0x38A19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A198u;
            // 0x38a19c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A1A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A1A0u; }
            if (ctx->pc != 0x38A1A0u) { return; }
        }
        }
    }
    ctx->pc = 0x38A1A0u;
label_38a1a0:
    // 0x38a1a0: 0x8e220d70  lw          $v0, 0xD70($s1)
    ctx->pc = 0x38a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_38a1a4:
    // 0x38a1a4: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x38a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_38a1a8:
    // 0x38a1a8: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_38a1ac:
    if (ctx->pc == 0x38A1ACu) {
        ctx->pc = 0x38A1ACu;
            // 0x38a1ac: 0x3c023eed  lui         $v0, 0x3EED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
        ctx->pc = 0x38A1B0u;
        goto label_38a1b0;
    }
    ctx->pc = 0x38A1A8u;
    {
        const bool branch_taken_0x38a1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a1a8) {
            ctx->pc = 0x38A1ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38A1A8u;
            // 0x38a1ac: 0x3c023eed  lui         $v0, 0x3EED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38A258u;
            goto label_38a258;
        }
    }
    ctx->pc = 0x38A1B0u;
label_38a1b0:
    // 0x38a1b0: 0x8e230d6c  lw          $v1, 0xD6C($s1)
    ctx->pc = 0x38a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_38a1b4:
    // 0x38a1b4: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x38a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_38a1b8:
    // 0x38a1b8: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x38a1b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_38a1bc:
    // 0x38a1bc: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_38a1c0:
    if (ctx->pc == 0x38A1C0u) {
        ctx->pc = 0x38A1C4u;
        goto label_38a1c4;
    }
    ctx->pc = 0x38A1BCu;
    {
        const bool branch_taken_0x38a1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38a1bc) {
            ctx->pc = 0x38A254u;
            goto label_38a254;
        }
    }
    ctx->pc = 0x38A1C4u;
label_38a1c4:
    // 0x38a1c4: 0x8e300550  lw          $s0, 0x550($s1)
    ctx->pc = 0x38a1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_38a1c8:
    // 0x38a1c8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x38a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_38a1cc:
    // 0x38a1cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x38a1ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_38a1d0:
    // 0x38a1d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38a1d4:
    // 0x38a1d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x38a1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38a1d8:
    // 0x38a1d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38a1d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38a1dc:
    // 0x38a1dc: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x38a1dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_38a1e0:
    // 0x38a1e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x38a1e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38a1e4:
    // 0x38a1e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a1e8:
    // 0x38a1e8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x38a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38a1ec:
    // 0x38a1ec: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x38a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_38a1f0:
    // 0x38a1f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38a1f4:
    // 0x38a1f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x38a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_38a1f8:
    // 0x38a1f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x38a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_38a1fc:
    // 0x38a1fc: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x38a1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_38a200:
    // 0x38a200: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x38a200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_38a204:
    // 0x38a204: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x38a204u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_38a208:
    // 0x38a208: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x38a208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_38a20c:
    // 0x38a20c: 0x320f809  jalr        $t9
label_38a210:
    if (ctx->pc == 0x38A210u) {
        ctx->pc = 0x38A210u;
            // 0x38a210: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x38A214u;
        goto label_38a214;
    }
    ctx->pc = 0x38A20Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A214u);
        ctx->pc = 0x38A210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A20Cu;
            // 0x38a210: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A214u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A214u; }
            if (ctx->pc != 0x38A214u) { return; }
        }
        }
    }
    ctx->pc = 0x38A214u;
label_38a214:
    // 0x38a214: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x38a214u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_38a218:
    // 0x38a218: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x38a218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_38a21c:
    // 0x38a21c: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x38a21cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_38a220:
    // 0x38a220: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x38a220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38a224:
    // 0x38a224: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x38a224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_38a228:
    // 0x38a228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a22c:
    // 0x38a22c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x38a22cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_38a230:
    // 0x38a230: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x38a230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_38a234:
    // 0x38a234: 0x320f809  jalr        $t9
label_38a238:
    if (ctx->pc == 0x38A238u) {
        ctx->pc = 0x38A238u;
            // 0x38a238: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x38A23Cu;
        goto label_38a23c;
    }
    ctx->pc = 0x38A234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A23Cu);
        ctx->pc = 0x38A238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A234u;
            // 0x38a238: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A23Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A23Cu; }
            if (ctx->pc != 0x38A23Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38A23Cu;
label_38a23c:
    // 0x38a23c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x38a23cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_38a240:
    // 0x38a240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a244:
    // 0x38a244: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x38a244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_38a248:
    // 0x38a248: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x38a248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_38a24c:
    // 0x38a24c: 0x320f809  jalr        $t9
label_38a250:
    if (ctx->pc == 0x38A250u) {
        ctx->pc = 0x38A250u;
            // 0x38a250: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38A254u;
        goto label_38a254;
    }
    ctx->pc = 0x38A24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A254u);
        ctx->pc = 0x38A250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A24Cu;
            // 0x38a250: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A254u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A254u; }
            if (ctx->pc != 0x38A254u) { return; }
        }
        }
    }
    ctx->pc = 0x38A254u;
label_38a254:
    // 0x38a254: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x38a254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_38a258:
    // 0x38a258: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x38a258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_38a25c:
    // 0x38a25c: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x38a25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38a260:
    // 0x38a260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38a260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a264:
    // 0x38a264: 0x0  nop
    ctx->pc = 0x38a264u;
    // NOP
label_38a268:
    // 0x38a268: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38a268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38a26c:
    // 0x38a26c: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_38a270:
    if (ctx->pc == 0x38A270u) {
        ctx->pc = 0x38A270u;
            // 0x38a270: 0x3c023e6d  lui         $v0, 0x3E6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
        ctx->pc = 0x38A274u;
        goto label_38a274;
    }
    ctx->pc = 0x38A26Cu;
    {
        const bool branch_taken_0x38a26c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38a26c) {
            ctx->pc = 0x38A270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38A26Cu;
            // 0x38a270: 0x3c023e6d  lui         $v0, 0x3E6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38A294u;
            goto label_38a294;
        }
    }
    ctx->pc = 0x38A274u;
label_38a274:
    // 0x38a274: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x38a274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_38a278:
    // 0x38a278: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x38a278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_38a27c:
    // 0x38a27c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38a27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a280:
    // 0x38a280: 0x0  nop
    ctx->pc = 0x38a280u;
    // NOP
label_38a284:
    // 0x38a284: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x38a284u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38a288:
    // 0x38a288: 0x10000009  b           . + 4 + (0x9 << 2)
label_38a28c:
    if (ctx->pc == 0x38A28Cu) {
        ctx->pc = 0x38A28Cu;
            // 0x38a28c: 0xe6200de4  swc1        $f0, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->pc = 0x38A290u;
        goto label_38a290;
    }
    ctx->pc = 0x38A288u;
    {
        const bool branch_taken_0x38a288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A288u;
            // 0x38a28c: 0xe6200de4  swc1        $f0, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a288) {
            ctx->pc = 0x38A2B0u;
            goto label_38a2b0;
        }
    }
    ctx->pc = 0x38A290u;
label_38a290:
    // 0x38a290: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x38a290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_38a294:
    // 0x38a294: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x38a294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_38a298:
    // 0x38a298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38a298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a29c:
    // 0x38a29c: 0x0  nop
    ctx->pc = 0x38a29cu;
    // NOP
label_38a2a0:
    // 0x38a2a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38a2a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38a2a4:
    // 0x38a2a4: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_38a2a8:
    if (ctx->pc == 0x38A2A8u) {
        ctx->pc = 0x38A2A8u;
            // 0x38a2a8: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x38A2ACu;
        goto label_38a2ac;
    }
    ctx->pc = 0x38A2A4u;
    {
        const bool branch_taken_0x38a2a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38a2a4) {
            ctx->pc = 0x38A2A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38A2A4u;
            // 0x38a2a8: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38A2B4u;
            goto label_38a2b4;
        }
    }
    ctx->pc = 0x38A2ACu;
label_38a2ac:
    // 0x38a2ac: 0xe6200de4  swc1        $f0, 0xDE4($s1)
    ctx->pc = 0x38a2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
label_38a2b0:
    // 0x38a2b0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x38a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_38a2b4:
    // 0x38a2b4: 0x3c023f55  lui         $v0, 0x3F55
    ctx->pc = 0x38a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16213 << 16));
label_38a2b8:
    // 0x38a2b8: 0x34425555  ori         $v0, $v0, 0x5555
    ctx->pc = 0x38a2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
label_38a2bc:
    // 0x38a2bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38a2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38a2c0:
    // 0x38a2c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38a2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38a2c4:
    // 0x38a2c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x38a2c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38a2c8:
    // 0x38a2c8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x38a2c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_38a2cc:
    // 0x38a2cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38a2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38a2d0:
    // 0x38a2d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x38a2d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38a2d4:
    // 0x38a2d4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x38a2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_38a2d8:
    // 0x38a2d8: 0xc0e256c  jal         func_3895B0
label_38a2dc:
    if (ctx->pc == 0x38A2DCu) {
        ctx->pc = 0x38A2DCu;
            // 0x38a2dc: 0x2c480001  sltiu       $t0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x38A2E0u;
        goto label_38a2e0;
    }
    ctx->pc = 0x38A2D8u;
    SET_GPR_U32(ctx, 31, 0x38A2E0u);
    ctx->pc = 0x38A2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38A2D8u;
            // 0x38a2dc: 0x2c480001  sltiu       $t0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3895B0u;
    if (runtime->hasFunction(0x3895B0u)) {
        auto targetFn = runtime->lookupFunction(0x3895B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38A2E0u; }
        if (ctx->pc != 0x38A2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003895B0_0x3895b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38A2E0u; }
        if (ctx->pc != 0x38A2E0u) { return; }
    }
    ctx->pc = 0x38A2E0u;
label_38a2e0:
    // 0x38a2e0: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x38a2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_38a2e4:
    // 0x38a2e4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x38a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_38a2e8:
    // 0x38a2e8: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x38a2e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_38a2ec:
    // 0x38a2ec: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x38a2ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_38a2f0:
    // 0x38a2f0: 0x320f809  jalr        $t9
label_38a2f4:
    if (ctx->pc == 0x38A2F4u) {
        ctx->pc = 0x38A2F4u;
            // 0x38a2f4: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x38A2F8u;
        goto label_38a2f8;
    }
    ctx->pc = 0x38A2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A2F8u);
        ctx->pc = 0x38A2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A2F0u;
            // 0x38a2f4: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A2F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A2F8u; }
            if (ctx->pc != 0x38A2F8u) { return; }
        }
        }
    }
    ctx->pc = 0x38A2F8u;
label_38a2f8:
    // 0x38a2f8: 0x10000065  b           . + 4 + (0x65 << 2)
label_38a2fc:
    if (ctx->pc == 0x38A2FCu) {
        ctx->pc = 0x38A300u;
        goto label_38a300;
    }
    ctx->pc = 0x38A2F8u;
    {
        const bool branch_taken_0x38a2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a2f8) {
            ctx->pc = 0x38A490u;
            goto label_38a490;
        }
    }
    ctx->pc = 0x38A300u;
label_38a300:
    // 0x38a300: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38a300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38a304:
    // 0x38a304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38a308:
    // 0x38a308: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x38a308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_38a30c:
    // 0x38a30c: 0x320f809  jalr        $t9
label_38a310:
    if (ctx->pc == 0x38A310u) {
        ctx->pc = 0x38A310u;
            // 0x38a310: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38A314u;
        goto label_38a314;
    }
    ctx->pc = 0x38A30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A314u);
        ctx->pc = 0x38A310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A30Cu;
            // 0x38a310: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A314u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A314u; }
            if (ctx->pc != 0x38A314u) { return; }
        }
        }
    }
    ctx->pc = 0x38A314u;
label_38a314:
    // 0x38a314: 0x1000005e  b           . + 4 + (0x5E << 2)
label_38a318:
    if (ctx->pc == 0x38A318u) {
        ctx->pc = 0x38A31Cu;
        goto label_38a31c;
    }
    ctx->pc = 0x38A314u;
    {
        const bool branch_taken_0x38a314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a314) {
            ctx->pc = 0x38A490u;
            goto label_38a490;
        }
    }
    ctx->pc = 0x38A31Cu;
label_38a31c:
    // 0x38a31c: 0xc66c0010  lwc1        $f12, 0x10($s3)
    ctx->pc = 0x38a31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38a320:
    // 0x38a320: 0xc66d0014  lwc1        $f13, 0x14($s3)
    ctx->pc = 0x38a320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_38a324:
    // 0x38a324: 0xc66e0018  lwc1        $f14, 0x18($s3)
    ctx->pc = 0x38a324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_38a328:
    // 0x38a328: 0xc04cbd8  jal         func_132F60
label_38a32c:
    if (ctx->pc == 0x38A32Cu) {
        ctx->pc = 0x38A32Cu;
            // 0x38a32c: 0x26240bc0  addiu       $a0, $s1, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3008));
        ctx->pc = 0x38A330u;
        goto label_38a330;
    }
    ctx->pc = 0x38A328u;
    SET_GPR_U32(ctx, 31, 0x38A330u);
    ctx->pc = 0x38A32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38A328u;
            // 0x38a32c: 0x26240bc0  addiu       $a0, $s1, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38A330u; }
        if (ctx->pc != 0x38A330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38A330u; }
        if (ctx->pc != 0x38A330u) { return; }
    }
    ctx->pc = 0x38A330u;
label_38a330:
    // 0x38a330: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38a330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38a334:
    // 0x38a334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38a338:
    // 0x38a338: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x38a338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_38a33c:
    // 0x38a33c: 0x320f809  jalr        $t9
label_38a340:
    if (ctx->pc == 0x38A340u) {
        ctx->pc = 0x38A340u;
            // 0x38a340: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x38A344u;
        goto label_38a344;
    }
    ctx->pc = 0x38A33Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A344u);
        ctx->pc = 0x38A340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A33Cu;
            // 0x38a340: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A344u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A344u; }
            if (ctx->pc != 0x38A344u) { return; }
        }
        }
    }
    ctx->pc = 0x38A344u;
label_38a344:
    // 0x38a344: 0x10000052  b           . + 4 + (0x52 << 2)
label_38a348:
    if (ctx->pc == 0x38A348u) {
        ctx->pc = 0x38A34Cu;
        goto label_38a34c;
    }
    ctx->pc = 0x38A344u;
    {
        const bool branch_taken_0x38a344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a344) {
            ctx->pc = 0x38A490u;
            goto label_38a490;
        }
    }
    ctx->pc = 0x38A34Cu;
label_38a34c:
    // 0x38a34c: 0x8e2311d4  lw          $v1, 0x11D4($s1)
    ctx->pc = 0x38a34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4564)));
label_38a350:
    // 0x38a350: 0x38640002  xori        $a0, $v1, 0x2
    ctx->pc = 0x38a350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_38a354:
    // 0x38a354: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x38a354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_38a358:
    // 0x38a358: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x38a358u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_38a35c:
    // 0x38a35c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x38a35cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_38a360:
    // 0x38a360: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x38a360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_38a364:
    // 0x38a364: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_38a368:
    if (ctx->pc == 0x38A368u) {
        ctx->pc = 0x38A368u;
            // 0x38a368: 0x8e230d70  lw          $v1, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->pc = 0x38A36Cu;
        goto label_38a36c;
    }
    ctx->pc = 0x38A364u;
    {
        const bool branch_taken_0x38a364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a364) {
            ctx->pc = 0x38A368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38A364u;
            // 0x38a368: 0x8e230d70  lw          $v1, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38A384u;
            goto label_38a384;
        }
    }
    ctx->pc = 0x38A36Cu;
label_38a36c:
    // 0x38a36c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38a36cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38a370:
    // 0x38a370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38a374:
    // 0x38a374: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x38a374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_38a378:
    // 0x38a378: 0x320f809  jalr        $t9
label_38a37c:
    if (ctx->pc == 0x38A37Cu) {
        ctx->pc = 0x38A37Cu;
            // 0x38a37c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x38A380u;
        goto label_38a380;
    }
    ctx->pc = 0x38A378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A380u);
        ctx->pc = 0x38A37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A378u;
            // 0x38a37c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A380u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A380u; }
            if (ctx->pc != 0x38A380u) { return; }
        }
        }
    }
    ctx->pc = 0x38A380u;
label_38a380:
    // 0x38a380: 0x8e230d70  lw          $v1, 0xD70($s1)
    ctx->pc = 0x38a380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_38a384:
    // 0x38a384: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x38a384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_38a388:
    // 0x38a388: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
label_38a38c:
    if (ctx->pc == 0x38A38Cu) {
        ctx->pc = 0x38A38Cu;
            // 0x38a38c: 0x3c033eed  lui         $v1, 0x3EED (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
        ctx->pc = 0x38A390u;
        goto label_38a390;
    }
    ctx->pc = 0x38A388u;
    {
        const bool branch_taken_0x38a388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a388) {
            ctx->pc = 0x38A38Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38A388u;
            // 0x38a38c: 0x3c033eed  lui         $v1, 0x3EED (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38A438u;
            goto label_38a438;
        }
    }
    ctx->pc = 0x38A390u;
label_38a390:
    // 0x38a390: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x38a390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_38a394:
    // 0x38a394: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x38a394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_38a398:
    // 0x38a398: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x38a398u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_38a39c:
    // 0x38a39c: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
label_38a3a0:
    if (ctx->pc == 0x38A3A0u) {
        ctx->pc = 0x38A3A4u;
        goto label_38a3a4;
    }
    ctx->pc = 0x38A39Cu;
    {
        const bool branch_taken_0x38a39c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38a39c) {
            ctx->pc = 0x38A434u;
            goto label_38a434;
        }
    }
    ctx->pc = 0x38A3A4u;
label_38a3a4:
    // 0x38a3a4: 0x8e300550  lw          $s0, 0x550($s1)
    ctx->pc = 0x38a3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_38a3a8:
    // 0x38a3a8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x38a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_38a3ac:
    // 0x38a3ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x38a3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_38a3b0:
    // 0x38a3b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38a3b4:
    // 0x38a3b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x38a3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38a3b8:
    // 0x38a3b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38a3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38a3bc:
    // 0x38a3bc: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x38a3bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_38a3c0:
    // 0x38a3c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x38a3c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38a3c4:
    // 0x38a3c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a3c8:
    // 0x38a3c8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x38a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38a3cc:
    // 0x38a3cc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x38a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_38a3d0:
    // 0x38a3d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38a3d4:
    // 0x38a3d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x38a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_38a3d8:
    // 0x38a3d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x38a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_38a3dc:
    // 0x38a3dc: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x38a3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_38a3e0:
    // 0x38a3e0: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x38a3e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_38a3e4:
    // 0x38a3e4: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x38a3e4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_38a3e8:
    // 0x38a3e8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x38a3e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_38a3ec:
    // 0x38a3ec: 0x320f809  jalr        $t9
label_38a3f0:
    if (ctx->pc == 0x38A3F0u) {
        ctx->pc = 0x38A3F0u;
            // 0x38a3f0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x38A3F4u;
        goto label_38a3f4;
    }
    ctx->pc = 0x38A3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A3F4u);
        ctx->pc = 0x38A3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A3ECu;
            // 0x38a3f0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A3F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A3F4u; }
            if (ctx->pc != 0x38A3F4u) { return; }
        }
        }
    }
    ctx->pc = 0x38A3F4u;
label_38a3f4:
    // 0x38a3f4: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x38a3f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_38a3f8:
    // 0x38a3f8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x38a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_38a3fc:
    // 0x38a3fc: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x38a3fcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_38a400:
    // 0x38a400: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x38a400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38a404:
    // 0x38a404: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x38a404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_38a408:
    // 0x38a408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a40c:
    // 0x38a40c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x38a40cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_38a410:
    // 0x38a410: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x38a410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_38a414:
    // 0x38a414: 0x320f809  jalr        $t9
label_38a418:
    if (ctx->pc == 0x38A418u) {
        ctx->pc = 0x38A418u;
            // 0x38a418: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x38A41Cu;
        goto label_38a41c;
    }
    ctx->pc = 0x38A414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A41Cu);
        ctx->pc = 0x38A418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A414u;
            // 0x38a418: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A41Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A41Cu; }
            if (ctx->pc != 0x38A41Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38A41Cu;
label_38a41c:
    // 0x38a41c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x38a41cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_38a420:
    // 0x38a420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a424:
    // 0x38a424: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x38a424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_38a428:
    // 0x38a428: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x38a428u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_38a42c:
    // 0x38a42c: 0x320f809  jalr        $t9
label_38a430:
    if (ctx->pc == 0x38A430u) {
        ctx->pc = 0x38A430u;
            // 0x38a430: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38A434u;
        goto label_38a434;
    }
    ctx->pc = 0x38A42Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A434u);
        ctx->pc = 0x38A430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A42Cu;
            // 0x38a430: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38A434u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38A434u; }
            if (ctx->pc != 0x38A434u) { return; }
        }
        }
    }
    ctx->pc = 0x38A434u;
label_38a434:
    // 0x38a434: 0x3c033eed  lui         $v1, 0x3EED
    ctx->pc = 0x38a434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
label_38a438:
    // 0x38a438: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x38a438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_38a43c:
    // 0x38a43c: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x38a43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38a440:
    // 0x38a440: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38a440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a444:
    // 0x38a444: 0x0  nop
    ctx->pc = 0x38a444u;
    // NOP
label_38a448:
    // 0x38a448: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38a448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38a44c:
    // 0x38a44c: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_38a450:
    if (ctx->pc == 0x38A450u) {
        ctx->pc = 0x38A450u;
            // 0x38a450: 0x3c033e6d  lui         $v1, 0x3E6D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15981 << 16));
        ctx->pc = 0x38A454u;
        goto label_38a454;
    }
    ctx->pc = 0x38A44Cu;
    {
        const bool branch_taken_0x38a44c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38a44c) {
            ctx->pc = 0x38A450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38A44Cu;
            // 0x38a450: 0x3c033e6d  lui         $v1, 0x3E6D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15981 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38A474u;
            goto label_38a474;
        }
    }
    ctx->pc = 0x38A454u;
label_38a454:
    // 0x38a454: 0x3c033e6d  lui         $v1, 0x3E6D
    ctx->pc = 0x38a454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15981 << 16));
label_38a458:
    // 0x38a458: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x38a458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_38a45c:
    // 0x38a45c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38a45cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a460:
    // 0x38a460: 0x0  nop
    ctx->pc = 0x38a460u;
    // NOP
label_38a464:
    // 0x38a464: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x38a464u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38a468:
    // 0x38a468: 0x10000009  b           . + 4 + (0x9 << 2)
label_38a46c:
    if (ctx->pc == 0x38A46Cu) {
        ctx->pc = 0x38A46Cu;
            // 0x38a46c: 0xe6200de4  swc1        $f0, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->pc = 0x38A470u;
        goto label_38a470;
    }
    ctx->pc = 0x38A468u;
    {
        const bool branch_taken_0x38a468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A468u;
            // 0x38a46c: 0xe6200de4  swc1        $f0, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a468) {
            ctx->pc = 0x38A490u;
            goto label_38a490;
        }
    }
    ctx->pc = 0x38A470u;
label_38a470:
    // 0x38a470: 0x3c033e6d  lui         $v1, 0x3E6D
    ctx->pc = 0x38a470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15981 << 16));
label_38a474:
    // 0x38a474: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x38a474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_38a478:
    // 0x38a478: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38a478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a47c:
    // 0x38a47c: 0x0  nop
    ctx->pc = 0x38a47cu;
    // NOP
label_38a480:
    // 0x38a480: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38a480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38a484:
    // 0x38a484: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_38a488:
    if (ctx->pc == 0x38A488u) {
        ctx->pc = 0x38A48Cu;
        goto label_38a48c;
    }
    ctx->pc = 0x38A484u;
    {
        const bool branch_taken_0x38a484 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38a484) {
            ctx->pc = 0x38A490u;
            goto label_38a490;
        }
    }
    ctx->pc = 0x38A48Cu;
label_38a48c:
    // 0x38a48c: 0xe6200de4  swc1        $f0, 0xDE4($s1)
    ctx->pc = 0x38a48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
label_38a490:
    // 0x38a490: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x38a490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_38a494:
    // 0x38a494: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x38a494u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38a498:
    // 0x38a498: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38a498u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38a49c:
    // 0x38a49c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38a49cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38a4a0:
    // 0x38a4a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38a4a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38a4a4:
    // 0x38a4a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38a4a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38a4a8:
    // 0x38a4a8: 0x3e00008  jr          $ra
label_38a4ac:
    if (ctx->pc == 0x38A4ACu) {
        ctx->pc = 0x38A4ACu;
            // 0x38a4ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x38A4B0u;
        goto label_fallthrough_0x38a4a8;
    }
    ctx->pc = 0x38A4A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A4A8u;
            // 0x38a4ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x38a4a8:
    ctx->pc = 0x38A4B0u;
}
