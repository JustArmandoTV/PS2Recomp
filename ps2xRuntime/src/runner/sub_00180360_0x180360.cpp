#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180360
// Address: 0x180360 - 0x180390
void sub_00180360_0x180360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180360_0x180360");
#endif

    switch (ctx->pc) {
        case 0x180374u: goto label_180374;
        case 0x18037cu: goto label_18037c;
        default: break;
    }

    ctx->pc = 0x180360u;

    // 0x180360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180368: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x180368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18036c: 0xc06031a  jal         func_180C68
    ctx->pc = 0x18036Cu;
    SET_GPR_U32(ctx, 31, 0x180374u);
    ctx->pc = 0x180370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18036Cu;
            // 0x180370: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C68u;
    if (runtime->hasFunction(0x180C68u)) {
        auto targetFn = runtime->lookupFunction(0x180C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180374u; }
        if (ctx->pc != 0x180374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C68_0x180c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180374u; }
        if (ctx->pc != 0x180374u) { return; }
    }
    ctx->pc = 0x180374u;
label_180374:
    // 0x180374: 0xc0600e4  jal         func_180390
    ctx->pc = 0x180374u;
    SET_GPR_U32(ctx, 31, 0x18037Cu);
    ctx->pc = 0x180378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180374u;
            // 0x180378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180390u;
    if (runtime->hasFunction(0x180390u)) {
        auto targetFn = runtime->lookupFunction(0x180390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18037Cu; }
        if (ctx->pc != 0x18037Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180390_0x180390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18037Cu; }
        if (ctx->pc != 0x18037Cu) { return; }
    }
    ctx->pc = 0x18037Cu;
label_18037c:
    // 0x18037c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18037cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180380: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x180380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180384: 0x806031c  j           func_180C70
    ctx->pc = 0x180384u;
    ctx->pc = 0x180388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180384u;
            // 0x180388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C70u;
    if (runtime->hasFunction(0x180C70u)) {
        auto targetFn = runtime->lookupFunction(0x180C70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180C70_0x180c70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18038Cu;
    // 0x18038c: 0x0  nop
    ctx->pc = 0x18038cu;
    // NOP
}
