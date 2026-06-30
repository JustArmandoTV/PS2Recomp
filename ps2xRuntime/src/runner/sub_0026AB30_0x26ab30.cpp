#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026AB30
// Address: 0x26ab30 - 0x26ab70
void sub_0026AB30_0x26ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026AB30_0x26ab30");
#endif

    ctx->pc = 0x26ab30u;

    // 0x26ab30: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x26ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x26ab34: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x26ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x26ab38: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26AB38u;
    {
        const bool branch_taken_0x26ab38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x26ab38) {
            ctx->pc = 0x26AB48u;
            goto label_26ab48;
        }
    }
    ctx->pc = 0x26AB40u;
    // 0x26ab40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26AB40u;
    {
        const bool branch_taken_0x26ab40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB40u;
            // 0x26ab44: 0x8ca30024  lw          $v1, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab40) {
            ctx->pc = 0x26AB50u;
            goto label_26ab50;
        }
    }
    ctx->pc = 0x26AB48u;
label_26ab48:
    // 0x26ab48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26ab48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab4c: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x26ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_26ab50:
    // 0x26ab50: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26ab54: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x26ab54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26ab58: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26AB58u;
    {
        const bool branch_taken_0x26ab58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ab58) {
            ctx->pc = 0x26AB68u;
            goto label_26ab68;
        }
    }
    ctx->pc = 0x26AB60u;
    // 0x26ab60: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x26ab60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab64: 0x0  nop
    ctx->pc = 0x26ab64u;
    // NOP
label_26ab68:
    // 0x26ab68: 0x3e00008  jr          $ra
    ctx->pc = 0x26AB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26AB70u;
}
