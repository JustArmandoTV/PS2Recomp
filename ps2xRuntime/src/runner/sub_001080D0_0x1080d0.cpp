#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001080D0
// Address: 0x1080d0 - 0x108380
void sub_001080D0_0x1080d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001080D0_0x1080d0");
#endif

    switch (ctx->pc) {
        case 0x1080f4u: goto label_1080f4;
        case 0x108124u: goto label_108124;
        case 0x108130u: goto label_108130;
        case 0x108154u: goto label_108154;
        case 0x108164u: goto label_108164;
        case 0x108188u: goto label_108188;
        case 0x1081acu: goto label_1081ac;
        case 0x1081b8u: goto label_1081b8;
        case 0x1081ccu: goto label_1081cc;
        case 0x1081d4u: goto label_1081d4;
        case 0x108218u: goto label_108218;
        case 0x108234u: goto label_108234;
        case 0x108248u: goto label_108248;
        case 0x108254u: goto label_108254;
        case 0x108264u: goto label_108264;
        case 0x10828cu: goto label_10828c;
        case 0x1082b0u: goto label_1082b0;
        case 0x1082b8u: goto label_1082b8;
        case 0x1082ccu: goto label_1082cc;
        case 0x1082d4u: goto label_1082d4;
        case 0x10831cu: goto label_10831c;
        case 0x108340u: goto label_108340;
        case 0x108354u: goto label_108354;
        case 0x10835cu: goto label_10835c;
        case 0x108364u: goto label_108364;
        default: break;
    }

    ctx->pc = 0x1080d0u;

    // 0x1080d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1080d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1080d4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1080d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1080d8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1080d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1080dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1080dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1080e0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1080e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1080e4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1080e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1080e8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1080e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1080ec: 0xc041a12  jal         func_106848
    ctx->pc = 0x1080ECu;
    SET_GPR_U32(ctx, 31, 0x1080F4u);
    ctx->pc = 0x1080F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1080ECu;
            // 0x1080f0: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1080F4u; }
        if (ctx->pc != 0x1080F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1080F4u; }
        if (ctx->pc != 0x1080F4u) { return; }
    }
    ctx->pc = 0x1080F4u;
label_1080f4:
    // 0x1080f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1080f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1080f8: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x1080f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1080fc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1080fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x108100: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x108100u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
    // 0x108104: 0xae230134  sw          $v1, 0x134($s1)
    ctx->pc = 0x108104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 3));
    // 0x108108: 0x28440af1  slti        $a0, $v0, 0xAF1
    ctx->pc = 0x108108u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2801) ? 1 : 0);
    // 0x10810c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10810Cu;
    {
        const bool branch_taken_0x10810c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x108110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10810Cu;
            // 0x108110: 0xae220138  sw          $v0, 0x138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10810c) {
            ctx->pc = 0x108124u;
            goto label_108124;
        }
    }
    ctx->pc = 0x108114u;
    // 0x108114: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x108114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x108118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10811c: 0xc042e16  jal         func_10B858
    ctx->pc = 0x10811Cu;
    SET_GPR_U32(ctx, 31, 0x108124u);
    ctx->pc = 0x108120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10811Cu;
            // 0x108120: 0x24a5e7e8  addiu       $a1, $a1, -0x1818 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108124u; }
        if (ctx->pc != 0x108124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B858_0x10b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108124u; }
        if (ctx->pc != 0x108124u) { return; }
    }
    ctx->pc = 0x108124u;
label_108124:
    // 0x108124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108128: 0xc041a12  jal         func_106848
    ctx->pc = 0x108128u;
    SET_GPR_U32(ctx, 31, 0x108130u);
    ctx->pc = 0x10812Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108128u;
            // 0x10812c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108130u; }
        if (ctx->pc != 0x108130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108130u; }
        if (ctx->pc != 0x108130u) { return; }
    }
    ctx->pc = 0x108130u;
label_108130:
    // 0x108130: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x108130u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108138: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x108138u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x10813c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10813cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108140: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x108140u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x108144: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x108144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x108148: 0xae230144  sw          $v1, 0x144($s1)
    ctx->pc = 0x108148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 3));
    // 0x10814c: 0xc041a12  jal         func_106848
    ctx->pc = 0x10814Cu;
    SET_GPR_U32(ctx, 31, 0x108154u);
    ctx->pc = 0x108150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10814Cu;
            // 0x108150: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108154u; }
        if (ctx->pc != 0x108154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108154u; }
        if (ctx->pc != 0x108154u) { return; }
    }
    ctx->pc = 0x108154u;
