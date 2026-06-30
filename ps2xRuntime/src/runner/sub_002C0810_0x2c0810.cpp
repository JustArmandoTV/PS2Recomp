#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C0810
// Address: 0x2c0810 - 0x2c0950
void sub_002C0810_0x2c0810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0810_0x2c0810");
#endif

    switch (ctx->pc) {
        case 0x2c082cu: goto label_2c082c;
        case 0x2c084cu: goto label_2c084c;
        case 0x2c0880u: goto label_2c0880;
        case 0x2c08e0u: goto label_2c08e0;
        case 0x2c08ecu: goto label_2c08ec;
        case 0x2c08f8u: goto label_2c08f8;
        case 0x2c0904u: goto label_2c0904;
        case 0x2c0910u: goto label_2c0910;
        case 0x2c091cu: goto label_2c091c;
        case 0x2c0934u: goto label_2c0934;
        default: break;
    }

    ctx->pc = 0x2c0810u;

    // 0x2c0810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c0810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c0814: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c0814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2c0818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c0818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c081c: 0x3446869f  ori         $a2, $v0, 0x869F
    ctx->pc = 0x2c081cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
    // 0x2c0820: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c0820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c0824: 0xc0b0328  jal         func_2C0CA0
    ctx->pc = 0x2C0824u;
    SET_GPR_U32(ctx, 31, 0x2C082Cu);
    ctx->pc = 0x2C0828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0824u;
            // 0x2c0828: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0CA0u;
    if (runtime->hasFunction(0x2C0CA0u)) {
        auto targetFn = runtime->lookupFunction(0x2C0CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C082Cu; }
        if (ctx->pc != 0x2C082Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0CA0_0x2c0ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C082Cu; }
        if (ctx->pc != 0x2C082Cu) { return; }
    }
    ctx->pc = 0x2C082Cu;
label_2c082c:
    // 0x2c082c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c082cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c0830: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c0830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c0834: 0x24631810  addiu       $v1, $v1, 0x1810
    ctx->pc = 0x2c0834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6160));
    // 0x2c0838: 0x24421848  addiu       $v0, $v0, 0x1848
    ctx->pc = 0x2c0838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6216));
    // 0x2c083c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c083cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c0840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0844: 0xc0b0324  jal         func_2C0C90
    ctx->pc = 0x2C0844u;
    SET_GPR_U32(ctx, 31, 0x2C084Cu);
    ctx->pc = 0x2C0848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0844u;
            // 0x2c0848: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0C90u;
    if (runtime->hasFunction(0x2C0C90u)) {
        auto targetFn = runtime->lookupFunction(0x2C0C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C084Cu; }
        if (ctx->pc != 0x2C084Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0C90_0x2c0c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C084Cu; }
        if (ctx->pc != 0x2C084Cu) { return; }
    }
    ctx->pc = 0x2C084Cu;
label_2c084c:
    // 0x2c084c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2c084cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c0850: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c0850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2c0854: 0x2442a2f0  addiu       $v0, $v0, -0x5D10
    ctx->pc = 0x2c0854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943472));
    // 0x2c0858: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c0858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c085c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c085cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2c0860: 0x2442a328  addiu       $v0, $v0, -0x5CD8
    ctx->pc = 0x2c0860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943528));
    // 0x2c0864: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c0864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c0868: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c0868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c086c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c086cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c0870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0874: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0874u;
            // 0x2c0878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C087Cu;
    // 0x2c087c: 0x0  nop
    ctx->pc = 0x2c087cu;
    // NOP
label_2c0880:
    // 0x2c0880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c0880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c0884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c0884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c0888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c0888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c088c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c088cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c0890: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c0890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0894: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C0894u;
    {
        const bool branch_taken_0x2c0894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0894u;
            // 0x2c0898: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0894) {
            ctx->pc = 0x2C0934u;
            goto label_2c0934;
        }
    }
    ctx->pc = 0x2C089Cu;
    // 0x2c089c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c089cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c08a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c08a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c08a4: 0x24631810  addiu       $v1, $v1, 0x1810
    ctx->pc = 0x2c08a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6160));
    // 0x2c08a8: 0x24421848  addiu       $v0, $v0, 0x1848
    ctx->pc = 0x2c08a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6216));
    // 0x2c08ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c08acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c08b0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C08B0u;
    {
        const bool branch_taken_0x2c08b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C08B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C08B0u;
            // 0x2c08b4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c08b0) {
            ctx->pc = 0x2C091Cu;
            goto label_2c091c;
        }
    }
    ctx->pc = 0x2C08B8u;
    // 0x2c08b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c08b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c08bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c08bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c08c0: 0x246317c0  addiu       $v1, $v1, 0x17C0
    ctx->pc = 0x2c08c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6080));
    // 0x2c08c4: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c08c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c08c8: 0x244217f8  addiu       $v0, $v0, 0x17F8
    ctx->pc = 0x2c08c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6136));
    // 0x2c08cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c08ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c08d0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c08d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c08d4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2c08d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c08d8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2C08D8u;
    SET_GPR_U32(ctx, 31, 0x2C08E0u);
    ctx->pc = 0x2C08DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C08D8u;
            // 0x2c08dc: 0x24a50a20  addiu       $a1, $a1, 0xA20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08E0u; }
        if (ctx->pc != 0x2C08E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08E0u; }
        if (ctx->pc != 0x2C08E0u) { return; }
    }
    ctx->pc = 0x2C08E0u;
