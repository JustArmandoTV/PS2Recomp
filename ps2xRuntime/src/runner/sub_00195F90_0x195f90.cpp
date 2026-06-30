#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00195F90
// Address: 0x195f90 - 0x195fe0
void sub_00195F90_0x195f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195F90_0x195f90");
#endif

    switch (ctx->pc) {
        case 0x195fa4u: goto label_195fa4;
        case 0x195fc0u: goto label_195fc0;
        default: break;
    }

    ctx->pc = 0x195f90u;

    // 0x195f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195f94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x195f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195f98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x195f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x195f9c: 0xc0657f8  jal         func_195FE0
    ctx->pc = 0x195F9Cu;
    SET_GPR_U32(ctx, 31, 0x195FA4u);
    ctx->pc = 0x195FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195F9Cu;
            // 0x195fa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195FE0u;
    if (runtime->hasFunction(0x195FE0u)) {
        auto targetFn = runtime->lookupFunction(0x195FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195FA4u; }
        if (ctx->pc != 0x195FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195FE0_0x195fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195FA4u; }
        if (ctx->pc != 0x195FA4u) { return; }
    }
    ctx->pc = 0x195FA4u;
label_195fa4:
    // 0x195fa4: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x195fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x195fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195fac: 0x24a5ff38  addiu       $a1, $a1, -0xC8
    ctx->pc = 0x195facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967096));
    // 0x195fb0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x195FB0u;
    {
        const bool branch_taken_0x195fb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x195FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195FB0u;
            // 0x195fb4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195fb0) {
            ctx->pc = 0x195FCCu;
            goto label_195fcc;
        }
    }
    ctx->pc = 0x195FB8u;
    // 0x195fb8: 0xc064124  jal         func_190490
    ctx->pc = 0x195FB8u;
    SET_GPR_U32(ctx, 31, 0x195FC0u);
    ctx->pc = 0x190490u;
    if (runtime->hasFunction(0x190490u)) {
        auto targetFn = runtime->lookupFunction(0x190490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195FC0u; }
        if (ctx->pc != 0x195FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190490_0x190490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195FC0u; }
        if (ctx->pc != 0x195FC0u) { return; }
    }
    ctx->pc = 0x195FC0u;
label_195fc0:
    // 0x195fc0: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x195fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x195fc4: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x195fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x195fc8: 0xac626a64  sw          $v0, 0x6A64($v1)
    ctx->pc = 0x195fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27236), GPR_U32(ctx, 2));
label_195fcc:
    // 0x195fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x195fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195fd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x195fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x195fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x195FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195FD4u;
            // 0x195fd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195FDCu;
    // 0x195fdc: 0x0  nop
    ctx->pc = 0x195fdcu;
    // NOP
}
