#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177D20
// Address: 0x177d20 - 0x177d48
void sub_00177D20_0x177d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177D20_0x177d20");
#endif

    ctx->pc = 0x177d20u;

    // 0x177d20: 0x94830028  lhu         $v1, 0x28($a0)
    ctx->pc = 0x177d20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x177d24: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x177d24u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x177d28: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x177d28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x177d2c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x177d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x177d30: 0x9483002c  lhu         $v1, 0x2C($a0)
    ctx->pc = 0x177d30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x177d34: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x177d34u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x177d38: 0x9482002e  lhu         $v0, 0x2E($a0)
    ctx->pc = 0x177d38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x177d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x177D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177D3Cu;
            // 0x177d40: 0xa4c20002  sh          $v0, 0x2($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177D44u;
    // 0x177d44: 0x0  nop
    ctx->pc = 0x177d44u;
    // NOP
}
