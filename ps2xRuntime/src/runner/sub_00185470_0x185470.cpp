#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185470
// Address: 0x185470 - 0x1854b8
void sub_00185470_0x185470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185470_0x185470");
#endif

    switch (ctx->pc) {
        case 0x185490u: goto label_185490;
        case 0x18549cu: goto label_18549c;
        case 0x1854a4u: goto label_1854a4;
        default: break;
    }

    ctx->pc = 0x185470u;

    // 0x185470: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x185470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x185474: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x185474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185478: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x185478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x18547c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18547cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185480: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x185480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185484: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x185484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x185488: 0xc04afe8  jal         func_12BFA0
    ctx->pc = 0x185488u;
    SET_GPR_U32(ctx, 31, 0x185490u);
    ctx->pc = 0x18548Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185488u;
            // 0x18548c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185490u; }
        if (ctx->pc != 0x185490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185490u; }
        if (ctx->pc != 0x185490u) { return; }
    }
    ctx->pc = 0x185490u;
label_185490:
    // 0x185490: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x185490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185494: 0xc04af4a  jal         func_12BD28
    ctx->pc = 0x185494u;
    SET_GPR_U32(ctx, 31, 0x18549Cu);
    ctx->pc = 0x185498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185494u;
            // 0x185498: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BD28u;
    if (runtime->hasFunction(0x12BD28u)) {
        auto targetFn = runtime->lookupFunction(0x12BD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18549Cu; }
        if (ctx->pc != 0x18549Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD28_0x12bd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18549Cu; }
        if (ctx->pc != 0x18549Cu) { return; }
    }
    ctx->pc = 0x18549Cu;
label_18549c:
    // 0x18549c: 0xc061288  jal         func_184A20
    ctx->pc = 0x18549Cu;
    SET_GPR_U32(ctx, 31, 0x1854A4u);
    ctx->pc = 0x1854A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18549Cu;
            // 0x1854a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A20u;
    if (runtime->hasFunction(0x184A20u)) {
        auto targetFn = runtime->lookupFunction(0x184A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1854A4u; }
        if (ctx->pc != 0x1854A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A20_0x184a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1854A4u; }
        if (ctx->pc != 0x1854A4u) { return; }
    }
    ctx->pc = 0x1854A4u;
label_1854a4:
    // 0x1854a4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1854a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1854a8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1854a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1854ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1854ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1854B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1854ACu;
            // 0x1854b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1854B4u;
    // 0x1854b4: 0x0  nop
    ctx->pc = 0x1854b4u;
    // NOP
}
