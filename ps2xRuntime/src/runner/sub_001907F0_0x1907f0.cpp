#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001907F0
// Address: 0x1907f0 - 0x190840
void sub_001907F0_0x1907f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001907F0_0x1907f0");
#endif

    switch (ctx->pc) {
        case 0x190814u: goto label_190814;
        default: break;
    }

    ctx->pc = 0x1907f0u;

    // 0x1907f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1907f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1907f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1907f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1907f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1907f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1907fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1907fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x190800: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x190800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190804: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x190804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x190808: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x190808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19080c: 0xc064adc  jal         func_192B70
    ctx->pc = 0x19080Cu;
    SET_GPR_U32(ctx, 31, 0x190814u);
    ctx->pc = 0x190810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19080Cu;
            // 0x190810: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192B70u;
    if (runtime->hasFunction(0x192B70u)) {
        auto targetFn = runtime->lookupFunction(0x192B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190814u; }
        if (ctx->pc != 0x190814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192B70_0x192b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190814u; }
        if (ctx->pc != 0x190814u) { return; }
    }
    ctx->pc = 0x190814u;
label_190814:
    // 0x190814: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x190814u;
    {
        const bool branch_taken_0x190814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190814) {
            ctx->pc = 0x190818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x190814u;
            // 0x190818: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x190828u;
            goto label_190828;
        }
    }
    ctx->pc = 0x19081Cu;
    // 0x19081c: 0xae1100f0  sw          $s1, 0xF0($s0)
    ctx->pc = 0x19081cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 17));
    // 0x190820: 0xae1200ec  sw          $s2, 0xEC($s0)
    ctx->pc = 0x190820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 18));
    // 0x190824: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x190824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_190828:
    // 0x190828: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x190828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19082c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19082cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190830: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x190830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x190834: 0x3e00008  jr          $ra
    ctx->pc = 0x190834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190834u;
            // 0x190838: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19083Cu;
    // 0x19083c: 0x0  nop
    ctx->pc = 0x19083cu;
    // NOP
}
