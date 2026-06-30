#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175740
// Address: 0x175740 - 0x1757b0
void sub_00175740_0x175740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175740_0x175740");
#endif

    switch (ctx->pc) {
        case 0x17578cu: goto label_17578c;
        case 0x175794u: goto label_175794;
        case 0x17579cu: goto label_17579c;
        default: break;
    }

    ctx->pc = 0x175740u;

    // 0x175740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175748: 0xa0850098  sb          $a1, 0x98($a0)
    ctx->pc = 0x175748u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 5));
    // 0x17574c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x17574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x175750: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x175750u;
    {
        const bool branch_taken_0x175750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175750u;
            // 0x175754: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175750) {
            ctx->pc = 0x175768u;
            goto label_175768;
        }
    }
    ctx->pc = 0x175758u;
    // 0x175758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17575c: 0x805bfec  j           func_16FFB0
    ctx->pc = 0x17575Cu;
    ctx->pc = 0x175760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17575Cu;
            // 0x175760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFB0u;
    {
        auto targetFn = runtime->lookupFunction(0x16FFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x175764u;
    // 0x175764: 0x0  nop
    ctx->pc = 0x175764u;
    // NOP
label_175768:
    // 0x175768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17576c: 0x3e00008  jr          $ra
    ctx->pc = 0x17576Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17576Cu;
            // 0x175770: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175774u;
    // 0x175774: 0x0  nop
    ctx->pc = 0x175774u;
    // NOP
    // 0x175778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17577c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17577cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175780: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x175780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x175784: 0xc0599de  jal         func_166778
    ctx->pc = 0x175784u;
    SET_GPR_U32(ctx, 31, 0x17578Cu);
    ctx->pc = 0x175788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175784u;
            // 0x175788: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17578Cu; }
        if (ctx->pc != 0x17578Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17578Cu; }
        if (ctx->pc != 0x17578Cu) { return; }
    }
    ctx->pc = 0x17578Cu;
label_17578c:
    // 0x17578c: 0xc05d5ec  jal         func_1757B0
    ctx->pc = 0x17578Cu;
    SET_GPR_U32(ctx, 31, 0x175794u);
    ctx->pc = 0x175790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17578Cu;
            // 0x175790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1757B0u;
    if (runtime->hasFunction(0x1757B0u)) {
        auto targetFn = runtime->lookupFunction(0x1757B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175794u; }
        if (ctx->pc != 0x175794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001757B0_0x1757b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175794u; }
        if (ctx->pc != 0x175794u) { return; }
    }
    ctx->pc = 0x175794u;
label_175794:
    // 0x175794: 0xc0599e0  jal         func_166780
    ctx->pc = 0x175794u;
    SET_GPR_U32(ctx, 31, 0x17579Cu);
    ctx->pc = 0x175798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175794u;
            // 0x175798: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17579Cu; }
        if (ctx->pc != 0x17579Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17579Cu; }
        if (ctx->pc != 0x17579Cu) { return; }
    }
    ctx->pc = 0x17579Cu;
label_17579c:
    // 0x17579c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17579cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1757a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1757a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1757a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1757a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1757a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1757A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1757ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1757A8u;
            // 0x1757ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1757B0u;
}
