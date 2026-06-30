#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7E38
// Address: 0x1a7e38 - 0x1a7f90
void sub_001A7E38_0x1a7e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7E38_0x1a7e38");
#endif

    switch (ctx->pc) {
        case 0x1a7e5cu: goto label_1a7e5c;
        case 0x1a7e80u: goto label_1a7e80;
        case 0x1a7ec4u: goto label_1a7ec4;
        case 0x1a7ef4u: goto label_1a7ef4;
        case 0x1a7f00u: goto label_1a7f00;
        case 0x1a7f10u: goto label_1a7f10;
        case 0x1a7f24u: goto label_1a7f24;
        case 0x1a7f38u: goto label_1a7f38;
        case 0x1a7f4cu: goto label_1a7f4c;
        case 0x1a7f60u: goto label_1a7f60;
        case 0x1a7f70u: goto label_1a7f70;
        default: break;
    }

    ctx->pc = 0x1a7e38u;

    // 0x1a7e38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a7e3c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a7e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a7e40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a7e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a7e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e48: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a7e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a7e4c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a7e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a7e50: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a7e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a7e54: 0xc06e920  jal         func_1BA480
    ctx->pc = 0x1A7E54u;
    SET_GPR_U32(ctx, 31, 0x1A7E5Cu);
    ctx->pc = 0x1A7E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E54u;
            // 0x1a7e58: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA480u;
    if (runtime->hasFunction(0x1BA480u)) {
        auto targetFn = runtime->lookupFunction(0x1BA480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E5Cu; }
        if (ctx->pc != 0x1A7E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA480_0x1ba480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E5Cu; }
        if (ctx->pc != 0x1A7E5Cu) { return; }
    }
    ctx->pc = 0x1A7E5Cu;
label_1a7e5c:
    // 0x1a7e5c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a7e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7e60: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1a7e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a7e64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e68: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x1a7e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1a7e6c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1a7e6cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1a7e70: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1A7E70u;
    {
        const bool branch_taken_0x1a7e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E70u;
            // 0x1a7e74: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e70) {
            ctx->pc = 0x1A7F78u;
            goto label_1a7f78;
        }
    }
    ctx->pc = 0x1A7E78u;
    // 0x1a7e78: 0xc06e9f6  jal         func_1BA7D8
    ctx->pc = 0x1A7E78u;
    SET_GPR_U32(ctx, 31, 0x1A7E80u);
    ctx->pc = 0x1BA7D8u;
    if (runtime->hasFunction(0x1BA7D8u)) {
        auto targetFn = runtime->lookupFunction(0x1BA7D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E80u; }
        if (ctx->pc != 0x1A7E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA7D8_0x1ba7d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E80u; }
        if (ctx->pc != 0x1A7E80u) { return; }
    }
    ctx->pc = 0x1A7E80u;
label_1a7e80:
    // 0x1a7e80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7E80u;
    {
        const bool branch_taken_0x1a7e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E80u;
            // 0x1a7e84: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e80) {
            ctx->pc = 0x1A7E94u;
            goto label_1a7e94;
        }
    }
    ctx->pc = 0x1A7E88u;
    // 0x1a7e88: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1a7e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1a7e8c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a7e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1a7e90: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a7e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a7e94:
    // 0x1a7e94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e98: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a7e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7e9c: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x1a7e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1a7ea0: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x1a7ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a7ea4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a7ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1a7ea8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a7ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7eac: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1a7eacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1a7eb0: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x1a7eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a7eb4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a7eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7eb8: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1a7eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a7ebc: 0xc06eae2  jal         func_1BAB88
    ctx->pc = 0x1A7EBCu;
    SET_GPR_U32(ctx, 31, 0x1A7EC4u);
    ctx->pc = 0x1A7EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7EBCu;
            // 0x1a7ec0: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAB88u;
    if (runtime->hasFunction(0x1BAB88u)) {
        auto targetFn = runtime->lookupFunction(0x1BAB88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7EC4u; }
        if (ctx->pc != 0x1A7EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAB88_0x1bab88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7EC4u; }
        if (ctx->pc != 0x1A7EC4u) { return; }
    }
    ctx->pc = 0x1A7EC4u;
label_1a7ec4:
    // 0x1a7ec4: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1a7ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1a7ec8: 0x2a10006e  slti        $s0, $s0, 0x6E
    ctx->pc = 0x1a7ec8u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x1a7ecc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ed0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ed4: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1a7ed4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1a7ed8: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1a7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1a7edc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7EDCu;
    {
        const bool branch_taken_0x1a7edc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7EDCu;
            // 0x1a7ee0: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7edc) {
            ctx->pc = 0x1A7EE8u;
            goto label_1a7ee8;
        }
    }
    ctx->pc = 0x1A7EE4u;
    // 0x1a7ee4: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x1a7ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_1a7ee8:
    // 0x1a7ee8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1a7ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1a7eec: 0xc069fe4  jal         func_1A7F90
    ctx->pc = 0x1A7EECu;
    SET_GPR_U32(ctx, 31, 0x1A7EF4u);
    ctx->pc = 0x1A7EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7EECu;
            // 0x1a7ef0: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F90u;
    if (runtime->hasFunction(0x1A7F90u)) {
        auto targetFn = runtime->lookupFunction(0x1A7F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7EF4u; }
        if (ctx->pc != 0x1A7EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7F90_0x1a7f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7EF4u; }
        if (ctx->pc != 0x1A7EF4u) { return; }
    }
    ctx->pc = 0x1A7EF4u;
