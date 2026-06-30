#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00328E70
// Address: 0x328e70 - 0x3292c0
void sub_00328E70_0x328e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328E70_0x328e70");
#endif

    switch (ctx->pc) {
        case 0x328e70u: goto label_328e70;
        case 0x328e74u: goto label_328e74;
        case 0x328e78u: goto label_328e78;
        case 0x328e7cu: goto label_328e7c;
        case 0x328e80u: goto label_328e80;
        case 0x328e84u: goto label_328e84;
        case 0x328e88u: goto label_328e88;
        case 0x328e8cu: goto label_328e8c;
        case 0x328e90u: goto label_328e90;
        case 0x328e94u: goto label_328e94;
        case 0x328e98u: goto label_328e98;
        case 0x328e9cu: goto label_328e9c;
        case 0x328ea0u: goto label_328ea0;
        case 0x328ea4u: goto label_328ea4;
        case 0x328ea8u: goto label_328ea8;
        case 0x328eacu: goto label_328eac;
        case 0x328eb0u: goto label_328eb0;
        case 0x328eb4u: goto label_328eb4;
        case 0x328eb8u: goto label_328eb8;
        case 0x328ebcu: goto label_328ebc;
        case 0x328ec0u: goto label_328ec0;
        case 0x328ec4u: goto label_328ec4;
        case 0x328ec8u: goto label_328ec8;
        case 0x328eccu: goto label_328ecc;
        case 0x328ed0u: goto label_328ed0;
        case 0x328ed4u: goto label_328ed4;
        case 0x328ed8u: goto label_328ed8;
        case 0x328edcu: goto label_328edc;
        case 0x328ee0u: goto label_328ee0;
        case 0x328ee4u: goto label_328ee4;
        case 0x328ee8u: goto label_328ee8;
        case 0x328eecu: goto label_328eec;
        case 0x328ef0u: goto label_328ef0;
        case 0x328ef4u: goto label_328ef4;
        case 0x328ef8u: goto label_328ef8;
        case 0x328efcu: goto label_328efc;
        case 0x328f00u: goto label_328f00;
        case 0x328f04u: goto label_328f04;
        case 0x328f08u: goto label_328f08;
        case 0x328f0cu: goto label_328f0c;
        case 0x328f10u: goto label_328f10;
        case 0x328f14u: goto label_328f14;
        case 0x328f18u: goto label_328f18;
        case 0x328f1cu: goto label_328f1c;
        case 0x328f20u: goto label_328f20;
        case 0x328f24u: goto label_328f24;
        case 0x328f28u: goto label_328f28;
        case 0x328f2cu: goto label_328f2c;
        case 0x328f30u: goto label_328f30;
        case 0x328f34u: goto label_328f34;
        case 0x328f38u: goto label_328f38;
        case 0x328f3cu: goto label_328f3c;
        case 0x328f40u: goto label_328f40;
        case 0x328f44u: goto label_328f44;
        case 0x328f48u: goto label_328f48;
        case 0x328f4cu: goto label_328f4c;
        case 0x328f50u: goto label_328f50;
        case 0x328f54u: goto label_328f54;
        case 0x328f58u: goto label_328f58;
        case 0x328f5cu: goto label_328f5c;
        case 0x328f60u: goto label_328f60;
        case 0x328f64u: goto label_328f64;
        case 0x328f68u: goto label_328f68;
        case 0x328f6cu: goto label_328f6c;
        case 0x328f70u: goto label_328f70;
        case 0x328f74u: goto label_328f74;
        case 0x328f78u: goto label_328f78;
        case 0x328f7cu: goto label_328f7c;
        case 0x328f80u: goto label_328f80;
        case 0x328f84u: goto label_328f84;
        case 0x328f88u: goto label_328f88;
        case 0x328f8cu: goto label_328f8c;
        case 0x328f90u: goto label_328f90;
        case 0x328f94u: goto label_328f94;
        case 0x328f98u: goto label_328f98;
        case 0x328f9cu: goto label_328f9c;
        case 0x328fa0u: goto label_328fa0;
        case 0x328fa4u: goto label_328fa4;
        case 0x328fa8u: goto label_328fa8;
        case 0x328facu: goto label_328fac;
        case 0x328fb0u: goto label_328fb0;
        case 0x328fb4u: goto label_328fb4;
        case 0x328fb8u: goto label_328fb8;
        case 0x328fbcu: goto label_328fbc;
        case 0x328fc0u: goto label_328fc0;
        case 0x328fc4u: goto label_328fc4;
        case 0x328fc8u: goto label_328fc8;
        case 0x328fccu: goto label_328fcc;
        case 0x328fd0u: goto label_328fd0;
        case 0x328fd4u: goto label_328fd4;
        case 0x328fd8u: goto label_328fd8;
        case 0x328fdcu: goto label_328fdc;
        case 0x328fe0u: goto label_328fe0;
        case 0x328fe4u: goto label_328fe4;
        case 0x328fe8u: goto label_328fe8;
        case 0x328fecu: goto label_328fec;
        case 0x328ff0u: goto label_328ff0;
        case 0x328ff4u: goto label_328ff4;
        case 0x328ff8u: goto label_328ff8;
        case 0x328ffcu: goto label_328ffc;
        case 0x329000u: goto label_329000;
        case 0x329004u: goto label_329004;
        case 0x329008u: goto label_329008;
        case 0x32900cu: goto label_32900c;
        case 0x329010u: goto label_329010;
        case 0x329014u: goto label_329014;
        case 0x329018u: goto label_329018;
        case 0x32901cu: goto label_32901c;
        case 0x329020u: goto label_329020;
        case 0x329024u: goto label_329024;
        case 0x329028u: goto label_329028;
        case 0x32902cu: goto label_32902c;
        case 0x329030u: goto label_329030;
        case 0x329034u: goto label_329034;
        case 0x329038u: goto label_329038;
        case 0x32903cu: goto label_32903c;
        case 0x329040u: goto label_329040;
        case 0x329044u: goto label_329044;
        case 0x329048u: goto label_329048;
        case 0x32904cu: goto label_32904c;
        case 0x329050u: goto label_329050;
        case 0x329054u: goto label_329054;
        case 0x329058u: goto label_329058;
        case 0x32905cu: goto label_32905c;
        case 0x329060u: goto label_329060;
        case 0x329064u: goto label_329064;
        case 0x329068u: goto label_329068;
        case 0x32906cu: goto label_32906c;
        case 0x329070u: goto label_329070;
        case 0x329074u: goto label_329074;
        case 0x329078u: goto label_329078;
        case 0x32907cu: goto label_32907c;
        case 0x329080u: goto label_329080;
        case 0x329084u: goto label_329084;
        case 0x329088u: goto label_329088;
        case 0x32908cu: goto label_32908c;
        case 0x329090u: goto label_329090;
        case 0x329094u: goto label_329094;
        case 0x329098u: goto label_329098;
        case 0x32909cu: goto label_32909c;
        case 0x3290a0u: goto label_3290a0;
        case 0x3290a4u: goto label_3290a4;
        case 0x3290a8u: goto label_3290a8;
        case 0x3290acu: goto label_3290ac;
        case 0x3290b0u: goto label_3290b0;
        case 0x3290b4u: goto label_3290b4;
        case 0x3290b8u: goto label_3290b8;
        case 0x3290bcu: goto label_3290bc;
        case 0x3290c0u: goto label_3290c0;
        case 0x3290c4u: goto label_3290c4;
        case 0x3290c8u: goto label_3290c8;
        case 0x3290ccu: goto label_3290cc;
        case 0x3290d0u: goto label_3290d0;
        case 0x3290d4u: goto label_3290d4;
        case 0x3290d8u: goto label_3290d8;
        case 0x3290dcu: goto label_3290dc;
        case 0x3290e0u: goto label_3290e0;
        case 0x3290e4u: goto label_3290e4;
        case 0x3290e8u: goto label_3290e8;
        case 0x3290ecu: goto label_3290ec;
        case 0x3290f0u: goto label_3290f0;
        case 0x3290f4u: goto label_3290f4;
        case 0x3290f8u: goto label_3290f8;
        case 0x3290fcu: goto label_3290fc;
        case 0x329100u: goto label_329100;
        case 0x329104u: goto label_329104;
        case 0x329108u: goto label_329108;
        case 0x32910cu: goto label_32910c;
        case 0x329110u: goto label_329110;
        case 0x329114u: goto label_329114;
        case 0x329118u: goto label_329118;
        case 0x32911cu: goto label_32911c;
        case 0x329120u: goto label_329120;
        case 0x329124u: goto label_329124;
        case 0x329128u: goto label_329128;
        case 0x32912cu: goto label_32912c;
        case 0x329130u: goto label_329130;
        case 0x329134u: goto label_329134;
        case 0x329138u: goto label_329138;
        case 0x32913cu: goto label_32913c;
        case 0x329140u: goto label_329140;
        case 0x329144u: goto label_329144;
        case 0x329148u: goto label_329148;
        case 0x32914cu: goto label_32914c;
        case 0x329150u: goto label_329150;
        case 0x329154u: goto label_329154;
        case 0x329158u: goto label_329158;
        case 0x32915cu: goto label_32915c;
        case 0x329160u: goto label_329160;
        case 0x329164u: goto label_329164;
        case 0x329168u: goto label_329168;
        case 0x32916cu: goto label_32916c;
        case 0x329170u: goto label_329170;
        case 0x329174u: goto label_329174;
        case 0x329178u: goto label_329178;
        case 0x32917cu: goto label_32917c;
        case 0x329180u: goto label_329180;
        case 0x329184u: goto label_329184;
        case 0x329188u: goto label_329188;
        case 0x32918cu: goto label_32918c;
        case 0x329190u: goto label_329190;
        case 0x329194u: goto label_329194;
        case 0x329198u: goto label_329198;
        case 0x32919cu: goto label_32919c;
        case 0x3291a0u: goto label_3291a0;
        case 0x3291a4u: goto label_3291a4;
        case 0x3291a8u: goto label_3291a8;
        case 0x3291acu: goto label_3291ac;
        case 0x3291b0u: goto label_3291b0;
        case 0x3291b4u: goto label_3291b4;
        case 0x3291b8u: goto label_3291b8;
        case 0x3291bcu: goto label_3291bc;
        case 0x3291c0u: goto label_3291c0;
        case 0x3291c4u: goto label_3291c4;
        case 0x3291c8u: goto label_3291c8;
        case 0x3291ccu: goto label_3291cc;
        case 0x3291d0u: goto label_3291d0;
        case 0x3291d4u: goto label_3291d4;
        case 0x3291d8u: goto label_3291d8;
        case 0x3291dcu: goto label_3291dc;
        case 0x3291e0u: goto label_3291e0;
        case 0x3291e4u: goto label_3291e4;
        case 0x3291e8u: goto label_3291e8;
        case 0x3291ecu: goto label_3291ec;
        case 0x3291f0u: goto label_3291f0;
        case 0x3291f4u: goto label_3291f4;
        case 0x3291f8u: goto label_3291f8;
        case 0x3291fcu: goto label_3291fc;
        case 0x329200u: goto label_329200;
        case 0x329204u: goto label_329204;
        case 0x329208u: goto label_329208;
        case 0x32920cu: goto label_32920c;
        case 0x329210u: goto label_329210;
        case 0x329214u: goto label_329214;
        case 0x329218u: goto label_329218;
        case 0x32921cu: goto label_32921c;
        case 0x329220u: goto label_329220;
        case 0x329224u: goto label_329224;
        case 0x329228u: goto label_329228;
        case 0x32922cu: goto label_32922c;
        case 0x329230u: goto label_329230;
        case 0x329234u: goto label_329234;
        case 0x329238u: goto label_329238;
        case 0x32923cu: goto label_32923c;
        case 0x329240u: goto label_329240;
        case 0x329244u: goto label_329244;
        case 0x329248u: goto label_329248;
        case 0x32924cu: goto label_32924c;
        case 0x329250u: goto label_329250;
        case 0x329254u: goto label_329254;
        case 0x329258u: goto label_329258;
        case 0x32925cu: goto label_32925c;
        case 0x329260u: goto label_329260;
        case 0x329264u: goto label_329264;
        case 0x329268u: goto label_329268;
        case 0x32926cu: goto label_32926c;
        case 0x329270u: goto label_329270;
        case 0x329274u: goto label_329274;
        case 0x329278u: goto label_329278;
        case 0x32927cu: goto label_32927c;
        case 0x329280u: goto label_329280;
        case 0x329284u: goto label_329284;
        case 0x329288u: goto label_329288;
        case 0x32928cu: goto label_32928c;
        case 0x329290u: goto label_329290;
        case 0x329294u: goto label_329294;
        case 0x329298u: goto label_329298;
        case 0x32929cu: goto label_32929c;
        case 0x3292a0u: goto label_3292a0;
        case 0x3292a4u: goto label_3292a4;
        case 0x3292a8u: goto label_3292a8;
        case 0x3292acu: goto label_3292ac;
        case 0x3292b0u: goto label_3292b0;
        case 0x3292b4u: goto label_3292b4;
        case 0x3292b8u: goto label_3292b8;
        case 0x3292bcu: goto label_3292bc;
        default: break;
    }

    ctx->pc = 0x328e70u;

