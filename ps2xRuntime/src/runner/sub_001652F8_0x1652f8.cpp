#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001652F8
// Address: 0x1652f8 - 0x165418
void sub_001652F8_0x1652f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001652F8_0x1652f8");
#endif

    switch (ctx->pc) {
        case 0x165300u: goto label_165300;
        case 0x165318u: goto label_165318;
        case 0x165350u: goto label_165350;
        case 0x165368u: goto label_165368;
        case 0x1653acu: goto label_1653ac;
        case 0x1653c0u: goto label_1653c0;
        case 0x165400u: goto label_165400;
        default: break;
    }

    ctx->pc = 0x1652f8u;

    // 0x1652f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1652F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1652FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1652F8u;
            // 0x1652fc: 0x8c820090  lw          $v0, 0x90($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165300u;
label_165300:
    // 0x165300: 0xac860100  sw          $a2, 0x100($a0)
    ctx->pc = 0x165300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 6));
    // 0x165304: 0x3e00008  jr          $ra
    ctx->pc = 0x165304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165304u;
            // 0x165308: 0xac8500fc  sw          $a1, 0xFC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16530Cu;
    // 0x16530c: 0x0  nop
    ctx->pc = 0x16530cu;
    // NOP
    // 0x165310: 0x3e00008  jr          $ra
    ctx->pc = 0x165310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165310u;
            // 0x165314: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165318u;
label_165318:
    // 0x165318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x165318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16531c: 0x24820048  addiu       $v0, $a0, 0x48
    ctx->pc = 0x16531cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x165320: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x165320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x165324: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x165324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165328: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16532c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16532cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165330: 0x8c470020  lw          $a3, 0x20($v0)
    ctx->pc = 0x165330u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x165334: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x165334u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x165338: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x165338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x16533c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x16533cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x165340: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x165340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165348: 0xc05df70  jal         func_177DC0
    ctx->pc = 0x165348u;
    SET_GPR_U32(ctx, 31, 0x165350u);
    ctx->pc = 0x16534Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165348u;
            // 0x16534c: 0x673821  addu        $a3, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177DC0u;
    if (runtime->hasFunction(0x177DC0u)) {
        auto targetFn = runtime->lookupFunction(0x177DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165350u; }
        if (ctx->pc != 0x165350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177DC0_0x177dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165350u; }
        if (ctx->pc != 0x165350u) { return; }
    }
    ctx->pc = 0x165350u;
label_165350:
    // 0x165350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165354: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x165354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x165358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16535c: 0x805df94  j           func_177E50
    ctx->pc = 0x16535Cu;
    ctx->pc = 0x165360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16535Cu;
            // 0x165360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177E50u;
    {
        auto targetFn = runtime->lookupFunction(0x177E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x165364u;
    // 0x165364: 0x0  nop
    ctx->pc = 0x165364u;
    // NOP
label_165368:
    // 0x165368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x165368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16536c: 0x24830048  addiu       $v1, $a0, 0x48
    ctx->pc = 0x16536cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x165370: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x165370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x165374: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x165374u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x165378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16537c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x16537cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165380: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x165380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x165384: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x165384u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x165388: 0x8c68001c  lw          $t0, 0x1C($v1)
    ctx->pc = 0x165388u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16538c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x16538cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x165390: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x165390u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x165394: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x165394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x165398: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x165398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16539c: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x16539cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1653a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1653a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1653a4: 0xc05df7c  jal         func_177DF0
    ctx->pc = 0x1653A4u;
    SET_GPR_U32(ctx, 31, 0x1653ACu);
    ctx->pc = 0x1653A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1653A4u;
            // 0x1653a8: 0xe84021  addu        $t0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177DF0u;
    if (runtime->hasFunction(0x177DF0u)) {
        auto targetFn = runtime->lookupFunction(0x177DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1653ACu; }
        if (ctx->pc != 0x1653ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177DF0_0x177df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1653ACu; }
        if (ctx->pc != 0x1653ACu) { return; }
    }
    ctx->pc = 0x1653ACu;
label_1653ac:
    // 0x1653ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1653acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1653b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1653b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1653b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1653b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1653b8: 0x805df94  j           func_177E50
    ctx->pc = 0x1653B8u;
    ctx->pc = 0x1653BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1653B8u;
            // 0x1653bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177E50u;
    {
        auto targetFn = runtime->lookupFunction(0x177E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1653C0u;
label_1653c0:
    // 0x1653c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1653c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1653c4: 0x24830048  addiu       $v1, $a0, 0x48
    ctx->pc = 0x1653c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x1653c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1653c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1653cc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1653ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1653d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1653d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1653d4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1653d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1653d8: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x1653d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1653dc: 0x8c68001c  lw          $t0, 0x1C($v1)
    ctx->pc = 0x1653dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1653e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1653e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1653e4: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x1653e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1653e8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1653e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1653ec: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1653ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1653f0: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1653f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1653f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1653f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1653f8: 0xc05df88  jal         func_177E20
    ctx->pc = 0x1653F8u;
    SET_GPR_U32(ctx, 31, 0x165400u);
    ctx->pc = 0x1653FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1653F8u;
            // 0x1653fc: 0xe84021  addu        $t0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177E20u;
    if (runtime->hasFunction(0x177E20u)) {
        auto targetFn = runtime->lookupFunction(0x177E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165400u; }
        if (ctx->pc != 0x165400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177E20_0x177e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165400u; }
        if (ctx->pc != 0x165400u) { return; }
    }
    ctx->pc = 0x165400u;
label_165400:
    // 0x165400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165404: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x165404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x165408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16540c: 0x805df94  j           func_177E50
    ctx->pc = 0x16540Cu;
    ctx->pc = 0x165410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16540Cu;
            // 0x165410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177E50u;
    {
        auto targetFn = runtime->lookupFunction(0x177E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x165414u;
    // 0x165414: 0x0  nop
    ctx->pc = 0x165414u;
    // NOP
}
