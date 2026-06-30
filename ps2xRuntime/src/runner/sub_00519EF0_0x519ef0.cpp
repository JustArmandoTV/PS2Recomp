#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00519EF0
// Address: 0x519ef0 - 0x51a3a0
void sub_00519EF0_0x519ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00519EF0_0x519ef0");
#endif

    switch (ctx->pc) {
        case 0x519ef0u: goto label_519ef0;
        case 0x519ef4u: goto label_519ef4;
        case 0x519ef8u: goto label_519ef8;
        case 0x519efcu: goto label_519efc;
        case 0x519f00u: goto label_519f00;
        case 0x519f04u: goto label_519f04;
        case 0x519f08u: goto label_519f08;
        case 0x519f0cu: goto label_519f0c;
        case 0x519f10u: goto label_519f10;
        case 0x519f14u: goto label_519f14;
        case 0x519f18u: goto label_519f18;
        case 0x519f1cu: goto label_519f1c;
        case 0x519f20u: goto label_519f20;
        case 0x519f24u: goto label_519f24;
        case 0x519f28u: goto label_519f28;
        case 0x519f2cu: goto label_519f2c;
        case 0x519f30u: goto label_519f30;
        case 0x519f34u: goto label_519f34;
        case 0x519f38u: goto label_519f38;
        case 0x519f3cu: goto label_519f3c;
        case 0x519f40u: goto label_519f40;
        case 0x519f44u: goto label_519f44;
        case 0x519f48u: goto label_519f48;
        case 0x519f4cu: goto label_519f4c;
        case 0x519f50u: goto label_519f50;
        case 0x519f54u: goto label_519f54;
        case 0x519f58u: goto label_519f58;
        case 0x519f5cu: goto label_519f5c;
        case 0x519f60u: goto label_519f60;
        case 0x519f64u: goto label_519f64;
        case 0x519f68u: goto label_519f68;
        case 0x519f6cu: goto label_519f6c;
        case 0x519f70u: goto label_519f70;
        case 0x519f74u: goto label_519f74;
        case 0x519f78u: goto label_519f78;
        case 0x519f7cu: goto label_519f7c;
        case 0x519f80u: goto label_519f80;
        case 0x519f84u: goto label_519f84;
        case 0x519f88u: goto label_519f88;
        case 0x519f8cu: goto label_519f8c;
        case 0x519f90u: goto label_519f90;
        case 0x519f94u: goto label_519f94;
        case 0x519f98u: goto label_519f98;
        case 0x519f9cu: goto label_519f9c;
        case 0x519fa0u: goto label_519fa0;
        case 0x519fa4u: goto label_519fa4;
        case 0x519fa8u: goto label_519fa8;
        case 0x519facu: goto label_519fac;
        case 0x519fb0u: goto label_519fb0;
        case 0x519fb4u: goto label_519fb4;
        case 0x519fb8u: goto label_519fb8;
        case 0x519fbcu: goto label_519fbc;
        case 0x519fc0u: goto label_519fc0;
        case 0x519fc4u: goto label_519fc4;
        case 0x519fc8u: goto label_519fc8;
        case 0x519fccu: goto label_519fcc;
        case 0x519fd0u: goto label_519fd0;
        case 0x519fd4u: goto label_519fd4;
        case 0x519fd8u: goto label_519fd8;
        case 0x519fdcu: goto label_519fdc;
        case 0x519fe0u: goto label_519fe0;
        case 0x519fe4u: goto label_519fe4;
        case 0x519fe8u: goto label_519fe8;
        case 0x519fecu: goto label_519fec;
        case 0x519ff0u: goto label_519ff0;
        case 0x519ff4u: goto label_519ff4;
        case 0x519ff8u: goto label_519ff8;
        case 0x519ffcu: goto label_519ffc;
        case 0x51a000u: goto label_51a000;
        case 0x51a004u: goto label_51a004;
        case 0x51a008u: goto label_51a008;
        case 0x51a00cu: goto label_51a00c;
        case 0x51a010u: goto label_51a010;
        case 0x51a014u: goto label_51a014;
        case 0x51a018u: goto label_51a018;
        case 0x51a01cu: goto label_51a01c;
        case 0x51a020u: goto label_51a020;
        case 0x51a024u: goto label_51a024;
        case 0x51a028u: goto label_51a028;
        case 0x51a02cu: goto label_51a02c;
        case 0x51a030u: goto label_51a030;
        case 0x51a034u: goto label_51a034;
        case 0x51a038u: goto label_51a038;
        case 0x51a03cu: goto label_51a03c;
        case 0x51a040u: goto label_51a040;
        case 0x51a044u: goto label_51a044;
        case 0x51a048u: goto label_51a048;
        case 0x51a04cu: goto label_51a04c;
        case 0x51a050u: goto label_51a050;
        case 0x51a054u: goto label_51a054;
        case 0x51a058u: goto label_51a058;
        case 0x51a05cu: goto label_51a05c;
        case 0x51a060u: goto label_51a060;
        case 0x51a064u: goto label_51a064;
        case 0x51a068u: goto label_51a068;
        case 0x51a06cu: goto label_51a06c;
        case 0x51a070u: goto label_51a070;
        case 0x51a074u: goto label_51a074;
        case 0x51a078u: goto label_51a078;
        case 0x51a07cu: goto label_51a07c;
        case 0x51a080u: goto label_51a080;
        case 0x51a084u: goto label_51a084;
        case 0x51a088u: goto label_51a088;
        case 0x51a08cu: goto label_51a08c;
        case 0x51a090u: goto label_51a090;
        case 0x51a094u: goto label_51a094;
        case 0x51a098u: goto label_51a098;
        case 0x51a09cu: goto label_51a09c;
        case 0x51a0a0u: goto label_51a0a0;
        case 0x51a0a4u: goto label_51a0a4;
        case 0x51a0a8u: goto label_51a0a8;
        case 0x51a0acu: goto label_51a0ac;
        case 0x51a0b0u: goto label_51a0b0;
        case 0x51a0b4u: goto label_51a0b4;
        case 0x51a0b8u: goto label_51a0b8;
        case 0x51a0bcu: goto label_51a0bc;
        case 0x51a0c0u: goto label_51a0c0;
        case 0x51a0c4u: goto label_51a0c4;
        case 0x51a0c8u: goto label_51a0c8;
        case 0x51a0ccu: goto label_51a0cc;
        case 0x51a0d0u: goto label_51a0d0;
        case 0x51a0d4u: goto label_51a0d4;
        case 0x51a0d8u: goto label_51a0d8;
        case 0x51a0dcu: goto label_51a0dc;
        case 0x51a0e0u: goto label_51a0e0;
        case 0x51a0e4u: goto label_51a0e4;
        case 0x51a0e8u: goto label_51a0e8;
        case 0x51a0ecu: goto label_51a0ec;
        case 0x51a0f0u: goto label_51a0f0;
        case 0x51a0f4u: goto label_51a0f4;
        case 0x51a0f8u: goto label_51a0f8;
        case 0x51a0fcu: goto label_51a0fc;
        case 0x51a100u: goto label_51a100;
        case 0x51a104u: goto label_51a104;
        case 0x51a108u: goto label_51a108;
        case 0x51a10cu: goto label_51a10c;
        case 0x51a110u: goto label_51a110;
        case 0x51a114u: goto label_51a114;
        case 0x51a118u: goto label_51a118;
        case 0x51a11cu: goto label_51a11c;
        case 0x51a120u: goto label_51a120;
        case 0x51a124u: goto label_51a124;
        case 0x51a128u: goto label_51a128;
        case 0x51a12cu: goto label_51a12c;
        case 0x51a130u: goto label_51a130;
        case 0x51a134u: goto label_51a134;
        case 0x51a138u: goto label_51a138;
        case 0x51a13cu: goto label_51a13c;
        case 0x51a140u: goto label_51a140;
        case 0x51a144u: goto label_51a144;
        case 0x51a148u: goto label_51a148;
        case 0x51a14cu: goto label_51a14c;
        case 0x51a150u: goto label_51a150;
        case 0x51a154u: goto label_51a154;
        case 0x51a158u: goto label_51a158;
        case 0x51a15cu: goto label_51a15c;
        case 0x51a160u: goto label_51a160;
        case 0x51a164u: goto label_51a164;
        case 0x51a168u: goto label_51a168;
        case 0x51a16cu: goto label_51a16c;
        case 0x51a170u: goto label_51a170;
        case 0x51a174u: goto label_51a174;
        case 0x51a178u: goto label_51a178;
        case 0x51a17cu: goto label_51a17c;
        case 0x51a180u: goto label_51a180;
        case 0x51a184u: goto label_51a184;
        case 0x51a188u: goto label_51a188;
        case 0x51a18cu: goto label_51a18c;
        case 0x51a190u: goto label_51a190;
        case 0x51a194u: goto label_51a194;
        case 0x51a198u: goto label_51a198;
        case 0x51a19cu: goto label_51a19c;
        case 0x51a1a0u: goto label_51a1a0;
        case 0x51a1a4u: goto label_51a1a4;
        case 0x51a1a8u: goto label_51a1a8;
        case 0x51a1acu: goto label_51a1ac;
        case 0x51a1b0u: goto label_51a1b0;
        case 0x51a1b4u: goto label_51a1b4;
        case 0x51a1b8u: goto label_51a1b8;
        case 0x51a1bcu: goto label_51a1bc;
        case 0x51a1c0u: goto label_51a1c0;
        case 0x51a1c4u: goto label_51a1c4;
        case 0x51a1c8u: goto label_51a1c8;
        case 0x51a1ccu: goto label_51a1cc;
        case 0x51a1d0u: goto label_51a1d0;
        case 0x51a1d4u: goto label_51a1d4;
        case 0x51a1d8u: goto label_51a1d8;
        case 0x51a1dcu: goto label_51a1dc;
        case 0x51a1e0u: goto label_51a1e0;
        case 0x51a1e4u: goto label_51a1e4;
        case 0x51a1e8u: goto label_51a1e8;
        case 0x51a1ecu: goto label_51a1ec;
        case 0x51a1f0u: goto label_51a1f0;
        case 0x51a1f4u: goto label_51a1f4;
        case 0x51a1f8u: goto label_51a1f8;
        case 0x51a1fcu: goto label_51a1fc;
        case 0x51a200u: goto label_51a200;
        case 0x51a204u: goto label_51a204;
        case 0x51a208u: goto label_51a208;
        case 0x51a20cu: goto label_51a20c;
        case 0x51a210u: goto label_51a210;
        case 0x51a214u: goto label_51a214;
        case 0x51a218u: goto label_51a218;
        case 0x51a21cu: goto label_51a21c;
        case 0x51a220u: goto label_51a220;
        case 0x51a224u: goto label_51a224;
        case 0x51a228u: goto label_51a228;
        case 0x51a22cu: goto label_51a22c;
        case 0x51a230u: goto label_51a230;
        case 0x51a234u: goto label_51a234;
        case 0x51a238u: goto label_51a238;
        case 0x51a23cu: goto label_51a23c;
        case 0x51a240u: goto label_51a240;
        case 0x51a244u: goto label_51a244;
        case 0x51a248u: goto label_51a248;
        case 0x51a24cu: goto label_51a24c;
        case 0x51a250u: goto label_51a250;
        case 0x51a254u: goto label_51a254;
        case 0x51a258u: goto label_51a258;
        case 0x51a25cu: goto label_51a25c;
        case 0x51a260u: goto label_51a260;
        case 0x51a264u: goto label_51a264;
        case 0x51a268u: goto label_51a268;
        case 0x51a26cu: goto label_51a26c;
        case 0x51a270u: goto label_51a270;
        case 0x51a274u: goto label_51a274;
        case 0x51a278u: goto label_51a278;
        case 0x51a27cu: goto label_51a27c;
        case 0x51a280u: goto label_51a280;
        case 0x51a284u: goto label_51a284;
        case 0x51a288u: goto label_51a288;
        case 0x51a28cu: goto label_51a28c;
        case 0x51a290u: goto label_51a290;
        case 0x51a294u: goto label_51a294;
        case 0x51a298u: goto label_51a298;
        case 0x51a29cu: goto label_51a29c;
        case 0x51a2a0u: goto label_51a2a0;
        case 0x51a2a4u: goto label_51a2a4;
        case 0x51a2a8u: goto label_51a2a8;
        case 0x51a2acu: goto label_51a2ac;
        case 0x51a2b0u: goto label_51a2b0;
        case 0x51a2b4u: goto label_51a2b4;
        case 0x51a2b8u: goto label_51a2b8;
        case 0x51a2bcu: goto label_51a2bc;
        case 0x51a2c0u: goto label_51a2c0;
        case 0x51a2c4u: goto label_51a2c4;
        case 0x51a2c8u: goto label_51a2c8;
        case 0x51a2ccu: goto label_51a2cc;
        case 0x51a2d0u: goto label_51a2d0;
        case 0x51a2d4u: goto label_51a2d4;
        case 0x51a2d8u: goto label_51a2d8;
        case 0x51a2dcu: goto label_51a2dc;
        case 0x51a2e0u: goto label_51a2e0;
        case 0x51a2e4u: goto label_51a2e4;
        case 0x51a2e8u: goto label_51a2e8;
        case 0x51a2ecu: goto label_51a2ec;
        case 0x51a2f0u: goto label_51a2f0;
        case 0x51a2f4u: goto label_51a2f4;
        case 0x51a2f8u: goto label_51a2f8;
        case 0x51a2fcu: goto label_51a2fc;
        case 0x51a300u: goto label_51a300;
        case 0x51a304u: goto label_51a304;
        case 0x51a308u: goto label_51a308;
        case 0x51a30cu: goto label_51a30c;
        case 0x51a310u: goto label_51a310;
        case 0x51a314u: goto label_51a314;
        case 0x51a318u: goto label_51a318;
        case 0x51a31cu: goto label_51a31c;
        case 0x51a320u: goto label_51a320;
        case 0x51a324u: goto label_51a324;
        case 0x51a328u: goto label_51a328;
        case 0x51a32cu: goto label_51a32c;
        case 0x51a330u: goto label_51a330;
        case 0x51a334u: goto label_51a334;
        case 0x51a338u: goto label_51a338;
        case 0x51a33cu: goto label_51a33c;
        case 0x51a340u: goto label_51a340;
        case 0x51a344u: goto label_51a344;
        case 0x51a348u: goto label_51a348;
        case 0x51a34cu: goto label_51a34c;
        case 0x51a350u: goto label_51a350;
        case 0x51a354u: goto label_51a354;
        case 0x51a358u: goto label_51a358;
        case 0x51a35cu: goto label_51a35c;
        case 0x51a360u: goto label_51a360;
        case 0x51a364u: goto label_51a364;
        case 0x51a368u: goto label_51a368;
        case 0x51a36cu: goto label_51a36c;
        case 0x51a370u: goto label_51a370;
        case 0x51a374u: goto label_51a374;
        case 0x51a378u: goto label_51a378;
        case 0x51a37cu: goto label_51a37c;
        case 0x51a380u: goto label_51a380;
        case 0x51a384u: goto label_51a384;
        case 0x51a388u: goto label_51a388;
        case 0x51a38cu: goto label_51a38c;
        case 0x51a390u: goto label_51a390;
        case 0x51a394u: goto label_51a394;
        case 0x51a398u: goto label_51a398;
        case 0x51a39cu: goto label_51a39c;
        default: break;
    }

    ctx->pc = 0x519ef0u;

