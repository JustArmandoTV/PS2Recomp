#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA7D8
// Address: 0x1ba7d8 - 0x1baa98
void sub_001BA7D8_0x1ba7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA7D8_0x1ba7d8");
#endif

    switch (ctx->pc) {
        case 0x1ba808u: goto label_1ba808;
        case 0x1ba818u: goto label_1ba818;
        case 0x1ba858u: goto label_1ba858;
        case 0x1ba868u: goto label_1ba868;
        case 0x1ba8a4u: goto label_1ba8a4;
        case 0x1ba8e8u: goto label_1ba8e8;
        case 0x1ba8f8u: goto label_1ba8f8;
        case 0x1ba938u: goto label_1ba938;
        case 0x1ba948u: goto label_1ba948;
        case 0x1ba988u: goto label_1ba988;
        case 0x1ba998u: goto label_1ba998;
        case 0x1ba9d8u: goto label_1ba9d8;
        case 0x1ba9e8u: goto label_1ba9e8;
        case 0x1baa28u: goto label_1baa28;
        case 0x1baa38u: goto label_1baa38;
        case 0x1baa78u: goto label_1baa78;
        case 0x1baa88u: goto label_1baa88;
        default: break;
    }

    ctx->pc = 0x1ba7d8u;

    // 0x1ba7d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba7dc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1ba7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ba7e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba7e4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1ba7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ba7e8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA7E8u;
    {
        const bool branch_taken_0x1ba7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA7E8u;
            // 0x1ba7ec: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7e8) {
            ctx->pc = 0x1BA800u;
            goto label_1ba800;
        }
    }
    ctx->pc = 0x1BA7F0u;
    // 0x1ba7f0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA7F0u;
    {
        const bool branch_taken_0x1ba7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA7F0u;
            // 0x1ba7f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7f0) {
            ctx->pc = 0x1BA810u;
            goto label_1ba810;
        }
    }
    ctx->pc = 0x1BA7F8u;
    // 0x1ba7f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA7F8u;
    {
        const bool branch_taken_0x1ba7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA7F8u;
            // 0x1ba7fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7f8) {
            ctx->pc = 0x1BA81Cu;
            goto label_1ba81c;
        }
    }
    ctx->pc = 0x1BA800u;
label_1ba800:
    // 0x1ba800: 0xc06ee28  jal         func_1BB8A0
    ctx->pc = 0x1BA800u;
    SET_GPR_U32(ctx, 31, 0x1BA808u);
    ctx->pc = 0x1BB8A0u;
    if (runtime->hasFunction(0x1BB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA808u; }
        if (ctx->pc != 0x1BA808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB8A0_0x1bb8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA808u; }
        if (ctx->pc != 0x1BA808u) { return; }
    }
    ctx->pc = 0x1BA808u;
label_1ba808:
    // 0x1ba808: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA808u;
    {
        const bool branch_taken_0x1ba808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA808u;
            // 0x1ba80c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba808) {
            ctx->pc = 0x1BA81Cu;
            goto label_1ba81c;
        }
    }
    ctx->pc = 0x1BA810u;
label_1ba810:
    // 0x1ba810: 0xc06f1b4  jal         func_1BC6D0
    ctx->pc = 0x1BA810u;
    SET_GPR_U32(ctx, 31, 0x1BA818u);
    ctx->pc = 0x1BC6D0u;
    if (runtime->hasFunction(0x1BC6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1BC6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA818u; }
        if (ctx->pc != 0x1BA818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC6D0_0x1bc6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA818u; }
        if (ctx->pc != 0x1BA818u) { return; }
    }
    ctx->pc = 0x1BA818u;