label_108154:
    // 0x108154: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x108154u;
    {
        const bool branch_taken_0x108154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108154u;
            // 0x108158: 0xae220850  sw          $v0, 0x850($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108154) {
            ctx->pc = 0x108190u;
            goto label_108190;
        }
    }
    ctx->pc = 0x10815Cu;
    // 0x10815c: 0xc0422e2  jal         func_108B88
    ctx->pc = 0x10815Cu;
    SET_GPR_U32(ctx, 31, 0x108164u);
    ctx->pc = 0x108160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10815Cu;
            // 0x108160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108B88u;
    if (runtime->hasFunction(0x108B88u)) {
        auto targetFn = runtime->lookupFunction(0x108B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108164u; }
        if (ctx->pc != 0x108164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108B88_0x108b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108164u; }
        if (ctx->pc != 0x108164u) { return; }
    }
    ctx->pc = 0x108164u;
label_108164:
    // 0x108164: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108168: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x108168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x10816c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10816cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x108170: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x108170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108174: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x108174u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x108178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10817c: 0xae23082c  sw          $v1, 0x82C($s1)
    ctx->pc = 0x10817cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 3));
    // 0x108180: 0xc0422e2  jal         func_108B88
    ctx->pc = 0x108180u;
    SET_GPR_U32(ctx, 31, 0x108188u);
    ctx->pc = 0x108184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108180u;
            // 0x108184: 0xae250828  sw          $a1, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108B88u;
    if (runtime->hasFunction(0x108B88u)) {
        auto targetFn = runtime->lookupFunction(0x108B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108188u; }
        if (ctx->pc != 0x108188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108B88_0x108b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108188u; }
        if (ctx->pc != 0x108188u) { return; }
    }
    ctx->pc = 0x108188u;
label_108188:
    // 0x108188: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x108188u;
    {
        const bool branch_taken_0x108188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10818Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108188u;
            // 0x10818c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108188) {
            ctx->pc = 0x10824Cu;
            goto label_10824c;
        }
    }
    ctx->pc = 0x108190u;
label_108190:
    // 0x108190: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x108190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108194: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x108194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x108198: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x108198u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x10819c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10819cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1081a0: 0x2610e240  addiu       $s0, $s0, -0x1DC0
    ctx->pc = 0x1081a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959680));
    // 0x1081a4: 0xc0427c0  jal         func_109F00
    ctx->pc = 0x1081A4u;
    SET_GPR_U32(ctx, 31, 0x1081ACu);
    ctx->pc = 0x1081A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1081A4u;
            // 0x1081a8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F00u;
    if (runtime->hasFunction(0x109F00u)) {
        auto targetFn = runtime->lookupFunction(0x109F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1081ACu; }
        if (ctx->pc != 0x1081ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F00_0x109f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1081ACu; }
        if (ctx->pc != 0x1081ACu) { return; }
    }
    ctx->pc = 0x1081ACu;
label_1081ac:
    // 0x1081ac: 0x3c125000  lui         $s2, 0x5000
    ctx->pc = 0x1081acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)20480 << 16));
    // 0x1081b0: 0xc0422e2  jal         func_108B88
    ctx->pc = 0x1081B0u;
    SET_GPR_U32(ctx, 31, 0x1081B8u);
    ctx->pc = 0x1081B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1081B0u;
            // 0x1081b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108B88u;
    if (runtime->hasFunction(0x108B88u)) {
        auto targetFn = runtime->lookupFunction(0x108B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1081B8u; }
        if (ctx->pc != 0x1081B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108B88_0x108b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1081B8u; }
        if (ctx->pc != 0x1081B8u) { return; }
    }
    ctx->pc = 0x1081B8u;
