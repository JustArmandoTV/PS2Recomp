#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005060F0
// Address: 0x5060f0 - 0x506350
void sub_005060F0_0x5060f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005060F0_0x5060f0");
#endif

    switch (ctx->pc) {
        case 0x5060f0u: goto label_5060f0;
        case 0x5060f4u: goto label_5060f4;
        case 0x5060f8u: goto label_5060f8;
        case 0x5060fcu: goto label_5060fc;
        case 0x506100u: goto label_506100;
        case 0x506104u: goto label_506104;
        case 0x506108u: goto label_506108;
        case 0x50610cu: goto label_50610c;
        case 0x506110u: goto label_506110;
        case 0x506114u: goto label_506114;
        case 0x506118u: goto label_506118;
        case 0x50611cu: goto label_50611c;
        case 0x506120u: goto label_506120;
        case 0x506124u: goto label_506124;
        case 0x506128u: goto label_506128;
        case 0x50612cu: goto label_50612c;
        case 0x506130u: goto label_506130;
        case 0x506134u: goto label_506134;
        case 0x506138u: goto label_506138;
        case 0x50613cu: goto label_50613c;
        case 0x506140u: goto label_506140;
        case 0x506144u: goto label_506144;
        case 0x506148u: goto label_506148;
        case 0x50614cu: goto label_50614c;
        case 0x506150u: goto label_506150;
        case 0x506154u: goto label_506154;
        case 0x506158u: goto label_506158;
        case 0x50615cu: goto label_50615c;
        case 0x506160u: goto label_506160;
        case 0x506164u: goto label_506164;
        case 0x506168u: goto label_506168;
        case 0x50616cu: goto label_50616c;
        case 0x506170u: goto label_506170;
        case 0x506174u: goto label_506174;
        case 0x506178u: goto label_506178;
        case 0x50617cu: goto label_50617c;
        case 0x506180u: goto label_506180;
        case 0x506184u: goto label_506184;
        case 0x506188u: goto label_506188;
        case 0x50618cu: goto label_50618c;
        case 0x506190u: goto label_506190;
        case 0x506194u: goto label_506194;
        case 0x506198u: goto label_506198;
        case 0x50619cu: goto label_50619c;
        case 0x5061a0u: goto label_5061a0;
        case 0x5061a4u: goto label_5061a4;
        case 0x5061a8u: goto label_5061a8;
        case 0x5061acu: goto label_5061ac;
        case 0x5061b0u: goto label_5061b0;
        case 0x5061b4u: goto label_5061b4;
        case 0x5061b8u: goto label_5061b8;
        case 0x5061bcu: goto label_5061bc;
        case 0x5061c0u: goto label_5061c0;
        case 0x5061c4u: goto label_5061c4;
        case 0x5061c8u: goto label_5061c8;
        case 0x5061ccu: goto label_5061cc;
        case 0x5061d0u: goto label_5061d0;
        case 0x5061d4u: goto label_5061d4;
        case 0x5061d8u: goto label_5061d8;
        case 0x5061dcu: goto label_5061dc;
        case 0x5061e0u: goto label_5061e0;
        case 0x5061e4u: goto label_5061e4;
        case 0x5061e8u: goto label_5061e8;
        case 0x5061ecu: goto label_5061ec;
        case 0x5061f0u: goto label_5061f0;
        case 0x5061f4u: goto label_5061f4;
        case 0x5061f8u: goto label_5061f8;
        case 0x5061fcu: goto label_5061fc;
        case 0x506200u: goto label_506200;
        case 0x506204u: goto label_506204;
        case 0x506208u: goto label_506208;
        case 0x50620cu: goto label_50620c;
        case 0x506210u: goto label_506210;
        case 0x506214u: goto label_506214;
        case 0x506218u: goto label_506218;
        case 0x50621cu: goto label_50621c;
        case 0x506220u: goto label_506220;
        case 0x506224u: goto label_506224;
        case 0x506228u: goto label_506228;
        case 0x50622cu: goto label_50622c;
        case 0x506230u: goto label_506230;
        case 0x506234u: goto label_506234;
        case 0x506238u: goto label_506238;
        case 0x50623cu: goto label_50623c;
        case 0x506240u: goto label_506240;
        case 0x506244u: goto label_506244;
        case 0x506248u: goto label_506248;
        case 0x50624cu: goto label_50624c;
        case 0x506250u: goto label_506250;
        case 0x506254u: goto label_506254;
        case 0x506258u: goto label_506258;
        case 0x50625cu: goto label_50625c;
        case 0x506260u: goto label_506260;
        case 0x506264u: goto label_506264;
        case 0x506268u: goto label_506268;
        case 0x50626cu: goto label_50626c;
        case 0x506270u: goto label_506270;
        case 0x506274u: goto label_506274;
        case 0x506278u: goto label_506278;
        case 0x50627cu: goto label_50627c;
        case 0x506280u: goto label_506280;
        case 0x506284u: goto label_506284;
        case 0x506288u: goto label_506288;
        case 0x50628cu: goto label_50628c;
        case 0x506290u: goto label_506290;
        case 0x506294u: goto label_506294;
        case 0x506298u: goto label_506298;
        case 0x50629cu: goto label_50629c;
        case 0x5062a0u: goto label_5062a0;
        case 0x5062a4u: goto label_5062a4;
        case 0x5062a8u: goto label_5062a8;
        case 0x5062acu: goto label_5062ac;
        case 0x5062b0u: goto label_5062b0;
        case 0x5062b4u: goto label_5062b4;
        case 0x5062b8u: goto label_5062b8;
        case 0x5062bcu: goto label_5062bc;
        case 0x5062c0u: goto label_5062c0;
        case 0x5062c4u: goto label_5062c4;
        case 0x5062c8u: goto label_5062c8;
        case 0x5062ccu: goto label_5062cc;
        case 0x5062d0u: goto label_5062d0;
        case 0x5062d4u: goto label_5062d4;
        case 0x5062d8u: goto label_5062d8;
        case 0x5062dcu: goto label_5062dc;
        case 0x5062e0u: goto label_5062e0;
        case 0x5062e4u: goto label_5062e4;
        case 0x5062e8u: goto label_5062e8;
        case 0x5062ecu: goto label_5062ec;
        case 0x5062f0u: goto label_5062f0;
        case 0x5062f4u: goto label_5062f4;
        case 0x5062f8u: goto label_5062f8;
        case 0x5062fcu: goto label_5062fc;
        case 0x506300u: goto label_506300;
        case 0x506304u: goto label_506304;
        case 0x506308u: goto label_506308;
        case 0x50630cu: goto label_50630c;
        case 0x506310u: goto label_506310;
        case 0x506314u: goto label_506314;
        case 0x506318u: goto label_506318;
        case 0x50631cu: goto label_50631c;
        case 0x506320u: goto label_506320;
        case 0x506324u: goto label_506324;
        case 0x506328u: goto label_506328;
        case 0x50632cu: goto label_50632c;
        case 0x506330u: goto label_506330;
        case 0x506334u: goto label_506334;
        case 0x506338u: goto label_506338;
        case 0x50633cu: goto label_50633c;
        case 0x506340u: goto label_506340;
        case 0x506344u: goto label_506344;
        case 0x506348u: goto label_506348;
        case 0x50634cu: goto label_50634c;
        default: break;
    }

    ctx->pc = 0x5060f0u;