label_328e70:
    // 0x328e70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x328e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_328e74:
    // 0x328e74: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x328e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_328e78:
    // 0x328e78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x328e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_328e7c:
    // 0x328e7c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x328e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_328e80:
    // 0x328e80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x328e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_328e84:
    // 0x328e84: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x328e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_328e88:
    // 0x328e88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x328e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_328e8c:
    // 0x328e8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x328e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_328e90:
    // 0x328e90: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x328e90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_328e94:
    // 0x328e94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x328e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_328e98:
    // 0x328e98: 0xc10ca68  jal         func_4329A0
label_328e9c:
    if (ctx->pc == 0x328E9Cu) {
        ctx->pc = 0x328E9Cu;
            // 0x328e9c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x328EA0u;
        goto label_328ea0;
    }
    ctx->pc = 0x328E98u;
    SET_GPR_U32(ctx, 31, 0x328EA0u);
    ctx->pc = 0x328E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328E98u;
            // 0x328e9c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328EA0u; }
        if (ctx->pc != 0x328EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328EA0u; }
        if (ctx->pc != 0x328EA0u) { return; }
    }
    ctx->pc = 0x328EA0u;
label_328ea0:
    // 0x328ea0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x328ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_328ea4:
    // 0x328ea4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x328ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_328ea8:
    // 0x328ea8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x328ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_328eac:
    // 0x328eac: 0x244245d0  addiu       $v0, $v0, 0x45D0
    ctx->pc = 0x328eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17872));
