#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015AEE0
// Address: 0x15aee0 - 0x15af10
void sub_0015AEE0_0x15aee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AEE0_0x15aee0");
#endif

    ctx->pc = 0x15aee0u;

    // 0x15aee0: 0x34a30007  ori         $v1, $a1, 0x7
    ctx->pc = 0x15aee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
    // 0x15aee4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x15aee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15aee8: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x15aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x15aeec: 0x7ca00000  sq          $zero, 0x0($a1)
    ctx->pc = 0x15aeecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 0));
    // 0x15aef0: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x15aef0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x15aef4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x15aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15aef8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x15aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x15aefc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x15aefcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x15af00: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x15af00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x15af04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15af04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15af08: 0x3e00008  jr          $ra
    ctx->pc = 0x15AF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF08u;
            // 0x15af0c: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15AF10u;
}
