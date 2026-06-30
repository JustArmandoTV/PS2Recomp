#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A42E0
// Address: 0x1a42e0 - 0x1a4350
void sub_001A42E0_0x1a42e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A42E0_0x1a42e0");
#endif

    switch (ctx->pc) {
        case 0x1a42f4u: goto label_1a42f4;
        case 0x1a4310u: goto label_1a4310;
        case 0x1a4320u: goto label_1a4320;
        case 0x1a4338u: goto label_1a4338;
        default: break;
    }

    ctx->pc = 0x1a42e0u;

    // 0x1a42e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a42e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a42e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a42e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a42e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a42e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a42ec: 0xc06cf70  jal         func_1B3DC0
    ctx->pc = 0x1A42ECu;
    SET_GPR_U32(ctx, 31, 0x1A42F4u);
    ctx->pc = 0x1A42F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A42ECu;
            // 0x1a42f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3DC0u;
    if (runtime->hasFunction(0x1B3DC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A42F4u; }
        if (ctx->pc != 0x1A42F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3DC0_0x1b3dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A42F4u; }
        if (ctx->pc != 0x1A42F4u) { return; }
    }
    ctx->pc = 0x1A42F4u;
label_1a42f4:
    // 0x1a42f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a42f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a42f8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A42F8u;
    {
        const bool branch_taken_0x1a42f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a42f8) {
            ctx->pc = 0x1A4318u;
            goto label_1a4318;
        }
    }
    ctx->pc = 0x1A4300u;
    // 0x1a4300: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1a4300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a4304: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1a4304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a4308: 0xc05c9ce  jal         func_172738
    ctx->pc = 0x1A4308u;
    SET_GPR_U32(ctx, 31, 0x1A4310u);
    ctx->pc = 0x1A430Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4308u;
            // 0x1a430c: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172738u;
    if (runtime->hasFunction(0x172738u)) {
        auto targetFn = runtime->lookupFunction(0x172738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4310u; }
        if (ctx->pc != 0x1A4310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172738_0x172738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4310u; }
        if (ctx->pc != 0x1A4310u) { return; }
    }
    ctx->pc = 0x1A4310u;
label_1a4310:
    // 0x1a4310: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4310u;
    {
        const bool branch_taken_0x1a4310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4310u;
            // 0x1a4314: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4310) {
            ctx->pc = 0x1A4324u;
            goto label_1a4324;
        }
    }
    ctx->pc = 0x1A4318u;
label_1a4318:
    // 0x1a4318: 0xc0690d4  jal         func_1A4350
    ctx->pc = 0x1A4318u;
    SET_GPR_U32(ctx, 31, 0x1A4320u);
    ctx->pc = 0x1A4350u;
    if (runtime->hasFunction(0x1A4350u)) {
        auto targetFn = runtime->lookupFunction(0x1A4350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4320u; }
        if (ctx->pc != 0x1A4320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4350_0x1a4350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4320u; }
        if (ctx->pc != 0x1A4320u) { return; }
    }
    ctx->pc = 0x1A4320u;
label_1a4320:
    // 0x1a4320: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a4320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4324:
    // 0x1a4324: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4324u;
    {
        const bool branch_taken_0x1a4324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4324u;
            // 0x1a4328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4324) {
            ctx->pc = 0x1A433Cu;
            goto label_1a433c;
        }
    }
    ctx->pc = 0x1A432Cu;
    // 0x1a432c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a432cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4330: 0xc05d260  jal         func_174980
    ctx->pc = 0x1A4330u;
    SET_GPR_U32(ctx, 31, 0x1A4338u);
    ctx->pc = 0x1A4334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4330u;
            // 0x1a4334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174980u;
    if (runtime->hasFunction(0x174980u)) {
        auto targetFn = runtime->lookupFunction(0x174980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4338u; }
        if (ctx->pc != 0x1A4338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174980_0x174980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4338u; }
        if (ctx->pc != 0x1A4338u) { return; }
    }
    ctx->pc = 0x1A4338u;
label_1a4338:
    // 0x1a4338: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a4338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a433c:
    // 0x1a433c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a433cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4340: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a4340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4344: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4344u;
            // 0x1a4348: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A434Cu;
    // 0x1a434c: 0x0  nop
    ctx->pc = 0x1a434cu;
    // NOP
}
