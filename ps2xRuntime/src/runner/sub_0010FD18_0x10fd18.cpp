#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010FD18
// Address: 0x10fd18 - 0x10fd38
void sub_0010FD18_0x10fd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FD18_0x10fd18");
#endif

    ctx->pc = 0x10fd18u;

    // 0x10fd18: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x10fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10fd1c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10fd20: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x10fd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x10fd24: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x10fd24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x10fd28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x10fd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x10fd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x10FD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FD2Cu;
            // 0x10fd30: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FD34u;
    // 0x10fd34: 0x0  nop
    ctx->pc = 0x10fd34u;
    // NOP
}
