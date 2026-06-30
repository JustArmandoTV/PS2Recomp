#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D480
// Address: 0x15d480 - 0x15d4a0
void sub_0015D480_0x15d480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D480_0x15d480");
#endif

    ctx->pc = 0x15d480u;

    // 0x15d480: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15d480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15d484: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d488: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x15d488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x15d48c: 0x8056b18  j           func_15AC60
    ctx->pc = 0x15D48Cu;
    ctx->pc = 0x15D490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D48Cu;
            // 0x15d490: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC60u;
    if (runtime->hasFunction(0x15AC60u)) {
        auto targetFn = runtime->lookupFunction(0x15AC60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015AC60_0x15ac60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15D494u;
    // 0x15d494: 0x0  nop
    ctx->pc = 0x15d494u;
    // NOP
    // 0x15d498: 0x0  nop
    ctx->pc = 0x15d498u;
    // NOP
    // 0x15d49c: 0x0  nop
    ctx->pc = 0x15d49cu;
    // NOP
}
