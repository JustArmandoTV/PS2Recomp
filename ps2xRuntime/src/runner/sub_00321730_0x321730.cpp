#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00321730
// Address: 0x321730 - 0x321760
void sub_00321730_0x321730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321730_0x321730");
#endif

    ctx->pc = 0x321730u;

    // 0x321730: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x321730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321734: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x321734u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321738: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x321738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32173c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x32173cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321740: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x321740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x321744: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x321744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321748: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x321748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x32174c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x32174cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321750: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x321750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x321754: 0x80c8530  j           func_3214C0
    ctx->pc = 0x321754u;
    ctx->pc = 0x321758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321754u;
            // 0x321758: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3214C0u;
    if (runtime->hasFunction(0x3214C0u)) {
        auto targetFn = runtime->lookupFunction(0x3214C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003214C0_0x3214c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x32175Cu;
    // 0x32175c: 0x0  nop
    ctx->pc = 0x32175cu;
    // NOP
}