label_1ba818:
    // 0x1ba818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba81c:
    // 0x1ba81c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA81Cu;
            // 0x1ba820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA824u;
    // 0x1ba824: 0x0  nop
    ctx->pc = 0x1ba824u;
    // NOP
    // 0x1ba828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba82c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1ba82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ba830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba834: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1ba834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ba838: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA838u;
    {
        const bool branch_taken_0x1ba838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA838u;
            // 0x1ba83c: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba838) {
            ctx->pc = 0x1BA850u;
            goto label_1ba850;
        }
    }
    ctx->pc = 0x1BA840u;
    // 0x1ba840: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA840u;
    {
        const bool branch_taken_0x1ba840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA840u;
            // 0x1ba844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba840) {
            ctx->pc = 0x1BA860u;
            goto label_1ba860;
        }
    }
    ctx->pc = 0x1BA848u;
    // 0x1ba848: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA848u;
    {
        const bool branch_taken_0x1ba848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA848u;
            // 0x1ba84c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba848) {
            ctx->pc = 0x1BA86Cu;
            goto label_1ba86c;
        }
    }
    ctx->pc = 0x1BA850u;
label_1ba850:
    // 0x1ba850: 0xc06ee5e  jal         func_1BB978
    ctx->pc = 0x1BA850u;
    SET_GPR_U32(ctx, 31, 0x1BA858u);
    ctx->pc = 0x1BB978u;
    if (runtime->hasFunction(0x1BB978u)) {
        auto targetFn = runtime->lookupFunction(0x1BB978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA858u; }
        if (ctx->pc != 0x1BA858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB978_0x1bb978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA858u; }
        if (ctx->pc != 0x1BA858u) { return; }
    }
    ctx->pc = 0x1BA858u;
label_1ba858:
    // 0x1ba858: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA858u;
    {
        const bool branch_taken_0x1ba858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA858u;
            // 0x1ba85c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba858) {
            ctx->pc = 0x1BA86Cu;
            goto label_1ba86c;
        }
    }
    ctx->pc = 0x1BA860u;
label_1ba860:
    // 0x1ba860: 0xc06f1d0  jal         func_1BC740
    ctx->pc = 0x1BA860u;
    SET_GPR_U32(ctx, 31, 0x1BA868u);
    ctx->pc = 0x1BC740u;
    if (runtime->hasFunction(0x1BC740u)) {
        auto targetFn = runtime->lookupFunction(0x1BC740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA868u; }
        if (ctx->pc != 0x1BA868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC740_0x1bc740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA868u; }
        if (ctx->pc != 0x1BA868u) { return; }
    }
    ctx->pc = 0x1BA868u;
label_1ba868:
    // 0x1ba868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba86c:
    // 0x1ba86c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA86Cu;
            // 0x1ba870: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA874u;
    // 0x1ba874: 0x0  nop
    ctx->pc = 0x1ba874u;
    // NOP
    // 0x1ba878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba87c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1ba87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ba880: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba884: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1ba884u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ba888: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA888u;
    {
        const bool branch_taken_0x1ba888 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA888u;
            // 0x1ba88c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba888) {
            ctx->pc = 0x1BA8A8u;
            goto label_1ba8a8;
        }
    }
    ctx->pc = 0x1BA890u;
    // 0x1ba890: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1ba890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1ba894: 0x54e20005  bnel        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA894u;
    {
        const bool branch_taken_0x1ba894 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ba894) {
            ctx->pc = 0x1BA898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA894u;
            // 0x1ba898: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA8ACu;
            goto label_1ba8ac;
        }
    }
    ctx->pc = 0x1BA89Cu;
    // 0x1ba89c: 0xc06f1da  jal         func_1BC768
    ctx->pc = 0x1BA89Cu;
    SET_GPR_U32(ctx, 31, 0x1BA8A4u);
    ctx->pc = 0x1BC768u;
    if (runtime->hasFunction(0x1BC768u)) {
        auto targetFn = runtime->lookupFunction(0x1BC768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8A4u; }
        if (ctx->pc != 0x1BA8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC768_0x1bc768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8A4u; }
        if (ctx->pc != 0x1BA8A4u) { return; }
    }
    ctx->pc = 0x1BA8A4u;
