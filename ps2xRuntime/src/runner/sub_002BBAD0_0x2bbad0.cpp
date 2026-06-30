#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BBAD0
// Address: 0x2bbad0 - 0x2bbaf0
void sub_002BBAD0_0x2bbad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBAD0_0x2bbad0");
#endif

    ctx->pc = 0x2bbad0u;

    // 0x2bbad0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bbad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bbad4: 0x24422280  addiu       $v0, $v0, 0x2280
    ctx->pc = 0x2bbad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8832));
    // 0x2bbad8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2bbad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2bbadc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bbadcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbae0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBAE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBAE0u;
            // 0x2bbae4: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBAE8u;
    // 0x2bbae8: 0x0  nop
    ctx->pc = 0x2bbae8u;
    // NOP
    // 0x2bbaec: 0x0  nop
    ctx->pc = 0x2bbaecu;
    // NOP
}
