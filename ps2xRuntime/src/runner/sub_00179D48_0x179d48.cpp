#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00179D48
// Address: 0x179d48 - 0x179e50
void sub_00179D48_0x179d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179D48_0x179d48");
#endif

    switch (ctx->pc) {
        case 0x179d48u: goto label_179d48;
        case 0x179d4cu: goto label_179d4c;
        case 0x179d50u: goto label_179d50;
        case 0x179d54u: goto label_179d54;
        case 0x179d58u: goto label_179d58;
        case 0x179d5cu: goto label_179d5c;
        case 0x179d60u: goto label_179d60;
        case 0x179d64u: goto label_179d64;
        case 0x179d68u: goto label_179d68;
        case 0x179d6cu: goto label_179d6c;
        case 0x179d70u: goto label_179d70;
        case 0x179d74u: goto label_179d74;
        case 0x179d78u: goto label_179d78;
        case 0x179d7cu: goto label_179d7c;
        case 0x179d80u: goto label_179d80;
        case 0x179d84u: goto label_179d84;
        case 0x179d88u: goto label_179d88;
        case 0x179d8cu: goto label_179d8c;
        case 0x179d90u: goto label_179d90;
        case 0x179d94u: goto label_179d94;
        case 0x179d98u: goto label_179d98;
        case 0x179d9cu: goto label_179d9c;
        case 0x179da0u: goto label_179da0;
        case 0x179da4u: goto label_179da4;
        case 0x179da8u: goto label_179da8;
        case 0x179dacu: goto label_179dac;
        case 0x179db0u: goto label_179db0;
        case 0x179db4u: goto label_179db4;
        case 0x179db8u: goto label_179db8;
        case 0x179dbcu: goto label_179dbc;
        case 0x179dc0u: goto label_179dc0;
        case 0x179dc4u: goto label_179dc4;
        case 0x179dc8u: goto label_179dc8;
        case 0x179dccu: goto label_179dcc;
        case 0x179dd0u: goto label_179dd0;
        case 0x179dd4u: goto label_179dd4;
        case 0x179dd8u: goto label_179dd8;
        case 0x179ddcu: goto label_179ddc;
        case 0x179de0u: goto label_179de0;
        case 0x179de4u: goto label_179de4;
        case 0x179de8u: goto label_179de8;
        case 0x179decu: goto label_179dec;
        case 0x179df0u: goto label_179df0;
        case 0x179df4u: goto label_179df4;
        case 0x179df8u: goto label_179df8;
        case 0x179dfcu: goto label_179dfc;
        case 0x179e00u: goto label_179e00;
        case 0x179e04u: goto label_179e04;
        case 0x179e08u: goto label_179e08;
        case 0x179e0cu: goto label_179e0c;
        case 0x179e10u: goto label_179e10;
        case 0x179e14u: goto label_179e14;
        case 0x179e18u: goto label_179e18;
        case 0x179e1cu: goto label_179e1c;
        case 0x179e20u: goto label_179e20;
        case 0x179e24u: goto label_179e24;
        case 0x179e28u: goto label_179e28;
        case 0x179e2cu: goto label_179e2c;
        case 0x179e30u: goto label_179e30;
        case 0x179e34u: goto label_179e34;
        case 0x179e38u: goto label_179e38;
        case 0x179e3cu: goto label_179e3c;
        case 0x179e40u: goto label_179e40;
        case 0x179e44u: goto label_179e44;
        case 0x179e48u: goto label_179e48;
        case 0x179e4cu: goto label_179e4c;
        default: break;
    }

    ctx->pc = 0x179d48u;

label_179d48:
    // 0x179d48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x179d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_179d4c:
    // 0x179d4c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x179d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_179d50:
    // 0x179d50: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x179d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_179d54:
    // 0x179d54: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x179d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_179d58:
    // 0x179d58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x179d58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_179d5c:
    // 0x179d5c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x179d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_179d60:
    // 0x179d60: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x179d60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_179d64:
    // 0x179d64: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x179d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_179d68:
    // 0x179d68: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_179d6c:
    if (ctx->pc == 0x179D6Cu) {
        ctx->pc = 0x179D6Cu;
            // 0x179d6c: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->pc = 0x179D70u;
        goto label_179d70;
    }
    ctx->pc = 0x179D68u;
    {
        const bool branch_taken_0x179d68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x179D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179D68u;
            // 0x179d6c: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d68) {
            ctx->pc = 0x179D88u;
            goto label_179d88;
        }
    }
    ctx->pc = 0x179D70u;
