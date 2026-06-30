#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016C668
// Address: 0x16c668 - 0x16c780
void sub_0016C668_0x16c668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C668_0x16c668");
#endif

    switch (ctx->pc) {
        case 0x16c678u: goto label_16c678;
        case 0x16c680u: goto label_16c680;
        case 0x16c688u: goto label_16c688;
        case 0x16c690u: goto label_16c690;
        case 0x16c698u: goto label_16c698;
        case 0x16c6a0u: goto label_16c6a0;
        case 0x16c6a8u: goto label_16c6a8;
        case 0x16c6b0u: goto label_16c6b0;
        default: break;
    }

    ctx->pc = 0x16c668u;

    // 0x16c668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c66c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c670: 0xc062210  jal         func_188840
    ctx->pc = 0x16C670u;
    SET_GPR_U32(ctx, 31, 0x16C678u);
    ctx->pc = 0x188840u;
    if (runtime->hasFunction(0x188840u)) {
        auto targetFn = runtime->lookupFunction(0x188840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C678u; }
        if (ctx->pc != 0x16C678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188840_0x188840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C678u; }
        if (ctx->pc != 0x16C678u) { return; }
    }
    ctx->pc = 0x16C678u;
label_16c678:
    // 0x16c678: 0xc062216  jal         func_188858
    ctx->pc = 0x16C678u;
    SET_GPR_U32(ctx, 31, 0x16C680u);
    ctx->pc = 0x188858u;
    if (runtime->hasFunction(0x188858u)) {
        auto targetFn = runtime->lookupFunction(0x188858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C680u; }
        if (ctx->pc != 0x16C680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188858_0x188858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C680u; }
        if (ctx->pc != 0x16C680u) { return; }
    }
    ctx->pc = 0x16C680u;
label_16c680:
    // 0x16c680: 0xc06221c  jal         func_188870
    ctx->pc = 0x16C680u;
    SET_GPR_U32(ctx, 31, 0x16C688u);
    ctx->pc = 0x188870u;
    if (runtime->hasFunction(0x188870u)) {
        auto targetFn = runtime->lookupFunction(0x188870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C688u; }
        if (ctx->pc != 0x16C688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188870_0x188870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C688u; }
        if (ctx->pc != 0x16C688u) { return; }
    }
    ctx->pc = 0x16C688u;
label_16c688:
    // 0x16c688: 0xc062222  jal         func_188888
    ctx->pc = 0x16C688u;
    SET_GPR_U32(ctx, 31, 0x16C690u);
    ctx->pc = 0x188888u;
    if (runtime->hasFunction(0x188888u)) {
        auto targetFn = runtime->lookupFunction(0x188888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C690u; }
        if (ctx->pc != 0x16C690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188888_0x188888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C690u; }
        if (ctx->pc != 0x16C690u) { return; }
    }
    ctx->pc = 0x16C690u;
label_16c690:
    // 0x16c690: 0xc062228  jal         func_1888A0
    ctx->pc = 0x16C690u;
    SET_GPR_U32(ctx, 31, 0x16C698u);
    ctx->pc = 0x1888A0u;
    if (runtime->hasFunction(0x1888A0u)) {
        auto targetFn = runtime->lookupFunction(0x1888A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C698u; }
        if (ctx->pc != 0x16C698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001888A0_0x1888a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C698u; }
        if (ctx->pc != 0x16C698u) { return; }
    }
    ctx->pc = 0x16C698u;
label_16c698:
    // 0x16c698: 0xc06222e  jal         func_1888B8
    ctx->pc = 0x16C698u;
    SET_GPR_U32(ctx, 31, 0x16C6A0u);
    ctx->pc = 0x1888B8u;
    if (runtime->hasFunction(0x1888B8u)) {
        auto targetFn = runtime->lookupFunction(0x1888B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C6A0u; }
        if (ctx->pc != 0x16C6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001888B8_0x1888b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C6A0u; }
        if (ctx->pc != 0x16C6A0u) { return; }
    }
    ctx->pc = 0x16C6A0u;
label_16c6a0:
    // 0x16c6a0: 0xc062234  jal         func_1888D0
    ctx->pc = 0x16C6A0u;
    SET_GPR_U32(ctx, 31, 0x16C6A8u);
    ctx->pc = 0x1888D0u;
    if (runtime->hasFunction(0x1888D0u)) {
        auto targetFn = runtime->lookupFunction(0x1888D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C6A8u; }
        if (ctx->pc != 0x16C6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001888D0_0x1888d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C6A8u; }
        if (ctx->pc != 0x16C6A8u) { return; }
    }
    ctx->pc = 0x16C6A8u;
