#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003509B0
// Address: 0x3509b0 - 0x3509c0
void sub_003509B0_0x3509b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003509B0_0x3509b0");
#endif

    ctx->pc = 0x3509b0u;

    // 0x3509b0: 0x8c820da4  lw          $v0, 0xDA4($a0)
    ctx->pc = 0x3509b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3492)));
    // 0x3509b4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3509b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3509b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3509B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3509BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3509B8u;
            // 0x3509bc: 0x2102a  slt         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3509C0u;
}
