#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C7F10
// Address: 0x1c7f10 - 0x1c7f50
void sub_001C7F10_0x1c7f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7F10_0x1c7f10");
#endif

    switch (ctx->pc) {
        case 0x1c7f30u: goto label_1c7f30;
        default: break;
    }

    ctx->pc = 0x1c7f10u;

    // 0x1c7f10: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c7f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1c7f14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c7f14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f18: 0x2484a6b8  addiu       $a0, $a0, -0x5948
    ctx->pc = 0x1c7f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944440));
    // 0x1c7f1c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c7f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c7f20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c7f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c7f24: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F24u;
            // 0x1c7f28: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7F2Cu;
    // 0x1c7f2c: 0x0  nop
    ctx->pc = 0x1c7f2cu;
    // NOP
label_1c7f30:
    // 0x1c7f30: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c7f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1c7f34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c7f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f38: 0x2484a6b8  addiu       $a0, $a0, -0x5948
    ctx->pc = 0x1c7f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944440));
    // 0x1c7f3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c7f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c7f40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c7f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c7f44: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F44u;
            // 0x1c7f48: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7F4Cu;
    // 0x1c7f4c: 0x0  nop
    ctx->pc = 0x1c7f4cu;
    // NOP
}
