#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175318
// Address: 0x175318 - 0x175368
void sub_00175318_0x175318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175318_0x175318");
#endif

    switch (ctx->pc) {
        case 0x17533cu: goto label_17533c;
        case 0x17534cu: goto label_17534c;
        default: break;
    }

    ctx->pc = 0x175318u;

    // 0x175318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17531c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17531cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175324: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175328: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x175328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17532c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17532cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x175330: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x175330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x175334: 0xc0599de  jal         func_166778
    ctx->pc = 0x175334u;
    SET_GPR_U32(ctx, 31, 0x17533Cu);
    ctx->pc = 0x175338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175334u;
            // 0x175338: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17533Cu; }
        if (ctx->pc != 0x17533Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17533Cu; }
        if (ctx->pc != 0x17533Cu) { return; }
    }
    ctx->pc = 0x17533Cu;
label_17533c:
    // 0x17533c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17533cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175340: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x175340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175344: 0xc05d4dc  jal         func_175370
    ctx->pc = 0x175344u;
    SET_GPR_U32(ctx, 31, 0x17534Cu);
    ctx->pc = 0x175348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175344u;
            // 0x175348: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175370u;
    if (runtime->hasFunction(0x175370u)) {
        auto targetFn = runtime->lookupFunction(0x175370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17534Cu; }
        if (ctx->pc != 0x17534Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175370_0x175370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17534Cu; }
        if (ctx->pc != 0x17534Cu) { return; }
    }
    ctx->pc = 0x17534Cu;
label_17534c:
    // 0x17534c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17534cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175350: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175354: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x175354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175358: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x175358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17535c: 0x80599e0  j           func_166780
    ctx->pc = 0x17535Cu;
    ctx->pc = 0x175360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17535Cu;
            // 0x175360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x175364u;
    // 0x175364: 0x0  nop
    ctx->pc = 0x175364u;
    // NOP
}
