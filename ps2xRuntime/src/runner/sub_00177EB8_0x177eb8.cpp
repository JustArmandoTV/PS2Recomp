#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177EB8
// Address: 0x177eb8 - 0x177ec8
void sub_00177EB8_0x177eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177EB8_0x177eb8");
#endif

    ctx->pc = 0x177eb8u;

    // 0x177eb8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x177eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x177ebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x177EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177EC0u;
            // 0x177ec4: 0xac623f80  sw          $v0, 0x3F80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177EC8u;
}
