#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00188378
// Address: 0x188378 - 0x1883b8
void sub_00188378_0x188378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188378_0x188378");
#endif

    switch (ctx->pc) {
        case 0x188394u: goto label_188394;
        case 0x1883a0u: goto label_1883a0;
        default: break;
    }

    ctx->pc = 0x188378u;

    // 0x188378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18837c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18837cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x188380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188384: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x188384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x188388: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x188388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18838c: 0xc061f74  jal         func_187DD0
    ctx->pc = 0x18838Cu;
    SET_GPR_U32(ctx, 31, 0x188394u);
    ctx->pc = 0x188390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18838Cu;
            // 0x188390: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DD0u;
    if (runtime->hasFunction(0x187DD0u)) {
        auto targetFn = runtime->lookupFunction(0x187DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188394u; }
        if (ctx->pc != 0x188394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187DD0_0x187dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188394u; }
        if (ctx->pc != 0x188394u) { return; }
    }
    ctx->pc = 0x188394u;
label_188394:
    // 0x188394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188398: 0xc0620ee  jal         func_1883B8
    ctx->pc = 0x188398u;
    SET_GPR_U32(ctx, 31, 0x1883A0u);
    ctx->pc = 0x18839Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188398u;
            // 0x18839c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1883B8u;
    if (runtime->hasFunction(0x1883B8u)) {
        auto targetFn = runtime->lookupFunction(0x1883B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883A0u; }
        if (ctx->pc != 0x1883A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001883B8_0x1883b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883A0u; }
        if (ctx->pc != 0x1883A0u) { return; }
    }
    ctx->pc = 0x1883A0u;
label_1883a0:
    // 0x1883a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1883a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1883a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1883a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1883a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1883a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1883ac: 0x8061f7a  j           func_187DE8
    ctx->pc = 0x1883ACu;
    ctx->pc = 0x1883B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1883ACu;
            // 0x1883b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DE8u;
    if (runtime->hasFunction(0x187DE8u)) {
        auto targetFn = runtime->lookupFunction(0x187DE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187DE8_0x187de8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1883B4u;
    // 0x1883b4: 0x0  nop
    ctx->pc = 0x1883b4u;
    // NOP
}