label_1081b8:
    // 0x1081b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1081b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1081bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1081bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1081c0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1081c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1081c4: 0xc0422e2  jal         func_108B88
    ctx->pc = 0x1081C4u;
    SET_GPR_U32(ctx, 31, 0x1081CCu);
    ctx->pc = 0x1081C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1081C4u;
            // 0x1081c8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108B88u;
    if (runtime->hasFunction(0x108B88u)) {
        auto targetFn = runtime->lookupFunction(0x108B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1081CCu; }
        if (ctx->pc != 0x1081CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108B88_0x108b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1081CCu; }
        if (ctx->pc != 0x1081CCu) { return; }
    }
    ctx->pc = 0x1081CCu;
label_1081cc:
    // 0x1081cc: 0xc045968  jal         func_1165A0
    ctx->pc = 0x1081CCu;
    SET_GPR_U32(ctx, 31, 0x1081D4u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1081D4u; }
        if (ctx->pc != 0x1081D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1081D4u; }
        if (ctx->pc != 0x1081D4u) { return; }
    }
    ctx->pc = 0x1081D4u;
label_1081d4:
    // 0x1081d4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1081d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1081d8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1081d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1081dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1081dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1081e0: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x1081e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46096);
    // 0x1081e4: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x1081e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1081e8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1081e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1081ec: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x1081ecu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x1081f0: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x1081f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x1081f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1081f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1081f8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1081f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1081fc: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1081fcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x108200: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x108200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x108204: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x108204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x108208: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108208u;
    {
        const bool branch_taken_0x108208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10820Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108208u;
            // 0x10820c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108208) {
            ctx->pc = 0x108218u;
            goto label_108218;
        }
    }
    ctx->pc = 0x108210u;
    // 0x108210: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x108210u;
    SET_GPR_U32(ctx, 31, 0x108218u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108218u; }
        if (ctx->pc != 0x108218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108218u; }
        if (ctx->pc != 0x108218u) { return; }
    }
    ctx->pc = 0x108218u;
label_108218:
    // 0x108218: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x108218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x10821c: 0xac322000  sw          $s2, 0x2000($at)
    ctx->pc = 0x10821cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 18)); // MMIO: 0x10002000
    // 0x108220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108224: 0xae32082c  sw          $s2, 0x82C($s1)
    ctx->pc = 0x108224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 18));
    // 0x108228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10822c: 0xc0422e2  jal         func_108B88
    ctx->pc = 0x10822Cu;
    SET_GPR_U32(ctx, 31, 0x108234u);
    ctx->pc = 0x108230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10822Cu;
            // 0x108230: 0xae220828  sw          $v0, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108B88u;
    if (runtime->hasFunction(0x108B88u)) {
        auto targetFn = runtime->lookupFunction(0x108B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108234u; }
        if (ctx->pc != 0x108234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108B88_0x108b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108234u; }
        if (ctx->pc != 0x108234u) { return; }
    }
    ctx->pc = 0x108234u;
label_108234:
    // 0x108234: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x108234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108238: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x108238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x10823c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10823cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x108240: 0xc0427c0  jal         func_109F00
    ctx->pc = 0x108240u;
    SET_GPR_U32(ctx, 31, 0x108248u);
    ctx->pc = 0x108244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108240u;
            // 0x108244: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F00u;
    if (runtime->hasFunction(0x109F00u)) {
        auto targetFn = runtime->lookupFunction(0x109F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108248u; }
        if (ctx->pc != 0x108248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F00_0x109f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108248u; }
        if (ctx->pc != 0x108248u) { return; }
    }
    ctx->pc = 0x108248u;
label_108248:
    // 0x108248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10824c:
    // 0x10824c: 0xc041a12  jal         func_106848
    ctx->pc = 0x10824Cu;
    SET_GPR_U32(ctx, 31, 0x108254u);
    ctx->pc = 0x108250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10824Cu;
            // 0x108250: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108254u; }
        if (ctx->pc != 0x108254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108254u; }
        if (ctx->pc != 0x108254u) { return; }
    }
    ctx->pc = 0x108254u;
label_108254:
    // 0x108254: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x108254u;
    {
        const bool branch_taken_0x108254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108254u;
            // 0x108258: 0xae220854  sw          $v0, 0x854($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108254) {
            ctx->pc = 0x108294u;
            goto label_108294;
        }
    }
    ctx->pc = 0x10825Cu;
    // 0x10825c: 0xc0422e2  jal         func_108B88
    ctx->pc = 0x10825Cu;
    SET_GPR_U32(ctx, 31, 0x108264u);
    ctx->pc = 0x108260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10825Cu;
            // 0x108260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108B88u;
    if (runtime->hasFunction(0x108B88u)) {
        auto targetFn = runtime->lookupFunction(0x108B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108264u; }
        if (ctx->pc != 0x108264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108B88_0x108b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108264u; }
        if (ctx->pc != 0x108264u) { return; }
    }
    ctx->pc = 0x108264u;
