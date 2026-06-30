#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A84A0
// Address: 0x1a84a0 - 0x1a8508
void sub_001A84A0_0x1a84a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A84A0_0x1a84a0");
#endif

    switch (ctx->pc) {
        case 0x1a84d4u: goto label_1a84d4;
        case 0x1a84dcu: goto label_1a84dc;
        case 0x1a84ecu: goto label_1a84ec;
        case 0x1a84f4u: goto label_1a84f4;
        default: break;
    }

    ctx->pc = 0x1a84a0u;

    // 0x1a84a0: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1a84a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1a84a4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1a84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1a84a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a84a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a84ac: 0x2463d258  addiu       $v1, $v1, -0x2DA8
    ctx->pc = 0x1a84acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955608));
    // 0x1a84b0: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x1a84b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x1a84b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a84b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a84b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a84b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a84bc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1a84bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x1a84c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a84c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a84c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a84c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a84c8: 0x24043820  addiu       $a0, $zero, 0x3820
    ctx->pc = 0x1a84c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14368));
    // 0x1a84cc: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x1A84CCu;
    SET_GPR_U32(ctx, 31, 0x1A84D4u);
    ctx->pc = 0x1A88F8u;
    if (runtime->hasFunction(0x1A88F8u)) {
        auto targetFn = runtime->lookupFunction(0x1A88F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A84D4u; }
        if (ctx->pc != 0x1A84D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88F8_0x1a88f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A84D4u; }
        if (ctx->pc != 0x1A84D4u) { return; }
    }
    ctx->pc = 0x1A84D4u;
label_1a84d4:
    // 0x1a84d4: 0xc06a142  jal         func_1A8508
    ctx->pc = 0x1A84D4u;
    SET_GPR_U32(ctx, 31, 0x1A84DCu);
    ctx->pc = 0x1A84D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A84D4u;
            // 0x1a84d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8508u;
    if (runtime->hasFunction(0x1A8508u)) {
        auto targetFn = runtime->lookupFunction(0x1A8508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A84DCu; }
        if (ctx->pc != 0x1A84DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8508_0x1a8508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A84DCu; }
        if (ctx->pc != 0x1A84DCu) { return; }
    }
    ctx->pc = 0x1A84DCu;
label_1a84dc:
    // 0x1a84dc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A84DCu;
    {
        const bool branch_taken_0x1a84dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a84dc) {
            ctx->pc = 0x1A84E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A84DCu;
            // 0x1a84e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A84FCu;
            goto label_1a84fc;
        }
    }
    ctx->pc = 0x1A84E4u;
    // 0x1a84e4: 0xc06a24a  jal         func_1A8928
    ctx->pc = 0x1A84E4u;
    SET_GPR_U32(ctx, 31, 0x1A84ECu);
    ctx->pc = 0x1A8928u;
    if (runtime->hasFunction(0x1A8928u)) {
        auto targetFn = runtime->lookupFunction(0x1A8928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A84ECu; }
        if (ctx->pc != 0x1A84ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8928_0x1a8928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A84ECu; }
        if (ctx->pc != 0x1A84ECu) { return; }
    }
    ctx->pc = 0x1A84ECu;
label_1a84ec:
    // 0x1a84ec: 0xc06a258  jal         func_1A8960
    ctx->pc = 0x1A84ECu;
    SET_GPR_U32(ctx, 31, 0x1A84F4u);
    ctx->pc = 0x1A8960u;
    if (runtime->hasFunction(0x1A8960u)) {
        auto targetFn = runtime->lookupFunction(0x1A8960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A84F4u; }
        if (ctx->pc != 0x1A84F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8960_0x1a8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A84F4u; }
        if (ctx->pc != 0x1A84F4u) { return; }
    }
    ctx->pc = 0x1A84F4u;
label_1a84f4:
    // 0x1a84f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a84f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a84f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a84f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a84fc:
    // 0x1a84fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a84fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8500: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8500u;
            // 0x1a8504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8508u;
}