label_1ba8a4:
    // 0x1ba8a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ba8a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ba8a8:
    // 0x1ba8a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba8ac:
    // 0x1ba8ac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1ba8acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8B0u;
            // 0x1ba8b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA8B8u;
    // 0x1ba8b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba8bc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1ba8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ba8c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba8c4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1ba8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ba8c8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA8C8u;
    {
        const bool branch_taken_0x1ba8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8C8u;
            // 0x1ba8cc: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba8c8) {
            ctx->pc = 0x1BA8E0u;
            goto label_1ba8e0;
        }
    }
    ctx->pc = 0x1BA8D0u;
    // 0x1ba8d0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA8D0u;
    {
        const bool branch_taken_0x1ba8d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8D0u;
            // 0x1ba8d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba8d0) {
            ctx->pc = 0x1BA8F0u;
            goto label_1ba8f0;
        }
    }
    ctx->pc = 0x1BA8D8u;
    // 0x1ba8d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA8D8u;
    {
        const bool branch_taken_0x1ba8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8D8u;
            // 0x1ba8dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba8d8) {
            ctx->pc = 0x1BA8FCu;
            goto label_1ba8fc;
        }
    }
    ctx->pc = 0x1BA8E0u;
label_1ba8e0:
    // 0x1ba8e0: 0xc06ee68  jal         func_1BB9A0
    ctx->pc = 0x1BA8E0u;
    SET_GPR_U32(ctx, 31, 0x1BA8E8u);
    ctx->pc = 0x1BB9A0u;
    if (runtime->hasFunction(0x1BB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8E8u; }
        if (ctx->pc != 0x1BA8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB9A0_0x1bb9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8E8u; }
        if (ctx->pc != 0x1BA8E8u) { return; }
    }
    ctx->pc = 0x1BA8E8u;
label_1ba8e8:
    // 0x1ba8e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA8E8u;
    {
        const bool branch_taken_0x1ba8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8E8u;
            // 0x1ba8ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba8e8) {
            ctx->pc = 0x1BA8FCu;
            goto label_1ba8fc;
        }
    }
    ctx->pc = 0x1BA8F0u;
label_1ba8f0:
    // 0x1ba8f0: 0xc06f1e4  jal         func_1BC790
    ctx->pc = 0x1BA8F0u;
    SET_GPR_U32(ctx, 31, 0x1BA8F8u);
    ctx->pc = 0x1BC790u;
    if (runtime->hasFunction(0x1BC790u)) {
        auto targetFn = runtime->lookupFunction(0x1BC790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8F8u; }
        if (ctx->pc != 0x1BA8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC790_0x1bc790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8F8u; }
        if (ctx->pc != 0x1BA8F8u) { return; }
    }
    ctx->pc = 0x1BA8F8u;
label_1ba8f8:
    // 0x1ba8f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba8fc:
    // 0x1ba8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8FCu;
            // 0x1ba900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA904u;
    // 0x1ba904: 0x0  nop
    ctx->pc = 0x1ba904u;
    // NOP
    // 0x1ba908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba90c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1ba90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ba910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba914: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1ba914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ba918: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA918u;
    {
        const bool branch_taken_0x1ba918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA918u;
            // 0x1ba91c: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba918) {
            ctx->pc = 0x1BA930u;
            goto label_1ba930;
        }
    }
    ctx->pc = 0x1BA920u;
    // 0x1ba920: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA920u;
    {
        const bool branch_taken_0x1ba920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA920u;
            // 0x1ba924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba920) {
            ctx->pc = 0x1BA940u;
            goto label_1ba940;
        }
    }
    ctx->pc = 0x1BA928u;
    // 0x1ba928: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA928u;
    {
        const bool branch_taken_0x1ba928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA928u;
            // 0x1ba92c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba928) {
            ctx->pc = 0x1BA94Cu;
            goto label_1ba94c;
        }
    }
    ctx->pc = 0x1BA930u;
label_1ba930:
    // 0x1ba930: 0xc06ee9a  jal         func_1BBA68
    ctx->pc = 0x1BA930u;
    SET_GPR_U32(ctx, 31, 0x1BA938u);
    ctx->pc = 0x1BBA68u;
    if (runtime->hasFunction(0x1BBA68u)) {
        auto targetFn = runtime->lookupFunction(0x1BBA68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA938u; }
        if (ctx->pc != 0x1BA938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBA68_0x1bba68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA938u; }
        if (ctx->pc != 0x1BA938u) { return; }
    }
    ctx->pc = 0x1BA938u;
