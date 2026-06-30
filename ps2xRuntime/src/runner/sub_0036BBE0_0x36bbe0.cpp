#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036BBE0
// Address: 0x36bbe0 - 0x36bc00
void sub_0036BBE0_0x36bbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BBE0_0x36bbe0");
#endif

    ctx->pc = 0x36bbe0u;

    // 0x36bbe0: 0x8c850064  lw          $a1, 0x64($a0)
    ctx->pc = 0x36bbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x36bbe4: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x36bbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x36bbe8: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x36bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x36bbec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x36bbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x36bbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x36BBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36BBF0u;
            // 0x36bbf4: 0xac830064  sw          $v1, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36BBF8u;
    // 0x36bbf8: 0x0  nop
    ctx->pc = 0x36bbf8u;
    // NOP
    // 0x36bbfc: 0x0  nop
    ctx->pc = 0x36bbfcu;
    // NOP
}
