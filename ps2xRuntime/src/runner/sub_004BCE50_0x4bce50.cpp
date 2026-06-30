#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BCE50
// Address: 0x4bce50 - 0x4bcf50
void sub_004BCE50_0x4bce50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BCE50_0x4bce50");
#endif

    switch (ctx->pc) {
        case 0x4bce60u: goto label_4bce60;
        case 0x4bce98u: goto label_4bce98;
        case 0x4bcec0u: goto label_4bcec0;
        case 0x4bcf18u: goto label_4bcf18;
        case 0x4bcf30u: goto label_4bcf30;
        default: break;
    }

    ctx->pc = 0x4bce50u;

    // 0x4bce50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4bce50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bce54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4bce54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bce58: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x4bce58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bce5c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x4bce5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4bce60:
    // 0x4bce60: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x4bce60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bce64: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x4bce64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x4bce68: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BCE68u;
    {
        const bool branch_taken_0x4bce68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x4bce68) {
            ctx->pc = 0x4BCE78u;
            goto label_4bce78;
        }
    }
    ctx->pc = 0x4BCE70u;
    // 0x4bce70: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x4bce70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bce74: 0x0  nop
    ctx->pc = 0x4bce74u;
    // NOP
label_4bce78:
    // 0x4bce78: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4bce78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4bce7c: 0x124182b  sltu        $v1, $t1, $a0
    ctx->pc = 0x4bce7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4bce80: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4BCE80u;
    {
        const bool branch_taken_0x4bce80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BCE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCE80u;
            // 0x4bce84: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bce80) {
            ctx->pc = 0x4BCE60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bce60;
        }
    }
    ctx->pc = 0x4BCE88u;
    // 0x4bce88: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x4bce88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4bce8c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4bce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4bce90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4bce90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bce94: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x4bce94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4bce98:
    // 0x4bce98: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x4bce98u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bce9c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4bce9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4bcea0: 0x104182b  sltu        $v1, $t0, $a0
    ctx->pc = 0x4bcea0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4bcea4: 0xa0a60001  sb          $a2, 0x1($a1)
    ctx->pc = 0x4bcea4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x4bcea8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4bcea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4bceac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4BCEACu;
    {
        const bool branch_taken_0x4bceac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bceac) {
            ctx->pc = 0x4BCE98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bce98;
        }
    }
    ctx->pc = 0x4BCEB4u;
    // 0x4bceb4: 0x3e00008  jr          $ra
    ctx->pc = 0x4BCEB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BCEBCu;
    // 0x4bcebc: 0x0  nop
    ctx->pc = 0x4bcebcu;
    // NOP
label_4bcec0:
    // 0x4bcec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bcec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4bcec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4bcec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4bcec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bcec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4bcecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bceccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4bced0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bced0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bced4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4BCED4u;
    {
        const bool branch_taken_0x4bced4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCED4u;
            // 0x4bced8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bced4) {
            ctx->pc = 0x4BCF30u;
            goto label_4bcf30;
        }
    }
    ctx->pc = 0x4BCEDCu;
    // 0x4bcedc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bcedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4bcee0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bcee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4bcee4: 0x24630ec0  addiu       $v1, $v1, 0xEC0
    ctx->pc = 0x4bcee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3776));
    // 0x4bcee8: 0x24420ef8  addiu       $v0, $v0, 0xEF8
    ctx->pc = 0x4bcee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3832));
    // 0x4bceec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4bceecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4bcef0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4BCEF0u;
    {
        const bool branch_taken_0x4bcef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCEF0u;
            // 0x4bcef4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcef0) {
            ctx->pc = 0x4BCF18u;
            goto label_4bcf18;
        }
    }
    ctx->pc = 0x4BCEF8u;
    // 0x4bcef8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bcef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4bcefc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bcefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4bcf00: 0x24630f70  addiu       $v1, $v1, 0xF70
    ctx->pc = 0x4bcf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3952));
    // 0x4bcf04: 0x24420fa8  addiu       $v0, $v0, 0xFA8
    ctx->pc = 0x4bcf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4008));
    // 0x4bcf08: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4bcf08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4bcf0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4bcf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bcf10: 0xc12f3d4  jal         func_4BCF50
    ctx->pc = 0x4BCF10u;
    SET_GPR_U32(ctx, 31, 0x4BCF18u);
    ctx->pc = 0x4BCF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCF10u;
            // 0x4bcf14: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BCF50u;
    if (runtime->hasFunction(0x4BCF50u)) {
        auto targetFn = runtime->lookupFunction(0x4BCF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCF18u; }
        if (ctx->pc != 0x4BCF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BCF50_0x4bcf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCF18u; }
        if (ctx->pc != 0x4BCF18u) { return; }
    }
    ctx->pc = 0x4BCF18u;
label_4bcf18:
    // 0x4bcf18: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4bcf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4bcf1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4bcf1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4bcf20: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BCF20u;
    {
        const bool branch_taken_0x4bcf20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4bcf20) {
            ctx->pc = 0x4BCF24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCF20u;
            // 0x4bcf24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BCF34u;
            goto label_4bcf34;
        }
    }
    ctx->pc = 0x4BCF28u;
    // 0x4bcf28: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4BCF28u;
    SET_GPR_U32(ctx, 31, 0x4BCF30u);
    ctx->pc = 0x4BCF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCF28u;
            // 0x4bcf2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCF30u; }
        if (ctx->pc != 0x4BCF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCF30u; }
        if (ctx->pc != 0x4BCF30u) { return; }
    }
    ctx->pc = 0x4BCF30u;
label_4bcf30:
    // 0x4bcf30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4bcf30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bcf34:
    // 0x4bcf34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bcf34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bcf38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bcf38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bcf3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bcf3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bcf40: 0x3e00008  jr          $ra
    ctx->pc = 0x4BCF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BCF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCF40u;
            // 0x4bcf44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BCF48u;
    // 0x4bcf48: 0x0  nop
    ctx->pc = 0x4bcf48u;
    // NOP
    // 0x4bcf4c: 0x0  nop
    ctx->pc = 0x4bcf4cu;
    // NOP
}
