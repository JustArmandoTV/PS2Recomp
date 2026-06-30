#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001995B0
// Address: 0x1995b0 - 0x199610
void sub_001995B0_0x1995b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001995B0_0x1995b0");
#endif

    switch (ctx->pc) {
        case 0x1995d0u: goto label_1995d0;
        case 0x1995e4u: goto label_1995e4;
        default: break;
    }

    ctx->pc = 0x1995b0u;

    // 0x1995b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1995b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1995b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1995b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1995b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1995b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1995bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1995bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1995c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1995c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1995c4: 0x263004f4  addiu       $s0, $s1, 0x4F4
    ctx->pc = 0x1995c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1268));
    // 0x1995c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1995c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1995cc: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x1995ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1995d0:
    // 0x1995d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1995d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1995d4: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1995D4u;
    {
        const bool branch_taken_0x1995d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1995d4) {
            ctx->pc = 0x1995D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1995D4u;
            // 0x1995d8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1995ECu;
            goto label_1995ec;
        }
    }
    ctx->pc = 0x1995DCu;
    // 0x1995dc: 0xc066548  jal         func_199520
    ctx->pc = 0x1995DCu;
    SET_GPR_U32(ctx, 31, 0x1995E4u);
    ctx->pc = 0x1995E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1995DCu;
            // 0x1995e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199520u;
    if (runtime->hasFunction(0x199520u)) {
        auto targetFn = runtime->lookupFunction(0x199520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1995E4u; }
        if (ctx->pc != 0x1995E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199520_0x199520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1995E4u; }
        if (ctx->pc != 0x1995E4u) { return; }
    }
    ctx->pc = 0x1995E4u;
label_1995e4:
    // 0x1995e4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1995e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1995e8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1995e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1995ec:
    // 0x1995ec: 0x641fff8  bgez        $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1995ECu;
    {
        const bool branch_taken_0x1995ec = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1995F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1995ECu;
            // 0x1995f0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1995ec) {
            ctx->pc = 0x1995D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1995d0;
        }
    }
    ctx->pc = 0x1995F4u;
    // 0x1995f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1995f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1995f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1995f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1995fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1995fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199600: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x199600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x199604: 0x3e00008  jr          $ra
    ctx->pc = 0x199604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199604u;
            // 0x199608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19960Cu;
    // 0x19960c: 0x0  nop
    ctx->pc = 0x19960cu;
    // NOP
}
