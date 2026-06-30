#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C35B0
// Address: 0x4c35b0 - 0x4c35d0
void sub_004C35B0_0x4c35b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C35B0_0x4c35b0");
#endif

    ctx->pc = 0x4c35b0u;

    // 0x4c35b0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4c35b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c35b4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4c35b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c35b8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x4c35b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x4c35bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4c35bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c35c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4C35C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C35C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C35C0u;
            // 0x4c35c4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C35C8u;
    // 0x4c35c8: 0x0  nop
    ctx->pc = 0x4c35c8u;
    // NOP
    // 0x4c35cc: 0x0  nop
    ctx->pc = 0x4c35ccu;
    // NOP
}
