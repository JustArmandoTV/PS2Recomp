#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001741D0
// Address: 0x1741d0 - 0x174228
void sub_001741D0_0x1741d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001741D0_0x1741d0");
#endif

    switch (ctx->pc) {
        case 0x1741e0u: goto label_1741e0;
        case 0x174204u: goto label_174204;
        case 0x17420cu: goto label_17420c;
        case 0x174214u: goto label_174214;
        default: break;
    }

    ctx->pc = 0x1741d0u;

    // 0x1741d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1741d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1741d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1741d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1741d8: 0xc05c0b6  jal         func_1702D8
    ctx->pc = 0x1741D8u;
    SET_GPR_U32(ctx, 31, 0x1741E0u);
    ctx->pc = 0x1741DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1741D8u;
            // 0x1741dc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D8u;
    if (runtime->hasFunction(0x1702D8u)) {
        auto targetFn = runtime->lookupFunction(0x1702D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1741E0u; }
        if (ctx->pc != 0x1741E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001702D8_0x1702d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1741E0u; }
        if (ctx->pc != 0x1741E0u) { return; }
    }
    ctx->pc = 0x1741E0u;
label_1741e0:
    // 0x1741e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1741e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1741e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1741E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1741E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1741E4u;
            // 0x1741e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1741ECu;
    // 0x1741ec: 0x0  nop
    ctx->pc = 0x1741ecu;
    // NOP
    // 0x1741f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1741f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1741f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1741f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1741f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1741f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1741fc: 0xc0599de  jal         func_166778
    ctx->pc = 0x1741FCu;
    SET_GPR_U32(ctx, 31, 0x174204u);
    ctx->pc = 0x174200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1741FCu;
            // 0x174200: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174204u; }
        if (ctx->pc != 0x174204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174204u; }
        if (ctx->pc != 0x174204u) { return; }
    }
    ctx->pc = 0x174204u;
label_174204:
    // 0x174204: 0xc05d08a  jal         func_174228
    ctx->pc = 0x174204u;
    SET_GPR_U32(ctx, 31, 0x17420Cu);
    ctx->pc = 0x174208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174204u;
            // 0x174208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174228u;
    if (runtime->hasFunction(0x174228u)) {
        auto targetFn = runtime->lookupFunction(0x174228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17420Cu; }
        if (ctx->pc != 0x17420Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174228_0x174228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17420Cu; }
        if (ctx->pc != 0x17420Cu) { return; }
    }
    ctx->pc = 0x17420Cu;
label_17420c:
    // 0x17420c: 0xc0599e0  jal         func_166780
    ctx->pc = 0x17420Cu;
    SET_GPR_U32(ctx, 31, 0x174214u);
    ctx->pc = 0x174210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17420Cu;
            // 0x174210: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174214u; }
        if (ctx->pc != 0x174214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174214u; }
        if (ctx->pc != 0x174214u) { return; }
    }
    ctx->pc = 0x174214u;
label_174214:
    // 0x174214: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x174214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174218: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x174218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17421c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17421cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174220: 0x3e00008  jr          $ra
    ctx->pc = 0x174220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174220u;
            // 0x174224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174228u;
}