label_519ef0:
    // 0x519ef0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x519ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_519ef4:
    // 0x519ef4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x519ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_519ef8:
    // 0x519ef8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x519ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_519efc:
    // 0x519efc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x519efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_519f00:
    // 0x519f00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x519f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_519f04:
    // 0x519f04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x519f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_519f08:
    // 0x519f08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x519f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_519f0c:
    // 0x519f0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x519f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_519f10:
    // 0x519f10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x519f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_519f14:
    // 0x519f14: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x519f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_519f18:
    // 0x519f18: 0xc10ca68  jal         func_4329A0
label_519f1c:
    if (ctx->pc == 0x519F1Cu) {
        ctx->pc = 0x519F1Cu;
            // 0x519f1c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x519F20u;
        goto label_519f20;
    }
    ctx->pc = 0x519F18u;
    SET_GPR_U32(ctx, 31, 0x519F20u);
    ctx->pc = 0x519F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519F18u;
            // 0x519f1c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519F20u; }
        if (ctx->pc != 0x519F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519F20u; }
        if (ctx->pc != 0x519F20u) { return; }
    }
    ctx->pc = 0x519F20u;
label_519f20:
    // 0x519f20: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x519f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_519f24:
    // 0x519f24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x519f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_519f28:
    // 0x519f28: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x519f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_519f2c:
    // 0x519f2c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x519f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_519f30:
    // 0x519f30: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x519f30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_519f34:
    // 0x519f34: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x519f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_519f38:
    // 0x519f38: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x519f38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_519f3c:
    // 0x519f3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x519f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_519f40:
    // 0x519f40: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x519f40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_519f44:
    // 0x519f44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x519f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_519f48:
    // 0x519f48: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x519f48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_519f4c:
    // 0x519f4c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x519f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_519f50:
    // 0x519f50: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x519f50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_519f54:
    // 0x519f54: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x519f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_519f58:
    // 0x519f58: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x519f58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_519f5c:
    // 0x519f5c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x519f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_519f60:
    // 0x519f60: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x519f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_519f64:
    // 0x519f64: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x519f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_519f68:
    // 0x519f68: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x519f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_519f6c:
    // 0x519f6c: 0xc0582cc  jal         func_160B30