label_1ba938:
    // 0x1ba938: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA938u;
    {
        const bool branch_taken_0x1ba938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA938u;
            // 0x1ba93c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba938) {
            ctx->pc = 0x1BA94Cu;
            goto label_1ba94c;
        }
    }
    ctx->pc = 0x1BA940u;
label_1ba940:
    // 0x1ba940: 0xc06f216  jal         func_1BC858
    ctx->pc = 0x1BA940u;
    SET_GPR_U32(ctx, 31, 0x1BA948u);
    ctx->pc = 0x1BC858u;
    if (runtime->hasFunction(0x1BC858u)) {
        auto targetFn = runtime->lookupFunction(0x1BC858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA948u; }
        if (ctx->pc != 0x1BA948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC858_0x1bc858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA948u; }
        if (ctx->pc != 0x1BA948u) { return; }
    }
    ctx->pc = 0x1BA948u;
label_1ba948:
    // 0x1ba948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba94c:
    // 0x1ba94c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA94Cu;
            // 0x1ba950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA954u;
    // 0x1ba954: 0x0  nop
    ctx->pc = 0x1ba954u;
    // NOP
    // 0x1ba958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba95c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1ba95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ba960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba964: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1ba964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ba968: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA968u;
    {
        const bool branch_taken_0x1ba968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA968u;
            // 0x1ba96c: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba968) {
            ctx->pc = 0x1BA980u;
            goto label_1ba980;
        }
    }
    ctx->pc = 0x1BA970u;
    // 0x1ba970: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA970u;
    {
        const bool branch_taken_0x1ba970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA970u;
            // 0x1ba974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba970) {
            ctx->pc = 0x1BA990u;
            goto label_1ba990;
        }
    }
    ctx->pc = 0x1BA978u;
    // 0x1ba978: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA978u;
    {
        const bool branch_taken_0x1ba978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA978u;
            // 0x1ba97c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba978) {
            ctx->pc = 0x1BA99Cu;
            goto label_1ba99c;
        }
    }
    ctx->pc = 0x1BA980u;
label_1ba980:
    // 0x1ba980: 0xc06eea0  jal         func_1BBA80
    ctx->pc = 0x1BA980u;
    SET_GPR_U32(ctx, 31, 0x1BA988u);
    ctx->pc = 0x1BBA80u;
    if (runtime->hasFunction(0x1BBA80u)) {
        auto targetFn = runtime->lookupFunction(0x1BBA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA988u; }
        if (ctx->pc != 0x1BA988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBA80_0x1bba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA988u; }
        if (ctx->pc != 0x1BA988u) { return; }
    }
    ctx->pc = 0x1BA988u;
label_1ba988:
    // 0x1ba988: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA988u;
    {
        const bool branch_taken_0x1ba988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA988u;
            // 0x1ba98c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba988) {
            ctx->pc = 0x1BA99Cu;
            goto label_1ba99c;
        }
    }
    ctx->pc = 0x1BA990u;
label_1ba990:
    // 0x1ba990: 0xc06f220  jal         func_1BC880
    ctx->pc = 0x1BA990u;
    SET_GPR_U32(ctx, 31, 0x1BA998u);
    ctx->pc = 0x1BC880u;
    if (runtime->hasFunction(0x1BC880u)) {
        auto targetFn = runtime->lookupFunction(0x1BC880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA998u; }
        if (ctx->pc != 0x1BA998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC880_0x1bc880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA998u; }
        if (ctx->pc != 0x1BA998u) { return; }
    }
    ctx->pc = 0x1BA998u;
