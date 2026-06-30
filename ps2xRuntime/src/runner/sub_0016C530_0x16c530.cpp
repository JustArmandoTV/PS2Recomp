#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016C530
// Address: 0x16c530 - 0x16c5d0
void sub_0016C530_0x16c530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C530_0x16c530");
#endif

    switch (ctx->pc) {
        case 0x16c540u: goto label_16c540;
        case 0x16c558u: goto label_16c558;
        case 0x16c598u: goto label_16c598;
        case 0x16c5a8u: goto label_16c5a8;
        case 0x16c5b8u: goto label_16c5b8;
        case 0x16c5c0u: goto label_16c5c0;
        default: break;
    }

    ctx->pc = 0x16c530u;

    // 0x16c530: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16c530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16c534: 0x3e00008  jr          $ra
    ctx->pc = 0x16C534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C534u;
            // 0x16c538: 0xac44aa20  sw          $a0, -0x55E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945312), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C53Cu;
    // 0x16c53c: 0x0  nop
    ctx->pc = 0x16c53cu;
    // NOP
label_16c540:
    // 0x16c540: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16c540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16c544: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c548: 0x8c44aa20  lw          $a0, -0x55E0($v0)
    ctx->pc = 0x16c548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945312)));
    // 0x16c54c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c550: 0xc05b1e0  jal         func_16C780
    ctx->pc = 0x16C550u;
    SET_GPR_U32(ctx, 31, 0x16C558u);
    ctx->pc = 0x16C780u;
    if (runtime->hasFunction(0x16C780u)) {
        auto targetFn = runtime->lookupFunction(0x16C780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C558u; }
        if (ctx->pc != 0x16C558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C780_0x16c780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C558u; }
        if (ctx->pc != 0x16C558u) { return; }
    }
    ctx->pc = 0x16C558u;
label_16c558:
    // 0x16c558: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16c558u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c55c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c560: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16C560u;
    {
        const bool branch_taken_0x16c560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16C564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C560u;
            // 0x16c564: 0x28640002  slti        $a0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c560) {
            ctx->pc = 0x16C590u;
            goto label_16c590;
        }
    }
    ctx->pc = 0x16C568u;
    // 0x16c568: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16C568u;
    {
        const bool branch_taken_0x16c568 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C568u;
            // 0x16c56c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c568) {
            ctx->pc = 0x16C5C4u;
            goto label_16c5c4;
        }
    }
    ctx->pc = 0x16C570u;
    // 0x16c570: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16c570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c574: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16C574u;
    {
        const bool branch_taken_0x16c574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16C578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C574u;
            // 0x16c578: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c574) {
            ctx->pc = 0x16C5A0u;
            goto label_16c5a0;
        }
    }
    ctx->pc = 0x16C57Cu;
    // 0x16c57c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16C57Cu;
    {
        const bool branch_taken_0x16c57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16C580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C57Cu;
            // 0x16c580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c57c) {
            ctx->pc = 0x16C5B0u;
            goto label_16c5b0;
        }
    }
    ctx->pc = 0x16C584u;
    // 0x16c584: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16C584u;
    {
        const bool branch_taken_0x16c584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c584) {
            ctx->pc = 0x16C5C8u;
            goto label_16c5c8;
        }
    }
    ctx->pc = 0x16C58Cu;
    // 0x16c58c: 0x0  nop
    ctx->pc = 0x16c58cu;
    // NOP
label_16c590:
    // 0x16c590: 0xc05b19a  jal         func_16C668
    ctx->pc = 0x16C590u;
    SET_GPR_U32(ctx, 31, 0x16C598u);
    ctx->pc = 0x16C668u;
    if (runtime->hasFunction(0x16C668u)) {
        auto targetFn = runtime->lookupFunction(0x16C668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C598u; }
        if (ctx->pc != 0x16C598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C668_0x16c668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C598u; }
        if (ctx->pc != 0x16C598u) { return; }
    }
    ctx->pc = 0x16C598u;
label_16c598:
    // 0x16c598: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16C598u;
    {
        const bool branch_taken_0x16c598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C598u;
            // 0x16c59c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c598) {
            ctx->pc = 0x16C5C4u;
            goto label_16c5c4;
        }
    }
    ctx->pc = 0x16C5A0u;
label_16c5a0:
    // 0x16c5a0: 0xc06222e  jal         func_1888B8
    ctx->pc = 0x16C5A0u;
    SET_GPR_U32(ctx, 31, 0x16C5A8u);
    ctx->pc = 0x1888B8u;
    if (runtime->hasFunction(0x1888B8u)) {
        auto targetFn = runtime->lookupFunction(0x1888B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5A8u; }
        if (ctx->pc != 0x16C5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001888B8_0x1888b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5A8u; }
        if (ctx->pc != 0x16C5A8u) { return; }
    }
    ctx->pc = 0x16C5A8u;
label_16c5a8:
    // 0x16c5a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16C5A8u;
    {
        const bool branch_taken_0x16c5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C5A8u;
            // 0x16c5ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c5a8) {
            ctx->pc = 0x16C5C4u;
            goto label_16c5c4;
        }
    }
    ctx->pc = 0x16C5B0u;
label_16c5b0:
    // 0x16c5b0: 0xc062234  jal         func_1888D0
    ctx->pc = 0x16C5B0u;
    SET_GPR_U32(ctx, 31, 0x16C5B8u);
    ctx->pc = 0x1888D0u;
    if (runtime->hasFunction(0x1888D0u)) {
        auto targetFn = runtime->lookupFunction(0x1888D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5B8u; }
        if (ctx->pc != 0x16C5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001888D0_0x1888d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5B8u; }
        if (ctx->pc != 0x16C5B8u) { return; }
    }
    ctx->pc = 0x16C5B8u;
label_16c5b8:
    // 0x16c5b8: 0xc06223a  jal         func_1888E8
    ctx->pc = 0x16C5B8u;
    SET_GPR_U32(ctx, 31, 0x16C5C0u);
    ctx->pc = 0x1888E8u;
    if (runtime->hasFunction(0x1888E8u)) {
        auto targetFn = runtime->lookupFunction(0x1888E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5C0u; }
        if (ctx->pc != 0x16C5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001888E8_0x1888e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5C0u; }
        if (ctx->pc != 0x16C5C0u) { return; }
    }
    ctx->pc = 0x16C5C0u;
label_16c5c0:
    // 0x16c5c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c5c4:
    // 0x16c5c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16c5c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c5c8:
    // 0x16c5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x16C5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C5C8u;
            // 0x16c5cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C5D0u;
}
