#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00242F00
// Address: 0x242f00 - 0x242f70
void sub_00242F00_0x242f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242F00_0x242f00");
#endif

    ctx->pc = 0x242f00u;

    // 0x242f00: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x242f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x242f04: 0x3c080024  lui         $t0, 0x24
    ctx->pc = 0x242f04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)36 << 16));
    // 0x242f08: 0x24632fd0  addiu       $v1, $v1, 0x2FD0
    ctx->pc = 0x242f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12240));
    // 0x242f0c: 0x3c070024  lui         $a3, 0x24
    ctx->pc = 0x242f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)36 << 16));
    // 0x242f10: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x242f10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x242f14: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x242f14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
    // 0x242f18: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x242f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x242f1c: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x242f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x242f20: 0x24633040  addiu       $v1, $v1, 0x3040
    ctx->pc = 0x242f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12352));
    // 0x242f24: 0x250841f0  addiu       $t0, $t0, 0x41F0
    ctx->pc = 0x242f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16880));
    // 0x242f28: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x242f28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x242f2c: 0x24e74280  addiu       $a3, $a3, 0x4280
    ctx->pc = 0x242f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17024));
    // 0x242f30: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x242f30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x242f34: 0x24c642a0  addiu       $a2, $a2, 0x42A0
    ctx->pc = 0x242f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17056));
    // 0x242f38: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x242f38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x242f3c: 0x24a53020  addiu       $a1, $a1, 0x3020
    ctx->pc = 0x242f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12320));
    // 0x242f40: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x242f40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x242f44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x242f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242f48: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x242f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x242f4c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x242f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x242f50: 0xac880018  sw          $t0, 0x18($a0)
    ctx->pc = 0x242f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 8));
    // 0x242f54: 0xac87001c  sw          $a3, 0x1C($a0)
    ctx->pc = 0x242f54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
    // 0x242f58: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x242f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x242f5c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x242f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x242f60: 0x3e00008  jr          $ra
    ctx->pc = 0x242F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242F60u;
            // 0x242f64: 0xa083002c  sb          $v1, 0x2C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242F68u;
    // 0x242f68: 0x0  nop
    ctx->pc = 0x242f68u;
    // NOP
    // 0x242f6c: 0x0  nop
    ctx->pc = 0x242f6cu;
    // NOP
}