label_519f70:
    if (ctx->pc == 0x519F70u) {
        ctx->pc = 0x519F70u;
            // 0x519f70: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x519F74u;
        goto label_519f74;
    }
    ctx->pc = 0x519F6Cu;
    SET_GPR_U32(ctx, 31, 0x519F74u);
    ctx->pc = 0x519F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519F6Cu;
            // 0x519f70: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519F74u; }
        if (ctx->pc != 0x519F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519F74u; }
        if (ctx->pc != 0x519F74u) { return; }
    }
    ctx->pc = 0x519F74u;
label_519f74:
    // 0x519f74: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x519f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_519f78:
    // 0x519f78: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x519f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_519f7c:
    // 0x519f7c: 0x24635788  addiu       $v1, $v1, 0x5788
    ctx->pc = 0x519f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22408));
label_519f80:
    // 0x519f80: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x519f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_519f84:
    // 0x519f84: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x519f84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_519f88:
    // 0x519f88: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x519f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_519f8c:
    // 0x519f8c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x519f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_519f90:
    // 0x519f90: 0xac44ab10  sw          $a0, -0x54F0($v0)
    ctx->pc = 0x519f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945552), GPR_U32(ctx, 4));
label_519f94:
    // 0x519f94: 0x246357a0  addiu       $v1, $v1, 0x57A0
    ctx->pc = 0x519f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22432));
