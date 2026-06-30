#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCB20
// Address: 0x1dcb20 - 0x1dcb40
void sub_001DCB20_0x1dcb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCB20_0x1dcb20");
#endif

    ctx->pc = 0x1dcb20u;

    // 0x1dcb20: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1dcb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1dcb24: 0x602827  not         $a1, $v1
    ctx->pc = 0x1dcb24u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1dcb28: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x1dcb28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1dcb2c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1dcb2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1dcb30: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1dcb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1dcb34: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCB34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCB34u;
            // 0x1dcb38: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCB3Cu;
    // 0x1dcb3c: 0x0  nop
    ctx->pc = 0x1dcb3cu;
    // NOP
}
