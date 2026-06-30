#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00143700
// Address: 0x143700 - 0x143730
void sub_00143700_0x143700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143700_0x143700");
#endif

    ctx->pc = 0x143700u;

    // 0x143700: 0x8f8382b8  lw          $v1, -0x7D48($gp)
    ctx->pc = 0x143700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x143704: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x143704u;
    {
        const bool branch_taken_0x143704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143704) {
            ctx->pc = 0x143708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143704u;
            // 0x143708: 0x8f8482b4  lw          $a0, -0x7D4C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14371Cu;
            goto label_14371c;
        }
    }
    ctx->pc = 0x14370Cu;
    // 0x14370c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x14370cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143710: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x143710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x143714: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x143714u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x143718: 0x8f8482b4  lw          $a0, -0x7D4C($gp)
    ctx->pc = 0x143718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
label_14371c:
    // 0x14371c: 0x8056b00  j           func_15AC00
    ctx->pc = 0x14371Cu;
    ctx->pc = 0x15AC00u;
    if (runtime->hasFunction(0x15AC00u)) {
        auto targetFn = runtime->lookupFunction(0x15AC00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015AC00_0x15ac00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x143724u;
    // 0x143724: 0x0  nop
    ctx->pc = 0x143724u;
    // NOP
    // 0x143728: 0x0  nop
    ctx->pc = 0x143728u;
    // NOP
    // 0x14372c: 0x0  nop
    ctx->pc = 0x14372cu;
    // NOP
}
