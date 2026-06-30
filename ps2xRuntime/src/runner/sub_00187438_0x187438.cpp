#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187438
// Address: 0x187438 - 0x187490
void sub_00187438_0x187438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187438_0x187438");
#endif

    switch (ctx->pc) {
        case 0x187478u: goto label_187478;
        default: break;
    }

    ctx->pc = 0x187438u;

    // 0x187438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18743c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x18743cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x187440: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x187444: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x187444u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x187448: 0x2442f980  addiu       $v0, $v0, -0x680
    ctx->pc = 0x187448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965632));
    // 0x18744c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18744cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x187450: 0x2610fa80  addiu       $s0, $s0, -0x580
    ctx->pc = 0x187450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965888));
    // 0x187454: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x187454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x187458: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x187458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x18745c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18745cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187460: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x187460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x187464: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x187464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x187468: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x187468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18746c: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x18746cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x187470: 0xc05f1dc  jal         func_17C770
    ctx->pc = 0x187470u;
    SET_GPR_U32(ctx, 31, 0x187478u);
    ctx->pc = 0x187474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187470u;
            // 0x187474: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187478u; }
        if (ctx->pc != 0x187478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187478u; }
        if (ctx->pc != 0x187478u) { return; }
    }
    ctx->pc = 0x187478u;
label_187478:
    // 0x187478: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x187478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18747c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18747cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x187480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187484: 0x3e00008  jr          $ra
    ctx->pc = 0x187484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187484u;
            // 0x187488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18748Cu;
    // 0x18748c: 0x0  nop
    ctx->pc = 0x18748cu;
    // NOP
}