label_1a7ef4:
    // 0x1a7ef4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ef8: 0xc06a008  jal         func_1A8020
    ctx->pc = 0x1A7EF8u;
    SET_GPR_U32(ctx, 31, 0x1A7F00u);
    ctx->pc = 0x1A7EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7EF8u;
            // 0x1a7efc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8020u;
    if (runtime->hasFunction(0x1A8020u)) {
        auto targetFn = runtime->lookupFunction(0x1A8020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F00u; }
        if (ctx->pc != 0x1A7F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8020_0x1a8020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F00u; }
        if (ctx->pc != 0x1A7F00u) { return; }
    }
    ctx->pc = 0x1A7F00u;
label_1a7f00:
    // 0x1a7f00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f04: 0x240500bd  addiu       $a1, $zero, 0xBD
    ctx->pc = 0x1a7f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x1a7f08: 0xc06a036  jal         func_1A80D8
    ctx->pc = 0x1A7F08u;
    SET_GPR_U32(ctx, 31, 0x1A7F10u);
    ctx->pc = 0x1A7F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F08u;
            // 0x1a7f0c: 0x240600bd  addiu       $a2, $zero, 0xBD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A80D8u;
    if (runtime->hasFunction(0x1A80D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A80D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F10u; }
        if (ctx->pc != 0x1A7F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A80D8_0x1a80d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F10u; }
        if (ctx->pc != 0x1A7F10u) { return; }
    }
    ctx->pc = 0x1A7F10u;
label_1a7f10:
    // 0x1a7f10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f14: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x1a7f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x1a7f18: 0x240500bf  addiu       $a1, $zero, 0xBF
    ctx->pc = 0x1a7f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x1a7f1c: 0xc06a036  jal         func_1A80D8
    ctx->pc = 0x1A7F1Cu;
    SET_GPR_U32(ctx, 31, 0x1A7F24u);
    ctx->pc = 0x1A7F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F1Cu;
            // 0x1a7f20: 0x240600bf  addiu       $a2, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A80D8u;
    if (runtime->hasFunction(0x1A80D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A80D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F24u; }
        if (ctx->pc != 0x1A7F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A80D8_0x1a80d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F24u; }
        if (ctx->pc != 0x1A7F24u) { return; }
    }
    ctx->pc = 0x1A7F24u;
label_1a7f24:
    // 0x1a7f24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f28: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x1a7f28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x1a7f2c: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x1a7f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1a7f30: 0xc06a036  jal         func_1A80D8
    ctx->pc = 0x1A7F30u;
    SET_GPR_U32(ctx, 31, 0x1A7F38u);
    ctx->pc = 0x1A7F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F30u;
            // 0x1a7f34: 0x240600df  addiu       $a2, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A80D8u;
    if (runtime->hasFunction(0x1A80D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A80D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F38u; }
        if (ctx->pc != 0x1A7F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A80D8_0x1a80d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F38u; }
        if (ctx->pc != 0x1A7F38u) { return; }
    }
    ctx->pc = 0x1A7F38u;
label_1a7f38:
    // 0x1a7f38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f3c: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x1a7f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x1a7f40: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1a7f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1a7f44: 0xc06a036  jal         func_1A80D8
    ctx->pc = 0x1A7F44u;
    SET_GPR_U32(ctx, 31, 0x1A7F4Cu);
    ctx->pc = 0x1A7F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F44u;
            // 0x1a7f48: 0x240600ef  addiu       $a2, $zero, 0xEF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A80D8u;
    if (runtime->hasFunction(0x1A80D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A80D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F4Cu; }
        if (ctx->pc != 0x1A7F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A80D8_0x1a80d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F4Cu; }
        if (ctx->pc != 0x1A7F4Cu) { return; }
    }
    ctx->pc = 0x1A7F4Cu;
label_1a7f4c:
    // 0x1a7f4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f50: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x1a7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x1a7f54: 0x2626004c  addiu       $a2, $s1, 0x4C
    ctx->pc = 0x1a7f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x1a7f58: 0xc06a054  jal         func_1A8150
    ctx->pc = 0x1A7F58u;
    SET_GPR_U32(ctx, 31, 0x1A7F60u);
    ctx->pc = 0x1A7F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F58u;
            // 0x1a7f5c: 0x8e250044  lw          $a1, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8150u;
    if (runtime->hasFunction(0x1A8150u)) {
        auto targetFn = runtime->lookupFunction(0x1A8150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F60u; }
        if (ctx->pc != 0x1A7F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8150_0x1a8150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F60u; }
        if (ctx->pc != 0x1A7F60u) { return; }
    }
    ctx->pc = 0x1A7F60u;
label_1a7f60:
    // 0x1a7f60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f64: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x1a7f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1a7f68: 0xc06a07a  jal         func_1A81E8
    ctx->pc = 0x1A7F68u;
    SET_GPR_U32(ctx, 31, 0x1A7F70u);
    ctx->pc = 0x1A7F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F68u;
            // 0x1a7f6c: 0x2626005c  addiu       $a2, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A81E8u;
    if (runtime->hasFunction(0x1A81E8u)) {
        auto targetFn = runtime->lookupFunction(0x1A81E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F70u; }
        if (ctx->pc != 0x1A7F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A81E8_0x1a81e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F70u; }
        if (ctx->pc != 0x1A7F70u) { return; }
    }
    ctx->pc = 0x1A7F70u;
label_1a7f70:
    // 0x1a7f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7f74: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a7f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1a7f78:
    // 0x1a7f78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a7f78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7f7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a7f7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7f80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a7f80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7f84: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a7f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a7f88: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F88u;
            // 0x1a7f8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7F90u;
}
