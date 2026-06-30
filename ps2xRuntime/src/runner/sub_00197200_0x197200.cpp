#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197200
// Address: 0x197200 - 0x197220
void sub_00197200_0x197200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197200_0x197200");
#endif

    ctx->pc = 0x197200u;

    // 0x197200: 0x94a70000  lhu         $a3, 0x0($a1)
    ctx->pc = 0x197200u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x197204: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197208: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x197208u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19720c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x19720cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x197210: 0xa72818  mult        $a1, $a1, $a3
    ctx->pc = 0x197210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x197214: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x197214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x197218: 0x3e00008  jr          $ra
    ctx->pc = 0x197218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19721Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197218u;
            // 0x19721c: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197220u;
}
