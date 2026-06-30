#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041E700
// Address: 0x41e700 - 0x41e770
void sub_0041E700_0x41e700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E700_0x41e700");
#endif

    switch (ctx->pc) {
        case 0x41e740u: goto label_41e740;
        case 0x41e758u: goto label_41e758;
        default: break;
    }

    ctx->pc = 0x41e700u;

    // 0x41e700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41e700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41e704: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41e704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x41e708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41e708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41e70c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41e70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x41e710: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41e710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e714: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x41E714u;
    {
        const bool branch_taken_0x41e714 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E714u;
            // 0x41e718: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e714) {
            ctx->pc = 0x41E758u;
            goto label_41e758;
        }
    }
    ctx->pc = 0x41E71Cu;
    // 0x41e71c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x41E71Cu;
    {
        const bool branch_taken_0x41e71c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x41e71c) {
            ctx->pc = 0x41E720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41E71Cu;
            // 0x41e720: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41E744u;
            goto label_41e744;
        }
    }
    ctx->pc = 0x41E724u;
    // 0x41e724: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x41E724u;
    {
        const bool branch_taken_0x41e724 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x41e724) {
            ctx->pc = 0x41E740u;
            goto label_41e740;
        }
    }
    ctx->pc = 0x41E72Cu;
    // 0x41e72c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x41e72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x41e730: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41E730u;
    {
        const bool branch_taken_0x41e730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41e730) {
            ctx->pc = 0x41E740u;
            goto label_41e740;
        }
    }
    ctx->pc = 0x41E738u;
    // 0x41e738: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x41E738u;
    SET_GPR_U32(ctx, 31, 0x41E740u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E740u; }
        if (ctx->pc != 0x41E740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E740u; }
        if (ctx->pc != 0x41E740u) { return; }
    }
    ctx->pc = 0x41E740u;
label_41e740:
    // 0x41e740: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x41e740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_41e744:
    // 0x41e744: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41e744u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x41e748: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x41E748u;
    {
        const bool branch_taken_0x41e748 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x41e748) {
            ctx->pc = 0x41E74Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41E748u;
            // 0x41e74c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41E75Cu;
            goto label_41e75c;
        }
    }
    ctx->pc = 0x41E750u;
    // 0x41e750: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x41E750u;
    SET_GPR_U32(ctx, 31, 0x41E758u);
    ctx->pc = 0x41E754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E750u;
            // 0x41e754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E758u; }
        if (ctx->pc != 0x41E758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E758u; }
        if (ctx->pc != 0x41E758u) { return; }
    }
    ctx->pc = 0x41E758u;
label_41e758:
    // 0x41e758: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41e758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41e75c:
    // 0x41e75c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41e75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41e760: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41e760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41e764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41e764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41e768: 0x3e00008  jr          $ra
    ctx->pc = 0x41E768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E768u;
            // 0x41e76c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41E770u;
}
