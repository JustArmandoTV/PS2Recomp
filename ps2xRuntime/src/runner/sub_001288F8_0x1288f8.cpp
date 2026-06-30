#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001288F8
// Address: 0x1288f8 - 0x128918
void sub_001288F8_0x1288f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001288F8_0x1288f8");
#endif

    ctx->pc = 0x1288f8u;

    // 0x1288f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1288f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1288fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1288fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x128900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x128904: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x128904u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
    // 0x128908: 0x8de41ad8  lw          $a0, 0x1AD8($t7)
    ctx->pc = 0x128908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
    // 0x12890c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12890cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128910: 0x804a2e4  j           func_128B90
    ctx->pc = 0x128910u;
    ctx->pc = 0x128914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128910u;
            // 0x128914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B90u;
    if (runtime->hasFunction(0x128B90u)) {
        auto targetFn = runtime->lookupFunction(0x128B90u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00128B90_0x128b90(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x128918u;
}
