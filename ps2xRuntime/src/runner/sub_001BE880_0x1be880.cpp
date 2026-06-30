#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE880
// Address: 0x1be880 - 0x1be918
void sub_001BE880_0x1be880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE880_0x1be880");
#endif

    switch (ctx->pc) {
        case 0x1be8d0u: goto label_1be8d0;
        case 0x1be8e8u: goto label_1be8e8;
        case 0x1be8fcu: goto label_1be8fc;
        default: break;
    }

    ctx->pc = 0x1be880u;

    // 0x1be880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1be880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1be884: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1be884u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be888: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1be888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1be88c: 0x25110014  addiu       $s1, $t0, 0x14
    ctx->pc = 0x1be88cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x1be890: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1be890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1be894: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1be894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be898: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1be898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1be89c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1be89cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be8a0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1be8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1be8a4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1be8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1be8a8: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1be8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1be8ac: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1be8acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1be8b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1be8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be8b4: 0x24a5b5f0  addiu       $a1, $a1, -0x4A10
    ctx->pc = 0x1be8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948336));
    // 0x1be8b8: 0x24c6b5f8  addiu       $a2, $a2, -0x4A08
    ctx->pc = 0x1be8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948344));
    // 0x1be8bc: 0x8d100024  lw          $s0, 0x24($t0)
    ctx->pc = 0x1be8bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x1be8c0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1be8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1be8c4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1be8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1be8c8: 0xc061cb0  jal         func_1872C0
    ctx->pc = 0x1BE8C8u;
    SET_GPR_U32(ctx, 31, 0x1BE8D0u);
    ctx->pc = 0x1BE8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE8C8u;
            // 0x1be8cc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1872C0u;
    if (runtime->hasFunction(0x1872C0u)) {
        auto targetFn = runtime->lookupFunction(0x1872C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8D0u; }
        if (ctx->pc != 0x1BE8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001872C0_0x1872c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8D0u; }
        if (ctx->pc != 0x1BE8D0u) { return; }
    }
    ctx->pc = 0x1BE8D0u;
label_1be8d0:
    // 0x1be8d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be8d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1be8d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be8d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE8D8u;
    {
        const bool branch_taken_0x1be8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE8D8u;
            // 0x1be8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be8d8) {
            ctx->pc = 0x1BE8F0u;
            goto label_1be8f0;
        }
    }
    ctx->pc = 0x1BE8E0u;
    // 0x1be8e0: 0xc06fb96  jal         func_1BEE58
    ctx->pc = 0x1BE8E0u;
    SET_GPR_U32(ctx, 31, 0x1BE8E8u);
    ctx->pc = 0x1BEE58u;
    if (runtime->hasFunction(0x1BEE58u)) {
        auto targetFn = runtime->lookupFunction(0x1BEE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8E8u; }
        if (ctx->pc != 0x1BE8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BEE58_0x1bee58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8E8u; }
        if (ctx->pc != 0x1BE8E8u) { return; }
    }
    ctx->pc = 0x1BE8E8u;
label_1be8e8:
    // 0x1be8e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE8E8u;
    {
        const bool branch_taken_0x1be8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE8E8u;
            // 0x1be8ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be8e8) {
            ctx->pc = 0x1BE900u;
            goto label_1be900;
        }
    }
    ctx->pc = 0x1BE8F0u;
label_1be8f0:
    // 0x1be8f0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1be8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be8f4: 0xc06fb96  jal         func_1BEE58
    ctx->pc = 0x1BE8F4u;
    SET_GPR_U32(ctx, 31, 0x1BE8FCu);
    ctx->pc = 0x1BE8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE8F4u;
            // 0x1be8f8: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE58u;
    if (runtime->hasFunction(0x1BEE58u)) {
        auto targetFn = runtime->lookupFunction(0x1BEE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8FCu; }
        if (ctx->pc != 0x1BE8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BEE58_0x1bee58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8FCu; }
        if (ctx->pc != 0x1BE8FCu) { return; }
    }
    ctx->pc = 0x1BE8FCu;
label_1be8fc:
    // 0x1be8fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1be8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1be900:
    // 0x1be900: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1be900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be904: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1be904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1be908: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1be908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be90c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1be90cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1be910: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE910u;
            // 0x1be914: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE918u;
}