label_328eb0:
    // 0x328eb0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x328eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_328eb4:
    // 0x328eb4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x328eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_328eb8:
    // 0x328eb8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x328eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_328ebc:
    // 0x328ebc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x328ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_328ec0:
    // 0x328ec0: 0xae600058  sw          $zero, 0x58($s3)
    ctx->pc = 0x328ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
label_328ec4:
    // 0x328ec4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x328ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_328ec8:
    // 0x328ec8: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x328ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_328ecc:
    // 0x328ecc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x328eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_328ed0:
    // 0x328ed0: 0xae650064  sw          $a1, 0x64($s3)
    ctx->pc = 0x328ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 5));
label_328ed4:
    // 0x328ed4: 0xae650068  sw          $a1, 0x68($s3)
    ctx->pc = 0x328ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 5));
label_328ed8:
    // 0x328ed8: 0xa264008c  sb          $a0, 0x8C($s3)
    ctx->pc = 0x328ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 140), (uint8_t)GPR_U32(ctx, 4));
label_328edc:
    // 0x328edc: 0xa263008d  sb          $v1, 0x8D($s3)
    ctx->pc = 0x328edcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 141), (uint8_t)GPR_U32(ctx, 3));
label_328ee0:
    // 0x328ee0: 0xa264008e  sb          $a0, 0x8E($s3)
    ctx->pc = 0x328ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 142), (uint8_t)GPR_U32(ctx, 4));
label_328ee4:
    // 0x328ee4: 0xa264008f  sb          $a0, 0x8F($s3)
    ctx->pc = 0x328ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 143), (uint8_t)GPR_U32(ctx, 4));
label_328ee8:
    // 0x328ee8: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x328ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_328eec:
    // 0x328eec: 0xae600128  sw          $zero, 0x128($s3)
    ctx->pc = 0x328eecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 296), GPR_U32(ctx, 0));
label_328ef0:
    // 0x328ef0: 0xae600154  sw          $zero, 0x154($s3)
    ctx->pc = 0x328ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 340), GPR_U32(ctx, 0));
label_328ef4:
    // 0x328ef4: 0xae600158  sw          $zero, 0x158($s3)
    ctx->pc = 0x328ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 344), GPR_U32(ctx, 0));
label_328ef8:
    // 0x328ef8: 0xa263015c  sb          $v1, 0x15C($s3)
    ctx->pc = 0x328ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 348), (uint8_t)GPR_U32(ctx, 3));
label_328efc:
    // 0x328efc: 0xa260015d  sb          $zero, 0x15D($s3)
    ctx->pc = 0x328efcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 349), (uint8_t)GPR_U32(ctx, 0));
label_328f00:
    // 0x328f00: 0xae600160  sw          $zero, 0x160($s3)
    ctx->pc = 0x328f00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 352), GPR_U32(ctx, 0));
