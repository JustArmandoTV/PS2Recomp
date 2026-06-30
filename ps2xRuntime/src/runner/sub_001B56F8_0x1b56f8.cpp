#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B56F8
// Address: 0x1b56f8 - 0x1b57f8
void sub_001B56F8_0x1b56f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B56F8_0x1b56f8");
#endif

    switch (ctx->pc) {
        case 0x1b5730u: goto label_1b5730;
        case 0x1b578cu: goto label_1b578c;
        case 0x1b57a4u: goto label_1b57a4;
        case 0x1b57b8u: goto label_1b57b8;
        case 0x1b57d8u: goto label_1b57d8;
        default: break;
    }

    ctx->pc = 0x1b56f8u;

    // 0x1b56f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b56f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b56fc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1b56fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5700: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5704: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1b5704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5708: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b5708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b570c: 0x8c620dc0  lw          $v0, 0xDC0($v1)
    ctx->pc = 0x1b570cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3520)));
    // 0x1b5710: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5710u;
    {
        const bool branch_taken_0x1b5710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5710u;
            // 0x1b5714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5710) {
            ctx->pc = 0x1B5728u;
            goto label_1b5728;
        }
    }
    ctx->pc = 0x1B5718u;
    // 0x1b5718: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b571c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b571cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5720: 0x806d5d2  j           func_1B5748
    ctx->pc = 0x1B5720u;
    ctx->pc = 0x1B5724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5720u;
            // 0x1b5724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5748u;
    goto label_1b5748;
    ctx->pc = 0x1B5728u;
label_1b5728:
    // 0x1b5728: 0xc065a72  jal         func_1969C8
    ctx->pc = 0x1B5728u;
    SET_GPR_U32(ctx, 31, 0x1B5730u);
    ctx->pc = 0x1B572Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5728u;
            // 0x1b572c: 0x8c640da8  lw          $a0, 0xDA8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3496)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1969C8u;
    if (runtime->hasFunction(0x1969C8u)) {
        auto targetFn = runtime->lookupFunction(0x1969C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5730u; }
        if (ctx->pc != 0x1B5730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001969C8_0x1969c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5730u; }
        if (ctx->pc != 0x1B5730u) { return; }
    }
    ctx->pc = 0x1B5730u;
label_1b5730:
    // 0x1b5730: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b5730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b5734: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b5734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b573c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B573Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B573Cu;
            // 0x1b5740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5744u;
    // 0x1b5744: 0x0  nop
    ctx->pc = 0x1b5744u;
    // NOP
label_1b5748:
    // 0x1b5748: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B574Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5748u;
            // 0x1b574c: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5750u;
    // 0x1b5750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b5750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b5754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5758: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b5758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b575c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b575cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5760: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1b5760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1b5764: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1b5764u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5768: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b5768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b576c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b576cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b5770: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b5770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5774: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b5774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b5778: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1b5778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1b577c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1b577cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1b5780: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b5780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5784: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B5784u;
    SET_GPR_U32(ctx, 31, 0x1B578Cu);
    ctx->pc = 0x1B5788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5784u;
            // 0x1b5788: 0x24503720  addiu       $s0, $v0, 0x3720 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B578Cu; }
        if (ctx->pc != 0x1B578Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B578Cu; }
        if (ctx->pc != 0x1B578Cu) { return; }
    }
    ctx->pc = 0x1B578Cu;
label_1b578c:
    // 0x1b578c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b578cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5790: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5790u;
    {
        const bool branch_taken_0x1b5790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5790u;
            // 0x1b5794: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5790) {
            ctx->pc = 0x1B57B0u;
            goto label_1b57b0;
        }
    }
    ctx->pc = 0x1B5798u;
    // 0x1b5798: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b5798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b579c: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1B579Cu;
    SET_GPR_U32(ctx, 31, 0x1B57A4u);
    ctx->pc = 0x1B57A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B579Cu;
            // 0x1b57a0: 0x34a50157  ori         $a1, $a1, 0x157 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)343);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B57A4u; }
        if (ctx->pc != 0x1B57A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B57A4u; }
        if (ctx->pc != 0x1B57A4u) { return; }
    }
    ctx->pc = 0x1B57A4u;
label_1b57a4:
    // 0x1b57a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B57A4u;
    {
        const bool branch_taken_0x1b57a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B57A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B57A4u;
            // 0x1b57a8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b57a4) {
            ctx->pc = 0x1B57E0u;
            goto label_1b57e0;
        }
    }
    ctx->pc = 0x1B57ACu;
    // 0x1b57ac: 0x0  nop
    ctx->pc = 0x1b57acu;
    // NOP
label_1b57b0:
    // 0x1b57b0: 0xc06d57a  jal         func_1B55E8
    ctx->pc = 0x1B57B0u;
    SET_GPR_U32(ctx, 31, 0x1B57B8u);
    ctx->pc = 0x1B57B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B57B0u;
            // 0x1b57b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B55E8u;
    if (runtime->hasFunction(0x1B55E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B55E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B57B8u; }
        if (ctx->pc != 0x1B57B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B55E8_0x1b55e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B57B8u; }
        if (ctx->pc != 0x1B57B8u) { return; }
    }
    ctx->pc = 0x1B57B8u;
label_1b57b8:
    // 0x1b57b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b57b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b57bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b57c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b57c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57c4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1b57c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57c8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B57C8u;
    {
        const bool branch_taken_0x1b57c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B57CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B57C8u;
            // 0x1b57cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b57c8) {
            ctx->pc = 0x1B57DCu;
            goto label_1b57dc;
        }
    }
    ctx->pc = 0x1B57D0u;
    // 0x1b57d0: 0xc06d5fe  jal         func_1B57F8
    ctx->pc = 0x1B57D0u;
    SET_GPR_U32(ctx, 31, 0x1B57D8u);
    ctx->pc = 0x1B57D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B57D0u;
            // 0x1b57d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B57F8u;
    if (runtime->hasFunction(0x1B57F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B57F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B57D8u; }
        if (ctx->pc != 0x1B57D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B57F8_0x1b57f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B57D8u; }
        if (ctx->pc != 0x1B57D8u) { return; }
    }
    ctx->pc = 0x1B57D8u;
label_1b57d8:
    // 0x1b57d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b57d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b57dc:
    // 0x1b57dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b57dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b57e0:
    // 0x1b57e0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b57e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b57e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b57e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b57e8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1b57e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b57ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b57ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b57f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B57F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B57F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B57F0u;
            // 0x1b57f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B57F8u;
}
