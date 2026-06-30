#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003534D0
// Address: 0x3534d0 - 0x3534f0
void sub_003534D0_0x3534d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003534D0_0x3534d0");
#endif

    ctx->pc = 0x3534d0u;

    // 0x3534d0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x3534d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3534d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3534d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3534d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3534d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3534dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3534DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3534E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3534DCu;
            // 0x3534e0: 0x8c4200d0  lw          $v0, 0xD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3534E4u;
    // 0x3534e4: 0x0  nop
    ctx->pc = 0x3534e4u;
    // NOP
    // 0x3534e8: 0x0  nop
    ctx->pc = 0x3534e8u;
    // NOP
    // 0x3534ec: 0x0  nop
    ctx->pc = 0x3534ecu;
    // NOP
}
