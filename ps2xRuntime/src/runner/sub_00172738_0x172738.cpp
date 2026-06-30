#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172738
// Address: 0x172738 - 0x172790
void sub_00172738_0x172738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172738_0x172738");
#endif

    switch (ctx->pc) {
        case 0x17275cu: goto label_17275c;
        case 0x17276cu: goto label_17276c;
        case 0x172774u: goto label_172774;
        default: break;
    }

    ctx->pc = 0x172738u;

    // 0x172738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17273c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17273cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x172740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172744: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x172744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x172748: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x172748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17274c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17274cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x172750: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x172750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x172754: 0xc0599de  jal         func_166778
    ctx->pc = 0x172754u;
    SET_GPR_U32(ctx, 31, 0x17275Cu);
    ctx->pc = 0x172758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172754u;
            // 0x172758: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17275Cu; }
        if (ctx->pc != 0x17275Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17275Cu; }
        if (ctx->pc != 0x17275Cu) { return; }
    }
    ctx->pc = 0x17275Cu;
label_17275c:
    // 0x17275c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17275cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172760: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172764: 0xc05c9e4  jal         func_172790
    ctx->pc = 0x172764u;
    SET_GPR_U32(ctx, 31, 0x17276Cu);
    ctx->pc = 0x172768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172764u;
            // 0x172768: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172790u;
    if (runtime->hasFunction(0x172790u)) {
        auto targetFn = runtime->lookupFunction(0x172790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17276Cu; }
        if (ctx->pc != 0x17276Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172790_0x172790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17276Cu; }
        if (ctx->pc != 0x17276Cu) { return; }
    }
    ctx->pc = 0x17276Cu;
label_17276c:
    // 0x17276c: 0xc0599e0  jal         func_166780
    ctx->pc = 0x17276Cu;
    SET_GPR_U32(ctx, 31, 0x172774u);
    ctx->pc = 0x172770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17276Cu;
            // 0x172770: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172774u; }
        if (ctx->pc != 0x172774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172774u; }
        if (ctx->pc != 0x172774u) { return; }
    }
    ctx->pc = 0x172774u;
label_172774:
    // 0x172774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x172774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172778: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x172778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17277c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17277cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172784: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x172784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x172788: 0x3e00008  jr          $ra
    ctx->pc = 0x172788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17278Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172788u;
            // 0x17278c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172790u;
}
