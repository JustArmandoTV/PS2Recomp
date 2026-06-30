#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00412210
// Address: 0x412210 - 0x412230
void sub_00412210_0x412210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412210_0x412210");
#endif

    ctx->pc = 0x412210u;

    // 0x412210: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x412210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x412214: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x412214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x412218: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x412218u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x41221c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x41221cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x412220: 0x3e00008  jr          $ra
    ctx->pc = 0x412220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412220u;
            // 0x412224: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x412228u;
    // 0x412228: 0x0  nop
    ctx->pc = 0x412228u;
    // NOP
    // 0x41222c: 0x0  nop
    ctx->pc = 0x41222cu;
    // NOP
}
