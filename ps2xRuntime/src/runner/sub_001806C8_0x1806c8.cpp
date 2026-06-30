#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001806C8
// Address: 0x1806c8 - 0x180740
void sub_001806C8_0x1806c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001806C8_0x1806c8");
#endif

    switch (ctx->pc) {
        case 0x1806e0u: goto label_1806e0;
        case 0x1806f8u: goto label_1806f8;
        case 0x180714u: goto label_180714;
        case 0x180720u: goto label_180720;
        case 0x180728u: goto label_180728;
        default: break;
    }

    ctx->pc = 0x1806c8u;

    // 0x1806c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1806c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1806cc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1806CCu;
    {
        const bool branch_taken_0x1806cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1806D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1806CCu;
            // 0x1806d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1806cc) {
            ctx->pc = 0x1806E8u;
            goto label_1806e8;
        }
    }
    ctx->pc = 0x1806D4u;
    // 0x1806d4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1806d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1806d8: 0xc060334  jal         func_180CD0
    ctx->pc = 0x1806D8u;
    SET_GPR_U32(ctx, 31, 0x1806E0u);
    ctx->pc = 0x1806DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1806D8u;
            // 0x1806dc: 0x248468a8  addiu       $a0, $a0, 0x68A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806E0u; }
        if (ctx->pc != 0x1806E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD0_0x180cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806E0u; }
        if (ctx->pc != 0x1806E0u) { return; }
    }
    ctx->pc = 0x1806E0u;
label_1806e0:
    // 0x1806e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1806E0u;
    {
        const bool branch_taken_0x1806e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1806E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1806E0u;
            // 0x1806e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1806e0) {
            ctx->pc = 0x1806ECu;
            goto label_1806ec;
        }
    }
    ctx->pc = 0x1806E8u;
label_1806e8:
    // 0x1806e8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1806e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1806ec:
    // 0x1806ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1806ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1806f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1806F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1806F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1806F0u;
            // 0x1806f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1806F8u;
label_1806f8:
    // 0x1806f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1806f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1806fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1806fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180704: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x180704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x180708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x180708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18070c: 0xc06031a  jal         func_180C68
    ctx->pc = 0x18070Cu;
    SET_GPR_U32(ctx, 31, 0x180714u);
    ctx->pc = 0x180710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18070Cu;
            // 0x180710: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C68u;
    if (runtime->hasFunction(0x180C68u)) {
        auto targetFn = runtime->lookupFunction(0x180C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180714u; }
        if (ctx->pc != 0x180714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C68_0x180c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180714u; }
        if (ctx->pc != 0x180714u) { return; }
    }
    ctx->pc = 0x180714u;
label_180714:
    // 0x180714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180718: 0xc0601d0  jal         func_180740
    ctx->pc = 0x180718u;
    SET_GPR_U32(ctx, 31, 0x180720u);
    ctx->pc = 0x18071Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180718u;
            // 0x18071c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180740u;
    if (runtime->hasFunction(0x180740u)) {
        auto targetFn = runtime->lookupFunction(0x180740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180720u; }
        if (ctx->pc != 0x180720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180740_0x180740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180720u; }
        if (ctx->pc != 0x180720u) { return; }
    }
    ctx->pc = 0x180720u;
label_180720:
    // 0x180720: 0xc06031c  jal         func_180C70
    ctx->pc = 0x180720u;
    SET_GPR_U32(ctx, 31, 0x180728u);
    ctx->pc = 0x180724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180720u;
            // 0x180724: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C70u;
    if (runtime->hasFunction(0x180C70u)) {
        auto targetFn = runtime->lookupFunction(0x180C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180728u; }
        if (ctx->pc != 0x180728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C70_0x180c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180728u; }
        if (ctx->pc != 0x180728u) { return; }
    }
    ctx->pc = 0x180728u;
label_180728:
    // 0x180728: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x180728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18072c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18072cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x180730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180738: 0x3e00008  jr          $ra
    ctx->pc = 0x180738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18073Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180738u;
            // 0x18073c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180740u;
}