label_179d70:
    // 0x179d70: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179d74:
    // 0x179d74: 0xc05e0a6  jal         func_178298
label_179d78:
    if (ctx->pc == 0x179D78u) {
        ctx->pc = 0x179D78u;
            // 0x179d78: 0x24845568  addiu       $a0, $a0, 0x5568 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21864));
        ctx->pc = 0x179D7Cu;
        goto label_179d7c;
    }
    ctx->pc = 0x179D74u;
    SET_GPR_U32(ctx, 31, 0x179D7Cu);
    ctx->pc = 0x179D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179D74u;
            // 0x179d78: 0x24845568  addiu       $a0, $a0, 0x5568 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179D7Cu; }
        if (ctx->pc != 0x179D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179D7Cu; }
        if (ctx->pc != 0x179D7Cu) { return; }
    }
    ctx->pc = 0x179D7Cu;
label_179d7c:
    // 0x179d7c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_179d80:
    if (ctx->pc == 0x179D80u) {
        ctx->pc = 0x179D80u;
            // 0x179d80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x179D84u;
        goto label_179d84;
    }
    ctx->pc = 0x179D7Cu;
    {
        const bool branch_taken_0x179d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179D7Cu;
            // 0x179d80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d7c) {
            ctx->pc = 0x179E34u;
            goto label_179e34;
        }
    }
    ctx->pc = 0x179D84u;
label_179d84:
    // 0x179d84: 0x0  nop
    ctx->pc = 0x179d84u;
    // NOP
label_179d88:
    // 0x179d88: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
label_179d8c:
    if (ctx->pc == 0x179D8Cu) {
        ctx->pc = 0x179D90u;
        goto label_179d90;
    }
    ctx->pc = 0x179D88u;
    {
        const bool branch_taken_0x179d88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x179d88) {
            ctx->pc = 0x179DA8u;
            goto label_179da8;
        }
    }
    ctx->pc = 0x179D90u;
label_179d90:
    // 0x179d90: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179d94:
    // 0x179d94: 0xc05e0a6  jal         func_178298
label_179d98:
    if (ctx->pc == 0x179D98u) {
        ctx->pc = 0x179D98u;
            // 0x179d98: 0x24845590  addiu       $a0, $a0, 0x5590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21904));
        ctx->pc = 0x179D9Cu;
        goto label_179d9c;
    }
    ctx->pc = 0x179D94u;
    SET_GPR_U32(ctx, 31, 0x179D9Cu);
    ctx->pc = 0x179D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179D94u;
            // 0x179d98: 0x24845590  addiu       $a0, $a0, 0x5590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179D9Cu; }
        if (ctx->pc != 0x179D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179D9Cu; }
        if (ctx->pc != 0x179D9Cu) { return; }
    }
    ctx->pc = 0x179D9Cu;
label_179d9c:
    // 0x179d9c: 0x10000025  b           . + 4 + (0x25 << 2)
label_179da0:
    if (ctx->pc == 0x179DA0u) {
        ctx->pc = 0x179DA0u;
            // 0x179da0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x179DA4u;
        goto label_179da4;
    }
    ctx->pc = 0x179D9Cu;
    {
        const bool branch_taken_0x179d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179D9Cu;
            // 0x179da0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d9c) {
            ctx->pc = 0x179E34u;
            goto label_179e34;
        }
    }
    ctx->pc = 0x179DA4u;
label_179da4:
    // 0x179da4: 0x0  nop
    ctx->pc = 0x179da4u;
    // NOP
label_179da8:
    // 0x179da8: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