label_1ba998:
    // 0x1ba998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba99c:
    // 0x1ba99c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA99Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA99Cu;
            // 0x1ba9a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA9A4u;
    // 0x1ba9a4: 0x0  nop
    ctx->pc = 0x1ba9a4u;
    // NOP
    // 0x1ba9a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba9ac: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1ba9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ba9b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba9b4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1ba9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ba9b8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA9B8u;
    {
        const bool branch_taken_0x1ba9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA9B8u;
            // 0x1ba9bc: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9b8) {
            ctx->pc = 0x1BA9D0u;
            goto label_1ba9d0;
        }
    }
    ctx->pc = 0x1BA9C0u;
    // 0x1ba9c0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA9C0u;
    {
        const bool branch_taken_0x1ba9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA9C0u;
            // 0x1ba9c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9c0) {
            ctx->pc = 0x1BA9E0u;
            goto label_1ba9e0;
        }
    }
    ctx->pc = 0x1BA9C8u;
    // 0x1ba9c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA9C8u;
    {
        const bool branch_taken_0x1ba9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA9C8u;
            // 0x1ba9cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9c8) {
            ctx->pc = 0x1BA9ECu;
            goto label_1ba9ec;
        }
    }
    ctx->pc = 0x1BA9D0u;
label_1ba9d0:
    // 0x1ba9d0: 0xc06eea8  jal         func_1BBAA0
    ctx->pc = 0x1BA9D0u;
    SET_GPR_U32(ctx, 31, 0x1BA9D8u);
    ctx->pc = 0x1BBAA0u;
    if (runtime->hasFunction(0x1BBAA0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA9D8u; }
        if (ctx->pc != 0x1BA9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBAA0_0x1bbaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA9D8u; }
        if (ctx->pc != 0x1BA9D8u) { return; }
    }
    ctx->pc = 0x1BA9D8u;
label_1ba9d8:
    // 0x1ba9d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA9D8u;
    {
        const bool branch_taken_0x1ba9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA9D8u;
            // 0x1ba9dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9d8) {
            ctx->pc = 0x1BA9ECu;
            goto label_1ba9ec;
        }
    }
    ctx->pc = 0x1BA9E0u;
label_1ba9e0:
    // 0x1ba9e0: 0xc06f224  jal         func_1BC890
    ctx->pc = 0x1BA9E0u;
    SET_GPR_U32(ctx, 31, 0x1BA9E8u);
    ctx->pc = 0x1BC890u;
    if (runtime->hasFunction(0x1BC890u)) {
        auto targetFn = runtime->lookupFunction(0x1BC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA9E8u; }
        if (ctx->pc != 0x1BA9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC890_0x1bc890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA9E8u; }
        if (ctx->pc != 0x1BA9E8u) { return; }
    }
    ctx->pc = 0x1BA9E8u;
label_1ba9e8:
    // 0x1ba9e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba9ec:
    // 0x1ba9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA9ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA9ECu;
            // 0x1ba9f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA9F4u;
    // 0x1ba9f4: 0x0  nop
    ctx->pc = 0x1ba9f4u;
    // NOP
    // 0x1ba9f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba9fc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1ba9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1baa00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1baa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1baa04: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1baa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1baa08: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAA08u;
    {
        const bool branch_taken_0x1baa08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA08u;
            // 0x1baa0c: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa08) {
            ctx->pc = 0x1BAA20u;
            goto label_1baa20;
        }
    }
    ctx->pc = 0x1BAA10u;
    // 0x1baa10: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAA10u;
    {
        const bool branch_taken_0x1baa10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA10u;
            // 0x1baa14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa10) {
            ctx->pc = 0x1BAA30u;
            goto label_1baa30;
        }
    }
    ctx->pc = 0x1BAA18u;
    // 0x1baa18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAA18u;
    {
        const bool branch_taken_0x1baa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA18u;
            // 0x1baa1c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa18) {
            ctx->pc = 0x1BAA3Cu;
            goto label_1baa3c;
        }
    }
    ctx->pc = 0x1BAA20u;
label_1baa20:
    // 0x1baa20: 0xc06eeae  jal         func_1BBAB8
    ctx->pc = 0x1BAA20u;
    SET_GPR_U32(ctx, 31, 0x1BAA28u);
    ctx->pc = 0x1BBAB8u;
    if (runtime->hasFunction(0x1BBAB8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA28u; }
        if (ctx->pc != 0x1BAA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBAB8_0x1bbab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA28u; }
        if (ctx->pc != 0x1BAA28u) { return; }
    }
    ctx->pc = 0x1BAA28u;