label_328f04:
    // 0x328f04: 0xae60060c  sw          $zero, 0x60C($s3)
    ctx->pc = 0x328f04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1548), GPR_U32(ctx, 0));
label_328f08:
    // 0x328f08: 0xae600610  sw          $zero, 0x610($s3)
    ctx->pc = 0x328f08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1552), GPR_U32(ctx, 0));
label_328f0c:
    // 0x328f0c: 0xae600668  sw          $zero, 0x668($s3)
    ctx->pc = 0x328f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1640), GPR_U32(ctx, 0));
label_328f10:
    // 0x328f10: 0xae60066c  sw          $zero, 0x66C($s3)
    ctx->pc = 0x328f10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1644), GPR_U32(ctx, 0));
label_328f14:
    // 0x328f14: 0xae600670  sw          $zero, 0x670($s3)
    ctx->pc = 0x328f14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1648), GPR_U32(ctx, 0));
label_328f18:
    // 0x328f18: 0xae600674  sw          $zero, 0x674($s3)
    ctx->pc = 0x328f18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1652), GPR_U32(ctx, 0));
label_328f1c:
    // 0x328f1c: 0xae600678  sw          $zero, 0x678($s3)
    ctx->pc = 0x328f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1656), GPR_U32(ctx, 0));
label_328f20:
    // 0x328f20: 0xae60067c  sw          $zero, 0x67C($s3)
    ctx->pc = 0x328f20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1660), GPR_U32(ctx, 0));
label_328f24:
    // 0x328f24: 0xae600680  sw          $zero, 0x680($s3)
    ctx->pc = 0x328f24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1664), GPR_U32(ctx, 0));
label_328f28:
    // 0x328f28: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x328f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_328f2c:
    // 0x328f2c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x328f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_328f30:
    // 0x328f30: 0x90420078  lbu         $v0, 0x78($v0)
    ctx->pc = 0x328f30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 120)));
label_328f34:
    // 0x328f34: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_328f38:
    if (ctx->pc == 0x328F38u) {
        ctx->pc = 0x328F38u;
            // 0x328f38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x328F3Cu;
        goto label_328f3c;
    }
    ctx->pc = 0x328F34u;
    {
        const bool branch_taken_0x328f34 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x328f34) {
            ctx->pc = 0x328F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328F34u;
            // 0x328f38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328F48u;
            goto label_328f48;
        }
    }
    ctx->pc = 0x328F3Cu;
label_328f3c:
    // 0x328f3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x328f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_328f40:
    // 0x328f40: 0x10000007  b           . + 4 + (0x7 << 2)
label_328f44:
    if (ctx->pc == 0x328F44u) {
        ctx->pc = 0x328F44u;
            // 0x328f44: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x328F48u;
        goto label_328f48;
    }
    ctx->pc = 0x328F40u;
    {
        const bool branch_taken_0x328f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328F40u;
            // 0x328f44: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f40) {
            ctx->pc = 0x328F60u;
            goto label_328f60;
        }
    }
    ctx->pc = 0x328F48u;
label_328f48:
    // 0x328f48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x328f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_328f4c:
    // 0x328f4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x328f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_328f50:
    // 0x328f50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x328f50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_328f54:
    // 0x328f54: 0x0  nop
    ctx->pc = 0x328f54u;
    // NOP
label_328f58:
    // 0x328f58: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x328f58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_328f5c:
    // 0x328f5c: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x328f5cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_328f60:
    // 0x328f60: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x328f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_328f64:
    // 0x328f64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x328f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_328f68:
    // 0x328f68: 0x0  nop
    ctx->pc = 0x328f68u;
    // NOP
label_328f6c:
    // 0x328f6c: 0x460408c3  div.s       $f3, $f1, $f4
    ctx->pc = 0x328f6cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[4];
label_328f70:
    // 0x328f70: 0x3c024682  lui         $v0, 0x4682
    ctx->pc = 0x328f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18050 << 16));
label_328f74:
    // 0x328f74: 0x34433555  ori         $v1, $v0, 0x3555
    ctx->pc = 0x328f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13653);
label_328f78:
    // 0x328f78: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x328f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_328f7c:
    // 0x328f7c: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x328f7cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[1] = ctx->f[4] / ctx->f[1];
label_328f80:
    // 0x328f80: 0xe4a40010  swc1        $f4, 0x10($a1)
    ctx->pc = 0x328f80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_328f84:
    // 0x328f84: 0xe4a30014  swc1        $f3, 0x14($a1)
    ctx->pc = 0x328f84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_328f88:
    // 0x328f88: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x328f88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_328f8c:
    // 0x328f8c: 0xe4a30018  swc1        $f3, 0x18($a1)
    ctx->pc = 0x328f8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_328f90:
    // 0x328f90: 0xe4a1001c  swc1        $f1, 0x1C($a1)
    ctx->pc = 0x328f90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_328f94:
    // 0x328f94: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x328f94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_328f98:
    // 0x328f98: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x328f98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_328f9c:
    // 0x328f9c: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x328f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_328fa0:
    // 0x328fa0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x328fa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_328fa4:
    // 0x328fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x328fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_328fa8:
    // 0x328fa8: 0x0  nop
    ctx->pc = 0x328fa8u;
    // NOP
label_328fac:
    // 0x328fac: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x328facu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_328fb0:
    // 0x328fb0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x328fb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_328fb4:
    // 0x328fb4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x328fb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_328fb8:
    // 0x328fb8: 0x0  nop
    ctx->pc = 0x328fb8u;
    // NOP
label_328fbc:
    // 0x328fbc: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x328fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
label_328fc0:
    // 0x328fc0: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x328fc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_328fc4:
    // 0x328fc4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_328fc8:
    if (ctx->pc == 0x328FC8u) {
        ctx->pc = 0x328FC8u;
            // 0x328fc8: 0x90a40074  lbu         $a0, 0x74($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 116)));
        ctx->pc = 0x328FCCu;
        goto label_328fcc;
    }
    ctx->pc = 0x328FC4u;
    {
        const bool branch_taken_0x328fc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x328FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328FC4u;
            // 0x328fc8: 0x90a40074  lbu         $a0, 0x74($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328fc4) {
            ctx->pc = 0x328FDCu;
            goto label_328fdc;
        }
    }
    ctx->pc = 0x328FCCu;
