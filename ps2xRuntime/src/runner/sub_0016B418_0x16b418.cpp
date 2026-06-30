#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B418
// Address: 0x16b418 - 0x16b480
void sub_0016B418_0x16b418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B418_0x16b418");
#endif

    switch (ctx->pc) {
        case 0x16b438u: goto label_16b438;
        case 0x16b45cu: goto label_16b45c;
        case 0x16b464u: goto label_16b464;
        case 0x16b46cu: goto label_16b46c;
        default: break;
    }

    ctx->pc = 0x16b418u;

    // 0x16b418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b41c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b41cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b420: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x16b420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b424: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x16b424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x16b428: 0x27a90008  addiu       $t1, $sp, 0x8
    ctx->pc = 0x16b428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x16b42c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16b42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16b430: 0xc05ac64  jal         func_16B190
    ctx->pc = 0x16B430u;
    SET_GPR_U32(ctx, 31, 0x16B438u);
    ctx->pc = 0x16B434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B430u;
            // 0x16b434: 0x27aa000c  addiu       $t2, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B190u;
    if (runtime->hasFunction(0x16B190u)) {
        auto targetFn = runtime->lookupFunction(0x16B190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B438u; }
        if (ctx->pc != 0x16B438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B190_0x16b190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B438u; }
        if (ctx->pc != 0x16B438u) { return; }
    }
    ctx->pc = 0x16B438u;
label_16b438:
    // 0x16b438: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x16b438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16b43c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16b43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b440: 0x3e00008  jr          $ra
    ctx->pc = 0x16B440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B440u;
            // 0x16b444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B448u;
    // 0x16b448: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b44c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b450: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16b450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16b454: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16B454u;
    SET_GPR_U32(ctx, 31, 0x16B45Cu);
    ctx->pc = 0x16B458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B454u;
            // 0x16b458: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B45Cu; }
        if (ctx->pc != 0x16B45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B45Cu; }
        if (ctx->pc != 0x16B45Cu) { return; }
    }
    ctx->pc = 0x16B45Cu;
label_16b45c:
    // 0x16b45c: 0xc05ad20  jal         func_16B480
    ctx->pc = 0x16B45Cu;
    SET_GPR_U32(ctx, 31, 0x16B464u);
    ctx->pc = 0x16B460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B45Cu;
            // 0x16b460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B480u;
    if (runtime->hasFunction(0x16B480u)) {
        auto targetFn = runtime->lookupFunction(0x16B480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B464u; }
        if (ctx->pc != 0x16B464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B480_0x16b480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B464u; }
        if (ctx->pc != 0x16B464u) { return; }
    }
    ctx->pc = 0x16B464u;
label_16b464:
    // 0x16b464: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16B464u;
    SET_GPR_U32(ctx, 31, 0x16B46Cu);
    ctx->pc = 0x16B468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B464u;
            // 0x16b468: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B46Cu; }
        if (ctx->pc != 0x16B46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B46Cu; }
        if (ctx->pc != 0x16B46Cu) { return; }
    }
    ctx->pc = 0x16B46Cu;
label_16b46c:
    // 0x16b46c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16b46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b470: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16b470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b478: 0x3e00008  jr          $ra
    ctx->pc = 0x16B478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B478u;
            // 0x16b47c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B480u;
}
