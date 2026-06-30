#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002248C0
// Address: 0x2248c0 - 0x2248f0
void sub_002248C0_0x2248c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002248C0_0x2248c0");
#endif

    ctx->pc = 0x2248c0u;

    // 0x2248c0: 0x908300a8  lbu         $v1, 0xA8($a0)
    ctx->pc = 0x2248c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x2248c4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2248c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2248c8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2248C8u;
    {
        const bool branch_taken_0x2248c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2248c8) {
            ctx->pc = 0x2248CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2248C8u;
            // 0x2248cc: 0x8c8201c0  lw          $v0, 0x1C0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2248E0u;
            goto label_2248e0;
        }
    }
    ctx->pc = 0x2248D0u;
    // 0x2248d0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2248d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2248d4: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2248D4u;
    {
        const bool branch_taken_0x2248d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2248d4) {
            ctx->pc = 0x2248D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2248D4u;
            // 0x2248d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2248E0u;
            goto label_2248e0;
        }
    }
    ctx->pc = 0x2248DCu;
    // 0x2248dc: 0x8c8201c0  lw          $v0, 0x1C0($a0)
    ctx->pc = 0x2248dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
label_2248e0:
    // 0x2248e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2248E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2248E8u;
    // 0x2248e8: 0x0  nop
    ctx->pc = 0x2248e8u;
    // NOP
    // 0x2248ec: 0x0  nop
    ctx->pc = 0x2248ecu;
    // NOP
}