label_328fcc:
    // 0x328fcc: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x328fccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_328fd0:
    // 0x328fd0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x328fd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_328fd4:
    // 0x328fd4: 0x10000008  b           . + 4 + (0x8 << 2)
label_328fd8:
    if (ctx->pc == 0x328FD8u) {
        ctx->pc = 0x328FD8u;
            // 0x328fd8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x328FDCu;
        goto label_328fdc;
    }
    ctx->pc = 0x328FD4u;
    {
        const bool branch_taken_0x328fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328FD4u;
            // 0x328fd8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328fd4) {
            ctx->pc = 0x328FF8u;
            goto label_328ff8;
        }
    }
    ctx->pc = 0x328FDCu;
label_328fdc:
    // 0x328fdc: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x328fdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_328fe0:
    // 0x328fe0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x328fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_328fe4:
    // 0x328fe4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x328fe4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_328fe8:
    // 0x328fe8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x328fe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_328fec:
    // 0x328fec: 0x0  nop
    ctx->pc = 0x328fecu;
    // NOP
label_328ff0:
    // 0x328ff0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x328ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_328ff4:
    // 0x328ff4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x328ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_328ff8:
    // 0x328ff8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x328ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_328ffc:
    // 0x328ffc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x328ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329000:
    // 0x329000: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x329000u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_329004:
    // 0x329004: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x329004u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_329008:
    // 0x329008: 0x0  nop
    ctx->pc = 0x329008u;
    // NOP
label_32900c:
    // 0x32900c: 0x1012  mflo        $v0
    ctx->pc = 0x32900cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_329010:
    // 0x329010: 0xa0a20075  sb          $v0, 0x75($a1)
    ctx->pc = 0x329010u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 117), (uint8_t)GPR_U32(ctx, 2));
label_329014:
    // 0x329014: 0xae600684  sw          $zero, 0x684($s3)
    ctx->pc = 0x329014u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1668), GPR_U32(ctx, 0));
label_329018:
    // 0x329018: 0xae600688  sw          $zero, 0x688($s3)
    ctx->pc = 0x329018u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1672), GPR_U32(ctx, 0));
label_32901c:
    // 0x32901c: 0xae60068c  sw          $zero, 0x68C($s3)
    ctx->pc = 0x32901cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 0));
label_329020:
    // 0x329020: 0xae600690  sw          $zero, 0x690($s3)
    ctx->pc = 0x329020u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 0));
label_329024:
    // 0x329024: 0xae600694  sw          $zero, 0x694($s3)
    ctx->pc = 0x329024u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1684), GPR_U32(ctx, 0));
label_329028:
    // 0x329028: 0xae600698  sw          $zero, 0x698($s3)
    ctx->pc = 0x329028u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1688), GPR_U32(ctx, 0));
label_32902c:
    // 0x32902c: 0xae60069c  sw          $zero, 0x69C($s3)
    ctx->pc = 0x32902cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1692), GPR_U32(ctx, 0));
label_329030:
    // 0x329030: 0xae6006a0  sw          $zero, 0x6A0($s3)
    ctx->pc = 0x329030u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1696), GPR_U32(ctx, 0));
label_329034:
    // 0x329034: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x329034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_329038:
    // 0x329038: 0xac600110  sw          $zero, 0x110($v1)
    ctx->pc = 0x329038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 0));
label_32903c:
    // 0x32903c: 0x28c20006  slti        $v0, $a2, 0x6
    ctx->pc = 0x32903cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
label_329040:
    // 0x329040: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x329040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_329044:
    // 0x329044: 0x0  nop
    ctx->pc = 0x329044u;
    // NOP
label_329048:
    // 0x329048: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_32904c:
    if (ctx->pc == 0x32904Cu) {
        ctx->pc = 0x329050u;
        goto label_329050;
    }
    ctx->pc = 0x329048u;
    {
        const bool branch_taken_0x329048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329048) {
            ctx->pc = 0x329034u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_329034;
        }
    }
    ctx->pc = 0x329050u;
label_329050:
    // 0x329050: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x329050u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329054:
    // 0x329054: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x329054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_329058:
    // 0x329058: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x329058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
label_32905c:
    // 0x32905c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32905cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_329060:
    // 0x329060: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x329060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
label_329064:
    // 0x329064: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x329064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_329068:
    // 0x329068: 0xac80012c  sw          $zero, 0x12C($a0)
    ctx->pc = 0x329068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 0));
label_32906c:
    // 0x32906c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_329070:
    if (ctx->pc == 0x329070u) {
        ctx->pc = 0x329070u;
            // 0x329070: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x329074u;
        goto label_329074;
    }
    ctx->pc = 0x32906Cu;
    {
        const bool branch_taken_0x32906c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32906Cu;
            // 0x329070: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32906c) {
            ctx->pc = 0x329058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_329058;
        }
    }
    ctx->pc = 0x329074u;
label_329074:
    // 0x329074: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x329074u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329078:
    // 0x329078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x329078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32907c:
    // 0x32907c: 0xac800614  sw          $zero, 0x614($a0)
    ctx->pc = 0x32907cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1556), GPR_U32(ctx, 0));
label_329080:
    // 0x329080: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_329084:
    // 0x329084: 0xac800630  sw          $zero, 0x630($a0)
    ctx->pc = 0x329084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1584), GPR_U32(ctx, 0));
label_329088:
    // 0x329088: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x329088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_32908c:
    // 0x32908c: 0xac80064c  sw          $zero, 0x64C($a0)
    ctx->pc = 0x32908cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1612), GPR_U32(ctx, 0));
