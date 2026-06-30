#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00413210
// Address: 0x413210 - 0x413250
void sub_00413210_0x413210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413210_0x413210");
#endif

    switch (ctx->pc) {
        case 0x41323cu: goto label_41323c;
        default: break;
    }

    ctx->pc = 0x413210u;

    // 0x413210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x413210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x413214: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x413214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x413218: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x413218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x41321c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x41321cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x413220: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x413220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x413224: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x413224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x413228: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x413228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41322c: 0x24a53440  addiu       $a1, $a1, 0x3440
    ctx->pc = 0x41322cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13376));
    // 0x413230: 0x24c633e0  addiu       $a2, $a2, 0x33E0
    ctx->pc = 0x413230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13280));
    // 0x413234: 0xc040804  jal         func_102010
    ctx->pc = 0x413234u;
    SET_GPR_U32(ctx, 31, 0x41323Cu);
    ctx->pc = 0x413238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413234u;
            // 0x413238: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41323Cu; }
        if (ctx->pc != 0x41323Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41323Cu; }
        if (ctx->pc != 0x41323Cu) { return; }
    }
    ctx->pc = 0x41323Cu;
label_41323c:
    // 0x41323c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41323cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413240: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x413240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x413244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x413244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x413248: 0x3e00008  jr          $ra
    ctx->pc = 0x413248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41324Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413248u;
            // 0x41324c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x413250u;
}