label_5060f0:
    // 0x5060f0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x5060f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_5060f4:
    // 0x5060f4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x5060f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_5060f8:
    // 0x5060f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x5060f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_5060fc:
    // 0x5060fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x5060fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_506100:
    // 0x506100: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x506100u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_506104:
    // 0x506104: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x506104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_506108:
    // 0x506108: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x506108u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50610c:
    // 0x50610c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x50610cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_506110:
    // 0x506110: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x506110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_506114:
    // 0x506114: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x506114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_506118:
    // 0x506118: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x506118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_50611c:
    // 0x50611c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50611cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_506120:
    // 0x506120: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x506120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_506124:
    // 0x506124: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x506124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_506128:
    // 0x506128: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x506128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_50612c:
    // 0x50612c: 0xc04f278  jal         func_13C9E0
label_506130:
    if (ctx->pc == 0x506130u) {
        ctx->pc = 0x506130u;
            // 0x506130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506134u;
        goto label_506134;
    }
    ctx->pc = 0x50612Cu;
    SET_GPR_U32(ctx, 31, 0x506134u);
    ctx->pc = 0x506130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50612Cu;
            // 0x506130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506134u; }
        if (ctx->pc != 0x506134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506134u; }
        if (ctx->pc != 0x506134u) { return; }
    }
    ctx->pc = 0x506134u;
label_506134:
    // 0x506134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x506134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_506138:
    // 0x506138: 0xc04ce80  jal         func_133A00
