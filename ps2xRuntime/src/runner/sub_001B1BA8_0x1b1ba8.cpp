#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1BA8
// Address: 0x1b1ba8 - 0x1b1cd8
void sub_001B1BA8_0x1b1ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1BA8_0x1b1ba8");
#endif

    switch (ctx->pc) {
        case 0x1b1c1cu: goto label_1b1c1c;
        case 0x1b1c2cu: goto label_1b1c2c;
        case 0x1b1c40u: goto label_1b1c40;
        case 0x1b1c5cu: goto label_1b1c5c;
        case 0x1b1c6cu: goto label_1b1c6c;
        case 0x1b1c80u: goto label_1b1c80;
        case 0x1b1c90u: goto label_1b1c90;
        case 0x1b1ca0u: goto label_1b1ca0;
        default: break;
    }

    ctx->pc = 0x1b1ba8u;

    // 0x1b1ba8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b1ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b1bac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b1bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1bb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1bb4: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x1b1bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1bb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b1bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b1bbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b1bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1bc0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b1bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b1bc4: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x1b1bc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1bc8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1b1bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1b1bcc: 0x215f021  addu        $fp, $s0, $s5
    ctx->pc = 0x1b1bccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x1b1bd0: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x1b1bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1b1bd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b1bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b1bd8: 0xfe382a  slt         $a3, $a3, $fp
    ctx->pc = 0x1b1bd8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1b1bdc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b1bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b1be0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b1be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b1be4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1b1be4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1be8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1b1be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1b1bec: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1b1becu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1bf0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b1bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b1bf4: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x1b1bf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b1bf8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1b1bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1b1bfc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1b1bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c00: 0x14e00028  bnez        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x1B1C00u;
    {
        const bool branch_taken_0x1b1c00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C00u;
            // 0x1b1c04: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c00) {
            ctx->pc = 0x1B1CA4u;
            goto label_1b1ca4;
        }
    }
    ctx->pc = 0x1B1C08u;
    // 0x1b1c08: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1B1C08u;
    {
        const bool branch_taken_0x1b1c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1c08) {
            ctx->pc = 0x1B1C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C08u;
            // 0x1b1c0c: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1C48u;
            goto label_1b1c48;
        }
    }
    ctx->pc = 0x1B1C10u;
    // 0x1b1c10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b1c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c14: 0xc04a508  jal         func_129420
    ctx->pc = 0x1B1C14u;
    SET_GPR_U32(ctx, 31, 0x1B1C1Cu);
    ctx->pc = 0x1B1C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C14u;
            // 0x1b1c18: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C1Cu; }
        if (ctx->pc != 0x1B1C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C1Cu; }
        if (ctx->pc != 0x1B1C1Cu) { return; }
    }
    ctx->pc = 0x1B1C1Cu;
label_1b1c1c:
    // 0x1b1c1c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b1c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c20: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x1b1c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1b1c24: 0xc04a508  jal         func_129420
    ctx->pc = 0x1B1C24u;
    SET_GPR_U32(ctx, 31, 0x1B1C2Cu);
    ctx->pc = 0x1B1C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C24u;
            // 0x1b1c28: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C2Cu; }
        if (ctx->pc != 0x1B1C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C2Cu; }
        if (ctx->pc != 0x1B1C2Cu) { return; }
    }
    ctx->pc = 0x1B1C2Cu;
label_1b1c2c:
    // 0x1b1c2c: 0x2d02021  addu        $a0, $s6, $s0
    ctx->pc = 0x1b1c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x1b1c30: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x1b1c30u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1b1c34: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b1c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c38: 0xc04a508  jal         func_129420
    ctx->pc = 0x1B1C38u;
    SET_GPR_U32(ctx, 31, 0x1B1C40u);
    ctx->pc = 0x1B1C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C38u;
            // 0x1b1c3c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C40u; }
        if (ctx->pc != 0x1B1C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C40u; }
        if (ctx->pc != 0x1B1C40u) { return; }
    }
    ctx->pc = 0x1B1C40u;