label_519f98:
    // 0x519f98: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x519f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_519f9c:
    // 0x519f9c: 0x244257d8  addiu       $v0, $v0, 0x57D8
    ctx->pc = 0x519f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22488));
label_519fa0:
    // 0x519fa0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x519fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_519fa4:
    // 0x519fa4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x519fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_519fa8:
    // 0x519fa8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x519fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_519fac:
    // 0x519fac: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x519facu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_519fb0:
    // 0x519fb0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x519fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_519fb4:
    // 0x519fb4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x519fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_519fb8:
    // 0x519fb8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x519fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_519fbc:
    // 0x519fbc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x519fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_519fc0:
    // 0x519fc0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x519fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_519fc4:
    // 0x519fc4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x519fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_519fc8:
    // 0x519fc8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x519fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_519fcc:
    // 0x519fcc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x519fccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_519fd0:
    // 0x519fd0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x519fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_519fd4:
    // 0x519fd4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_519fd8:
    if (ctx->pc == 0x519FD8u) {
        ctx->pc = 0x519FDCu;
        goto label_519fdc;
    }
    ctx->pc = 0x519FD4u;
    {
        const bool branch_taken_0x519fd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x519fd4) {
            ctx->pc = 0x51A068u;
            goto label_51a068;
        }
    }
    ctx->pc = 0x519FDCu;
label_519fdc:
    // 0x519fdc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x519fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_519fe0:
    // 0x519fe0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x519fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_519fe4:
    // 0x519fe4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x519fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_519fe8:
    // 0x519fe8: 0xc040138  jal         func_1004E0
label_519fec:
    if (ctx->pc == 0x519FECu) {
        ctx->pc = 0x519FECu;
            // 0x519fec: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x519FF0u;
        goto label_519ff0;
    }
    ctx->pc = 0x519FE8u;
    SET_GPR_U32(ctx, 31, 0x519FF0u);
    ctx->pc = 0x519FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519FE8u;
            // 0x519fec: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519FF0u; }
        if (ctx->pc != 0x519FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519FF0u; }
        if (ctx->pc != 0x519FF0u) { return; }
    }
    ctx->pc = 0x519FF0u;
label_519ff0:
    // 0x519ff0: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x519ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
label_519ff4:
    // 0x519ff4: 0x3c060052  lui         $a2, 0x52
    ctx->pc = 0x519ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)82 << 16));
label_519ff8:
    // 0x519ff8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x519ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_519ffc:
    // 0x519ffc: 0x24a5a090  addiu       $a1, $a1, -0x5F70
    ctx->pc = 0x519ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942864));
label_51a000:
    // 0x51a000: 0x24c69460  addiu       $a2, $a2, -0x6BA0
    ctx->pc = 0x51a000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939744));
label_51a004:
    // 0x51a004: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x51a004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_51a008:
    // 0x51a008: 0xc040840  jal         func_102100
label_51a00c:
    if (ctx->pc == 0x51A00Cu) {
        ctx->pc = 0x51A00Cu;
            // 0x51a00c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A010u;
        goto label_51a010;
    }
    ctx->pc = 0x51A008u;
    SET_GPR_U32(ctx, 31, 0x51A010u);
    ctx->pc = 0x51A00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A008u;
            // 0x51a00c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A010u; }
        if (ctx->pc != 0x51A010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A010u; }
        if (ctx->pc != 0x51A010u) { return; }
    }
    ctx->pc = 0x51A010u;
label_51a010:
    // 0x51a010: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x51a010u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_51a014:
    // 0x51a014: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x51a014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51a018:
    // 0x51a018: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x51a018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_51a01c:
    // 0x51a01c: 0xc0788fc  jal         func_1E23F0
label_51a020:
    if (ctx->pc == 0x51A020u) {
        ctx->pc = 0x51A020u;
            // 0x51a020: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A024u;
        goto label_51a024;
    }
    ctx->pc = 0x51A01Cu;
    SET_GPR_U32(ctx, 31, 0x51A024u);
    ctx->pc = 0x51A020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A01Cu;
            // 0x51a020: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A024u; }
        if (ctx->pc != 0x51A024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A024u; }
        if (ctx->pc != 0x51A024u) { return; }
    }
    ctx->pc = 0x51A024u;
label_51a024:
    // 0x51a024: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x51a024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_51a028:
    // 0x51a028: 0xc0788fc  jal         func_1E23F0
label_51a02c:
    if (ctx->pc == 0x51A02Cu) {
        ctx->pc = 0x51A02Cu;
            // 0x51a02c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A030u;
        goto label_51a030;
    }
    ctx->pc = 0x51A028u;
    SET_GPR_U32(ctx, 31, 0x51A030u);
    ctx->pc = 0x51A02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A028u;
            // 0x51a02c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A030u; }
        if (ctx->pc != 0x51A030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A030u; }
        if (ctx->pc != 0x51A030u) { return; }
    }
    ctx->pc = 0x51A030u;
label_51a030:
    // 0x51a030: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x51a030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51a034:
    // 0x51a034: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x51a034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_51a038:
    // 0x51a038: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x51a038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_51a03c:
    // 0x51a03c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x51a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_51a040:
    // 0x51a040: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x51a040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51a044:
    // 0x51a044: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x51a044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_51a048:
    // 0x51a048: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x51a048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_51a04c:
    // 0x51a04c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x51a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_51a050:
    // 0x51a050: 0xc0a997c  jal         func_2A65F0
