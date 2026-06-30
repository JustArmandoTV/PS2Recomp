#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D49A0
// Address: 0x1d49a0 - 0x1d49f0
void sub_001D49A0_0x1d49a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D49A0_0x1d49a0");
#endif

    ctx->pc = 0x1d49a0u;

    // 0x1d49a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d49a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d49a4: 0xac60e3d0  sw          $zero, -0x1C30($v1)
    ctx->pc = 0x1d49a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 0));
    // 0x1d49a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d49a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d49ac: 0xac60e3c8  sw          $zero, -0x1C38($v1)
    ctx->pc = 0x1d49acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 0));
    // 0x1d49b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d49b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d49b4: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x1d49b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
    // 0x1d49b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d49b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d49bc: 0xac60e3a8  sw          $zero, -0x1C58($v1)
    ctx->pc = 0x1d49bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960040), GPR_U32(ctx, 0));
    // 0x1d49c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d49c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d49c4: 0xac60e3a0  sw          $zero, -0x1C60($v1)
    ctx->pc = 0x1d49c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 0));
    // 0x1d49c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d49c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d49cc: 0xac60e398  sw          $zero, -0x1C68($v1)
    ctx->pc = 0x1d49ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 0));
    // 0x1d49d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d49d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d49d4: 0xac60e390  sw          $zero, -0x1C70($v1)
    ctx->pc = 0x1d49d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 0));
    // 0x1d49d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d49d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d49dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D49DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D49E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D49DCu;
            // 0x1d49e0: 0xac60e388  sw          $zero, -0x1C78($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D49E4u;
    // 0x1d49e4: 0x0  nop
    ctx->pc = 0x1d49e4u;
    // NOP
    // 0x1d49e8: 0x0  nop
    ctx->pc = 0x1d49e8u;
    // NOP
    // 0x1d49ec: 0x0  nop
    ctx->pc = 0x1d49ecu;
    // NOP
}
