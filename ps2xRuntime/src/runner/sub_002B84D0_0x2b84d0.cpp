#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B84D0
// Address: 0x2b84d0 - 0x2b8500
void sub_002B84D0_0x2b84d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B84D0_0x2b84d0");
#endif

    ctx->pc = 0x2b84d0u;

    // 0x2b84d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b84d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2b84d4: 0x94440ef8  lhu         $a0, 0xEF8($v0)
    ctx->pc = 0x2b84d4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3832)));
    // 0x2b84d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b84d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2b84dc: 0x94430f00  lhu         $v1, 0xF00($v0)
    ctx->pc = 0x2b84dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3840)));
    // 0x2b84e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2b84e4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2b84e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b84e8: 0x94420f08  lhu         $v0, 0xF08($v0)
    ctx->pc = 0x2b84e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3848)));
    // 0x2b84ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b84ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b84f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B84F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B84F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B84F0u;
            // 0x2b84f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B84F8u;
    // 0x2b84f8: 0x0  nop
    ctx->pc = 0x2b84f8u;
    // NOP
    // 0x2b84fc: 0x0  nop
    ctx->pc = 0x2b84fcu;
    // NOP
}