label_50613c:
    if (ctx->pc == 0x50613Cu) {
        ctx->pc = 0x50613Cu;
            // 0x50613c: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x506140u;
        goto label_506140;
    }
    ctx->pc = 0x506138u;
    SET_GPR_U32(ctx, 31, 0x506140u);
    ctx->pc = 0x50613Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506138u;
            // 0x50613c: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506140u; }
        if (ctx->pc != 0x506140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506140u; }
        if (ctx->pc != 0x506140u) { return; }
    }
    ctx->pc = 0x506140u;
label_506140:
    // 0x506140: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x506140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_506144:
    // 0x506144: 0x92a6004c  lbu         $a2, 0x4C($s5)
    ctx->pc = 0x506144u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 76)));
label_506148:
    // 0x506148: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x506148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_50614c:
    // 0x50614c: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x50614cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_506150:
    // 0x506150: 0xc07698c  jal         func_1DA630
label_506154:
    if (ctx->pc == 0x506154u) {
        ctx->pc = 0x506154u;
            // 0x506154: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506158u;
        goto label_506158;
    }
    ctx->pc = 0x506150u;
    SET_GPR_U32(ctx, 31, 0x506158u);
    ctx->pc = 0x506154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506150u;
            // 0x506154: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506158u; }
        if (ctx->pc != 0x506158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506158u; }
        if (ctx->pc != 0x506158u) { return; }
    }
    ctx->pc = 0x506158u;
label_506158:
    // 0x506158: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x506158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_50615c:
    // 0x50615c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_506160:
    if (ctx->pc == 0x506160u) {
        ctx->pc = 0x506164u;
        goto label_506164;
    }
    ctx->pc = 0x50615Cu;
    {
        const bool branch_taken_0x50615c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x50615c) {
            ctx->pc = 0x50616Cu;
            goto label_50616c;
        }
    }
    ctx->pc = 0x506164u;
label_506164:
    // 0x506164: 0x10000033  b           . + 4 + (0x33 << 2)
label_506168:
    if (ctx->pc == 0x506168u) {
        ctx->pc = 0x506168u;
            // 0x506168: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x50616Cu;
        goto label_50616c;
    }
    ctx->pc = 0x506164u;
    {
        const bool branch_taken_0x506164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x506168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506164u;
            // 0x506168: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506164) {
            ctx->pc = 0x506234u;
            goto label_506234;
        }
    }
    ctx->pc = 0x50616Cu;
label_50616c:
    // 0x50616c: 0xc0576f4  jal         func_15DBD0
label_506170:
    if (ctx->pc == 0x506170u) {
        ctx->pc = 0x506174u;
        goto label_506174;
    }
    ctx->pc = 0x50616Cu;
    SET_GPR_U32(ctx, 31, 0x506174u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506174u; }
        if (ctx->pc != 0x506174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506174u; }
        if (ctx->pc != 0x506174u) { return; }
    }
    ctx->pc = 0x506174u;
label_506174:
    // 0x506174: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x506174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_506178:
    // 0x506178: 0xc076984  jal         func_1DA610
label_50617c:
    if (ctx->pc == 0x50617Cu) {
        ctx->pc = 0x50617Cu;
            // 0x50617c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506180u;
        goto label_506180;
    }
    ctx->pc = 0x506178u;
    SET_GPR_U32(ctx, 31, 0x506180u);
    ctx->pc = 0x50617Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506178u;
            // 0x50617c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506180u; }
        if (ctx->pc != 0x506180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506180u; }
        if (ctx->pc != 0x506180u) { return; }
    }
    ctx->pc = 0x506180u;
label_506180:
    // 0x506180: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x506180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_506184:
    // 0x506184: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x506184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_506188:
    // 0x506188: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x506188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_50618c:
    // 0x50618c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x50618cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_506190:
    // 0x506190: 0xc442ccc0  lwc1        $f2, -0x3340($v0)
    ctx->pc = 0x506190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_506194:
    // 0x506194: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x506194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_506198:
    // 0x506198: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x506198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_50619c:
    // 0x50619c: 0xc441ccc8  lwc1        $f1, -0x3338($v0)
    ctx->pc = 0x50619cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5061a0:
    // 0x5061a0: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x5061a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_5061a4:
    // 0x5061a4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5061a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5061a8:
    // 0x5061a8: 0xc440cccc  lwc1        $f0, -0x3334($v0)
    ctx->pc = 0x5061a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5061ac:
    // 0x5061ac: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x5061acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_5061b0:
    // 0x5061b0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5061b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5061b4:
    // 0x5061b4: 0x8c42ccc4  lw          $v0, -0x333C($v0)
    ctx->pc = 0x5061b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954180)));
