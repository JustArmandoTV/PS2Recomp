#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012DAA8
// Address: 0x12daa8 - 0x12dad8
void sub_0012DAA8_0x12daa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DAA8_0x12daa8");
#endif

    ctx->pc = 0x12daa8u;

    // 0x12daa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12daa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12daac: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x12daacu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12dab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12dab4: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x12dab4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
    // 0x12dab8: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x12dab8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dabc: 0x8de41ad8  lw          $a0, 0x1AD8($t7)
    ctx->pc = 0x12dabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
    // 0x12dac0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x12dac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12dac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dac8: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x12dac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dacc: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x12daccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dad0: 0x804b624  j           func_12D890
    ctx->pc = 0x12DAD0u;
    ctx->pc = 0x12DAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DAD0u;
            // 0x12dad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D890u;
    {
        auto targetFn = runtime->lookupFunction(0x12D890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x12DAD8u;
}