label_1b1c40:
    // 0x1b1c40: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B1C40u;
    {
        const bool branch_taken_0x1b1c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C40u;
            // 0x1b1c44: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c40) {
            ctx->pc = 0x1B1CA4u;
            goto label_1b1ca4;
        }
    }
    ctx->pc = 0x1B1C48u;
label_1b1c48:
    // 0x1b1c48: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x1b1c48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1b1c4c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B1C4Cu;
    {
        const bool branch_taken_0x1b1c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C4Cu;
            // 0x1b1c50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c4c) {
            ctx->pc = 0x1B1C88u;
            goto label_1b1c88;
        }
    }
    ctx->pc = 0x1B1C54u;
    // 0x1b1c54: 0xc04a508  jal         func_129420
    ctx->pc = 0x1B1C54u;
    SET_GPR_U32(ctx, 31, 0x1B1C5Cu);
    ctx->pc = 0x1B1C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C54u;
            // 0x1b1c58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C5Cu; }
        if (ctx->pc != 0x1B1C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C5Cu; }
        if (ctx->pc != 0x1B1C5Cu) { return; }
    }
    ctx->pc = 0x1B1C5Cu;
label_1b1c5c:
    // 0x1b1c5c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b1c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b1c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c64: 0xc04a508  jal         func_129420
    ctx->pc = 0x1B1C64u;
    SET_GPR_U32(ctx, 31, 0x1B1C6Cu);
    ctx->pc = 0x1B1C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C64u;
            // 0x1b1c68: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C6Cu; }
        if (ctx->pc != 0x1B1C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C6Cu; }
        if (ctx->pc != 0x1B1C6Cu) { return; }
    }
    ctx->pc = 0x1B1C6Cu;
label_1b1c6c:
    // 0x1b1c6c: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x1b1c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1b1c70: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x1b1c70u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1b1c74: 0x2b33023  subu        $a2, $s5, $s3
    ctx->pc = 0x1b1c74u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x1b1c78: 0xc04a508  jal         func_129420
    ctx->pc = 0x1B1C78u;
    SET_GPR_U32(ctx, 31, 0x1B1C80u);
    ctx->pc = 0x1B1C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C78u;
            // 0x1b1c7c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C80u; }
        if (ctx->pc != 0x1B1C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C80u; }
        if (ctx->pc != 0x1B1C80u) { return; }
    }
    ctx->pc = 0x1B1C80u;
label_1b1c80:
    // 0x1b1c80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1C80u;
    {
        const bool branch_taken_0x1b1c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C80u;
            // 0x1b1c84: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c80) {
            ctx->pc = 0x1B1CA4u;
            goto label_1b1ca4;
        }
    }
    ctx->pc = 0x1B1C88u;
label_1b1c88:
    // 0x1b1c88: 0xc04a508  jal         func_129420
    ctx->pc = 0x1B1C88u;
    SET_GPR_U32(ctx, 31, 0x1B1C90u);
    ctx->pc = 0x1B1C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C88u;
            // 0x1b1c8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C90u; }
        if (ctx->pc != 0x1B1C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C90u; }
        if (ctx->pc != 0x1B1C90u) { return; }
    }
    ctx->pc = 0x1B1C90u;
label_1b1c90:
    // 0x1b1c90: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1b1c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c94: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b1c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c98: 0xc04a508  jal         func_129420
    ctx->pc = 0x1B1C98u;
    SET_GPR_U32(ctx, 31, 0x1B1CA0u);
    ctx->pc = 0x1B1C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C98u;
            // 0x1b1c9c: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1CA0u; }
        if (ctx->pc != 0x1B1CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1CA0u; }
        if (ctx->pc != 0x1B1CA0u) { return; }
    }
    ctx->pc = 0x1B1CA0u;
label_1b1ca0:
    // 0x1b1ca0: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1b1ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b1ca4:
    // 0x1b1ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1ca8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b1ca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1cac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b1cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1cb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b1cb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b1cb4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b1cb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1cb8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b1cb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b1cbc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b1cbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1cc0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1b1cc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b1cc4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1b1cc4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1cc8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1b1cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b1ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1CCCu;
            // 0x1b1cd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1CD4u;
    // 0x1b1cd4: 0x0  nop
    ctx->pc = 0x1b1cd4u;
    // NOP
}
