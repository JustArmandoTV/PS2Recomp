#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BCBB8
// Address: 0x1bcbb8 - 0x1bcc60
void sub_001BCBB8_0x1bcbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCBB8_0x1bcbb8");
#endif

    switch (ctx->pc) {
        case 0x1bcbd0u: goto label_1bcbd0;
        default: break;
    }

    ctx->pc = 0x1bcbb8u;

    // 0x1bcbb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bcbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bcbbc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bcbbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bcbc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bcbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bcbc4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bcbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bcbc8: 0xc06f2e6  jal         func_1BCB98
    ctx->pc = 0x1BCBC8u;
    SET_GPR_U32(ctx, 31, 0x1BCBD0u);
    ctx->pc = 0x1BCBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCBC8u;
            // 0x1bcbcc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCB98u;
    if (runtime->hasFunction(0x1BCB98u)) {
        auto targetFn = runtime->lookupFunction(0x1BCB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCBD0u; }
        if (ctx->pc != 0x1BCBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCB98_0x1bcb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCBD0u; }
        if (ctx->pc != 0x1BCBD0u) { return; }
    }
    ctx->pc = 0x1BCBD0u;
label_1bcbd0:
    // 0x1bcbd0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bcbd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcbd4: 0x5060001e  beql        $v1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BCBD4u;
    {
        const bool branch_taken_0x1bcbd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcbd4) {
            ctx->pc = 0x1BCBD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCBD4u;
            // 0x1bcbd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BCC50u;
            goto label_1bcc50;
        }
    }
    ctx->pc = 0x1BCBDCu;
    // 0x1bcbdc: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1bcbdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1bcbe0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1bcbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1bcbe4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bcbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bcbe8: 0x2c430007  sltiu       $v1, $v0, 0x7
    ctx->pc = 0x1bcbe8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1bcbec: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BCBECu;
    {
        const bool branch_taken_0x1bcbec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcbec) {
            ctx->pc = 0x1BCBF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCBECu;
            // 0x1bcbf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BCC44u;
            goto label_1bcc44;
        }
    }
    ctx->pc = 0x1BCBF4u;
    // 0x1bcbf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bcbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bcbf8: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1bcbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1bcbfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bcbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bcc00: 0x8c63b1f0  lw          $v1, -0x4E10($v1)
    ctx->pc = 0x1bcc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947312)));
    // 0x1bcc04: 0x600008  jr          $v1
    ctx->pc = 0x1BCC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BCC10u: goto label_1bcc10;
            case 0x1BCC18u: goto label_1bcc18;
            case 0x1BCC20u: goto label_1bcc20;
            case 0x1BCC28u: goto label_1bcc28;
            case 0x1BCC30u: goto label_1bcc30;
            case 0x1BCC38u: goto label_1bcc38;
            case 0x1BCC40u: goto label_1bcc40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BCC0Cu;
    // 0x1bcc0c: 0x0  nop
    ctx->pc = 0x1bcc0cu;
    // NOP
label_1bcc10:
    // 0x1bcc10: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BCC10u;
    {
        const bool branch_taken_0x1bcc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC10u;
            // 0x1bcc14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc10) {
            ctx->pc = 0x1BCC44u;
            goto label_1bcc44;
        }
    }
    ctx->pc = 0x1BCC18u;
label_1bcc18:
    // 0x1bcc18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BCC18u;
    {
        const bool branch_taken_0x1bcc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC18u;
            // 0x1bcc1c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc18) {
            ctx->pc = 0x1BCC44u;
            goto label_1bcc44;
        }
    }
    ctx->pc = 0x1BCC20u;
label_1bcc20:
    // 0x1bcc20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BCC20u;
    {
        const bool branch_taken_0x1bcc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC20u;
            // 0x1bcc24: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc20) {
            ctx->pc = 0x1BCC44u;
            goto label_1bcc44;
        }
    }
    ctx->pc = 0x1BCC28u;
label_1bcc28:
    // 0x1bcc28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCC28u;
    {
        const bool branch_taken_0x1bcc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC28u;
            // 0x1bcc2c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc28) {
            ctx->pc = 0x1BCC44u;
            goto label_1bcc44;
        }
    }
    ctx->pc = 0x1BCC30u;
label_1bcc30:
    // 0x1bcc30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCC30u;
    {
        const bool branch_taken_0x1bcc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC30u;
            // 0x1bcc34: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc30) {
            ctx->pc = 0x1BCC44u;
            goto label_1bcc44;
        }
    }
    ctx->pc = 0x1BCC38u;
label_1bcc38:
    // 0x1bcc38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCC38u;
    {
        const bool branch_taken_0x1bcc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC38u;
            // 0x1bcc3c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc38) {
            ctx->pc = 0x1BCC44u;
            goto label_1bcc44;
        }
    }
    ctx->pc = 0x1BCC40u;
label_1bcc40:
    // 0x1bcc40: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1bcc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1bcc44:
    // 0x1bcc44: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bcc44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1bcc48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcc4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bcc4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bcc50:
    // 0x1bcc50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bcc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bcc54: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC54u;
            // 0x1bcc58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BCC5Cu;
    // 0x1bcc5c: 0x0  nop
    ctx->pc = 0x1bcc5cu;
    // NOP
}
