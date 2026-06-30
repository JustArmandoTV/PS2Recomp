#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1CD8
// Address: 0x1b1cd8 - 0x1b1e20
void sub_001B1CD8_0x1b1cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1CD8_0x1b1cd8");
#endif

    switch (ctx->pc) {
        case 0x1b1d14u: goto label_1b1d14;
        case 0x1b1d58u: goto label_1b1d58;
        case 0x1b1d70u: goto label_1b1d70;
        case 0x1b1d78u: goto label_1b1d78;
        case 0x1b1dc4u: goto label_1b1dc4;
        case 0x1b1dd8u: goto label_1b1dd8;
        case 0x1b1de4u: goto label_1b1de4;
        case 0x1b1decu: goto label_1b1dec;
        default: break;
    }

    ctx->pc = 0x1b1cd8u;

    // 0x1b1cd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b1cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b1cdc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b1cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b1ce0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1b1ce0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ce4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b1ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b1ce8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b1ce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1cec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b1cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1cf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1cf4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b1cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b1cf8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1b1cf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1cfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b1cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b1d00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b1d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b1d04: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b1d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b1d08: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b1d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b1d0c: 0xc06c530  jal         func_1B14C0
    ctx->pc = 0x1B1D0Cu;
    SET_GPR_U32(ctx, 31, 0x1B1D14u);
    ctx->pc = 0x1B1D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D0Cu;
            // 0x1b1d10: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B14C0u;
    if (runtime->hasFunction(0x1B14C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B14C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D14u; }
        if (ctx->pc != 0x1B1D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B14C0_0x1b14c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D14u; }
        if (ctx->pc != 0x1B1D14u) { return; }
    }
    ctx->pc = 0x1B1D14u;
label_1b1d14:
    // 0x1b1d14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b1d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b1d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d1c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B1D1Cu;
    {
        const bool branch_taken_0x1b1d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D1Cu;
            // 0x1b1d20: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d1c) {
            ctx->pc = 0x1B1D50u;
            goto label_1b1d50;
        }
    }
    ctx->pc = 0x1B1D24u;
    // 0x1b1d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1d28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b1d28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1d2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b1d2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1d30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b1d30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b1d34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b1d34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1d38: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b1d38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b1d3c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b1d3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1d40: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b1d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b1d44: 0x8064fa6  j           func_193E98
    ctx->pc = 0x1B1D44u;
    ctx->pc = 0x1B1D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D44u;
            // 0x1b1d48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193E98u;
    if (runtime->hasFunction(0x193E98u)) {
        auto targetFn = runtime->lookupFunction(0x193E98u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00193E98_0x193e98(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B1D4Cu;
    // 0x1b1d4c: 0x0  nop
    ctx->pc = 0x1b1d4cu;
    // NOP
label_1b1d50:
    // 0x1b1d50: 0xc064fa8  jal         func_193EA0
    ctx->pc = 0x1B1D50u;
    SET_GPR_U32(ctx, 31, 0x1B1D58u);
    ctx->pc = 0x1B1D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D50u;
            // 0x1b1d54: 0x8eb22030  lw          $s2, 0x2030($s5) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8240)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193EA0u;
    if (runtime->hasFunction(0x193EA0u)) {
        auto targetFn = runtime->lookupFunction(0x193EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D58u; }
        if (ctx->pc != 0x1B1D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193EA0_0x193ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D58u; }
        if (ctx->pc != 0x1B1D58u) { return; }
    }
    ctx->pc = 0x1B1D58u;
label_1b1d58:
    // 0x1b1d58: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1b1d58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d5c: 0x26501198  addiu       $s0, $s2, 0x1198
    ctx->pc = 0x1b1d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4504));
    // 0x1b1d60: 0x26531128  addiu       $s3, $s2, 0x1128
    ctx->pc = 0x1b1d60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4392));
    // 0x1b1d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d68: 0xc06c43c  jal         func_1B10F0
    ctx->pc = 0x1B1D68u;
    SET_GPR_U32(ctx, 31, 0x1B1D70u);
    ctx->pc = 0x1B1D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D68u;
            // 0x1b1d6c: 0x26510004  addiu       $s1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B10F0u;
    if (runtime->hasFunction(0x1B10F0u)) {
        auto targetFn = runtime->lookupFunction(0x1B10F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D70u; }
        if (ctx->pc != 0x1B1D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B10F0_0x1b10f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D70u; }
        if (ctx->pc != 0x1B1D70u) { return; }
    }
    ctx->pc = 0x1B1D70u;
label_1b1d70:
    // 0x1b1d70: 0xc06c37c  jal         func_1B0DF0
    ctx->pc = 0x1B1D70u;
    SET_GPR_U32(ctx, 31, 0x1B1D78u);
    ctx->pc = 0x1B1D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D70u;
            // 0x1b1d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0DF0u;
    if (runtime->hasFunction(0x1B0DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D78u; }
        if (ctx->pc != 0x1B1D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0DF0_0x1b0df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D78u; }
        if (ctx->pc != 0x1B1D78u) { return; }
    }
    ctx->pc = 0x1B1D78u;