label_2c08e0:
    // 0x2c08e0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2c08e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2c08e4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x2C08E4u;
    SET_GPR_U32(ctx, 31, 0x2C08ECu);
    ctx->pc = 0x2C08E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C08E4u;
            // 0x2c08e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08ECu; }
        if (ctx->pc != 0x2C08ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08ECu; }
        if (ctx->pc != 0x2C08ECu) { return; }
    }
    ctx->pc = 0x2C08ECu;
label_2c08ec:
    // 0x2c08ec: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2c08ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2c08f0: 0xc0b026c  jal         func_2C09B0
    ctx->pc = 0x2C08F0u;
    SET_GPR_U32(ctx, 31, 0x2C08F8u);
    ctx->pc = 0x2C08F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C08F0u;
            // 0x2c08f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C09B0u;
    if (runtime->hasFunction(0x2C09B0u)) {
        auto targetFn = runtime->lookupFunction(0x2C09B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08F8u; }
        if (ctx->pc != 0x2C08F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C09B0_0x2c09b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08F8u; }
        if (ctx->pc != 0x2C08F8u) { return; }
    }
    ctx->pc = 0x2C08F8u;
label_2c08f8:
    // 0x2c08f8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c08f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2c08fc: 0xc0b026c  jal         func_2C09B0
    ctx->pc = 0x2C08FCu;
    SET_GPR_U32(ctx, 31, 0x2C0904u);
    ctx->pc = 0x2C0900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C08FCu;
            // 0x2c0900: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C09B0u;
    if (runtime->hasFunction(0x2C09B0u)) {
        auto targetFn = runtime->lookupFunction(0x2C09B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0904u; }
        if (ctx->pc != 0x2C0904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C09B0_0x2c09b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0904u; }
        if (ctx->pc != 0x2C0904u) { return; }
    }
    ctx->pc = 0x2C0904u;
label_2c0904:
    // 0x2c0904: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2c0904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2c0908: 0xc0b0254  jal         func_2C0950
    ctx->pc = 0x2C0908u;
    SET_GPR_U32(ctx, 31, 0x2C0910u);
    ctx->pc = 0x2C090Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0908u;
            // 0x2c090c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0950u;
    if (runtime->hasFunction(0x2C0950u)) {
        auto targetFn = runtime->lookupFunction(0x2C0950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0910u; }
        if (ctx->pc != 0x2C0910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0950_0x2c0950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0910u; }
        if (ctx->pc != 0x2C0910u) { return; }
    }
    ctx->pc = 0x2C0910u;
label_2c0910:
    // 0x2c0910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0914: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2C0914u;
    SET_GPR_U32(ctx, 31, 0x2C091Cu);
    ctx->pc = 0x2C0918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0914u;
            // 0x2c0918: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C091Cu; }
        if (ctx->pc != 0x2C091Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C091Cu; }
        if (ctx->pc != 0x2C091Cu) { return; }
    }
    ctx->pc = 0x2C091Cu;
label_2c091c:
    // 0x2c091c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c091cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2c0920: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c0920u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c0924: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0924u;
    {
        const bool branch_taken_0x2c0924 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c0924) {
            ctx->pc = 0x2C0928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0924u;
            // 0x2c0928: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0938u;
            goto label_2c0938;
        }
    }
    ctx->pc = 0x2C092Cu;
    // 0x2c092c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C092Cu;
    SET_GPR_U32(ctx, 31, 0x2C0934u);
    ctx->pc = 0x2C0930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C092Cu;
            // 0x2c0930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0934u; }
        if (ctx->pc != 0x2C0934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0934u; }
        if (ctx->pc != 0x2C0934u) { return; }
    }
    ctx->pc = 0x2C0934u;
label_2c0934:
    // 0x2c0934: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c0934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c0938:
    // 0x2c0938: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c0938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c093c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c093cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0940: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c0940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0944: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0944u;
            // 0x2c0948: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C094Cu;
    // 0x2c094c: 0x0  nop
    ctx->pc = 0x2c094cu;
    // NOP
}
