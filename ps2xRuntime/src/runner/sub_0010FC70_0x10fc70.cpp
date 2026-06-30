#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010FC70
// Address: 0x10fc70 - 0x10fd18
void sub_0010FC70_0x10fc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FC70_0x10fc70");
#endif

    switch (ctx->pc) {
        case 0x10fc88u: goto label_10fc88;
        case 0x10fca0u: goto label_10fca0;
        case 0x10fce4u: goto label_10fce4;
        case 0x10fd00u: goto label_10fd00;
        default: break;
    }

    ctx->pc = 0x10fc70u;

    // 0x10fc70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10fc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10fc74: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10fc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10fc78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10fc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10fc7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10fc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10fc80: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10FC80u;
    SET_GPR_U32(ctx, 31, 0x10FC88u);
    ctx->pc = 0x10FC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FC80u;
            // 0x10fc84: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FC88u; }
        if (ctx->pc != 0x10FC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FC88u; }
        if (ctx->pc != 0x10FC88u) { return; }
    }
    ctx->pc = 0x10FC88u;
label_10fc88:
    // 0x10fc88: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x10fc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x10fc8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10fc8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc90: 0x18800019  blez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x10FC90u;
    {
        const bool branch_taken_0x10fc90 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x10FC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FC90u;
            // 0x10fc94: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc90) {
            ctx->pc = 0x10FCF8u;
            goto label_10fcf8;
        }
    }
    ctx->pc = 0x10FC98u;
    // 0x10fc98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10fc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10fc9c: 0x0  nop
    ctx->pc = 0x10fc9cu;
    // NOP
label_10fca0:
    // 0x10fca0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x10fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10fca4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10fca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10fca8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x10FCA8u;
    {
        const bool branch_taken_0x10fca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fca8) {
            ctx->pc = 0x10FCACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10FCA8u;
            // 0x10fcac: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10FCECu;
            goto label_10fcec;
        }
    }
    ctx->pc = 0x10FCB0u;
    // 0x10fcb0: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x10fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x10fcb4: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x10fcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x10fcb8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x10fcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x10fcbc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x10fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10fcc0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x10fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10fcc4: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FCC4u;
    {
        const bool branch_taken_0x10fcc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x10FCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FCC4u;
            // 0x10fcc8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fcc4) {
            ctx->pc = 0x10FCD8u;
            goto label_10fcd8;
        }
    }
    ctx->pc = 0x10FCCCu;
    // 0x10fccc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x10fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x10fcd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10fcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10fcd4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x10fcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_10fcd8:
    // 0x10fcd8: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x10fcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x10fcdc: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10FCDCu;
    SET_GPR_U32(ctx, 31, 0x10FCE4u);
    ctx->pc = 0x10FCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FCDCu;
            // 0x10fce0: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FCE4u; }
        if (ctx->pc != 0x10FCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FCE4u; }
        if (ctx->pc != 0x10FCE4u) { return; }
    }
    ctx->pc = 0x10FCE4u;
label_10fce4:
    // 0x10fce4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10FCE4u;
    {
        const bool branch_taken_0x10fce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FCE4u;
            // 0x10fce8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fce4) {
            ctx->pc = 0x10FD04u;
            goto label_10fd04;
        }
    }
    ctx->pc = 0x10FCECu;
label_10fcec:
    // 0x10fcec: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x10fcecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x10fcf0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x10FCF0u;
    {
        const bool branch_taken_0x10fcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FCF0u;
            // 0x10fcf4: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fcf0) {
            ctx->pc = 0x10FCA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10fca0;
        }
    }
    ctx->pc = 0x10FCF8u;
label_10fcf8:
    // 0x10fcf8: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10FCF8u;
    SET_GPR_U32(ctx, 31, 0x10FD00u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FD00u; }
        if (ctx->pc != 0x10FD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FD00u; }
        if (ctx->pc != 0x10FD00u) { return; }
    }
    ctx->pc = 0x10FD00u;
label_10fd00:
    // 0x10fd00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10fd00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fd04:
    // 0x10fd04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10fd04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fd08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10fd08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fd0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10fd0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fd10: 0x3e00008  jr          $ra
    ctx->pc = 0x10FD10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FD10u;
            // 0x10fd14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FD18u;
}