label_1b1d78:
    // 0x1b1d78: 0x26441150  addiu       $a0, $s2, 0x1150
    ctx->pc = 0x1b1d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4432));
    // 0x1b1d7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1d80: 0x8eaa0038  lw          $t2, 0x38($s5)
    ctx->pc = 0x1b1d80u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x1b1d84: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x1b1d84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x1b1d88: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1b1d88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1d8c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1b1d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1b1d90: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b1d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b1d94: 0x2468000f  addiu       $t0, $v1, 0xF
    ctx->pc = 0x1b1d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1b1d98: 0x28670000  slti        $a3, $v1, 0x0
    ctx->pc = 0x1b1d98u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b1d9c: 0x2446000f  addiu       $a2, $v0, 0xF
    ctx->pc = 0x1b1d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1b1da0: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x1b1da0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b1da4: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x1b1da4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1b1da8: 0x107180b  movn        $v1, $t0, $a3
    ctx->pc = 0x1b1da8u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
    // 0x1b1dac: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1b1dacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1b1db0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1b1db0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1b1db4: 0x15490006  bne         $t2, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B1DB4u;
    {
        const bool branch_taken_0x1b1db4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        ctx->pc = 0x1B1DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1DB4u;
            // 0x1b1db8: 0x433018  mult        $a2, $v0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1db4) {
            ctx->pc = 0x1B1DD0u;
            goto label_1b1dd0;
        }
    }
    ctx->pc = 0x1B1DBCu;
    // 0x1b1dbc: 0xc042742  jal         func_109D08
    ctx->pc = 0x1B1DBCu;
    SET_GPR_U32(ctx, 31, 0x1B1DC4u);
    ctx->pc = 0x1B1DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1DBCu;
            // 0x1b1dc0: 0x8e850030  lw          $a1, 0x30($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109D08u;
    if (runtime->hasFunction(0x109D08u)) {
        auto targetFn = runtime->lookupFunction(0x109D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1DC4u; }
        if (ctx->pc != 0x1B1DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109D08_0x109d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1DC4u; }
        if (ctx->pc != 0x1B1DC4u) { return; }
    }
    ctx->pc = 0x1B1DC4u;
label_1b1dc4:
    // 0x1b1dc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1DC4u;
    {
        const bool branch_taken_0x1b1dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1DC4u;
            // 0x1b1dc8: 0xae600014  sw          $zero, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1dc4) {
            ctx->pc = 0x1B1DDCu;
            goto label_1b1ddc;
        }
    }
    ctx->pc = 0x1B1DCCu;
    // 0x1b1dcc: 0x0  nop
    ctx->pc = 0x1b1dccu;
    // NOP
label_1b1dd0:
    // 0x1b1dd0: 0xc042754  jal         func_109D50
    ctx->pc = 0x1B1DD0u;
    SET_GPR_U32(ctx, 31, 0x1B1DD8u);
    ctx->pc = 0x1B1DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1DD0u;
            // 0x1b1dd4: 0x8e850030  lw          $a1, 0x30($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109D50u;
    if (runtime->hasFunction(0x109D50u)) {
        auto targetFn = runtime->lookupFunction(0x109D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1DD8u; }
        if (ctx->pc != 0x1B1DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109D50_0x109d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1DD8u; }
        if (ctx->pc != 0x1B1DD8u) { return; }
    }
    ctx->pc = 0x1B1DD8u;
label_1b1dd8:
    // 0x1b1dd8: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1b1dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_1b1ddc:
    // 0x1b1ddc: 0xc06c3fc  jal         func_1B0FF0
    ctx->pc = 0x1B1DDCu;
    SET_GPR_U32(ctx, 31, 0x1B1DE4u);
    ctx->pc = 0x1B1DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1DDCu;
            // 0x1b1de0: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FF0u;
    if (runtime->hasFunction(0x1B0FF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1DE4u; }
        if (ctx->pc != 0x1B1DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0FF0_0x1b0ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1DE4u; }
        if (ctx->pc != 0x1B1DE4u) { return; }
    }
    ctx->pc = 0x1B1DE4u;
label_1b1de4:
    // 0x1b1de4: 0xc06c812  jal         func_1B2048
    ctx->pc = 0x1B1DE4u;
    SET_GPR_U32(ctx, 31, 0x1B1DECu);
    ctx->pc = 0x1B1DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1DE4u;
            // 0x1b1de8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2048u;
    if (runtime->hasFunction(0x1B2048u)) {
        auto targetFn = runtime->lookupFunction(0x1B2048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1DECu; }
        if (ctx->pc != 0x1B1DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2048_0x1b2048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1DECu; }
        if (ctx->pc != 0x1B1DECu) { return; }
    }
    ctx->pc = 0x1B1DECu;
label_1b1dec:
    // 0x1b1dec: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x1b1decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1b1df0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1b1df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1b1df4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1df8: 0x2c3100a  movz        $v0, $s6, $v1
    ctx->pc = 0x1b1df8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 22));
    // 0x1b1dfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b1dfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1e00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b1e00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1e04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b1e04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b1e08: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b1e08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1e0c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b1e0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b1e10: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b1e10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1e14: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b1e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b1e18: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E18u;
            // 0x1b1e1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1E20u;
}