label_51a054:
    if (ctx->pc == 0x51A054u) {
        ctx->pc = 0x51A054u;
            // 0x51a054: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x51A058u;
        goto label_51a058;
    }
    ctx->pc = 0x51A050u;
    SET_GPR_U32(ctx, 31, 0x51A058u);
    ctx->pc = 0x51A054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A050u;
            // 0x51a054: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A058u; }
        if (ctx->pc != 0x51A058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A058u; }
        if (ctx->pc != 0x51A058u) { return; }
    }
    ctx->pc = 0x51A058u;
label_51a058:
    // 0x51a058: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x51a058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_51a05c:
    // 0x51a05c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x51a05cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_51a060:
    // 0x51a060: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_51a064:
    if (ctx->pc == 0x51A064u) {
        ctx->pc = 0x51A064u;
            // 0x51a064: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x51A068u;
        goto label_51a068;
    }
    ctx->pc = 0x51A060u;
    {
        const bool branch_taken_0x51a060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x51A064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51A060u;
            // 0x51a064: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51a060) {
            ctx->pc = 0x51A034u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51a034;
        }
    }
    ctx->pc = 0x51A068u;
label_51a068:
    // 0x51a068: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x51a068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_51a06c:
    // 0x51a06c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x51a06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_51a070:
    // 0x51a070: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51a070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51a074:
    // 0x51a074: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51a074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51a078:
    // 0x51a078: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51a078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51a07c:
    // 0x51a07c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51a07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51a080:
    // 0x51a080: 0x3e00008  jr          $ra
label_51a084:
    if (ctx->pc == 0x51A084u) {
        ctx->pc = 0x51A084u;
            // 0x51a084: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x51A088u;
        goto label_51a088;
    }
    ctx->pc = 0x51A080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51A084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51A080u;
            // 0x51a084: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51A088u;
label_51a088:
    // 0x51a088: 0x0  nop
    ctx->pc = 0x51a088u;
    // NOP
label_51a08c:
    // 0x51a08c: 0x0  nop
    ctx->pc = 0x51a08cu;
    // NOP
label_51a090:
    // 0x51a090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_51a094:
    // 0x51a094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_51a098:
    // 0x51a098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51a098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51a09c:
    // 0x51a09c: 0xc12e6bc  jal         func_4B9AF0
label_51a0a0:
    if (ctx->pc == 0x51A0A0u) {
        ctx->pc = 0x51A0A0u;
            // 0x51a0a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A0A4u;
        goto label_51a0a4;
    }
    ctx->pc = 0x51A09Cu;
    SET_GPR_U32(ctx, 31, 0x51A0A4u);
    ctx->pc = 0x51A0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A09Cu;
            // 0x51a0a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF0u;
    if (runtime->hasFunction(0x4B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x4B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A0A4u; }
        if (ctx->pc != 0x51A0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9AF0_0x4b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A0A4u; }
        if (ctx->pc != 0x51A0A4u) { return; }
    }
    ctx->pc = 0x51A0A4u;
label_51a0a4:
    // 0x51a0a4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_51a0a8:
    // 0x51a0a8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_51a0ac:
    // 0x51a0ac: 0x24425840  addiu       $v0, $v0, 0x5840
    ctx->pc = 0x51a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22592));
label_51a0b0:
    // 0x51a0b0: 0x24635880  addiu       $v1, $v1, 0x5880
    ctx->pc = 0x51a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22656));
label_51a0b4:
    // 0x51a0b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x51a0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_51a0b8:
    // 0x51a0b8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x51a0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_51a0bc:
    // 0x51a0bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51a0bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51a0c0:
    // 0x51a0c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51a0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_51a0c4:
    // 0x51a0c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51a0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51a0c8:
    // 0x51a0c8: 0x3e00008  jr          $ra
label_51a0cc:
    if (ctx->pc == 0x51A0CCu) {
        ctx->pc = 0x51A0CCu;
            // 0x51a0cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x51A0D0u;
        goto label_51a0d0;
    }
    ctx->pc = 0x51A0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51A0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51A0C8u;
            // 0x51a0cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51A0D0u;
label_51a0d0:
    // 0x51a0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51a0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_51a0d4:
    // 0x51a0d4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x51a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_51a0d8:
    // 0x51a0d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51a0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_51a0dc:
    // 0x51a0dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51a0dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_51a0e0:
    // 0x51a0e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51a0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51a0e4:
    // 0x51a0e4: 0x8c42ab10  lw          $v0, -0x54F0($v0)
    ctx->pc = 0x51a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945552)));
label_51a0e8:
    // 0x51a0e8: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x51a0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_51a0ec:
    // 0x51a0ec: 0xc12e608  jal         func_4B9820
label_51a0f0:
    if (ctx->pc == 0x51A0F0u) {
        ctx->pc = 0x51A0F0u;
            // 0x51a0f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A0F4u;
        goto label_51a0f4;
    }
    ctx->pc = 0x51A0ECu;
    SET_GPR_U32(ctx, 31, 0x51A0F4u);
    ctx->pc = 0x51A0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A0ECu;
            // 0x51a0f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9820u;
    if (runtime->hasFunction(0x4B9820u)) {
        auto targetFn = runtime->lookupFunction(0x4B9820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A0F4u; }
        if (ctx->pc != 0x51A0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9820_0x4b9820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A0F4u; }
        if (ctx->pc != 0x51A0F4u) { return; }
    }
    ctx->pc = 0x51A0F4u;
label_51a0f4:
    // 0x51a0f4: 0xa20000d1  sb          $zero, 0xD1($s0)
    ctx->pc = 0x51a0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 0));
label_51a0f8:
    // 0x51a0f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51a0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_51a0fc:
    // 0x51a0fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51a0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51a100:
    // 0x51a100: 0x3e00008  jr          $ra
label_51a104:
    if (ctx->pc == 0x51A104u) {
        ctx->pc = 0x51A104u;
            // 0x51a104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x51A108u;
        goto label_51a108;
    }
    ctx->pc = 0x51A100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51A104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51A100u;
            // 0x51a104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51A108u;
