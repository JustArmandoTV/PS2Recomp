#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00500840
// Address: 0x500840 - 0x500860
void sub_00500840_0x500840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500840_0x500840");
#endif

    ctx->pc = 0x500840u;

    // 0x500840: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x500840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x500844: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x500844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x500848: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x500848u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x50084c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x50084cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x500850: 0x3e00008  jr          $ra
    ctx->pc = 0x500850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500850u;
            // 0x500854: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x500858u;
    // 0x500858: 0x0  nop
    ctx->pc = 0x500858u;
    // NOP
    // 0x50085c: 0x0  nop
    ctx->pc = 0x50085cu;
    // NOP
}
