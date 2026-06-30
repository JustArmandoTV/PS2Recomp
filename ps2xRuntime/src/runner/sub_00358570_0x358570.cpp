#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00358570
// Address: 0x358570 - 0x358590
void sub_00358570_0x358570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358570_0x358570");
#endif

    ctx->pc = 0x358570u;

    // 0x358570: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x358570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x358574: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x358574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x358578: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35857c: 0x3e00008  jr          $ra
    ctx->pc = 0x35857Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35857Cu;
            // 0x358580: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358584u;
    // 0x358584: 0x0  nop
    ctx->pc = 0x358584u;
    // NOP
    // 0x358588: 0x0  nop
    ctx->pc = 0x358588u;
    // NOP
    // 0x35858c: 0x0  nop
    ctx->pc = 0x35858cu;
    // NOP
}