label_179dac:
    if (ctx->pc == 0x179DACu) {
        ctx->pc = 0x179DB0u;
        goto label_179db0;
    }
    ctx->pc = 0x179DA8u;
    {
        const bool branch_taken_0x179da8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x179da8) {
            ctx->pc = 0x179DC8u;
            goto label_179dc8;
        }
    }
    ctx->pc = 0x179DB0u;
label_179db0:
    // 0x179db0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179db4:
    // 0x179db4: 0xc05e0a6  jal         func_178298
label_179db8:
    if (ctx->pc == 0x179DB8u) {
        ctx->pc = 0x179DB8u;
            // 0x179db8: 0x248455b8  addiu       $a0, $a0, 0x55B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21944));
        ctx->pc = 0x179DBCu;
        goto label_179dbc;
    }
    ctx->pc = 0x179DB4u;
    SET_GPR_U32(ctx, 31, 0x179DBCu);
    ctx->pc = 0x179DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179DB4u;
            // 0x179db8: 0x248455b8  addiu       $a0, $a0, 0x55B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179DBCu; }
        if (ctx->pc != 0x179DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179DBCu; }
        if (ctx->pc != 0x179DBCu) { return; }
    }
    ctx->pc = 0x179DBCu;
label_179dbc:
    // 0x179dbc: 0x1000001d  b           . + 4 + (0x1D << 2)
label_179dc0:
    if (ctx->pc == 0x179DC0u) {
        ctx->pc = 0x179DC0u;
            // 0x179dc0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x179DC4u;
        goto label_179dc4;
    }
    ctx->pc = 0x179DBCu;
    {
        const bool branch_taken_0x179dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179DBCu;
            // 0x179dc0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179dbc) {
            ctx->pc = 0x179E34u;
            goto label_179e34;
        }
    }
    ctx->pc = 0x179DC4u;
label_179dc4:
    // 0x179dc4: 0x0  nop
    ctx->pc = 0x179dc4u;
    // NOP
label_179dc8:
    // 0x179dc8: 0xc05e158  jal         func_178560
label_179dcc:
    if (ctx->pc == 0x179DCCu) {
        ctx->pc = 0x179DD0u;
        goto label_179dd0;
    }
    ctx->pc = 0x179DC8u;
    SET_GPR_U32(ctx, 31, 0x179DD0u);
    ctx->pc = 0x178560u;
    if (runtime->hasFunction(0x178560u)) {
        auto targetFn = runtime->lookupFunction(0x178560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179DD0u; }
        if (ctx->pc != 0x179DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178560_0x178560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179DD0u; }
        if (ctx->pc != 0x179DD0u) { return; }
    }
    ctx->pc = 0x179DD0u;
label_179dd0:
    // 0x179dd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x179dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179dd4:
    // 0x179dd4: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_179dd8:
    if (ctx->pc == 0x179DD8u) {
        ctx->pc = 0x179DD8u;
            // 0x179dd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179DDCu;
        goto label_179ddc;
    }
    ctx->pc = 0x179DD4u;
    {
        const bool branch_taken_0x179dd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x179dd4) {
            ctx->pc = 0x179DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x179DD4u;
            // 0x179dd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x179DF0u;
            goto label_179df0;
        }
    }
    ctx->pc = 0x179DDCu;
label_179ddc:
    // 0x179ddc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179de0:
    // 0x179de0: 0xc05e0a6  jal         func_178298
label_179de4:
    if (ctx->pc == 0x179DE4u) {
        ctx->pc = 0x179DE4u;
            // 0x179de4: 0x248455e0  addiu       $a0, $a0, 0x55E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21984));
        ctx->pc = 0x179DE8u;
        goto label_179de8;
    }
    ctx->pc = 0x179DE0u;
    SET_GPR_U32(ctx, 31, 0x179DE8u);
    ctx->pc = 0x179DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179DE0u;
            // 0x179de4: 0x248455e0  addiu       $a0, $a0, 0x55E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179DE8u; }
        if (ctx->pc != 0x179DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179DE8u; }
        if (ctx->pc != 0x179DE8u) { return; }
    }
    ctx->pc = 0x179DE8u;
