#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00142290
// Address: 0x142290 - 0x1422c0
void sub_00142290_0x142290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142290_0x142290");
#endif

    ctx->pc = 0x142290u;

    // 0x142290: 0x8f838264  lw          $v1, -0x7D9C($gp)
    ctx->pc = 0x142290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935140)));
    // 0x142294: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x142294u;
    {
        const bool branch_taken_0x142294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142294) {
            ctx->pc = 0x142298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142294u;
            // 0x142298: 0x8f848260  lw          $a0, -0x7DA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1422ACu;
            goto label_1422ac;
        }
    }
    ctx->pc = 0x14229Cu;
    // 0x14229c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x14229cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1422a0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1422a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1422a4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1422a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1422a8: 0x8f848260  lw          $a0, -0x7DA0($gp)
    ctx->pc = 0x1422a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
label_1422ac:
    // 0x1422ac: 0x8056b00  j           func_15AC00
    ctx->pc = 0x1422ACu;
    ctx->pc = 0x15AC00u;
    if (runtime->hasFunction(0x15AC00u)) {
        auto targetFn = runtime->lookupFunction(0x15AC00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015AC00_0x15ac00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1422B4u;
    // 0x1422b4: 0x0  nop
    ctx->pc = 0x1422b4u;
    // NOP
    // 0x1422b8: 0x0  nop
    ctx->pc = 0x1422b8u;
    // NOP
    // 0x1422bc: 0x0  nop
    ctx->pc = 0x1422bcu;
    // NOP
}
