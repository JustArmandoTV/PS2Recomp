#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00190170
// Address: 0x190170 - 0x1901d8
void sub_00190170_0x190170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190170_0x190170");
#endif

    switch (ctx->pc) {
        case 0x190198u: goto label_190198;
        default: break;
    }

    ctx->pc = 0x190170u;

    // 0x190170: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x190170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x190174: 0x2442fe60  addiu       $v0, $v0, -0x1A0
    ctx->pc = 0x190174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966880));
    // 0x190178: 0x8c460040  lw          $a2, 0x40($v0)
    ctx->pc = 0x190178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x19017c: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x19017Cu;
    {
        const bool branch_taken_0x19017c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x190180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19017Cu;
            // 0x190180: 0x8c430044  lw          $v1, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19017c) {
            ctx->pc = 0x1901BCu;
            goto label_1901bc;
        }
    }
    ctx->pc = 0x190184u;
    // 0x190184: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x190184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x190188: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x190188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19018c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19018cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x190190: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x190190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x190194: 0x0  nop
    ctx->pc = 0x190194u;
    // NOP
label_190198:
    // 0x190198: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19019c: 0x14470002  bne         $v0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x19019Cu;
    {
        const bool branch_taken_0x19019c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1901A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19019Cu;
            // 0x1901a0: 0x24630660  addiu       $v1, $v1, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19019c) {
            ctx->pc = 0x1901A8u;
            goto label_1901a8;
        }
    }
    ctx->pc = 0x1901A4u;
    // 0x1901a4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1901a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1901a8:
    // 0x1901a8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1901a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1901ac: 0x0  nop
    ctx->pc = 0x1901acu;
    // NOP
    // 0x1901b0: 0x0  nop
    ctx->pc = 0x1901b0u;
    // NOP
    // 0x1901b4: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1901B4u;
    {
        const bool branch_taken_0x1901b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1901B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1901B4u;
            // 0x1901b8: 0x24840660  addiu       $a0, $a0, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1901b4) {
            ctx->pc = 0x190198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_190198;
        }
    }
    ctx->pc = 0x1901BCu;
label_1901bc:
    // 0x1901bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1901BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1901C4u;
    // 0x1901c4: 0x0  nop
    ctx->pc = 0x1901c4u;
    // NOP
    // 0x1901c8: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x1901c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
    // 0x1901cc: 0xac850058  sw          $a1, 0x58($a0)
    ctx->pc = 0x1901ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
    // 0x1901d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1901D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1901D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1901D0u;
            // 0x1901d4: 0xac870060  sw          $a3, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1901D8u;
}
