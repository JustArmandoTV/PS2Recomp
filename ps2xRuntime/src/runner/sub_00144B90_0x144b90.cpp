#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00144B90
// Address: 0x144b90 - 0x144bc0
void sub_00144B90_0x144b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144B90_0x144b90");
#endif

    ctx->pc = 0x144b90u;

    // 0x144b90: 0x8f8382c8  lw          $v1, -0x7D38($gp)
    ctx->pc = 0x144b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935240)));
    // 0x144b94: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x144B94u;
    {
        const bool branch_taken_0x144b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x144b94) {
            ctx->pc = 0x144B98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144B94u;
            // 0x144b98: 0x8f8482c4  lw          $a0, -0x7D3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144BACu;
            goto label_144bac;
        }
    }
    ctx->pc = 0x144B9Cu;
    // 0x144b9c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x144b9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144ba0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x144ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x144ba4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x144ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x144ba8: 0x8f8482c4  lw          $a0, -0x7D3C($gp)
    ctx->pc = 0x144ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
label_144bac:
    // 0x144bac: 0x8056b00  j           func_15AC00
    ctx->pc = 0x144BACu;
    ctx->pc = 0x15AC00u;
    if (runtime->hasFunction(0x15AC00u)) {
        auto targetFn = runtime->lookupFunction(0x15AC00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015AC00_0x15ac00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x144BB4u;
    // 0x144bb4: 0x0  nop
    ctx->pc = 0x144bb4u;
    // NOP
    // 0x144bb8: 0x0  nop
    ctx->pc = 0x144bb8u;
    // NOP
    // 0x144bbc: 0x0  nop
    ctx->pc = 0x144bbcu;
    // NOP
}
