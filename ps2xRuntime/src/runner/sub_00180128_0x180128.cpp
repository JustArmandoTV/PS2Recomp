#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180128
// Address: 0x180128 - 0x180150
void sub_00180128_0x180128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180128_0x180128");
#endif

    ctx->pc = 0x180128u;

    // 0x180128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18012c: 0x3c087fff  lui         $t0, 0x7FFF
    ctx->pc = 0x18012cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32767 << 16));
    // 0x180130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180134: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x180134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180138: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x180138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18013c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x18013cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x180140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180144: 0x8060072  j           func_1801C8
    ctx->pc = 0x180144u;
    ctx->pc = 0x180148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180144u;
            // 0x180148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1801C8u;
    if (runtime->hasFunction(0x1801C8u)) {
        auto targetFn = runtime->lookupFunction(0x1801C8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001801C8_0x1801c8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18014Cu;
    // 0x18014c: 0x0  nop
    ctx->pc = 0x18014cu;
    // NOP
}
