#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00452460
// Address: 0x452460 - 0x4524d0
void sub_00452460_0x452460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452460_0x452460");
#endif

    switch (ctx->pc) {
        case 0x4524a0u: goto label_4524a0;
        case 0x4524b8u: goto label_4524b8;
        default: break;
    }

    ctx->pc = 0x452460u;

    // 0x452460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x452460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x452464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x452464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x452468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x452468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45246c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45246cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x452470: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x452470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452474: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x452474u;
    {
        const bool branch_taken_0x452474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x452478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452474u;
            // 0x452478: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452474) {
            ctx->pc = 0x4524B8u;
            goto label_4524b8;
        }
    }
    ctx->pc = 0x45247Cu;
    // 0x45247c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x45247Cu;
    {
        const bool branch_taken_0x45247c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x45247c) {
            ctx->pc = 0x452480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45247Cu;
            // 0x452480: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4524A4u;
            goto label_4524a4;
        }
    }
    ctx->pc = 0x452484u;
    // 0x452484: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x452484u;
    {
        const bool branch_taken_0x452484 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x452484) {
            ctx->pc = 0x4524A0u;
            goto label_4524a0;
        }
    }
    ctx->pc = 0x45248Cu;
    // 0x45248c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x45248cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x452490: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x452490u;
    {
        const bool branch_taken_0x452490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x452490) {
            ctx->pc = 0x4524A0u;
            goto label_4524a0;
        }
    }
    ctx->pc = 0x452498u;
    // 0x452498: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x452498u;
    SET_GPR_U32(ctx, 31, 0x4524A0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4524A0u; }
        if (ctx->pc != 0x4524A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4524A0u; }
        if (ctx->pc != 0x4524A0u) { return; }
    }
    ctx->pc = 0x4524A0u;
label_4524a0:
    // 0x4524a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4524a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4524a4:
    // 0x4524a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4524a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4524a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4524A8u;
    {
        const bool branch_taken_0x4524a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4524a8) {
            ctx->pc = 0x4524ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4524A8u;
            // 0x4524ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4524BCu;
            goto label_4524bc;
        }
    }
    ctx->pc = 0x4524B0u;
    // 0x4524b0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4524B0u;
    SET_GPR_U32(ctx, 31, 0x4524B8u);
    ctx->pc = 0x4524B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4524B0u;
            // 0x4524b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4524B8u; }
        if (ctx->pc != 0x4524B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4524B8u; }
        if (ctx->pc != 0x4524B8u) { return; }
    }
    ctx->pc = 0x4524B8u;
label_4524b8:
    // 0x4524b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4524b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4524bc:
    // 0x4524bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4524bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4524c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4524c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4524c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4524c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4524c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4524C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4524CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4524C8u;
            // 0x4524cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4524D0u;
}