label_5061b8:
    // 0x5061b8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x5061b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_5061bc:
    // 0x5061bc: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x5061bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_5061c0:
    // 0x5061c0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x5061c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5061c4:
    // 0x5061c4: 0xc04cca0  jal         func_133280
label_5061c8:
    if (ctx->pc == 0x5061C8u) {
        ctx->pc = 0x5061C8u;
            // 0x5061c8: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->pc = 0x5061CCu;
        goto label_5061cc;
    }
    ctx->pc = 0x5061C4u;
    SET_GPR_U32(ctx, 31, 0x5061CCu);
    ctx->pc = 0x5061C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5061C4u;
            // 0x5061c8: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5061CCu; }
        if (ctx->pc != 0x5061CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5061CCu; }
        if (ctx->pc != 0x5061CCu) { return; }
    }
    ctx->pc = 0x5061CCu;
label_5061cc:
    // 0x5061cc: 0xc076980  jal         func_1DA600
label_5061d0:
    if (ctx->pc == 0x5061D0u) {
        ctx->pc = 0x5061D0u;
            // 0x5061d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5061D4u;
        goto label_5061d4;
    }
    ctx->pc = 0x5061CCu;
    SET_GPR_U32(ctx, 31, 0x5061D4u);
    ctx->pc = 0x5061D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5061CCu;
            // 0x5061d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5061D4u; }
        if (ctx->pc != 0x5061D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5061D4u; }
        if (ctx->pc != 0x5061D4u) { return; }
    }
    ctx->pc = 0x5061D4u;
label_5061d4:
    // 0x5061d4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x5061d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_5061d8:
    // 0x5061d8: 0xc04cc34  jal         func_1330D0
label_5061dc:
    if (ctx->pc == 0x5061DCu) {
        ctx->pc = 0x5061DCu;
            // 0x5061dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5061E0u;
        goto label_5061e0;
    }
    ctx->pc = 0x5061D8u;
    SET_GPR_U32(ctx, 31, 0x5061E0u);
    ctx->pc = 0x5061DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5061D8u;
            // 0x5061dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5061E0u; }
        if (ctx->pc != 0x5061E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5061E0u; }
        if (ctx->pc != 0x5061E0u) { return; }
    }
    ctx->pc = 0x5061E0u;
label_5061e0:
    // 0x5061e0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x5061e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_5061e4:
    // 0x5061e4: 0xc461b210  lwc1        $f1, -0x4DF0($v1)
    ctx->pc = 0x5061e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294947344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5061e8:
    // 0x5061e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x5061e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5061ec:
    // 0x5061ec: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_5061f0:
    if (ctx->pc == 0x5061F0u) {
        ctx->pc = 0x5061F0u;
            // 0x5061f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5061F4u;
        goto label_5061f4;
    }
    ctx->pc = 0x5061ECu;
    {
        const bool branch_taken_0x5061ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5061ec) {
            ctx->pc = 0x5061F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5061ECu;
            // 0x5061f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5061FCu;
            goto label_5061fc;
        }
    }
    ctx->pc = 0x5061F4u;
label_5061f4:
    // 0x5061f4: 0x1000000f  b           . + 4 + (0xF << 2)
label_5061f8:
    if (ctx->pc == 0x5061F8u) {
        ctx->pc = 0x5061F8u;
            // 0x5061f8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x5061FCu;
        goto label_5061fc;
    }
    ctx->pc = 0x5061F4u;
    {
        const bool branch_taken_0x5061f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5061F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5061F4u;
            // 0x5061f8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5061f4) {
            ctx->pc = 0x506234u;
            goto label_506234;
        }
    }
    ctx->pc = 0x5061FCu;
label_5061fc:
    // 0x5061fc: 0xc07697c  jal         func_1DA5F0
label_506200:
    if (ctx->pc == 0x506200u) {
        ctx->pc = 0x506204u;
        goto label_506204;
    }
    ctx->pc = 0x5061FCu;
    SET_GPR_U32(ctx, 31, 0x506204u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506204u; }
        if (ctx->pc != 0x506204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506204u; }
        if (ctx->pc != 0x506204u) { return; }
    }
    ctx->pc = 0x506204u;
label_506204:
    // 0x506204: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x506204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_506208:
    // 0x506208: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x506208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_50620c:
    // 0x50620c: 0xc04cd60  jal         func_133580
