#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047FDA0
// Address: 0x47fda0 - 0x47fdf0
void sub_0047FDA0_0x47fda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047FDA0_0x47fda0");
#endif

    switch (ctx->pc) {
        case 0x47fdb8u: goto label_47fdb8;
        case 0x47fdc0u: goto label_47fdc0;
        default: break;
    }

    ctx->pc = 0x47fda0u;

    // 0x47fda0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47fda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47fda4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47fda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x47fda8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47fda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47fdac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47fdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47fdb0: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x47fdb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x47fdb4: 0x24900080  addiu       $s0, $a0, 0x80
    ctx->pc = 0x47fdb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_47fdb8:
    // 0x47fdb8: 0xc0e3658  jal         func_38D960
    ctx->pc = 0x47FDB8u;
    SET_GPR_U32(ctx, 31, 0x47FDC0u);
    ctx->pc = 0x47FDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47FDB8u;
            // 0x47fdbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FDC0u; }
        if (ctx->pc != 0x47FDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47FDC0u; }
        if (ctx->pc != 0x47FDC0u) { return; }
    }
    ctx->pc = 0x47FDC0u;
label_47fdc0:
    // 0x47fdc0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x47fdc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x47fdc4: 0x261000e0  addiu       $s0, $s0, 0xE0
    ctx->pc = 0x47fdc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x47fdc8: 0x0  nop
    ctx->pc = 0x47fdc8u;
    // NOP
    // 0x47fdcc: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x47FDCCu;
    {
        const bool branch_taken_0x47fdcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x47fdcc) {
            ctx->pc = 0x47FDB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47fdb8;
        }
    }
    ctx->pc = 0x47FDD4u;
    // 0x47fdd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47fdd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47fdd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47fdd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47fddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47fddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47fde0: 0x3e00008  jr          $ra
    ctx->pc = 0x47FDE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47FDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47FDE0u;
            // 0x47fde4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47FDE8u;
    // 0x47fde8: 0x0  nop
    ctx->pc = 0x47fde8u;
    // NOP
    // 0x47fdec: 0x0  nop
    ctx->pc = 0x47fdecu;
    // NOP
}