label_108264:
    // 0x108264: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108268: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x108268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x10826c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10826cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x108270: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x108270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x108274: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x108274u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x108278: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x108278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10827c: 0xae24082c  sw          $a0, 0x82C($s1)
    ctx->pc = 0x10827cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 4));
    // 0x108280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108284: 0xc0422e2  jal         func_108B88
    ctx->pc = 0x108284u;
    SET_GPR_U32(ctx, 31, 0x10828Cu);
    ctx->pc = 0x108288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108284u;
            // 0x108288: 0xae250828  sw          $a1, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108B88u;
    if (runtime->hasFunction(0x108B88u)) {
        auto targetFn = runtime->lookupFunction(0x108B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10828Cu; }
        if (ctx->pc != 0x10828Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108B88_0x108b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10828Cu; }
        if (ctx->pc != 0x10828Cu) { return; }
    }
    ctx->pc = 0x10828Cu;
label_10828c:
    // 0x10828c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x10828Cu;
    {
        const bool branch_taken_0x10828c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10828c) {
            ctx->pc = 0x108354u;
            goto label_108354;
        }
    }
    ctx->pc = 0x108294u;
label_108294:
    // 0x108294: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x108294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108298: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x108298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x10829c: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x10829cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x1082a0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1082a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1082a4: 0x2610e280  addiu       $s0, $s0, -0x1D80
    ctx->pc = 0x1082a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959744));
    // 0x1082a8: 0xc0427c0  jal         func_109F00
    ctx->pc = 0x1082A8u;
    SET_GPR_U32(ctx, 31, 0x1082B0u);
    ctx->pc = 0x1082ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1082A8u;
            // 0x1082ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F00u;
    if (runtime->hasFunction(0x109F00u)) {
        auto targetFn = runtime->lookupFunction(0x109F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1082B0u; }
        if (ctx->pc != 0x1082B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F00_0x109f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1082B0u; }
        if (ctx->pc != 0x1082B0u) { return; }
    }
    ctx->pc = 0x1082B0u;
label_1082b0:
    // 0x1082b0: 0xc0422e2  jal         func_108B88
    ctx->pc = 0x1082B0u;
    SET_GPR_U32(ctx, 31, 0x1082B8u);
    ctx->pc = 0x1082B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1082B0u;
            // 0x1082b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108B88u;
    if (runtime->hasFunction(0x108B88u)) {
        auto targetFn = runtime->lookupFunction(0x108B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1082B8u; }
        if (ctx->pc != 0x1082B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108B88_0x108b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1082B8u; }
        if (ctx->pc != 0x1082B8u) { return; }
    }
    ctx->pc = 0x1082B8u;
label_1082b8:
    // 0x1082b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1082b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1082bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1082bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082c0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1082c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1082c4: 0xc0422e2  jal         func_108B88
    ctx->pc = 0x1082C4u;
    SET_GPR_U32(ctx, 31, 0x1082CCu);
    ctx->pc = 0x1082C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1082C4u;
            // 0x1082c8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108B88u;
    if (runtime->hasFunction(0x108B88u)) {
        auto targetFn = runtime->lookupFunction(0x108B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1082CCu; }
        if (ctx->pc != 0x1082CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108B88_0x108b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1082CCu; }
        if (ctx->pc != 0x1082CCu) { return; }
    }
    ctx->pc = 0x1082CCu;
label_1082cc:
    // 0x1082cc: 0xc045968  jal         func_1165A0
    ctx->pc = 0x1082CCu;
    SET_GPR_U32(ctx, 31, 0x1082D4u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1082D4u; }
        if (ctx->pc != 0x1082D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1082D4u; }
        if (ctx->pc != 0x1082D4u) { return; }
    }
    ctx->pc = 0x1082D4u;