label_506210:
    if (ctx->pc == 0x506210u) {
        ctx->pc = 0x506210u;
            // 0x506210: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506214u;
        goto label_506214;
    }
    ctx->pc = 0x50620Cu;
    SET_GPR_U32(ctx, 31, 0x506214u);
    ctx->pc = 0x506210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50620Cu;
            // 0x506210: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506214u; }
        if (ctx->pc != 0x506214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506214u; }
        if (ctx->pc != 0x506214u) { return; }
    }
    ctx->pc = 0x506214u;
label_506214:
    // 0x506214: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x506214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_506218:
    // 0x506218: 0xc04c650  jal         func_131940
label_50621c:
    if (ctx->pc == 0x50621Cu) {
        ctx->pc = 0x50621Cu;
            // 0x50621c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x506220u;
        goto label_506220;
    }
    ctx->pc = 0x506218u;
    SET_GPR_U32(ctx, 31, 0x506220u);
    ctx->pc = 0x50621Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506218u;
            // 0x50621c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506220u; }
        if (ctx->pc != 0x506220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506220u; }
        if (ctx->pc != 0x506220u) { return; }
    }
    ctx->pc = 0x506220u;
label_506220:
    // 0x506220: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x506220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_506224:
    // 0x506224: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x506224u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_506228:
    // 0x506228: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x506228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_50622c:
    // 0x50622c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x50622cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_506230:
    // 0x506230: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x506230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_506234:
    // 0x506234: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x506234u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_506238:
    // 0x506238: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
label_50623c:
    if (ctx->pc == 0x50623Cu) {
        ctx->pc = 0x50623Cu;
            // 0x50623c: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x506240u;
        goto label_506240;
    }
    ctx->pc = 0x506238u;
    {
        const bool branch_taken_0x506238 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x50623Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506238u;
            // 0x50623c: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506238) {
            ctx->pc = 0x506324u;
            goto label_506324;
        }
    }
    ctx->pc = 0x506240u;
label_506240:
    // 0x506240: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x506240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_506244:
    // 0x506244: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x506244u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_506248:
    // 0x506248: 0x8c45e3c0  lw          $a1, -0x1C40($v0)
    ctx->pc = 0x506248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_50624c:
    // 0x50624c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x50624cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_506250:
    // 0x506250: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x506250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_506254:
    // 0x506254: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x506254u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_506258:
    // 0x506258: 0x8c44e3d8  lw          $a0, -0x1C28($v0)
    ctx->pc = 0x506258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_50625c:
    // 0x50625c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50625cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_506260:
    // 0x506260: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x506260u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_506264:
    // 0x506264: 0x8c43e360  lw          $v1, -0x1CA0($v0)
    ctx->pc = 0x506264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_506268:
    // 0x506268: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x506268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_50626c:
    // 0x50626c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50626cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_506270:
    // 0x506270: 0x659821  addu        $s3, $v1, $a1
    ctx->pc = 0x506270u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_506274:
    // 0x506274: 0x8c42e3b0  lw          $v0, -0x1C50($v0)
    ctx->pc = 0x506274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_506278:
    // 0x506278: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x506278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50627c:
    // 0x50627c: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x50627cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_506280:
    // 0x506280: 0xacb30000  sw          $s3, 0x0($a1)
    ctx->pc = 0x506280u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 19));
label_506284:
    // 0x506284: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x506284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_506288:
    // 0x506288: 0x8c86e3d8  lw          $a2, -0x1C28($a0)
    ctx->pc = 0x506288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960088)));
label_50628c:
    // 0x50628c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x50628cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_506290:
    // 0x506290: 0x8c68e378  lw          $t0, -0x1C88($v1)
    ctx->pc = 0x506290u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_506294:
    // 0x506294: 0x8c44e3b8  lw          $a0, -0x1C48($v0)
    ctx->pc = 0x506294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_506298:
    // 0x506298: 0x64880  sll         $t1, $a2, 2
    ctx->pc = 0x506298u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_50629c:
    // 0x50629c: 0x1099021  addu        $s2, $t0, $t1
    ctx->pc = 0x50629cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_5062a0:
    // 0x5062a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5062a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5062a4:
    // 0x5062a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x5062a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5062a8:
    // 0x5062a8: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x5062a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_5062ac:
    // 0x5062ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5062acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5062b0:
    // 0x5062b0: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x5062b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
