#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192D08
// Address: 0x192d08 - 0x192d38
void sub_00192D08_0x192d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192D08_0x192d08");
#endif

    ctx->pc = 0x192d08u;

    // 0x192d08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x192d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192d0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x192d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192d10: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x192d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x192d14: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x192d14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x192d18: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x192d18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x192d1c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x192d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x192d20: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x192d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x192d24: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x192d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x192d28: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x192d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x192d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x192D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192D2Cu;
            // 0x192d30: 0xac820020  sw          $v0, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192D34u;
    // 0x192d34: 0x0  nop
    ctx->pc = 0x192d34u;
    // NOP
}
