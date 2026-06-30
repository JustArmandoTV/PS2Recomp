#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C1520
// Address: 0x2c1520 - 0x2c1550
void sub_002C1520_0x2c1520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1520_0x2c1520");
#endif

    ctx->pc = 0x2c1520u;

    // 0x2c1520: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2c1520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2c1524: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c1524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1528: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2c1528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2c152c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2c152cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2c1530: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2c1530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2c1534: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2c1534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2c1538: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2c1538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2c153c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2c153cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2c1540: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1540u;
            // 0x2c1544: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1548u;
    // 0x2c1548: 0x0  nop
    ctx->pc = 0x2c1548u;
    // NOP
    // 0x2c154c: 0x0  nop
    ctx->pc = 0x2c154cu;
    // NOP
}