label_5062b4:
    // 0x5062b4: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x5062b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_5062b8:
    // 0x5062b8: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x5062b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_5062bc:
    // 0x5062bc: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x5062bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_5062c0:
    // 0x5062c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x5062c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_5062c4:
    // 0x5062c4: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x5062c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_5062c8:
    // 0x5062c8: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x5062c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_5062cc:
    // 0x5062cc: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x5062ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_5062d0:
    // 0x5062d0: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x5062d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_5062d4:
    // 0x5062d4: 0xc04e4a4  jal         func_139290
label_5062d8:
    if (ctx->pc == 0x5062D8u) {
        ctx->pc = 0x5062D8u;
            // 0x5062d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5062DCu;
        goto label_5062dc;
    }
    ctx->pc = 0x5062D4u;
    SET_GPR_U32(ctx, 31, 0x5062DCu);
    ctx->pc = 0x5062D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5062D4u;
            // 0x5062d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5062DCu; }
        if (ctx->pc != 0x5062DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5062DCu; }
        if (ctx->pc != 0x5062DCu) { return; }
    }
    ctx->pc = 0x5062DCu;
label_5062dc:
    // 0x5062dc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x5062dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_5062e0:
    // 0x5062e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x5062e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5062e4:
    // 0x5062e4: 0xc04cd60  jal         func_133580
label_5062e8:
    if (ctx->pc == 0x5062E8u) {
        ctx->pc = 0x5062E8u;
            // 0x5062e8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x5062ECu;
        goto label_5062ec;
    }
    ctx->pc = 0x5062E4u;
    SET_GPR_U32(ctx, 31, 0x5062ECu);
    ctx->pc = 0x5062E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5062E4u;
            // 0x5062e8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5062ECu; }
        if (ctx->pc != 0x5062ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5062ECu; }
        if (ctx->pc != 0x5062ECu) { return; }
    }
    ctx->pc = 0x5062ECu;
label_5062ec:
    // 0x5062ec: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x5062ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_5062f0:
    // 0x5062f0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x5062f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_5062f4:
    // 0x5062f4: 0x320f809  jalr        $t9
label_5062f8:
    if (ctx->pc == 0x5062F8u) {
        ctx->pc = 0x5062F8u;
            // 0x5062f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5062FCu;
        goto label_5062fc;
    }
    ctx->pc = 0x5062F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5062FCu);
        ctx->pc = 0x5062F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5062F4u;
            // 0x5062f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5062FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5062FCu; }
            if (ctx->pc != 0x5062FCu) { return; }
        }
        }
    }
    ctx->pc = 0x5062FCu;
label_5062fc:
    // 0x5062fc: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x5062fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_506300:
    // 0x506300: 0xc6ac0054  lwc1        $f12, 0x54($s5)
    ctx->pc = 0x506300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_506304:
    // 0x506304: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x506304u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_506308:
    // 0x506308: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x506308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50630c:
    // 0x50630c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x50630cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_506310:
    // 0x506310: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x506310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_506314:
    // 0x506314: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x506314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_506318:
    // 0x506318: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x506318u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_50631c:
    // 0x50631c: 0xc04cff4  jal         func_133FD0
label_506320:
    if (ctx->pc == 0x506320u) {
        ctx->pc = 0x506320u;
            // 0x506320: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506324u;
        goto label_506324;
    }
    ctx->pc = 0x50631Cu;
    SET_GPR_U32(ctx, 31, 0x506324u);
    ctx->pc = 0x506320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50631Cu;
            // 0x506320: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506324u; }
        if (ctx->pc != 0x506324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506324u; }
        if (ctx->pc != 0x506324u) { return; }
    }
    ctx->pc = 0x506324u;
label_506324:
    // 0x506324: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x506324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_506328:
    // 0x506328: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x506328u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_50632c:
    // 0x50632c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x50632cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_506330:
    // 0x506330: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x506330u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_506334:
    // 0x506334: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x506334u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_506338:
    // 0x506338: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x506338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50633c:
    // 0x50633c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50633cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_506340:
    // 0x506340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x506340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_506344:
    // 0x506344: 0x3e00008  jr          $ra
label_506348:
    if (ctx->pc == 0x506348u) {
        ctx->pc = 0x506348u;
            // 0x506348: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x50634Cu;
        goto label_50634c;
    }
    ctx->pc = 0x506344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x506348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506344u;
            // 0x506348: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50634Cu;
label_50634c:
    // 0x50634c: 0x0  nop
    ctx->pc = 0x50634cu;
    // NOP
}
