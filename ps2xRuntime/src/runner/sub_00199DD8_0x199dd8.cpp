#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00199DD8
// Address: 0x199dd8 - 0x199e08
void sub_00199DD8_0x199dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199DD8_0x199dd8");
#endif

    ctx->pc = 0x199dd8u;

    // 0x199dd8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x199dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ddc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199ddcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199de0: 0x23140  sll         $a2, $v0, 5
    ctx->pc = 0x199de0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x199de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199de8: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x199de8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x199dec: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x199decu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x199df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199df4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x199df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x199df8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x199df8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x199dfc: 0x8065a72  j           func_1969C8
    ctx->pc = 0x199DFCu;
    ctx->pc = 0x199E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199DFCu;
            // 0x199e00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1969C8u;
    if (runtime->hasFunction(0x1969C8u)) {
        auto targetFn = runtime->lookupFunction(0x1969C8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001969C8_0x1969c8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x199E04u;
    // 0x199e04: 0x0  nop
    ctx->pc = 0x199e04u;
    // NOP
}
