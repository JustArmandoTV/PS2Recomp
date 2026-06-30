#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AD390
// Address: 0x2ad390 - 0x2ad3d0
void sub_002AD390_0x2ad390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD390_0x2ad390");
#endif

    ctx->pc = 0x2ad390u;

    // 0x2ad390: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ad390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ad394: 0x80420c70  lb          $v0, 0xC70($v0)
    ctx->pc = 0x2ad394u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3184)));
    // 0x2ad398: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AD398u;
    {
        const bool branch_taken_0x2ad398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad398) {
            ctx->pc = 0x2AD3C0u;
            goto label_2ad3c0;
        }
    }
    ctx->pc = 0x2AD3A0u;
    // 0x2ad3a0: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x2ad3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x2ad3a4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2ad3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x2ad3a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ad3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ad3ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ad3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad3b0: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x2ad3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ad3b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ad3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ad3b8: 0xac6510e8  sw          $a1, 0x10E8($v1)
    ctx->pc = 0x2ad3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4328), GPR_U32(ctx, 5));
    // 0x2ad3bc: 0xa0440c70  sb          $a0, 0xC70($v0)
    ctx->pc = 0x2ad3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3184), (uint8_t)GPR_U32(ctx, 4));
label_2ad3c0:
    // 0x2ad3c0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2ad3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2ad3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD3C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD3C4u;
            // 0x2ad3c8: 0x8c4210e8  lw          $v0, 0x10E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4328)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD3CCu;
    // 0x2ad3cc: 0x0  nop
    ctx->pc = 0x2ad3ccu;
    // NOP
}