label_179de8:
    // 0x179de8: 0x10000012  b           . + 4 + (0x12 << 2)
label_179dec:
    if (ctx->pc == 0x179DECu) {
        ctx->pc = 0x179DECu;
            // 0x179dec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x179DF0u;
        goto label_179df0;
    }
    ctx->pc = 0x179DE8u;
    {
        const bool branch_taken_0x179de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179DE8u;
            // 0x179dec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179de8) {
            ctx->pc = 0x179E34u;
            goto label_179e34;
        }
    }
    ctx->pc = 0x179DF0u;
label_179df0:
    // 0x179df0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179df4:
    // 0x179df4: 0xc04a576  jal         func_1295D8
label_179df8:
    if (ctx->pc == 0x179DF8u) {
        ctx->pc = 0x179DF8u;
            // 0x179df8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x179DFCu;
        goto label_179dfc;
    }
    ctx->pc = 0x179DF4u;
    SET_GPR_U32(ctx, 31, 0x179DFCu);
    ctx->pc = 0x179DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179DF4u;
            // 0x179df8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179DFCu; }
        if (ctx->pc != 0x179DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179DFCu; }
        if (ctx->pc != 0x179DFCu) { return; }
    }
    ctx->pc = 0x179DFCu;
label_179dfc:
    // 0x179dfc: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x179dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_179e00:
    // 0x179e00: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x179e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
label_179e04:
    // 0x179e04: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x179e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
label_179e08:
    // 0x179e08: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x179e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_179e0c:
    // 0x179e0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_179e10:
    if (ctx->pc == 0x179E10u) {
        ctx->pc = 0x179E10u;
            // 0x179e10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179E14u;
        goto label_179e14;
    }
    ctx->pc = 0x179E0Cu;
    {
        const bool branch_taken_0x179e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179E0Cu;
            // 0x179e10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e0c) {
            ctx->pc = 0x179E30u;
            goto label_179e30;
        }
    }
    ctx->pc = 0x179E14u;
label_179e14:
    // 0x179e14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x179e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_179e18:
    // 0x179e18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179e1c:
    // 0x179e1c: 0x40f809  jalr        $v0
label_179e20:
    if (ctx->pc == 0x179E20u) {
        ctx->pc = 0x179E20u;
            // 0x179e20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179E24u;
        goto label_179e24;
    }
    ctx->pc = 0x179E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179E24u);
        ctx->pc = 0x179E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179E1Cu;
            // 0x179e20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x179E24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x179E24u; }
            if (ctx->pc != 0x179E24u) { return; }
        }
        }
    }
    ctx->pc = 0x179E24u;
label_179e24:
    // 0x179e24: 0x10000004  b           . + 4 + (0x4 << 2)
label_179e28:
    if (ctx->pc == 0x179E28u) {
        ctx->pc = 0x179E28u;
            // 0x179e28: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x179E2Cu;
        goto label_179e2c;
    }
    ctx->pc = 0x179E24u;
    {
        const bool branch_taken_0x179e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179E24u;
            // 0x179e28: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e24) {
            ctx->pc = 0x179E38u;
            goto label_179e38;
        }
    }
    ctx->pc = 0x179E2Cu;
label_179e2c:
    // 0x179e2c: 0x0  nop
    ctx->pc = 0x179e2cu;
    // NOP
label_179e30:
    // 0x179e30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x179e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_179e34:
    // 0x179e34: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x179e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_179e38:
    // 0x179e38: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x179e38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_179e3c:
    // 0x179e3c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x179e3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_179e40:
    // 0x179e40: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x179e40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_179e44:
    // 0x179e44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x179e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_179e48:
    // 0x179e48: 0x3e00008  jr          $ra
label_179e4c:
    if (ctx->pc == 0x179E4Cu) {
        ctx->pc = 0x179E4Cu;
            // 0x179e4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x179E50u;
        goto label_fallthrough_0x179e48;
    }
    ctx->pc = 0x179E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179E48u;
            // 0x179e4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x179e48:
    ctx->pc = 0x179E50u;
}