label_329090:
    // 0x329090: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_329094:
    if (ctx->pc == 0x329094u) {
        ctx->pc = 0x329094u;
            // 0x329094: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x329098u;
        goto label_329098;
    }
    ctx->pc = 0x329090u;
    {
        const bool branch_taken_0x329090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329090u;
            // 0x329094: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329090) {
            ctx->pc = 0x32907Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32907c;
        }
    }
    ctx->pc = 0x329098u;
label_329098:
    // 0x329098: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x329098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32909c:
    // 0x32909c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32909cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3290a0:
    // 0x3290a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3290a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3290a4:
    // 0x3290a4: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x3290a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_3290a8:
    // 0x3290a8: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x3290a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_3290ac:
    // 0x3290ac: 0xac6000e4  sw          $zero, 0xE4($v1)
    ctx->pc = 0x3290acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 228), GPR_U32(ctx, 0));
label_3290b0:
    // 0x3290b0: 0x24540164  addiu       $s4, $v0, 0x164
    ctx->pc = 0x3290b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
label_3290b4:
    // 0x3290b4: 0xac400164  sw          $zero, 0x164($v0)
    ctx->pc = 0x3290b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 356), GPR_U32(ctx, 0));
label_3290b8:
    // 0x3290b8: 0x2684000c  addiu       $a0, $s4, 0xC
    ctx->pc = 0x3290b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_3290bc:
    // 0x3290bc: 0xac400168  sw          $zero, 0x168($v0)
    ctx->pc = 0x3290bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 360), GPR_U32(ctx, 0));
label_3290c0:
    // 0x3290c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3290c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3290c4:
    // 0x3290c4: 0xac40016c  sw          $zero, 0x16C($v0)
    ctx->pc = 0x3290c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 364), GPR_U32(ctx, 0));
label_3290c8:
    // 0x3290c8: 0xc04a576  jal         func_1295D8
label_3290cc:
    if (ctx->pc == 0x3290CCu) {
        ctx->pc = 0x3290CCu;
            // 0x3290cc: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x3290D0u;
        goto label_3290d0;
    }
    ctx->pc = 0x3290C8u;
    SET_GPR_U32(ctx, 31, 0x3290D0u);
    ctx->pc = 0x3290CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3290C8u;
            // 0x3290cc: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3290D0u; }
        if (ctx->pc != 0x3290D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3290D0u; }
        if (ctx->pc != 0x3290D0u) { return; }
    }
    ctx->pc = 0x3290D0u;
label_3290d0:
    // 0x3290d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3290d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3290d4:
    // 0x3290d4: 0xae800064  sw          $zero, 0x64($s4)
    ctx->pc = 0x3290d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 0));
label_3290d8:
    // 0x3290d8: 0x2a02000b  slti        $v0, $s0, 0xB
    ctx->pc = 0x3290d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
label_3290dc:
    // 0x3290dc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3290dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3290e0:
    // 0x3290e0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_3290e4:
    if (ctx->pc == 0x3290E4u) {
        ctx->pc = 0x3290E4u;
            // 0x3290e4: 0x26310068  addiu       $s1, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->pc = 0x3290E8u;
        goto label_3290e8;
    }
    ctx->pc = 0x3290E0u;
    {
        const bool branch_taken_0x3290e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3290E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3290E0u;
            // 0x3290e4: 0x26310068  addiu       $s1, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3290e0) {
            ctx->pc = 0x3290A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3290a4;
        }
    }
    ctx->pc = 0x3290E8u;
label_3290e8:
    // 0x3290e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3290e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3290ec:
    // 0x3290ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3290ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3290f0:
    // 0x3290f0: 0xac8005dc  sw          $zero, 0x5DC($a0)
    ctx->pc = 0x3290f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1500), GPR_U32(ctx, 0));
label_3290f4:
    // 0x3290f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3290f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3290f8:
    // 0x3290f8: 0xac8005e0  sw          $zero, 0x5E0($a0)
    ctx->pc = 0x3290f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1504), GPR_U32(ctx, 0));
label_3290fc:
    // 0x3290fc: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x3290fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_329100:
    // 0x329100: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x329100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_329104:
    // 0x329104: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_329108:
    if (ctx->pc == 0x329108u) {
        ctx->pc = 0x32910Cu;
        goto label_32910c;
    }
    ctx->pc = 0x329104u;
    {
        const bool branch_taken_0x329104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329104) {
            ctx->pc = 0x3290F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3290f0;
        }
    }
    ctx->pc = 0x32910Cu;
label_32910c:
    // 0x32910c: 0x2671006c  addiu       $s1, $s3, 0x6C
    ctx->pc = 0x32910cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_329110:
    // 0x329110: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x329110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329114:
    // 0x329114: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x329114u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_329118:
    // 0x329118: 0x2404ffe0  addiu       $a0, $zero, -0x20
    ctx->pc = 0x329118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_32911c:
    // 0x32911c: 0x32020003  andi        $v0, $s0, 0x3
    ctx->pc = 0x32911cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_329120:
    // 0x329120: 0x3205001f  andi        $a1, $s0, 0x1F
    ctx->pc = 0x329120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
label_329124:
    // 0x329124: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x329124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_329128:
    // 0x329128: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x329128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_32912c:
    // 0x32912c: 0x2402ff9f  addiu       $v0, $zero, -0x61
    ctx->pc = 0x32912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967199));
label_329130:
    // 0x329130: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x329130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_329134:
    // 0x329134: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x329134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_329138:
    // 0x329138: 0xa2250000  sb          $a1, 0x0($s1)
    ctx->pc = 0x329138u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
label_32913c:
    // 0x32913c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32913cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_329140:
    // 0x329140: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x329140u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_329144:
    // 0x329144: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x329144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_329148:
    // 0x329148: 0x92270000  lbu         $a3, 0x0($s1)
    ctx->pc = 0x329148u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_32914c:
    // 0x32914c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32914cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329150:
    // 0x329150: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x329150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_329154:
    // 0x329154: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x329154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_329158:
    // 0x329158: 0xc0c90f4  jal         func_3243D0
