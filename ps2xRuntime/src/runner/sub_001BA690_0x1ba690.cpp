#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA690
// Address: 0x1ba690 - 0x1ba7d8
void sub_001BA690_0x1ba690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA690_0x1ba690");
#endif

    switch (ctx->pc) {
        case 0x1ba6c8u: goto label_1ba6c8;
        case 0x1ba6d8u: goto label_1ba6d8;
        case 0x1ba718u: goto label_1ba718;
        case 0x1ba728u: goto label_1ba728;
        case 0x1ba768u: goto label_1ba768;
        case 0x1ba778u: goto label_1ba778;
        case 0x1ba7b8u: goto label_1ba7b8;
        case 0x1ba7c8u: goto label_1ba7c8;
        default: break;
    }

    ctx->pc = 0x1ba690u;

    // 0x1ba690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba694: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1ba694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ba698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba69c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1ba69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ba6a0: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1ba6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ba6a4: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA6A4u;
    {
        const bool branch_taken_0x1ba6a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA6A4u;
            // 0x1ba6a8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6a4) {
            ctx->pc = 0x1BA6C0u;
            goto label_1ba6c0;
        }
    }
    ctx->pc = 0x1BA6ACu;
    // 0x1ba6ac: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1ba6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1ba6b0: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA6B0u;
    {
        const bool branch_taken_0x1ba6b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA6B0u;
            // 0x1ba6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6b0) {
            ctx->pc = 0x1BA6D0u;
            goto label_1ba6d0;
        }
    }
    ctx->pc = 0x1BA6B8u;
    // 0x1ba6b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA6B8u;
    {
        const bool branch_taken_0x1ba6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA6B8u;
            // 0x1ba6bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6b8) {
            ctx->pc = 0x1BA6DCu;
            goto label_1ba6dc;
        }
    }
    ctx->pc = 0x1BA6C0u;
label_1ba6c0:
    // 0x1ba6c0: 0xc06ed7c  jal         func_1BB5F0
    ctx->pc = 0x1BA6C0u;
    SET_GPR_U32(ctx, 31, 0x1BA6C8u);
    ctx->pc = 0x1BB5F0u;
    if (runtime->hasFunction(0x1BB5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1BB5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA6C8u; }
        if (ctx->pc != 0x1BA6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB5F0_0x1bb5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA6C8u; }
        if (ctx->pc != 0x1BA6C8u) { return; }
    }
    ctx->pc = 0x1BA6C8u;
label_1ba6c8:
    // 0x1ba6c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA6C8u;
    {
        const bool branch_taken_0x1ba6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA6C8u;
            // 0x1ba6cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6c8) {
            ctx->pc = 0x1BA6DCu;
            goto label_1ba6dc;
        }
    }
    ctx->pc = 0x1BA6D0u;
label_1ba6d0:
    // 0x1ba6d0: 0xc06f126  jal         func_1BC498
    ctx->pc = 0x1BA6D0u;
    SET_GPR_U32(ctx, 31, 0x1BA6D8u);
    ctx->pc = 0x1BA6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA6D0u;
            // 0x1ba6d4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BC498u;
    if (runtime->hasFunction(0x1BC498u)) {
        auto targetFn = runtime->lookupFunction(0x1BC498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA6D8u; }
        if (ctx->pc != 0x1BA6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC498_0x1bc498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA6D8u; }
        if (ctx->pc != 0x1BA6D8u) { return; }
    }
    ctx->pc = 0x1BA6D8u;
