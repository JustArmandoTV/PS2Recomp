#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020FC10
// Address: 0x20fc10 - 0x20fc38
void sub_0020FC10_0x20fc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FC10_0x20fc10");
#endif

    ctx->pc = 0x20fc10u;

    // 0x20fc10: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x20fc10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20fc14: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x20fc14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x20fc18: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20fc1c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20fc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x20fc20: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x20fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x20fc24: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x20fc24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x20fc28: 0xa0470000  sb          $a3, 0x0($v0)
    ctx->pc = 0x20fc28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x20fc2c: 0x3e00008  jr          $ra
    ctx->pc = 0x20FC2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FC2Cu;
            // 0x20fc30: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20FC34u;
    // 0x20fc34: 0x0  nop
    ctx->pc = 0x20fc34u;
    // NOP
}
