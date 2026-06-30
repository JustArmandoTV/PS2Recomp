#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051BB00
// Address: 0x51bb00 - 0x51bbe0
void sub_0051BB00_0x51bb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051BB00_0x51bb00");
#endif

    switch (ctx->pc) {
        case 0x51bb2cu: goto label_51bb2c;
        case 0x51bb3cu: goto label_51bb3c;
        case 0x51bb44u: goto label_51bb44;
        case 0x51bba0u: goto label_51bba0;
        default: break;
    }

    ctx->pc = 0x51bb00u;

    // 0x51bb00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x51bb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x51bb04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x51bb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x51bb08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51bb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x51bb0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51bb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x51bb10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x51bb10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51bb14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51bb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x51bb18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x51bb18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51bb1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51bb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51bb20: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x51bb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x51bb24: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x51BB24u;
    SET_GPR_U32(ctx, 31, 0x51BB2Cu);
    ctx->pc = 0x51BB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51BB24u;
            // 0x51bb28: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BB2Cu; }
        if (ctx->pc != 0x51BB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BB2Cu; }
        if (ctx->pc != 0x51BB2Cu) { return; }
    }
    ctx->pc = 0x51BB2Cu;
label_51bb2c:
    // 0x51bb2c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x51bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x51bb30: 0x26510014  addiu       $s1, $s2, 0x14
    ctx->pc = 0x51bb30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x51bb34: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x51BB34u;
    {
        const bool branch_taken_0x51bb34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x51BB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51BB34u;
            // 0x51bb38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51bb34) {
            ctx->pc = 0x51BBB8u;
            goto label_51bbb8;
        }
    }
    ctx->pc = 0x51BB3Cu;
label_51bb3c:
    // 0x51bb3c: 0xc040180  jal         func_100600
    ctx->pc = 0x51BB3Cu;
    SET_GPR_U32(ctx, 31, 0x51BB44u);
    ctx->pc = 0x51BB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51BB3Cu;
            // 0x51bb40: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BB44u; }
        if (ctx->pc != 0x51BB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BB44u; }
        if (ctx->pc != 0x51BB44u) { return; }
    }
    ctx->pc = 0x51BB44u;
label_51bb44:
    // 0x51bb44: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x51bb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x51bb48: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x51bb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x51bb4c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x51bb4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x51bb50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x51bb50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x51bb54: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x51bb54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x51bb58: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x51bb58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x51bb5c: 0x86230004  lh          $v1, 0x4($s1)
    ctx->pc = 0x51bb5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x51bb60: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x51bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x51bb64: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x51bb64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x51bb68: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x51bb68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x51bb6c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x51bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x51bb70: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x51bb70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x51bb74: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x51bb74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x51bb78: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x51bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x51bb7c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x51bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x51bb80: 0x8623000a  lh          $v1, 0xA($s1)
    ctx->pc = 0x51bb80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x51bb84: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x51bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x51bb88: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x51bb88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x51bb8c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x51bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x51bb90: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x51bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x51bb94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x51bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x51bb98: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x51BB98u;
    SET_GPR_U32(ctx, 31, 0x51BBA0u);
    ctx->pc = 0x51BB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51BB98u;
            // 0x51bb9c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BBA0u; }
        if (ctx->pc != 0x51BBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BBA0u; }
        if (ctx->pc != 0x51BBA0u) { return; }
    }
    ctx->pc = 0x51BBA0u;
label_51bba0:
    // 0x51bba0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x51bba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x51bba4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x51bba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x51bba8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x51bba8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x51bbac: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x51BBACu;
    {
        const bool branch_taken_0x51bbac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x51BBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51BBACu;
            // 0x51bbb0: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51bbac) {
            ctx->pc = 0x51BB3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51bb3c;
        }
    }
    ctx->pc = 0x51BBB4u;
    // 0x51bbb4: 0x0  nop
    ctx->pc = 0x51bbb4u;
    // NOP
label_51bbb8:
    // 0x51bbb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x51bbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x51bbbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51bbbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x51bbc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51bbc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x51bbc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51bbc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51bbc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51bbc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51bbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x51BBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51BBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51BBCCu;
            // 0x51bbd0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51BBD4u;
    // 0x51bbd4: 0x0  nop
    ctx->pc = 0x51bbd4u;
    // NOP
    // 0x51bbd8: 0x0  nop
    ctx->pc = 0x51bbd8u;
    // NOP
    // 0x51bbdc: 0x0  nop
    ctx->pc = 0x51bbdcu;
    // NOP
}