label_1ba6d8:
    // 0x1ba6d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba6dc:
    // 0x1ba6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA6DCu;
            // 0x1ba6e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA6E4u;
    // 0x1ba6e4: 0x0  nop
    ctx->pc = 0x1ba6e4u;
    // NOP
    // 0x1ba6e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba6ec: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1ba6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ba6f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba6f4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1ba6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ba6f8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA6F8u;
    {
        const bool branch_taken_0x1ba6f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA6F8u;
            // 0x1ba6fc: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6f8) {
            ctx->pc = 0x1BA710u;
            goto label_1ba710;
        }
    }
    ctx->pc = 0x1BA700u;
    // 0x1ba700: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA700u;
    {
        const bool branch_taken_0x1ba700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA700u;
            // 0x1ba704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba700) {
            ctx->pc = 0x1BA720u;
            goto label_1ba720;
        }
    }
    ctx->pc = 0x1BA708u;
    // 0x1ba708: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA708u;
    {
        const bool branch_taken_0x1ba708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA708u;
            // 0x1ba70c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba708) {
            ctx->pc = 0x1BA72Cu;
            goto label_1ba72c;
        }
    }
    ctx->pc = 0x1BA710u;
label_1ba710:
    // 0x1ba710: 0xc06edc2  jal         func_1BB708
    ctx->pc = 0x1BA710u;
    SET_GPR_U32(ctx, 31, 0x1BA718u);
    ctx->pc = 0x1BB708u;
    if (runtime->hasFunction(0x1BB708u)) {
        auto targetFn = runtime->lookupFunction(0x1BB708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA718u; }
        if (ctx->pc != 0x1BA718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB708_0x1bb708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA718u; }
        if (ctx->pc != 0x1BA718u) { return; }
    }
    ctx->pc = 0x1BA718u;
label_1ba718:
    // 0x1ba718: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA718u;
    {
        const bool branch_taken_0x1ba718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA718u;
            // 0x1ba71c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba718) {
            ctx->pc = 0x1BA72Cu;
            goto label_1ba72c;
        }
    }
    ctx->pc = 0x1BA720u;
label_1ba720:
    // 0x1ba720: 0xc06f16e  jal         func_1BC5B8
    ctx->pc = 0x1BA720u;
    SET_GPR_U32(ctx, 31, 0x1BA728u);
    ctx->pc = 0x1BC5B8u;
    if (runtime->hasFunction(0x1BC5B8u)) {
        auto targetFn = runtime->lookupFunction(0x1BC5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA728u; }
        if (ctx->pc != 0x1BA728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC5B8_0x1bc5b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA728u; }
        if (ctx->pc != 0x1BA728u) { return; }
    }
    ctx->pc = 0x1BA728u;
label_1ba728:
    // 0x1ba728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba72c:
    // 0x1ba72c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA72Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA72Cu;
            // 0x1ba730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA734u;
    // 0x1ba734: 0x0  nop
    ctx->pc = 0x1ba734u;
    // NOP
    // 0x1ba738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba73c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1ba73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ba740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba744: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1ba744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ba748: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA748u;
    {
        const bool branch_taken_0x1ba748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA748u;
            // 0x1ba74c: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba748) {
            ctx->pc = 0x1BA760u;
            goto label_1ba760;
        }
    }
    ctx->pc = 0x1BA750u;
    // 0x1ba750: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA750u;
    {
        const bool branch_taken_0x1ba750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA750u;
            // 0x1ba754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba750) {
            ctx->pc = 0x1BA770u;
            goto label_1ba770;
        }
    }
    ctx->pc = 0x1BA758u;
    // 0x1ba758: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA758u;
    {
        const bool branch_taken_0x1ba758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA758u;
            // 0x1ba75c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba758) {
            ctx->pc = 0x1BA77Cu;
            goto label_1ba77c;
        }
    }
    ctx->pc = 0x1BA760u;
label_1ba760:
    // 0x1ba760: 0xc06eddc  jal         func_1BB770
    ctx->pc = 0x1BA760u;
    SET_GPR_U32(ctx, 31, 0x1BA768u);
    ctx->pc = 0x1BB770u;
    if (runtime->hasFunction(0x1BB770u)) {
        auto targetFn = runtime->lookupFunction(0x1BB770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA768u; }
        if (ctx->pc != 0x1BA768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB770_0x1bb770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA768u; }
        if (ctx->pc != 0x1BA768u) { return; }
    }
    ctx->pc = 0x1BA768u;