label_51a108:
    // 0x51a108: 0x0  nop
    ctx->pc = 0x51a108u;
    // NOP
label_51a10c:
    // 0x51a10c: 0x0  nop
    ctx->pc = 0x51a10cu;
    // NOP
label_51a110:
    // 0x51a110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x51a110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_51a114:
    // 0x51a114: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x51a114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_51a118:
    // 0x51a118: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x51a118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_51a11c:
    // 0x51a11c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51a11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_51a120:
    // 0x51a120: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x51a120u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51a124:
    // 0x51a124: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51a124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_51a128:
    // 0x51a128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51a128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51a12c:
    // 0x51a12c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51a12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51a130:
    // 0x51a130: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x51a130u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_51a134:
    // 0x51a134: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_51a138:
    if (ctx->pc == 0x51A138u) {
        ctx->pc = 0x51A138u;
            // 0x51a138: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A13Cu;
        goto label_51a13c;
    }
    ctx->pc = 0x51A134u;
    {
        const bool branch_taken_0x51a134 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x51A138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51A134u;
            // 0x51a138: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51a134) {
            ctx->pc = 0x51A178u;
            goto label_51a178;
        }
    }
    ctx->pc = 0x51A13Cu;
label_51a13c:
    // 0x51a13c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x51a13cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51a140:
    // 0x51a140: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x51a140u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51a144:
    // 0x51a144: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x51a144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51a148:
    // 0x51a148: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x51a148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_51a14c:
    // 0x51a14c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x51a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_51a150:
    // 0x51a150: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x51a150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_51a154:
    // 0x51a154: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x51a154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51a158:
    // 0x51a158: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x51a158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_51a15c:
    // 0x51a15c: 0x320f809  jalr        $t9
label_51a160:
    if (ctx->pc == 0x51A160u) {
        ctx->pc = 0x51A164u;
        goto label_51a164;
    }
    ctx->pc = 0x51A15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51A164u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x51A164u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51A164u; }
            if (ctx->pc != 0x51A164u) { return; }
        }
        }
    }
    ctx->pc = 0x51A164u;
label_51a164:
    // 0x51a164: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x51a164u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_51a168:
    // 0x51a168: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x51a168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_51a16c:
    // 0x51a16c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x51a16cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_51a170:
    // 0x51a170: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_51a174:
    if (ctx->pc == 0x51A174u) {
        ctx->pc = 0x51A174u;
            // 0x51a174: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x51A178u;
        goto label_51a178;
    }
    ctx->pc = 0x51A170u;
    {
        const bool branch_taken_0x51a170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x51A174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51A170u;
            // 0x51a174: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51a170) {
            ctx->pc = 0x51A148u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51a148;
        }
    }
    ctx->pc = 0x51A178u;
label_51a178:
    // 0x51a178: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x51a178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_51a17c:
    // 0x51a17c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x51a17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_51a180:
    // 0x51a180: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x51a180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_51a184:
    // 0x51a184: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51a184u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51a188:
    // 0x51a188: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51a188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51a18c:
    // 0x51a18c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51a18cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51a190:
    // 0x51a190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51a190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51a194:
    // 0x51a194: 0x3e00008  jr          $ra
label_51a198:
    if (ctx->pc == 0x51A198u) {
        ctx->pc = 0x51A198u;
            // 0x51a198: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x51A19Cu;
        goto label_51a19c;
    }
    ctx->pc = 0x51A194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51A198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51A194u;
            // 0x51a198: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51A19Cu;
label_51a19c:
    // 0x51a19c: 0x0  nop
    ctx->pc = 0x51a19cu;
    // NOP
label_51a1a0:
    // 0x51a1a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x51a1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_51a1a4:
    // 0x51a1a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x51a1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51a1a8:
    // 0x51a1a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51a1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_51a1ac:
    // 0x51a1ac: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x51a1acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_51a1b0:
    // 0x51a1b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51a1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51a1b4:
    // 0x51a1b4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x51a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_51a1b8:
    // 0x51a1b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x51a1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_51a1bc:
    // 0x51a1bc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x51a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_51a1c0:
    // 0x51a1c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x51a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_51a1c4:
    // 0x51a1c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x51a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_51a1c8:
    // 0x51a1c8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x51a1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_51a1cc:
    // 0x51a1cc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x51a1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51a1d0:
    // 0x51a1d0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x51a1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_51a1d4:
    // 0x51a1d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x51a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_51a1d8:
    // 0x51a1d8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x51a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_51a1dc:
    // 0x51a1dc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x51a1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_51a1e0:
    // 0x51a1e0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x51a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_51a1e4:
    // 0x51a1e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x51a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_51a1e8:
    // 0x51a1e8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x51a1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_51a1ec:
    // 0x51a1ec: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x51a1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_51a1f0:
    // 0x51a1f0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x51a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_51a1f4:
    // 0x51a1f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x51a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_51a1f8:
    // 0x51a1f8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x51a1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_51a1fc:
    // 0x51a1fc: 0xc0a997c  jal         func_2A65F0
label_51a200:
    if (ctx->pc == 0x51A200u) {
        ctx->pc = 0x51A200u;
            // 0x51a200: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x51A204u;
        goto label_51a204;
    }
    ctx->pc = 0x51A1FCu;
    SET_GPR_U32(ctx, 31, 0x51A204u);
    ctx->pc = 0x51A200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A1FCu;
            // 0x51a200: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A204u; }
        if (ctx->pc != 0x51A204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A204u; }
        if (ctx->pc != 0x51A204u) { return; }
    }
    ctx->pc = 0x51A204u;
label_51a204:
    // 0x51a204: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x51a204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_51a208:
    // 0x51a208: 0xc0d879c  jal         func_361E70
label_51a20c:
    if (ctx->pc == 0x51A20Cu) {
        ctx->pc = 0x51A20Cu;
            // 0x51a20c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A210u;
        goto label_51a210;
    }
    ctx->pc = 0x51A208u;
    SET_GPR_U32(ctx, 31, 0x51A210u);
    ctx->pc = 0x51A20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A208u;
            // 0x51a20c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A210u; }
        if (ctx->pc != 0x51A210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A210u; }
        if (ctx->pc != 0x51A210u) { return; }
    }
    ctx->pc = 0x51A210u;
