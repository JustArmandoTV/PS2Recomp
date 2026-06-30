#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021C9F0
// Address: 0x21c9f0 - 0x21ca10
void sub_0021C9F0_0x21c9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C9F0_0x21c9f0");
#endif

    ctx->pc = 0x21c9f0u;

    // 0x21c9f0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x21c9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x21c9f4: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x21c9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x21c9f8: 0x2463c9b0  addiu       $v1, $v1, -0x3650
    ctx->pc = 0x21c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953392));
    // 0x21c9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x21C9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C9FCu;
            // 0x21ca00: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CA04u;
    // 0x21ca04: 0x0  nop
    ctx->pc = 0x21ca04u;
    // NOP
    // 0x21ca08: 0x0  nop
    ctx->pc = 0x21ca08u;
    // NOP
    // 0x21ca0c: 0x0  nop
    ctx->pc = 0x21ca0cu;
    // NOP
}
