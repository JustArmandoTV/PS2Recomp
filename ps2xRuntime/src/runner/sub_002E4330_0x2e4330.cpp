#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E4330
// Address: 0x2e4330 - 0x2e4380
void sub_002E4330_0x2e4330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4330_0x2e4330");
#endif

    switch (ctx->pc) {
        case 0x2e4350u: goto label_2e4350;
        case 0x2e4358u: goto label_2e4358;
        default: break;
    }

    ctx->pc = 0x2e4330u;

    // 0x2e4330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e4330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e4334: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e4334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e4338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e433c: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x2e433cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x2e4340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e4340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4344: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2e4344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2e4348: 0xc11f4fc  jal         func_47D3F0
    ctx->pc = 0x2E4348u;
    SET_GPR_U32(ctx, 31, 0x2E4350u);
    ctx->pc = 0x2E434Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4348u;
            // 0x2e434c: 0x2604002c  addiu       $a0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47D3F0u;
    if (runtime->hasFunction(0x47D3F0u)) {
        auto targetFn = runtime->lookupFunction(0x47D3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4350u; }
        if (ctx->pc != 0x2E4350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047D3F0_0x47d3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4350u; }
        if (ctx->pc != 0x2E4350u) { return; }
    }
    ctx->pc = 0x2E4350u;
label_2e4350:
    // 0x2e4350: 0xc13d79c  jal         func_4F5E70
    ctx->pc = 0x2E4350u;
    SET_GPR_U32(ctx, 31, 0x2E4358u);
    ctx->pc = 0x2E4354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4350u;
            // 0x2e4354: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E70u;
    if (runtime->hasFunction(0x4F5E70u)) {
        auto targetFn = runtime->lookupFunction(0x4F5E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4358u; }
        if (ctx->pc != 0x2E4358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F5E70_0x4f5e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4358u; }
        if (ctx->pc != 0x2E4358u) { return; }
    }
    ctx->pc = 0x2E4358u;
label_2e4358:
    // 0x2e4358: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2e4358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x2e435c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e435cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e4360: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x2e4360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x2e4364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e4364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e436c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E436Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E436Cu;
            // 0x2e4370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E4374u;
    // 0x2e4374: 0x0  nop
    ctx->pc = 0x2e4374u;
    // NOP
    // 0x2e4378: 0x0  nop
    ctx->pc = 0x2e4378u;
    // NOP
    // 0x2e437c: 0x0  nop
    ctx->pc = 0x2e437cu;
    // NOP
}
