#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016ED30
// Address: 0x16ed30 - 0x16ed70
void sub_0016ED30_0x16ed30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016ED30_0x16ed30");
#endif

    ctx->pc = 0x16ed30u;

    // 0x16ed30: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x16ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x16ed34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ed38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x16ed38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x16ed3c: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x16ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x16ed40: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x16ed40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x16ed44: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x16ed44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x16ed48: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x16ed48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x16ed4c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x16ed4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x16ed50: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x16ed50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x16ed54: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x16ed54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x16ed58: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x16ed58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x16ed5c: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x16ed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x16ed60: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x16ed60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x16ed64: 0x3e00008  jr          $ra
    ctx->pc = 0x16ED64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ED68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ED64u;
            // 0x16ed68: 0xac8000a0  sw          $zero, 0xA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16ED6Cu;
    // 0x16ed6c: 0x0  nop
    ctx->pc = 0x16ed6cu;
    // NOP
}
