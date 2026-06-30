#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A8FB0
// Address: 0x4a8fb0 - 0x4a9040
void sub_004A8FB0_0x4a8fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8FB0_0x4a8fb0");
#endif

    switch (ctx->pc) {
        case 0x4a902cu: goto label_4a902c;
        default: break;
    }

    ctx->pc = 0x4a8fb0u;

    // 0x4a8fb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a8fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4a8fb4: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x4a8fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4a8fb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a8fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a8fbc: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x4a8fbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a8fc0: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x4a8fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4a8fc4: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x4a8fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4a8fc8: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x4a8fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4a8fcc: 0x8cca0014  lw          $t2, 0x14($a2)
    ctx->pc = 0x4a8fccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x4a8fd0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x4a8fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x4a8fd4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4a8fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4a8fd8: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x4a8fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
    // 0x4a8fdc: 0xafa70034  sw          $a3, 0x34($sp)
    ctx->pc = 0x4a8fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
    // 0x4a8fe0: 0xafa80038  sw          $t0, 0x38($sp)
    ctx->pc = 0x4a8fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 8));
    // 0x4a8fe4: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x4a8fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x4a8fe8: 0x144a0007  bne         $v0, $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A8FE8u;
    {
        const bool branch_taken_0x4a8fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x4A8FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8FE8u;
            // 0x4a8fec: 0xafaa0044  sw          $t2, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8fe8) {
            ctx->pc = 0x4A9008u;
            goto label_4a9008;
        }
    }
    ctx->pc = 0x4A8FF0u;
    // 0x4a8ff0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4a8ff0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4a8ff4: 0x55230003  bnel        $t1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A8FF4u;
    {
        const bool branch_taken_0x4a8ff4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        if (branch_taken_0x4a8ff4) {
            ctx->pc = 0x4A8FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8FF4u;
            // 0x4a8ff8: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9004u;
            goto label_4a9004;
        }
    }
    ctx->pc = 0x4A8FFCu;
    // 0x4a8ffc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x4a8ffcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9000: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4a9000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4a9004:
    // 0x4a9004: 0x244a0200  addiu       $t2, $v0, 0x200
    ctx->pc = 0x4a9004u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
label_4a9008:
    // 0x4a9008: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x4a9008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x4a900c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x4a900cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4a9010: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x4a9010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x4a9014: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x4a9014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4a9018: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x4a9018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x4a901c: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x4a901cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x4a9020: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x4a9020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x4a9024: 0xc12a500  jal         func_4A9400
    ctx->pc = 0x4A9024u;
    SET_GPR_U32(ctx, 31, 0x4A902Cu);
    ctx->pc = 0x4A9028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9024u;
            // 0x4a9028: 0xafaa0024  sw          $t2, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9400u;
    if (runtime->hasFunction(0x4A9400u)) {
        auto targetFn = runtime->lookupFunction(0x4A9400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A902Cu; }
        if (ctx->pc != 0x4A902Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9400_0x4a9400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A902Cu; }
        if (ctx->pc != 0x4A902Cu) { return; }
    }
    ctx->pc = 0x4A902Cu;
label_4a902c:
    // 0x4a902c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a902cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9030: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9030u;
            // 0x4a9034: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A9038u;
    // 0x4a9038: 0x0  nop
    ctx->pc = 0x4a9038u;
    // NOP
    // 0x4a903c: 0x0  nop
    ctx->pc = 0x4a903cu;
    // NOP
}
