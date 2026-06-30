#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CDC68
// Address: 0x1cdc68 - 0x1cdd10
void sub_001CDC68_0x1cdc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDC68_0x1cdc68");
#endif

    switch (ctx->pc) {
        case 0x1cdc80u: goto label_1cdc80;
        case 0x1cdc98u: goto label_1cdc98;
        case 0x1cdcdcu: goto label_1cdcdc;
        case 0x1cdcf8u: goto label_1cdcf8;
        default: break;
    }

    ctx->pc = 0x1cdc68u;

    // 0x1cdc68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cdc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cdc6c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1cdc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1cdc70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdc74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cdc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cdc78: 0xc045968  jal         func_1165A0
    ctx->pc = 0x1CDC78u;
    SET_GPR_U32(ctx, 31, 0x1CDC80u);
    ctx->pc = 0x1CDC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDC78u;
            // 0x1cdc7c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDC80u; }
        if (ctx->pc != 0x1CDC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDC80u; }
        if (ctx->pc != 0x1CDC80u) { return; }
    }
    ctx->pc = 0x1CDC80u;
label_1cdc80:
    // 0x1cdc80: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1cdc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cdc84: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1cdc84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc88: 0x18800019  blez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CDC88u;
    {
        const bool branch_taken_0x1cdc88 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1CDC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDC88u;
            // 0x1cdc8c: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc88) {
            ctx->pc = 0x1CDCF0u;
            goto label_1cdcf0;
        }
    }
    ctx->pc = 0x1CDC90u;
    // 0x1cdc90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cdc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc94: 0x0  nop
    ctx->pc = 0x1cdc94u;
    // NOP
label_1cdc98:
    // 0x1cdc98: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1cdc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cdc9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cdc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cdca0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CDCA0u;
    {
        const bool branch_taken_0x1cdca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdca0) {
            ctx->pc = 0x1CDCA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDCA0u;
            // 0x1cdca4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CDCE4u;
            goto label_1cdce4;
        }
    }
    ctx->pc = 0x1CDCA8u;
    // 0x1cdca8: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1cdca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1cdcac: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x1cdcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x1cdcb0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1cdcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1cdcb4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cdcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cdcb8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1cdcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cdcbc: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDCBCu;
    {
        const bool branch_taken_0x1cdcbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1CDCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDCBCu;
            // 0x1cdcc0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcbc) {
            ctx->pc = 0x1CDCD0u;
            goto label_1cdcd0;
        }
    }
    ctx->pc = 0x1CDCC4u;
    // 0x1cdcc4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1cdcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1cdcc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cdcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdccc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1cdcccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1cdcd0:
    // 0x1cdcd0: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x1cdcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x1cdcd4: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x1CDCD4u;
    SET_GPR_U32(ctx, 31, 0x1CDCDCu);
    ctx->pc = 0x1CDCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDCD4u;
            // 0x1cdcd8: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDCDCu; }
        if (ctx->pc != 0x1CDCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDCDCu; }
        if (ctx->pc != 0x1CDCDCu) { return; }
    }
    ctx->pc = 0x1CDCDCu;
label_1cdcdc:
    // 0x1cdcdc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDCDCu;
    {
        const bool branch_taken_0x1cdcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDCDCu;
            // 0x1cdce0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcdc) {
            ctx->pc = 0x1CDCFCu;
            goto label_1cdcfc;
        }
    }
    ctx->pc = 0x1CDCE4u;
label_1cdce4:
    // 0x1cdce4: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1cdce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1cdce8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1CDCE8u;
    {
        const bool branch_taken_0x1cdce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDCE8u;
            // 0x1cdcec: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdce8) {
            ctx->pc = 0x1CDC98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cdc98;
        }
    }
    ctx->pc = 0x1CDCF0u;
label_1cdcf0:
    // 0x1cdcf0: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x1CDCF0u;
    SET_GPR_U32(ctx, 31, 0x1CDCF8u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDCF8u; }
        if (ctx->pc != 0x1CDCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDCF8u; }
        if (ctx->pc != 0x1CDCF8u) { return; }
    }
    ctx->pc = 0x1CDCF8u;
label_1cdcf8:
    // 0x1cdcf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cdcf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdcfc:
    // 0x1cdcfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cdcfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdd00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1cdd00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdd04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdd04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd08: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD08u;
            // 0x1cdd0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CDD10u;
}
