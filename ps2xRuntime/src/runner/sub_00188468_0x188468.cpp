#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00188468
// Address: 0x188468 - 0x1884d8
void sub_00188468_0x188468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188468_0x188468");
#endif

    switch (ctx->pc) {
        case 0x18849cu: goto label_18849c;
        case 0x1884b4u: goto label_1884b4;
        default: break;
    }

    ctx->pc = 0x188468u;

    // 0x188468: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x188468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18846c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18846cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x188470: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188474: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x188474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x188478: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x188478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18847c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18847cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x188480: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x188480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188484: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x188484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x188488: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x188488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18848c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x18848cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x188490: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x188490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x188494: 0xc061f74  jal         func_187DD0
    ctx->pc = 0x188494u;
    SET_GPR_U32(ctx, 31, 0x18849Cu);
    ctx->pc = 0x188498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188494u;
            // 0x188498: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DD0u;
    if (runtime->hasFunction(0x187DD0u)) {
        auto targetFn = runtime->lookupFunction(0x187DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18849Cu; }
        if (ctx->pc != 0x18849Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187DD0_0x187dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18849Cu; }
        if (ctx->pc != 0x18849Cu) { return; }
    }
    ctx->pc = 0x18849Cu;
label_18849c:
    // 0x18849c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18849cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1884a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1884a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884a8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1884a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884ac: 0xc062136  jal         func_1884D8
    ctx->pc = 0x1884ACu;
    SET_GPR_U32(ctx, 31, 0x1884B4u);
    ctx->pc = 0x1884B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1884ACu;
            // 0x1884b0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1884D8u;
    if (runtime->hasFunction(0x1884D8u)) {
        auto targetFn = runtime->lookupFunction(0x1884D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1884B4u; }
        if (ctx->pc != 0x1884B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001884D8_0x1884d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1884B4u; }
        if (ctx->pc != 0x1884B4u) { return; }
    }
    ctx->pc = 0x1884B4u;
label_1884b4:
    // 0x1884b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1884b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1884b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1884b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1884bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1884bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1884c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1884c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1884c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1884c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1884c8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1884c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1884cc: 0x8061f7a  j           func_187DE8
    ctx->pc = 0x1884CCu;
    ctx->pc = 0x1884D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1884CCu;
            // 0x1884d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DE8u;
    if (runtime->hasFunction(0x187DE8u)) {
        auto targetFn = runtime->lookupFunction(0x187DE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187DE8_0x187de8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1884D4u;
    // 0x1884d4: 0x0  nop
    ctx->pc = 0x1884d4u;
    // NOP
}