label_1ba768:
    // 0x1ba768: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA768u;
    {
        const bool branch_taken_0x1ba768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA768u;
            // 0x1ba76c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba768) {
            ctx->pc = 0x1BA77Cu;
            goto label_1ba77c;
        }
    }
    ctx->pc = 0x1BA770u;
label_1ba770:
    // 0x1ba770: 0xc06f178  jal         func_1BC5E0
    ctx->pc = 0x1BA770u;
    SET_GPR_U32(ctx, 31, 0x1BA778u);
    ctx->pc = 0x1BC5E0u;
    if (runtime->hasFunction(0x1BC5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BC5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA778u; }
        if (ctx->pc != 0x1BA778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC5E0_0x1bc5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA778u; }
        if (ctx->pc != 0x1BA778u) { return; }
    }
    ctx->pc = 0x1BA778u;
label_1ba778:
    // 0x1ba778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba77c:
    // 0x1ba77c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA77Cu;
            // 0x1ba780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA784u;
    // 0x1ba784: 0x0  nop
    ctx->pc = 0x1ba784u;
    // NOP
    // 0x1ba788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba78c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1ba78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ba790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba794: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1ba794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ba798: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA798u;
    {
        const bool branch_taken_0x1ba798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA798u;
            // 0x1ba79c: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba798) {
            ctx->pc = 0x1BA7B0u;
            goto label_1ba7b0;
        }
    }
    ctx->pc = 0x1BA7A0u;
    // 0x1ba7a0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA7A0u;
    {
        const bool branch_taken_0x1ba7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA7A0u;
            // 0x1ba7a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7a0) {
            ctx->pc = 0x1BA7C0u;
            goto label_1ba7c0;
        }
    }
    ctx->pc = 0x1BA7A8u;
    // 0x1ba7a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA7A8u;
    {
        const bool branch_taken_0x1ba7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA7A8u;
            // 0x1ba7ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7a8) {
            ctx->pc = 0x1BA7CCu;
            goto label_1ba7cc;
        }
    }
    ctx->pc = 0x1BA7B0u;
label_1ba7b0:
    // 0x1ba7b0: 0xc06edf6  jal         func_1BB7D8
    ctx->pc = 0x1BA7B0u;
    SET_GPR_U32(ctx, 31, 0x1BA7B8u);
    ctx->pc = 0x1BB7D8u;
    if (runtime->hasFunction(0x1BB7D8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB7D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA7B8u; }
        if (ctx->pc != 0x1BA7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB7D8_0x1bb7d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA7B8u; }
        if (ctx->pc != 0x1BA7B8u) { return; }
    }
    ctx->pc = 0x1BA7B8u;
label_1ba7b8:
    // 0x1ba7b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA7B8u;
    {
        const bool branch_taken_0x1ba7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA7B8u;
            // 0x1ba7bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7b8) {
            ctx->pc = 0x1BA7CCu;
            goto label_1ba7cc;
        }
    }
    ctx->pc = 0x1BA7C0u;
label_1ba7c0:
    // 0x1ba7c0: 0xc06f182  jal         func_1BC608
    ctx->pc = 0x1BA7C0u;
    SET_GPR_U32(ctx, 31, 0x1BA7C8u);
    ctx->pc = 0x1BC608u;
    if (runtime->hasFunction(0x1BC608u)) {
        auto targetFn = runtime->lookupFunction(0x1BC608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA7C8u; }
        if (ctx->pc != 0x1BA7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC608_0x1bc608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA7C8u; }
        if (ctx->pc != 0x1BA7C8u) { return; }
    }
    ctx->pc = 0x1BA7C8u;
label_1ba7c8:
    // 0x1ba7c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba7cc:
    // 0x1ba7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA7CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA7CCu;
            // 0x1ba7d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA7D4u;
    // 0x1ba7d4: 0x0  nop
    ctx->pc = 0x1ba7d4u;
    // NOP
}