label_1baa28:
    // 0x1baa28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAA28u;
    {
        const bool branch_taken_0x1baa28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA28u;
            // 0x1baa2c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa28) {
            ctx->pc = 0x1BAA3Cu;
            goto label_1baa3c;
        }
    }
    ctx->pc = 0x1BAA30u;
label_1baa30:
    // 0x1baa30: 0xc06f228  jal         func_1BC8A0
    ctx->pc = 0x1BAA30u;
    SET_GPR_U32(ctx, 31, 0x1BAA38u);
    ctx->pc = 0x1BC8A0u;
    if (runtime->hasFunction(0x1BC8A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BC8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA38u; }
        if (ctx->pc != 0x1BAA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC8A0_0x1bc8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA38u; }
        if (ctx->pc != 0x1BAA38u) { return; }
    }
    ctx->pc = 0x1BAA38u;
label_1baa38:
    // 0x1baa38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1baa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1baa3c:
    // 0x1baa3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA3Cu;
            // 0x1baa40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAA44u;
    // 0x1baa44: 0x0  nop
    ctx->pc = 0x1baa44u;
    // NOP
    // 0x1baa48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1baa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1baa4c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1baa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1baa50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1baa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1baa54: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1baa54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1baa58: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAA58u;
    {
        const bool branch_taken_0x1baa58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA58u;
            // 0x1baa5c: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa58) {
            ctx->pc = 0x1BAA70u;
            goto label_1baa70;
        }
    }
    ctx->pc = 0x1BAA60u;
    // 0x1baa60: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAA60u;
    {
        const bool branch_taken_0x1baa60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA60u;
            // 0x1baa64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa60) {
            ctx->pc = 0x1BAA80u;
            goto label_1baa80;
        }
    }
    ctx->pc = 0x1BAA68u;
    // 0x1baa68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAA68u;
    {
        const bool branch_taken_0x1baa68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA68u;
            // 0x1baa6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa68) {
            ctx->pc = 0x1BAA8Cu;
            goto label_1baa8c;
        }
    }
    ctx->pc = 0x1BAA70u;
label_1baa70:
    // 0x1baa70: 0xc06eeee  jal         func_1BBBB8
    ctx->pc = 0x1BAA70u;
    SET_GPR_U32(ctx, 31, 0x1BAA78u);
    ctx->pc = 0x1BBBB8u;
    if (runtime->hasFunction(0x1BBBB8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA78u; }
        if (ctx->pc != 0x1BAA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBBB8_0x1bbbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA78u; }
        if (ctx->pc != 0x1BAA78u) { return; }
    }
    ctx->pc = 0x1BAA78u;
label_1baa78:
    // 0x1baa78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAA78u;
    {
        const bool branch_taken_0x1baa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA78u;
            // 0x1baa7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa78) {
            ctx->pc = 0x1BAA8Cu;
            goto label_1baa8c;
        }
    }
    ctx->pc = 0x1BAA80u;
label_1baa80:
    // 0x1baa80: 0xc06f26c  jal         func_1BC9B0
    ctx->pc = 0x1BAA80u;
    SET_GPR_U32(ctx, 31, 0x1BAA88u);
    ctx->pc = 0x1BC9B0u;
    if (runtime->hasFunction(0x1BC9B0u)) {
        auto targetFn = runtime->lookupFunction(0x1BC9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA88u; }
        if (ctx->pc != 0x1BAA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC9B0_0x1bc9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA88u; }
        if (ctx->pc != 0x1BAA88u) { return; }
    }
    ctx->pc = 0x1BAA88u;
label_1baa88:
    // 0x1baa88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1baa88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1baa8c:
    // 0x1baa8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA8Cu;
            // 0x1baa90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAA94u;
    // 0x1baa94: 0x0  nop
    ctx->pc = 0x1baa94u;
    // NOP
}
