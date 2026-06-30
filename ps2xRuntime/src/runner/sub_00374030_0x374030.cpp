#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00374030
// Address: 0x374030 - 0x374070
void sub_00374030_0x374030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374030_0x374030");
#endif

    switch (ctx->pc) {
        case 0x37405cu: goto label_37405c;
        default: break;
    }

    ctx->pc = 0x374030u;

    // 0x374030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x374030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x374034: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x374034u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
    // 0x374038: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x374038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37403c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37403cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x374040: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x374040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x374044: 0x3405fd3c  ori         $a1, $zero, 0xFD3C
    ctx->pc = 0x374044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64828);
    // 0x374048: 0x8c506060  lw          $s0, 0x6060($v0)
    ctx->pc = 0x374048u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24672)));
    // 0x37404c: 0x24e77790  addiu       $a3, $a3, 0x7790
    ctx->pc = 0x37404cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30608));
    // 0x374050: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x374050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x374054: 0xc155a20  jal         func_556880
    ctx->pc = 0x374054u;
    SET_GPR_U32(ctx, 31, 0x37405Cu);
    ctx->pc = 0x374058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374054u;
            // 0x374058: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x556880u;
    if (runtime->hasFunction(0x556880u)) {
        auto targetFn = runtime->lookupFunction(0x556880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37405Cu; }
        if (ctx->pc != 0x37405Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00556880_0x556880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37405Cu; }
        if (ctx->pc != 0x37405Cu) { return; }
    }
    ctx->pc = 0x37405Cu;
label_37405c:
    // 0x37405c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37405cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374060: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x374060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374064: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x374064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374068: 0x3e00008  jr          $ra
    ctx->pc = 0x374068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37406Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374068u;
            // 0x37406c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374070u;
}
