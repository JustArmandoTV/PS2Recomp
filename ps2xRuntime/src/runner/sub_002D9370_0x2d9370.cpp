#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D9370
// Address: 0x2d9370 - 0x2d93b0
void sub_002D9370_0x2d9370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9370_0x2d9370");
#endif

    ctx->pc = 0x2d9370u;

    // 0x2d9370: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2d9370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2d9374: 0x80420e70  lb          $v0, 0xE70($v0)
    ctx->pc = 0x2d9374u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3696)));
    // 0x2d9378: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D9378u;
    {
        const bool branch_taken_0x2d9378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9378) {
            ctx->pc = 0x2D93A0u;
            goto label_2d93a0;
        }
    }
    ctx->pc = 0x2D9380u;
    // 0x2d9380: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x2d9380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x2d9384: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2d9384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x2d9388: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d9388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d938c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d938cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9390: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x2d9390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d9394: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2d9394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2d9398: 0xac6517d0  sw          $a1, 0x17D0($v1)
    ctx->pc = 0x2d9398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6096), GPR_U32(ctx, 5));
    // 0x2d939c: 0xa0440e70  sb          $a0, 0xE70($v0)
    ctx->pc = 0x2d939cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3696), (uint8_t)GPR_U32(ctx, 4));
label_2d93a0:
    // 0x2d93a0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2d93a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2d93a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D93A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D93A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D93A4u;
            // 0x2d93a8: 0x8c4217d0  lw          $v0, 0x17D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6096)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D93ACu;
    // 0x2d93ac: 0x0  nop
    ctx->pc = 0x2d93acu;
    // NOP
}
