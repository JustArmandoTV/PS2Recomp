#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C2778
// Address: 0x1c2778 - 0x1c2818
void sub_001C2778_0x1c2778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2778_0x1c2778");
#endif

    switch (ctx->pc) {
        case 0x1c27c4u: goto label_1c27c4;
        case 0x1c27f0u: goto label_1c27f0;
        default: break;
    }

    ctx->pc = 0x1c2778u;

    // 0x1c2778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c277c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c277cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c2780: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c2780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c2784: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c2784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2788: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c2788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c278c: 0x2453a4d8  addiu       $s3, $v0, -0x5B28
    ctx->pc = 0x1c278cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943960));
    // 0x1c2790: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2794: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c2794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2798: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c2798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c279c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c279cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c27a0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1c27a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c27a4: 0x8cb20020  lw          $s2, 0x20($a1)
    ctx->pc = 0x1c27a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1c27a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c27a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c27ac: 0x8c700048  lw          $s0, 0x48($v1)
    ctx->pc = 0x1c27acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1c27b0: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x1c27b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1c27b4: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x1c27b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1c27b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c27b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27bc: 0xc071180  jal         func_1C4600
    ctx->pc = 0x1C27BCu;
    SET_GPR_U32(ctx, 31, 0x1C27C4u);
    ctx->pc = 0x1C27C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C27BCu;
            // 0x1c27c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4600u;
    if (runtime->hasFunction(0x1C4600u)) {
        auto targetFn = runtime->lookupFunction(0x1C4600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27C4u; }
        if (ctx->pc != 0x1C27C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4600_0x1c4600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27C4u; }
        if (ctx->pc != 0x1C27C4u) { return; }
    }
    ctx->pc = 0x1C27C4u;
label_1c27c4:
    // 0x1c27c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c27c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c27c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c27cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c27ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27d0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c27d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27d4: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C27D4u;
    {
        const bool branch_taken_0x1c27d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C27D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C27D4u;
            // 0x1c27d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c27d4) {
            ctx->pc = 0x1C27E8u;
            goto label_1c27e8;
        }
    }
    ctx->pc = 0x1C27DCu;
    // 0x1c27dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C27DCu;
    {
        const bool branch_taken_0x1c27dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C27E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C27DCu;
            // 0x1c27e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c27dc) {
            ctx->pc = 0x1C27F8u;
            goto label_1c27f8;
        }
    }
    ctx->pc = 0x1C27E4u;
    // 0x1c27e4: 0x0  nop
    ctx->pc = 0x1c27e4u;
    // NOP
label_1c27e8:
    // 0x1c27e8: 0xc071332  jal         func_1C4CC8
    ctx->pc = 0x1C27E8u;
    SET_GPR_U32(ctx, 31, 0x1C27F0u);
    ctx->pc = 0x1C4CC8u;
    if (runtime->hasFunction(0x1C4CC8u)) {
        auto targetFn = runtime->lookupFunction(0x1C4CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27F0u; }
        if (ctx->pc != 0x1C27F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4CC8_0x1c4cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27F0u; }
        if (ctx->pc != 0x1C27F0u) { return; }
    }
    ctx->pc = 0x1C27F0u;
label_1c27f0:
    // 0x1c27f0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1c27f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c27f4: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1c27f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_1c27f8:
    // 0x1c27f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c27f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c27fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c27fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c2800: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c2800u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2804: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c2804u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c2808: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c2808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c280c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C280Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C280Cu;
            // 0x1c2810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C2814u;
    // 0x1c2814: 0x0  nop
    ctx->pc = 0x1c2814u;
    // NOP
}