label_16c6a8:
    // 0x16c6a8: 0xc06223a  jal         func_1888E8
    ctx->pc = 0x16C6A8u;
    SET_GPR_U32(ctx, 31, 0x16C6B0u);
    ctx->pc = 0x1888E8u;
    if (runtime->hasFunction(0x1888E8u)) {
        auto targetFn = runtime->lookupFunction(0x1888E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C6B0u; }
        if (ctx->pc != 0x16C6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001888E8_0x1888e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C6B0u; }
        if (ctx->pc != 0x16C6B0u) { return; }
    }
    ctx->pc = 0x16C6B0u;
label_16c6b0:
    // 0x16c6b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16c6b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c6b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x16C6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C6B8u;
            // 0x16c6bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C6C0u;
    // 0x16c6c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c6c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c6c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c6cc: 0x8062210  j           func_188840
    ctx->pc = 0x16C6CCu;
    ctx->pc = 0x16C6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C6CCu;
            // 0x16c6d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188840u;
    if (runtime->hasFunction(0x188840u)) {
        auto targetFn = runtime->lookupFunction(0x188840u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00188840_0x188840(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C6D4u;
    // 0x16c6d4: 0x0  nop
    ctx->pc = 0x16c6d4u;
    // NOP
    // 0x16c6d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c6dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c6e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c6e4: 0x8062216  j           func_188858
    ctx->pc = 0x16C6E4u;
    ctx->pc = 0x16C6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C6E4u;
            // 0x16c6e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188858u;
    if (runtime->hasFunction(0x188858u)) {
        auto targetFn = runtime->lookupFunction(0x188858u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00188858_0x188858(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C6ECu;
    // 0x16c6ec: 0x0  nop
    ctx->pc = 0x16c6ecu;
    // NOP
    // 0x16c6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c6f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c6fc: 0x806221c  j           func_188870
    ctx->pc = 0x16C6FCu;
    ctx->pc = 0x16C700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C6FCu;
            // 0x16c700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188870u;
    if (runtime->hasFunction(0x188870u)) {
        auto targetFn = runtime->lookupFunction(0x188870u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00188870_0x188870(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C704u;
    // 0x16c704: 0x0  nop
    ctx->pc = 0x16c704u;
    // NOP
    // 0x16c708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c70c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c714: 0x8062222  j           func_188888
    ctx->pc = 0x16C714u;
    ctx->pc = 0x16C718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C714u;
            // 0x16c718: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188888u;
    if (runtime->hasFunction(0x188888u)) {
        auto targetFn = runtime->lookupFunction(0x188888u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00188888_0x188888(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C71Cu;
    // 0x16c71c: 0x0  nop
    ctx->pc = 0x16c71cu;
    // NOP
    // 0x16c720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c72c: 0x8062228  j           func_1888A0
    ctx->pc = 0x16C72Cu;
    ctx->pc = 0x16C730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C72Cu;
            // 0x16c730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1888A0u;
    if (runtime->hasFunction(0x1888A0u)) {
        auto targetFn = runtime->lookupFunction(0x1888A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001888A0_0x1888a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C734u;
    // 0x16c734: 0x0  nop
    ctx->pc = 0x16c734u;
    // NOP
    // 0x16c738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c73c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c744: 0x806222e  j           func_1888B8
    ctx->pc = 0x16C744u;
    ctx->pc = 0x16C748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C744u;
            // 0x16c748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1888B8u;
    if (runtime->hasFunction(0x1888B8u)) {
        auto targetFn = runtime->lookupFunction(0x1888B8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001888B8_0x1888b8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C74Cu;
    // 0x16c74c: 0x0  nop
    ctx->pc = 0x16c74cu;
    // NOP
    // 0x16c750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c75c: 0x8062234  j           func_1888D0
    ctx->pc = 0x16C75Cu;
    ctx->pc = 0x16C760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C75Cu;
            // 0x16c760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1888D0u;
    if (runtime->hasFunction(0x1888D0u)) {
        auto targetFn = runtime->lookupFunction(0x1888D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001888D0_0x1888d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C764u;
    // 0x16c764: 0x0  nop
    ctx->pc = 0x16c764u;
    // NOP
    // 0x16c768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c76c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c774: 0x806223a  j           func_1888E8
    ctx->pc = 0x16C774u;
    ctx->pc = 0x16C778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C774u;
            // 0x16c778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1888E8u;
    if (runtime->hasFunction(0x1888E8u)) {
        auto targetFn = runtime->lookupFunction(0x1888E8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001888E8_0x1888e8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C77Cu;
    // 0x16c77c: 0x0  nop
    ctx->pc = 0x16c77cu;
    // NOP
}
