#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001632E8
// Address: 0x1632e8 - 0x163350
void sub_001632E8_0x1632e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001632E8_0x1632e8");
#endif

    switch (ctx->pc) {
        case 0x163308u: goto label_163308;
        case 0x163324u: goto label_163324;
        default: break;
    }

    ctx->pc = 0x1632e8u;

    // 0x1632e8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1632e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1632ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1632ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1632f0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1632f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1632f4: 0x24a529e8  addiu       $a1, $a1, 0x29E8
    ctx->pc = 0x1632f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10728));
    // 0x1632f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1632f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1632fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1632fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x163300: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x163300u;
    SET_GPR_U32(ctx, 31, 0x163308u);
    ctx->pc = 0x163304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163300u;
            // 0x163304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163308u; }
        if (ctx->pc != 0x163308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163308u; }
        if (ctx->pc != 0x163308u) { return; }
    }
    ctx->pc = 0x163308u;
label_163308:
    // 0x163308: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x163308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x16330c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x16330cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x163310: 0x24a529f0  addiu       $a1, $a1, 0x29F0
    ctx->pc = 0x163310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10736));
    // 0x163314: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x163314u;
    {
        const bool branch_taken_0x163314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163314u;
            // 0x163318: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163314) {
            ctx->pc = 0x163338u;
            goto label_163338;
        }
    }
    ctx->pc = 0x16331Cu;
    // 0x16331c: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x16331Cu;
    SET_GPR_U32(ctx, 31, 0x163324u);
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163324u; }
        if (ctx->pc != 0x163324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163324u; }
        if (ctx->pc != 0x163324u) { return; }
    }
    ctx->pc = 0x163324u;
label_163324:
    // 0x163324: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x163324u;
    {
        const bool branch_taken_0x163324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163324) {
            ctx->pc = 0x163328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163324u;
            // 0x163328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16333Cu;
            goto label_16333c;
        }
    }
    ctx->pc = 0x16332Cu;
    // 0x16332c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16332Cu;
    {
        const bool branch_taken_0x16332c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16332Cu;
            // 0x163330: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16332c) {
            ctx->pc = 0x16333Cu;
            goto label_16333c;
        }
    }
    ctx->pc = 0x163334u;
    // 0x163334: 0x0  nop
    ctx->pc = 0x163334u;
    // NOP
label_163338:
    // 0x163338: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x163338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16333c:
    // 0x16333c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16333cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163340: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x163340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x163344: 0x3e00008  jr          $ra
    ctx->pc = 0x163344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163344u;
            // 0x163348: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16334Cu;
    // 0x16334c: 0x0  nop
    ctx->pc = 0x16334cu;
    // NOP
}
