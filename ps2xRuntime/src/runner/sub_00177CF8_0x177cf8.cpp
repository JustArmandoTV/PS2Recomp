#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177CF8
// Address: 0x177cf8 - 0x177d20
void sub_00177CF8_0x177cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177CF8_0x177cf8");
#endif

    ctx->pc = 0x177cf8u;

    // 0x177cf8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x177cf8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x177cfc: 0xa4830028  sh          $v1, 0x28($a0)
    ctx->pc = 0x177cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x177d00: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x177d00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x177d04: 0xa482002a  sh          $v0, 0x2A($a0)
    ctx->pc = 0x177d04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x177d08: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x177d08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x177d0c: 0xa483002c  sh          $v1, 0x2C($a0)
    ctx->pc = 0x177d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x177d10: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x177d10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x177d14: 0x3e00008  jr          $ra
    ctx->pc = 0x177D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177D14u;
            // 0x177d18: 0xa482002e  sh          $v0, 0x2E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177D1Cu;
    // 0x177d1c: 0x0  nop
    ctx->pc = 0x177d1cu;
    // NOP
}
