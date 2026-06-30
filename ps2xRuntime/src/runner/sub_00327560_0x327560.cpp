#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00327560
// Address: 0x327560 - 0x3275b0
void sub_00327560_0x327560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327560_0x327560");
#endif

    switch (ctx->pc) {
        case 0x327594u: goto label_327594;
        default: break;
    }

    ctx->pc = 0x327560u;

    // 0x327560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x327564: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x327564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x327568: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x327568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32756c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x32756cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x327570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x327570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x327574: 0x24a4012c  addiu       $a0, $a1, 0x12C
    ctx->pc = 0x327574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 300));
    // 0x327578: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x327578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x32757c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x32757cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327580: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x327580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x327584: 0x24a500bc  addiu       $a1, $a1, 0xBC
    ctx->pc = 0x327584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 188));
    // 0x327588: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x327588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32758c: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x32758Cu;
    SET_GPR_U32(ctx, 31, 0x327594u);
    ctx->pc = 0x327590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32758Cu;
            // 0x327590: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327594u; }
        if (ctx->pc != 0x327594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327594u; }
        if (ctx->pc != 0x327594u) { return; }
    }
    ctx->pc = 0x327594u;
label_327594:
    // 0x327594: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x327594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x327598: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x327598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x32759c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x32759cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x3275a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3275a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3275a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3275a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3275a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3275A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3275ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3275A8u;
            // 0x3275ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3275B0u;
}
