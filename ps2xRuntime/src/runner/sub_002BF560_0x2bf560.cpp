#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BF560
// Address: 0x2bf560 - 0x2bf580
void sub_002BF560_0x2bf560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF560_0x2bf560");
#endif

    ctx->pc = 0x2bf560u;

    // 0x2bf560: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2bf560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2bf564: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bf564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf568: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2bf568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2bf56c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF56Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF56Cu;
            // 0x2bf570: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BF574u;
    // 0x2bf574: 0x0  nop
    ctx->pc = 0x2bf574u;
    // NOP
    // 0x2bf578: 0x0  nop
    ctx->pc = 0x2bf578u;
    // NOP
    // 0x2bf57c: 0x0  nop
    ctx->pc = 0x2bf57cu;
    // NOP
}