label_32915c:
    if (ctx->pc == 0x32915Cu) {
        ctx->pc = 0x32915Cu;
            // 0x32915c: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x329160u;
        goto label_329160;
    }
    ctx->pc = 0x329158u;
    SET_GPR_U32(ctx, 31, 0x329160u);
    ctx->pc = 0x32915Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329158u;
            // 0x32915c: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3243D0u;
    if (runtime->hasFunction(0x3243D0u)) {
        auto targetFn = runtime->lookupFunction(0x3243D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329160u; }
        if (ctx->pc != 0x329160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003243D0_0x3243d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329160u; }
        if (ctx->pc != 0x329160u) { return; }
    }
    ctx->pc = 0x329160u;
label_329160:
    // 0x329160: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x329160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_329164:
    // 0x329164: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x329164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_329168:
    // 0x329168: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_32916c:
    if (ctx->pc == 0x32916Cu) {
        ctx->pc = 0x32916Cu;
            // 0x32916c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x329170u;
        goto label_329170;
    }
    ctx->pc = 0x329168u;
    {
        const bool branch_taken_0x329168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32916Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329168u;
            // 0x32916c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329168) {
            ctx->pc = 0x329114u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_329114;
        }
    }
    ctx->pc = 0x329170u;
label_329170:
    // 0x329170: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x329170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_329174:
    // 0x329174: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x329174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_329178:
    // 0x329178: 0x8c6589d0  lw          $a1, -0x7630($v1)
    ctx->pc = 0x329178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_32917c:
    // 0x32917c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32917cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_329180:
    // 0x329180: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x329180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_329184:
    // 0x329184: 0x348300ff  ori         $v1, $a0, 0xFF
    ctx->pc = 0x329184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
label_329188:
    // 0x329188: 0xaca60084  sw          $a2, 0x84($a1)
    ctx->pc = 0x329188u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 6));
label_32918c:
    // 0x32918c: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x32918cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
label_329190:
    // 0x329190: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x329190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_329194:
    // 0x329194: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x329194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_329198:
    // 0x329198: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x329198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_32919c:
    // 0x32919c: 0x8c6989f0  lw          $t1, -0x7610($v1)
    ctx->pc = 0x32919cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_3291a0:
    // 0x3291a0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3291a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3291a4:
    // 0x3291a4: 0x93a8006c  lbu         $t0, 0x6C($sp)
    ctx->pc = 0x3291a4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 108)));
label_3291a8:
    // 0x3291a8: 0x93a7006d  lbu         $a3, 0x6D($sp)
    ctx->pc = 0x3291a8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 109)));
label_3291ac:
    // 0x3291ac: 0x93a6006e  lbu         $a2, 0x6E($sp)
    ctx->pc = 0x3291acu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 110)));
label_3291b0:
    // 0x3291b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3291b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3291b4:
    // 0x3291b4: 0xa128003c  sb          $t0, 0x3C($t1)
    ctx->pc = 0x3291b4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 60), (uint8_t)GPR_U32(ctx, 8));
label_3291b8:
    // 0x3291b8: 0xa127003d  sb          $a3, 0x3D($t1)
    ctx->pc = 0x3291b8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 61), (uint8_t)GPR_U32(ctx, 7));
label_3291bc:
    // 0x3291bc: 0xa126003e  sb          $a2, 0x3E($t1)
    ctx->pc = 0x3291bcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 62), (uint8_t)GPR_U32(ctx, 6));
label_3291c0:
    // 0x3291c0: 0x93a6006f  lbu         $a2, 0x6F($sp)
    ctx->pc = 0x3291c0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 111)));
label_3291c4:
    // 0x3291c4: 0xa126003f  sb          $a2, 0x3F($t1)
    ctx->pc = 0x3291c4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 63), (uint8_t)GPR_U32(ctx, 6));
label_3291c8:
    // 0x3291c8: 0x9127003e  lbu         $a3, 0x3E($t1)
    ctx->pc = 0x3291c8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 62)));
label_3291cc:
    // 0x3291cc: 0x9126003d  lbu         $a2, 0x3D($t1)
    ctx->pc = 0x3291ccu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 61)));
label_3291d0:
    // 0x3291d0: 0x9128003f  lbu         $t0, 0x3F($t1)
    ctx->pc = 0x3291d0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 63)));
label_3291d4:
    // 0x3291d4: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x3291d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
label_3291d8:
    // 0x3291d8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3291d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_3291dc:
    // 0x3291dc: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x3291dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_3291e0:
    // 0x3291e0: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x3291e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_3291e4:
    // 0x3291e4: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x3291e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_3291e8:
    // 0x3291e8: 0xfc85ec90  sd          $a1, -0x1370($a0)
    ctx->pc = 0x3291e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294962320), GPR_U64(ctx, 5));
label_3291ec:
    // 0x3291ec: 0xfc65ee00  sd          $a1, -0x1200($v1)
    ctx->pc = 0x3291ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294962688), GPR_U64(ctx, 5));
label_3291f0:
    // 0x3291f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3291f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3291f4:
    // 0x3291f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3291f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3291f8:
    // 0x3291f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3291f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3291fc:
    // 0x3291fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3291fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_329200:
    // 0x329200: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x329200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_329204:
    // 0x329204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_329208:
    // 0x329208: 0x3e00008  jr          $ra
label_32920c:
    if (ctx->pc == 0x32920Cu) {
        ctx->pc = 0x32920Cu;
            // 0x32920c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x329210u;
        goto label_329210;
    }
    ctx->pc = 0x329208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32920Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329208u;
            // 0x32920c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x329210u;
label_329210:
    // 0x329210: 0x80fcbcc  j           func_3F2F30