label_51a210:
    // 0x51a210: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51a210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_51a214:
    // 0x51a214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51a214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51a218:
    // 0x51a218: 0x3e00008  jr          $ra
label_51a21c:
    if (ctx->pc == 0x51A21Cu) {
        ctx->pc = 0x51A21Cu;
            // 0x51a21c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x51A220u;
        goto label_51a220;
    }
    ctx->pc = 0x51A218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51A21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51A218u;
            // 0x51a21c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51A220u;
label_51a220:
    // 0x51a220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51a220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_51a224:
    // 0x51a224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51a224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_51a228:
    // 0x51a228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51a228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51a22c:
    // 0x51a22c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x51a22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_51a230:
    // 0x51a230: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_51a234:
    if (ctx->pc == 0x51A234u) {
        ctx->pc = 0x51A234u;
            // 0x51a234: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A238u;
        goto label_51a238;
    }
    ctx->pc = 0x51A230u;
    {
        const bool branch_taken_0x51a230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x51A234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51A230u;
            // 0x51a234: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51a230) {
            ctx->pc = 0x51A350u;
            goto label_51a350;
        }
    }
    ctx->pc = 0x51A238u;
label_51a238:
    // 0x51a238: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x51a238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_51a23c:
    // 0x51a23c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x51a23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_51a240:
    // 0x51a240: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x51a240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_51a244:
    // 0x51a244: 0xc075128  jal         func_1D44A0
label_51a248:
    if (ctx->pc == 0x51A248u) {
        ctx->pc = 0x51A248u;
            // 0x51a248: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x51A24Cu;
        goto label_51a24c;
    }
    ctx->pc = 0x51A244u;
    SET_GPR_U32(ctx, 31, 0x51A24Cu);
    ctx->pc = 0x51A248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A244u;
            // 0x51a248: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A24Cu; }
        if (ctx->pc != 0x51A24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A24Cu; }
        if (ctx->pc != 0x51A24Cu) { return; }
    }
    ctx->pc = 0x51A24Cu;
label_51a24c:
    // 0x51a24c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x51a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_51a250:
    // 0x51a250: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51a250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51a254:
    // 0x51a254: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x51a254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_51a258:
    // 0x51a258: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x51a258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_51a25c:
    // 0x51a25c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x51a25cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_51a260:
    // 0x51a260: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_51a264:
    if (ctx->pc == 0x51A264u) {
        ctx->pc = 0x51A264u;
            // 0x51a264: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x51A268u;
        goto label_51a268;
    }
    ctx->pc = 0x51A260u;
    {
        const bool branch_taken_0x51a260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x51A264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51A260u;
            // 0x51a264: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51a260) {
            ctx->pc = 0x51A270u;
            goto label_51a270;
        }
    }
    ctx->pc = 0x51A268u;
label_51a268:
    // 0x51a268: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51a268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51a26c:
    // 0x51a26c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x51a26cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_51a270:
    // 0x51a270: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x51a270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51a274:
    // 0x51a274: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51a274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51a278:
    // 0x51a278: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x51a278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_51a27c:
    // 0x51a27c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x51a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_51a280:
    // 0x51a280: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x51a280u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_51a284:
    // 0x51a284: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_51a288:
    if (ctx->pc == 0x51A288u) {
        ctx->pc = 0x51A288u;
            // 0x51a288: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x51A28Cu;
        goto label_51a28c;
    }
    ctx->pc = 0x51A284u;
    {
        const bool branch_taken_0x51a284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51a284) {
            ctx->pc = 0x51A288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51A284u;
            // 0x51a288: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51A298u;
            goto label_51a298;
        }
    }
    ctx->pc = 0x51A28Cu;
label_51a28c:
    // 0x51a28c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51a290:
    // 0x51a290: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x51a290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_51a294:
    // 0x51a294: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x51a294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51a298:
    // 0x51a298: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51a298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51a29c:
    // 0x51a29c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x51a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_51a2a0:
    // 0x51a2a0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x51a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_51a2a4:
    // 0x51a2a4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x51a2a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_51a2a8:
    // 0x51a2a8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_51a2ac:
    if (ctx->pc == 0x51A2ACu) {
        ctx->pc = 0x51A2ACu;
            // 0x51a2ac: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x51A2B0u;
        goto label_51a2b0;
    }
    ctx->pc = 0x51A2A8u;
    {
        const bool branch_taken_0x51a2a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51a2a8) {
            ctx->pc = 0x51A2ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51A2A8u;
            // 0x51a2ac: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51A2BCu;
            goto label_51a2bc;
        }
    }
    ctx->pc = 0x51A2B0u;
label_51a2b0:
    // 0x51a2b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51a2b4:
    // 0x51a2b4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x51a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_51a2b8:
    // 0x51a2b8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x51a2b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_51a2bc:
    // 0x51a2bc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x51a2bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_51a2c0:
    // 0x51a2c0: 0x320f809  jalr        $t9
label_51a2c4:
    if (ctx->pc == 0x51A2C4u) {
        ctx->pc = 0x51A2C4u;
            // 0x51a2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A2C8u;
        goto label_51a2c8;
    }
    ctx->pc = 0x51A2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51A2C8u);
        ctx->pc = 0x51A2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51A2C0u;
            // 0x51a2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51A2C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51A2C8u; }
            if (ctx->pc != 0x51A2C8u) { return; }
        }
        }
    }
    ctx->pc = 0x51A2C8u;
label_51a2c8:
    // 0x51a2c8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x51a2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_51a2cc:
    // 0x51a2cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51a2d0:
    // 0x51a2d0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x51a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_51a2d4:
    // 0x51a2d4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x51a2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_51a2d8:
    // 0x51a2d8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x51a2d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_51a2dc:
    // 0x51a2dc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x51a2dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_51a2e0:
    // 0x51a2e0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_51a2e4:
    if (ctx->pc == 0x51A2E4u) {
        ctx->pc = 0x51A2E4u;
            // 0x51a2e4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x51A2E8u;
        goto label_51a2e8;
    }
    ctx->pc = 0x51A2E0u;
    {
        const bool branch_taken_0x51a2e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51a2e0) {
            ctx->pc = 0x51A2E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51A2E0u;
            // 0x51a2e4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51A2F4u;
            goto label_51a2f4;
        }
    }
    ctx->pc = 0x51A2E8u;