label_1082d4:
    // 0x1082d4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1082d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1082d8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1082d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1082dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1082dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1082e0: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x1082e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46096);
    // 0x1082e4: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x1082e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1082e8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1082e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1082ec: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x1082ecu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x1082f0: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x1082f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x1082f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1082f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1082f8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1082f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1082fc: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1082fcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x108300: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x108300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x108304: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x108304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x108308: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x108308u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x10830c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10830Cu;
    {
        const bool branch_taken_0x10830c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10830Cu;
            // 0x108310: 0x3c025800  lui         $v0, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10830c) {
            ctx->pc = 0x108320u;
            goto label_108320;
        }
    }
    ctx->pc = 0x108314u;
    // 0x108314: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x108314u;
    SET_GPR_U32(ctx, 31, 0x10831Cu);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10831Cu; }
        if (ctx->pc != 0x10831Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10831Cu; }
        if (ctx->pc != 0x10831Cu) { return; }
    }
    ctx->pc = 0x10831Cu;
label_10831c:
    // 0x10831c: 0x3c025800  lui         $v0, 0x5800
    ctx->pc = 0x10831cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
label_108320:
    // 0x108320: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x108320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x108324: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x108324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x108328: 0xac222000  sw          $v0, 0x2000($at)
    ctx->pc = 0x108328u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 2)); // MMIO: 0x10002000
    // 0x10832c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10832cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108334: 0xae23082c  sw          $v1, 0x82C($s1)
    ctx->pc = 0x108334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 3));
    // 0x108338: 0xc0422e2  jal         func_108B88
    ctx->pc = 0x108338u;
    SET_GPR_U32(ctx, 31, 0x108340u);
    ctx->pc = 0x10833Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108338u;
            // 0x10833c: 0xae220828  sw          $v0, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108B88u;
    if (runtime->hasFunction(0x108B88u)) {
        auto targetFn = runtime->lookupFunction(0x108B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108340u; }
        if (ctx->pc != 0x108340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108B88_0x108b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108340u; }
        if (ctx->pc != 0x108340u) { return; }
    }
    ctx->pc = 0x108340u;
label_108340:
    // 0x108340: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x108340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108344: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x108344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x108348: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x108348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10834c: 0xc0427c0  jal         func_109F00
    ctx->pc = 0x10834Cu;
    SET_GPR_U32(ctx, 31, 0x108354u);
    ctx->pc = 0x108350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10834Cu;
            // 0x108350: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F00u;
    if (runtime->hasFunction(0x109F00u)) {
        auto targetFn = runtime->lookupFunction(0x109F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108354u; }
        if (ctx->pc != 0x108354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F00_0x109f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108354u; }
        if (ctx->pc != 0x108354u) { return; }
    }
    ctx->pc = 0x108354u;
label_108354:
    // 0x108354: 0xc04226e  jal         func_1089B8
    ctx->pc = 0x108354u;
    SET_GPR_U32(ctx, 31, 0x10835Cu);
    ctx->pc = 0x108358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108354u;
            // 0x108358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1089B8u;
    if (runtime->hasFunction(0x1089B8u)) {
        auto targetFn = runtime->lookupFunction(0x1089B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10835Cu; }
        if (ctx->pc != 0x10835Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001089B8_0x1089b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10835Cu; }
        if (ctx->pc != 0x10835Cu) { return; }
    }
    ctx->pc = 0x10835Cu;
label_10835c:
    // 0x10835c: 0xc041f6e  jal         func_107DB8
    ctx->pc = 0x10835Cu;
    SET_GPR_U32(ctx, 31, 0x108364u);
    ctx->pc = 0x108360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10835Cu;
            // 0x108360: 0x8e240868  lw          $a0, 0x868($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107DB8u;
    if (runtime->hasFunction(0x107DB8u)) {
        auto targetFn = runtime->lookupFunction(0x107DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108364u; }
        if (ctx->pc != 0x108364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107DB8_0x107db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108364u; }
        if (ctx->pc != 0x108364u) { return; }
    }
    ctx->pc = 0x108364u;
label_108364:
    // 0x108364: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x108364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108368: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x108368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10836c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10836cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108370: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x108370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108374: 0x3e00008  jr          $ra
    ctx->pc = 0x108374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108374u;
            // 0x108378: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10837Cu;
    // 0x10837c: 0x0  nop
    ctx->pc = 0x10837cu;
    // NOP
}