label_329214:
    if (ctx->pc == 0x329214u) {
        ctx->pc = 0x329214u;
            // 0x329214: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x329218u;
        goto label_329218;
    }
    ctx->pc = 0x329210u;
    ctx->pc = 0x329214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329210u;
            // 0x329214: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F2F30u;
    if (runtime->hasFunction(0x3F2F30u)) {
        auto targetFn = runtime->lookupFunction(0x3F2F30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003F2F30_0x3f2f30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x329218u;
label_329218:
    // 0x329218: 0x0  nop
    ctx->pc = 0x329218u;
    // NOP
label_32921c:
    // 0x32921c: 0x0  nop
    ctx->pc = 0x32921cu;
    // NOP
label_329220:
    // 0x329220: 0x80506ac  j           func_141AB0
label_329224:
    if (ctx->pc == 0x329224u) {
        ctx->pc = 0x329224u;
            // 0x329224: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = 0x329228u;
        goto label_329228;
    }
    ctx->pc = 0x329220u;
    ctx->pc = 0x329224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329220u;
            // 0x329224: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00141AB0_0x141ab0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x329228u;
label_329228:
    // 0x329228: 0x0  nop
    ctx->pc = 0x329228u;
    // NOP
label_32922c:
    // 0x32922c: 0x0  nop
    ctx->pc = 0x32922cu;
    // NOP
label_329230:
    // 0x329230: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x329230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_329234:
    // 0x329234: 0x8c59001c  lw          $t9, 0x1C($v0)
    ctx->pc = 0x329234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_329238:
    // 0x329238: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x329238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_32923c:
    // 0x32923c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x32923cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_329240:
    // 0x329240: 0x3200008  jr          $t9
label_329244:
    if (ctx->pc == 0x329244u) {
        ctx->pc = 0x329248u;
        goto label_329248;
    }
    ctx->pc = 0x329240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x329248u;
label_329248:
    // 0x329248: 0x0  nop
    ctx->pc = 0x329248u;
    // NOP
label_32924c:
    // 0x32924c: 0x0  nop
    ctx->pc = 0x32924cu;
    // NOP
label_329250:
    // 0x329250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x329250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_329254:
    // 0x329254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x329254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_329258:
    // 0x329258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x329258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32925c:
    // 0x32925c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32925cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_329260:
    // 0x329260: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x329260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_329264:
    // 0x329264: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_329268:
    if (ctx->pc == 0x329268u) {
        ctx->pc = 0x329268u;
            // 0x329268: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32926Cu;
        goto label_32926c;
    }
    ctx->pc = 0x329264u;
    {
        const bool branch_taken_0x329264 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x329268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329264u;
            // 0x329268: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329264) {
            ctx->pc = 0x3292A8u;
            goto label_3292a8;
        }
    }
    ctx->pc = 0x32926Cu;
label_32926c:
    // 0x32926c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32926cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_329270:
    // 0x329270: 0x24424630  addiu       $v0, $v0, 0x4630
    ctx->pc = 0x329270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17968));
label_329274:
    // 0x329274: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_329278:
    if (ctx->pc == 0x329278u) {
        ctx->pc = 0x329278u;
            // 0x329278: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x32927Cu;
        goto label_32927c;
    }
    ctx->pc = 0x329274u;
    {
        const bool branch_taken_0x329274 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x329278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329274u;
            // 0x329278: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329274) {
            ctx->pc = 0x329290u;
            goto label_329290;
        }
    }
    ctx->pc = 0x32927Cu;
label_32927c:
    // 0x32927c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32927cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_329280:
    // 0x329280: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329284:
    // 0x329284: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x329284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_329288:
    // 0x329288: 0xc057a68  jal         func_15E9A0
label_32928c:
    if (ctx->pc == 0x32928Cu) {
        ctx->pc = 0x32928Cu;
            // 0x32928c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x329290u;
        goto label_329290;
    }
    ctx->pc = 0x329288u;
    SET_GPR_U32(ctx, 31, 0x329290u);
    ctx->pc = 0x32928Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329288u;
            // 0x32928c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329290u; }
        if (ctx->pc != 0x329290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329290u; }
        if (ctx->pc != 0x329290u) { return; }
    }
    ctx->pc = 0x329290u;
label_329290:
    // 0x329290: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x329290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_329294:
    // 0x329294: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x329294u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_329298:
    // 0x329298: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_32929c:
    if (ctx->pc == 0x32929Cu) {
        ctx->pc = 0x32929Cu;
            // 0x32929c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3292A0u;
        goto label_3292a0;
    }
    ctx->pc = 0x329298u;
    {
        const bool branch_taken_0x329298 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x329298) {
            ctx->pc = 0x32929Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329298u;
            // 0x32929c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3292ACu;
            goto label_3292ac;
        }
    }
    ctx->pc = 0x3292A0u;
label_3292a0:
    // 0x3292a0: 0xc0400a8  jal         func_1002A0
label_3292a4:
    if (ctx->pc == 0x3292A4u) {
        ctx->pc = 0x3292A4u;
            // 0x3292a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3292A8u;
        goto label_3292a8;
    }
    ctx->pc = 0x3292A0u;
    SET_GPR_U32(ctx, 31, 0x3292A8u);
    ctx->pc = 0x3292A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3292A0u;
            // 0x3292a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3292A8u; }
        if (ctx->pc != 0x3292A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3292A8u; }
        if (ctx->pc != 0x3292A8u) { return; }
    }
    ctx->pc = 0x3292A8u;
label_3292a8:
    // 0x3292a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3292a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3292ac:
    // 0x3292ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3292acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3292b0:
    // 0x3292b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3292b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3292b4:
    // 0x3292b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3292b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3292b8:
    // 0x3292b8: 0x3e00008  jr          $ra
label_3292bc:
    if (ctx->pc == 0x3292BCu) {
        ctx->pc = 0x3292BCu;
            // 0x3292bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3292C0u;
        goto label_fallthrough_0x3292b8;
    }
    ctx->pc = 0x3292B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3292BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3292B8u;
            // 0x3292bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3292b8:
    ctx->pc = 0x3292C0u;
}