label_51a2e8:
    // 0x51a2e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51a2ec:
    // 0x51a2ec: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x51a2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_51a2f0:
    // 0x51a2f0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x51a2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_51a2f4:
    // 0x51a2f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51a2f8:
    // 0x51a2f8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x51a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_51a2fc:
    // 0x51a2fc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x51a2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_51a300:
    // 0x51a300: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x51a300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_51a304:
    // 0x51a304: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x51a304u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_51a308:
    // 0x51a308: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_51a30c:
    if (ctx->pc == 0x51A30Cu) {
        ctx->pc = 0x51A310u;
        goto label_51a310;
    }
    ctx->pc = 0x51A308u;
    {
        const bool branch_taken_0x51a308 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51a308) {
            ctx->pc = 0x51A318u;
            goto label_51a318;
        }
    }
    ctx->pc = 0x51A310u;
label_51a310:
    // 0x51a310: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51a310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51a314:
    // 0x51a314: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x51a314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_51a318:
    // 0x51a318: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51a318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51a31c:
    // 0x51a31c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x51a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_51a320:
    // 0x51a320: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x51a320u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_51a324:
    // 0x51a324: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_51a328:
    if (ctx->pc == 0x51A328u) {
        ctx->pc = 0x51A32Cu;
        goto label_51a32c;
    }
    ctx->pc = 0x51A324u;
    {
        const bool branch_taken_0x51a324 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51a324) {
            ctx->pc = 0x51A334u;
            goto label_51a334;
        }
    }
    ctx->pc = 0x51A32Cu;
label_51a32c:
    // 0x51a32c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51a330:
    // 0x51a330: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x51a330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_51a334:
    // 0x51a334: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51a334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51a338:
    // 0x51a338: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x51a338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_51a33c:
    // 0x51a33c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x51a33cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_51a340:
    // 0x51a340: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_51a344:
    if (ctx->pc == 0x51A344u) {
        ctx->pc = 0x51A344u;
            // 0x51a344: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x51A348u;
        goto label_51a348;
    }
    ctx->pc = 0x51A340u;
    {
        const bool branch_taken_0x51a340 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51a340) {
            ctx->pc = 0x51A344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51A340u;
            // 0x51a344: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51A354u;
            goto label_51a354;
        }
    }
    ctx->pc = 0x51A348u;
label_51a348:
    // 0x51a348: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51a348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51a34c:
    // 0x51a34c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x51a34cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_51a350:
    // 0x51a350: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51a350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_51a354:
    // 0x51a354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51a354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51a358:
    // 0x51a358: 0x3e00008  jr          $ra
label_51a35c:
    if (ctx->pc == 0x51A35Cu) {
        ctx->pc = 0x51A35Cu;
            // 0x51a35c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x51A360u;
        goto label_51a360;
    }
    ctx->pc = 0x51A358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51A35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51A358u;
            // 0x51a35c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51A360u;
label_51a360:
    // 0x51a360: 0x8146518  j           func_519460
label_51a364:
    if (ctx->pc == 0x51A364u) {
        ctx->pc = 0x51A364u;
            // 0x51a364: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x51A368u;
        goto label_51a368;
    }
    ctx->pc = 0x51A360u;
    ctx->pc = 0x51A364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A360u;
            // 0x51a364: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x519460u;
    {
        auto targetFn = runtime->lookupFunction(0x519460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x51A368u;
label_51a368:
    // 0x51a368: 0x0  nop
    ctx->pc = 0x51a368u;
    // NOP
label_51a36c:
    // 0x51a36c: 0x0  nop
    ctx->pc = 0x51a36cu;
    // NOP
label_51a370:
    // 0x51a370: 0x8146750  j           func_519D40
label_51a374:
    if (ctx->pc == 0x51A374u) {
        ctx->pc = 0x51A374u;
            // 0x51a374: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x51A378u;
        goto label_51a378;
    }
    ctx->pc = 0x51A370u;
    ctx->pc = 0x51A374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A370u;
            // 0x51a374: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x519D40u;
    {
        auto targetFn = runtime->lookupFunction(0x519D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x51A378u;
label_51a378:
    // 0x51a378: 0x0  nop
    ctx->pc = 0x51a378u;
    // NOP
label_51a37c:
    // 0x51a37c: 0x0  nop
    ctx->pc = 0x51a37cu;
    // NOP
label_51a380:
    // 0x51a380: 0x81464c0  j           func_519300
label_51a384:
    if (ctx->pc == 0x51A384u) {
        ctx->pc = 0x51A384u;
            // 0x51a384: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x51A388u;
        goto label_51a388;
    }
    ctx->pc = 0x51A380u;
    ctx->pc = 0x51A384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A380u;
            // 0x51a384: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x519300u;
    if (runtime->hasFunction(0x519300u)) {
        auto targetFn = runtime->lookupFunction(0x519300u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00519300_0x519300(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x51A388u;
label_51a388:
    // 0x51a388: 0x0  nop
    ctx->pc = 0x51a388u;
    // NOP
label_51a38c:
    // 0x51a38c: 0x0  nop
    ctx->pc = 0x51a38cu;
    // NOP
label_51a390:
    // 0x51a390: 0x8146458  j           func_519160
label_51a394:
    if (ctx->pc == 0x51A394u) {
        ctx->pc = 0x51A394u;
            // 0x51a394: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x51A398u;
        goto label_51a398;
    }
    ctx->pc = 0x51A390u;
    ctx->pc = 0x51A394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A390u;
            // 0x51a394: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x519160u;
    {
        auto targetFn = runtime->lookupFunction(0x519160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x51A398u;
label_51a398:
    // 0x51a398: 0x0  nop
    ctx->pc = 0x51a398u;
    // NOP
label_51a39c:
    // 0x51a39c: 0x0  nop
    ctx->pc = 0x51a39cu;
    // NOP
}
