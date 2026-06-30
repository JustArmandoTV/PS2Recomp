#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AB4C0
// Address: 0x2ab4c0 - 0x2ab520
void sub_002AB4C0_0x2ab4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB4C0_0x2ab4c0");
#endif

    ctx->pc = 0x2ab4c0u;

    // 0x2ab4c0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2ab4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2ab4c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ab4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ab4c8: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2ab4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2ab4cc: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2ab4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2ab4d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ab4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ab4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB4D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB4D4u;
            // 0x2ab4d8: 0xac830024  sw          $v1, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB4DCu;
    // 0x2ab4dc: 0x0  nop
    ctx->pc = 0x2ab4dcu;
    // NOP
    // 0x2ab4e0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2ab4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ab4e4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2ab4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2ab4e8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2ab4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2ab4ec: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2ab4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2ab4f0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2ab4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2ab4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB4F4u;
            // 0x2ab4f8: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB4FCu;
    // 0x2ab4fc: 0x0  nop
    ctx->pc = 0x2ab4fcu;
    // NOP
    // 0x2ab500: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2ab500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ab504: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2ab504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2ab508: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2ab508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2ab50c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2ab50cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2ab510: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2ab510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2ab514: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB514u;
            // 0x2ab518: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB51Cu;
    // 0x2ab51c: 0x0  nop
    ctx->pc = 0x2ab51cu;
    // NOP
}
