#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029EE70
// Address: 0x29ee70 - 0x29eea0
void sub_0029EE70_0x29ee70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EE70_0x29ee70");
#endif

    ctx->pc = 0x29ee70u;

    // 0x29ee70: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29ee70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x29ee74: 0xa060ea70  sb          $zero, -0x1590($v1)
    ctx->pc = 0x29ee74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961776), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ee78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x29ee7c: 0xac60ea60  sw          $zero, -0x15A0($v1)
    ctx->pc = 0x29ee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961760), GPR_U32(ctx, 0));
    // 0x29ee80: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x29ee84: 0xac60ea68  sw          $zero, -0x1598($v1)
    ctx->pc = 0x29ee84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961768), GPR_U32(ctx, 0));
    // 0x29ee88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29ee88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x29ee8c: 0xac60ea64  sw          $zero, -0x159C($v1)
    ctx->pc = 0x29ee8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961764), GPR_U32(ctx, 0));
    // 0x29ee90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29ee90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x29ee94: 0x3e00008  jr          $ra
    ctx->pc = 0x29EE94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EE94u;
            // 0x29ee98: 0xac60ea6c  sw          $zero, -0x1594($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29EE9Cu;
    // 0x29ee9c: 0x0  nop
    ctx->pc = 0x29ee9cu;
    // NOP
}
