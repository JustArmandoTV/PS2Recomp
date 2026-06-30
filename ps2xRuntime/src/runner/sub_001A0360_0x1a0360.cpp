#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0360
// Address: 0x1a0360 - 0x1a03c8
void sub_001A0360_0x1a0360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0360_0x1a0360");
#endif

    switch (ctx->pc) {
        case 0x1a0374u: goto label_1a0374;
        case 0x1a03a8u: goto label_1a03a8;
        case 0x1a03b0u: goto label_1a03b0;
        default: break;
    }

    ctx->pc = 0x1a0360u;

    // 0x1a0360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0368: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a0368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a036c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x1A036Cu;
    SET_GPR_U32(ctx, 31, 0x1A0374u);
    ctx->pc = 0x1A0370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A036Cu;
            // 0x1a0370: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0374u; }
        if (ctx->pc != 0x1A0374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0374u; }
        if (ctx->pc != 0x1A0374u) { return; }
    }
    ctx->pc = 0x1A0374u;
label_1a0374:
    // 0x1a0374: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a0374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a037c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A037Cu;
    {
        const bool branch_taken_0x1a037c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A0380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A037Cu;
            // 0x1a0380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a037c) {
            ctx->pc = 0x1A03A0u;
            goto label_1a03a0;
        }
    }
    ctx->pc = 0x1A0384u;
    // 0x1a0384: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a0384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1a0388: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a038c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a038cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a0390: 0x2484a530  addiu       $a0, $a0, -0x5AD0
    ctx->pc = 0x1a0390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944048));
    // 0x1a0394: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x1A0394u;
    ctx->pc = 0x1A0398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0394u;
            // 0x1a0398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A039Cu;
    // 0x1a039c: 0x0  nop
    ctx->pc = 0x1a039cu;
    // NOP
label_1a03a0:
    // 0x1a03a0: 0xc06808a  jal         func_1A0228
    ctx->pc = 0x1A03A0u;
    SET_GPR_U32(ctx, 31, 0x1A03A8u);
    ctx->pc = 0x1A0228u;
    if (runtime->hasFunction(0x1A0228u)) {
        auto targetFn = runtime->lookupFunction(0x1A0228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03A8u; }
        if (ctx->pc != 0x1A03A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0228_0x1a0228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03A8u; }
        if (ctx->pc != 0x1A03A8u) { return; }
    }
    ctx->pc = 0x1A03A8u;
label_1a03a8:
    // 0x1a03a8: 0xc0680f2  jal         func_1A03C8
    ctx->pc = 0x1A03A8u;
    SET_GPR_U32(ctx, 31, 0x1A03B0u);
    ctx->pc = 0x1A03ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A03A8u;
            // 0x1a03ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A03C8u;
    if (runtime->hasFunction(0x1A03C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A03C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03B0u; }
        if (ctx->pc != 0x1A03B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A03C8_0x1a03c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03B0u; }
        if (ctx->pc != 0x1A03B0u) { return; }
    }
    ctx->pc = 0x1A03B0u;
label_1a03b0:
    // 0x1a03b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a03b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a03b4: 0xae020564  sw          $v0, 0x564($s0)
    ctx->pc = 0x1a03b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 2));
    // 0x1a03b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a03b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a03bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a03bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a03c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A03C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A03C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A03C0u;
            // 0x1a03c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A03C8u;
}
