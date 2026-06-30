#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F7E50
// Address: 0x2f7e50 - 0x2f7e70
void sub_002F7E50_0x2f7e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7E50_0x2f7e50");
#endif

    ctx->pc = 0x2f7e50u;

    // 0x2f7e50: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2f7e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2f7e54: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2f7e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f7e58: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2f7e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2f7e5c: 0x24422300  addiu       $v0, $v0, 0x2300
    ctx->pc = 0x2f7e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8960));
    // 0x2f7e60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f7e64: 0x80bdfd4  j           func_2F7F50
    ctx->pc = 0x2F7E64u;
    ctx->pc = 0x2F7E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7E64u;
            // 0x2f7e68: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7F50u;
    if (runtime->hasFunction(0x2F7F50u)) {
        auto targetFn = runtime->lookupFunction(0x2F7F50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002F7F50_0x2f7f50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2F7E6Cu;
    // 0x2f7e6c: 0x0  nop
    ctx->pc = 0x2f7e6cu;
    // NOP
}
