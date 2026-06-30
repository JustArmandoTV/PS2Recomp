#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B330
// Address: 0x16b330 - 0x16b368
void sub_0016B330_0x16b330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B330_0x16b330");
#endif

    switch (ctx->pc) {
        case 0x16b344u: goto label_16b344;
        case 0x16b34cu: goto label_16b34c;
        case 0x16b354u: goto label_16b354;
        default: break;
    }

    ctx->pc = 0x16b330u;

    // 0x16b330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b338: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16b338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16b33c: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16B33Cu;
    SET_GPR_U32(ctx, 31, 0x16B344u);
    ctx->pc = 0x16B340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B33Cu;
            // 0x16b340: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B344u; }
        if (ctx->pc != 0x16B344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B344u; }
        if (ctx->pc != 0x16B344u) { return; }
    }
    ctx->pc = 0x16B344u;
label_16b344:
    // 0x16b344: 0xc05acda  jal         func_16B368
    ctx->pc = 0x16B344u;
    SET_GPR_U32(ctx, 31, 0x16B34Cu);
    ctx->pc = 0x16B348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B344u;
            // 0x16b348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B368u;
    if (runtime->hasFunction(0x16B368u)) {
        auto targetFn = runtime->lookupFunction(0x16B368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B34Cu; }
        if (ctx->pc != 0x16B34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B368_0x16b368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B34Cu; }
        if (ctx->pc != 0x16B34Cu) { return; }
    }
    ctx->pc = 0x16B34Cu;
label_16b34c:
    // 0x16b34c: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16B34Cu;
    SET_GPR_U32(ctx, 31, 0x16B354u);
    ctx->pc = 0x16B350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B34Cu;
            // 0x16b350: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B354u; }
        if (ctx->pc != 0x16B354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B354u; }
        if (ctx->pc != 0x16B354u) { return; }
    }
    ctx->pc = 0x16B354u;
label_16b354:
    // 0x16b354: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16b354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b358: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16b358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b35c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b35cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b360: 0x3e00008  jr          $ra
    ctx->pc = 0x16B360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B360u;
            // 0x16b364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B368u;
}
