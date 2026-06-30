#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F11B0
// Address: 0x3f11b0 - 0x3f11f0
void sub_003F11B0_0x3f11b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F11B0_0x3f11b0");
#endif

    ctx->pc = 0x3f11b0u;

    // 0x3f11b0: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x3f11b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3f11b4: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x3f11b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3f11b8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3f11b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3f11bc: 0xac850054  sw          $a1, 0x54($a0)
    ctx->pc = 0x3f11bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
    // 0x3f11c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3f11c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3f11c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f11c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3f11c8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3f11c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3f11cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3f11ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3f11d0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x3f11d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x3f11d4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x3f11d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x3f11d8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x3f11d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x3f11dc: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x3f11dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x3f11e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3F11E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F11E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F11E0u;
            // 0x3f11e4: 0xac80004c  sw          $zero, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F11E8u;
    // 0x3f11e8: 0x0  nop
    ctx->pc = 0x3f11e8u;
    // NOP
    // 0x3f11ec: 0x0  nop
    ctx->pc = 0x3f11ecu;
    // NOP
}
