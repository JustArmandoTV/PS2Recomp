#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018BE48
// Address: 0x18be48 - 0x18be88
void sub_0018BE48_0x18be48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BE48_0x18be48");
#endif

    ctx->pc = 0x18be48u;

    // 0x18be48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18be48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18be4c: 0x2487016c  addiu       $a3, $a0, 0x16C
    ctx->pc = 0x18be4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 364));
    // 0x18be50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18be50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18be54: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x18be54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be58: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x18be58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x18be5c: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x18be5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18be60: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x18be60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18be64: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x18be64u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x18be68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18be68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18be6c: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x18be6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x18be70: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x18be70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18be74: 0x103300b  movn        $a2, $t0, $v1
    ctx->pc = 0x18be74u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
    // 0x18be78: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x18be78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18be7c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x18be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x18be80: 0x804a508  j           func_129420
    ctx->pc = 0x18BE80u;
    ctx->pc = 0x18BE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE80u;
            // 0x18be84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00129420_0x129420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18BE88u;
}
