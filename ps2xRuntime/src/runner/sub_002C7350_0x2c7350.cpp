#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C7350
// Address: 0x2c7350 - 0x2c7450
void sub_002C7350_0x2c7350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7350_0x2c7350");
#endif

    switch (ctx->pc) {
        case 0x2c7350u: goto label_2c7350;
        case 0x2c7354u: goto label_2c7354;
        case 0x2c7358u: goto label_2c7358;
        case 0x2c735cu: goto label_2c735c;
        case 0x2c7360u: goto label_2c7360;
        case 0x2c7364u: goto label_2c7364;
        case 0x2c7368u: goto label_2c7368;
        case 0x2c736cu: goto label_2c736c;
        case 0x2c7370u: goto label_2c7370;
        case 0x2c7374u: goto label_2c7374;
        case 0x2c7378u: goto label_2c7378;
        case 0x2c737cu: goto label_2c737c;
        case 0x2c7380u: goto label_2c7380;
        case 0x2c7384u: goto label_2c7384;
        case 0x2c7388u: goto label_2c7388;
        case 0x2c738cu: goto label_2c738c;
        case 0x2c7390u: goto label_2c7390;
        case 0x2c7394u: goto label_2c7394;
        case 0x2c7398u: goto label_2c7398;
        case 0x2c739cu: goto label_2c739c;
        case 0x2c73a0u: goto label_2c73a0;
        case 0x2c73a4u: goto label_2c73a4;
        case 0x2c73a8u: goto label_2c73a8;
        case 0x2c73acu: goto label_2c73ac;
        case 0x2c73b0u: goto label_2c73b0;
        case 0x2c73b4u: goto label_2c73b4;
        case 0x2c73b8u: goto label_2c73b8;
        case 0x2c73bcu: goto label_2c73bc;
        case 0x2c73c0u: goto label_2c73c0;
        case 0x2c73c4u: goto label_2c73c4;
        case 0x2c73c8u: goto label_2c73c8;
        case 0x2c73ccu: goto label_2c73cc;
        case 0x2c73d0u: goto label_2c73d0;
        case 0x2c73d4u: goto label_2c73d4;
        case 0x2c73d8u: goto label_2c73d8;
        case 0x2c73dcu: goto label_2c73dc;
        case 0x2c73e0u: goto label_2c73e0;
        case 0x2c73e4u: goto label_2c73e4;
        case 0x2c73e8u: goto label_2c73e8;
        case 0x2c73ecu: goto label_2c73ec;
        case 0x2c73f0u: goto label_2c73f0;
        case 0x2c73f4u: goto label_2c73f4;
        case 0x2c73f8u: goto label_2c73f8;
        case 0x2c73fcu: goto label_2c73fc;
        case 0x2c7400u: goto label_2c7400;
        case 0x2c7404u: goto label_2c7404;
        case 0x2c7408u: goto label_2c7408;
        case 0x2c740cu: goto label_2c740c;
        case 0x2c7410u: goto label_2c7410;
        case 0x2c7414u: goto label_2c7414;
        case 0x2c7418u: goto label_2c7418;
        case 0x2c741cu: goto label_2c741c;
        case 0x2c7420u: goto label_2c7420;
        case 0x2c7424u: goto label_2c7424;
        case 0x2c7428u: goto label_2c7428;
        case 0x2c742cu: goto label_2c742c;
        case 0x2c7430u: goto label_2c7430;
        case 0x2c7434u: goto label_2c7434;
        case 0x2c7438u: goto label_2c7438;
        case 0x2c743cu: goto label_2c743c;
        case 0x2c7440u: goto label_2c7440;
        case 0x2c7444u: goto label_2c7444;
        case 0x2c7448u: goto label_2c7448;
        case 0x2c744cu: goto label_2c744c;
        default: break;
    }

    ctx->pc = 0x2c7350u;

label_2c7350:
    // 0x2c7350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c7350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c7354:
    // 0x2c7354: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c7354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c7358:
    // 0x2c7358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c7358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c735c:
    // 0x2c735c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c735cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c7360:
    // 0x2c7360: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c7360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7364:
    // 0x2c7364: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_2c7368:
    if (ctx->pc == 0x2C7368u) {
        ctx->pc = 0x2C7368u;
            // 0x2c7368: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C736Cu;
        goto label_2c736c;
    }
    ctx->pc = 0x2C7364u;
    {
        const bool branch_taken_0x2c7364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7364u;
            // 0x2c7368: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7364) {
            ctx->pc = 0x2C739Cu;
            goto label_2c739c;
        }
    }
    ctx->pc = 0x2C736Cu;
label_2c736c:
    // 0x2c736c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c736cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2c7370:
    // 0x2c7370: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2c7374:
    if (ctx->pc == 0x2C7374u) {
        ctx->pc = 0x2C7374u;
            // 0x2c7374: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C7378u;
        goto label_2c7378;
    }
    ctx->pc = 0x2C7370u;
    {
        const bool branch_taken_0x2c7370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7370) {
            ctx->pc = 0x2C7374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7370u;
            // 0x2c7374: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7388u;
            goto label_2c7388;
        }
    }
    ctx->pc = 0x2C7378u;
label_2c7378:
    // 0x2c7378: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2c7378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2c737c:
    // 0x2c737c: 0xc0407c0  jal         func_101F00
label_2c7380:
    if (ctx->pc == 0x2C7380u) {
        ctx->pc = 0x2C7380u;
            // 0x2c7380: 0x24a53260  addiu       $a1, $a1, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
        ctx->pc = 0x2C7384u;
        goto label_2c7384;
    }
    ctx->pc = 0x2C737Cu;
    SET_GPR_U32(ctx, 31, 0x2C7384u);
    ctx->pc = 0x2C7380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C737Cu;
            // 0x2c7380: 0x24a53260  addiu       $a1, $a1, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7384u; }
        if (ctx->pc != 0x2C7384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7384u; }
        if (ctx->pc != 0x2C7384u) { return; }
    }
    ctx->pc = 0x2C7384u;
label_2c7384:
    // 0x2c7384: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c7384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c7388:
    // 0x2c7388: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c7388u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c738c:
    // 0x2c738c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2c7390:
    if (ctx->pc == 0x2C7390u) {
        ctx->pc = 0x2C7390u;
            // 0x2c7390: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x2C7394u;
        goto label_2c7394;
    }
    ctx->pc = 0x2C738Cu;
    {
        const bool branch_taken_0x2c738c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C7390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C738Cu;
            // 0x2c7390: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c738c) {
            ctx->pc = 0x2C739Cu;
            goto label_2c739c;
        }
    }
    ctx->pc = 0x2C7394u;
label_2c7394:
    // 0x2c7394: 0xc0400a8  jal         func_1002A0
label_2c7398:
    if (ctx->pc == 0x2C7398u) {
        ctx->pc = 0x2C7398u;
            // 0x2c7398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C739Cu;
        goto label_2c739c;
    }
    ctx->pc = 0x2C7394u;
    SET_GPR_U32(ctx, 31, 0x2C739Cu);
    ctx->pc = 0x2C7398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7394u;
            // 0x2c7398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C739Cu; }
        if (ctx->pc != 0x2C739Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C739Cu; }
        if (ctx->pc != 0x2C739Cu) { return; }
    }
    ctx->pc = 0x2C739Cu;
label_2c739c:
    // 0x2c739c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c739cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c73a0:
    // 0x2c73a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c73a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c73a4:
    // 0x2c73a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c73a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c73a8:
    // 0x2c73a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c73a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c73ac:
    // 0x2c73ac: 0x3e00008  jr          $ra
label_2c73b0:
    if (ctx->pc == 0x2C73B0u) {
        ctx->pc = 0x2C73B0u;
            // 0x2c73b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C73B4u;
        goto label_2c73b4;
    }
    ctx->pc = 0x2C73ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C73B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C73ACu;
            // 0x2c73b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C73B4u;
label_2c73b4:
    // 0x2c73b4: 0x0  nop
    ctx->pc = 0x2c73b4u;
    // NOP
label_2c73b8:
    // 0x2c73b8: 0x0  nop
    ctx->pc = 0x2c73b8u;
    // NOP
label_2c73bc:
    // 0x2c73bc: 0x0  nop
    ctx->pc = 0x2c73bcu;
    // NOP
label_2c73c0:
    // 0x2c73c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c73c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c73c4:
    // 0x2c73c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c73c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c73c8:
    // 0x2c73c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c73c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c73cc:
    // 0x2c73cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c73ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c73d0:
    // 0x2c73d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c73d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c73d4:
    // 0x2c73d4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_2c73d8:
    if (ctx->pc == 0x2C73D8u) {
        ctx->pc = 0x2C73D8u;
            // 0x2c73d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C73DCu;
        goto label_2c73dc;
    }
    ctx->pc = 0x2C73D4u;
    {
        const bool branch_taken_0x2c73d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C73D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C73D4u;
            // 0x2c73d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c73d4) {
            ctx->pc = 0x2C7434u;
            goto label_2c7434;
        }
    }
    ctx->pc = 0x2C73DCu;
label_2c73dc:
    // 0x2c73dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c73dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c73e0:
    // 0x2c73e0: 0x24423e70  addiu       $v0, $v0, 0x3E70
    ctx->pc = 0x2c73e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15984));
label_2c73e4:
    // 0x2c73e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c73e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c73e8:
    // 0x2c73e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c73e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c73ec:
    // 0x2c73ec: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c73ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c73f0:
    // 0x2c73f0: 0x320f809  jalr        $t9
label_2c73f4:
    if (ctx->pc == 0x2C73F4u) {
        ctx->pc = 0x2C73F8u;
        goto label_2c73f8;
    }
    ctx->pc = 0x2C73F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C73F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C73F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C73F8u; }
            if (ctx->pc != 0x2C73F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2C73F8u;
label_2c73f8:
    // 0x2c73f8: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2c73fc:
    if (ctx->pc == 0x2C73FCu) {
        ctx->pc = 0x2C73FCu;
            // 0x2c73fc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C7400u;
        goto label_2c7400;
    }
    ctx->pc = 0x2C73F8u;
    {
        const bool branch_taken_0x2c73f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c73f8) {
            ctx->pc = 0x2C73FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C73F8u;
            // 0x2c73fc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7420u;
            goto label_2c7420;
        }
    }
    ctx->pc = 0x2C7400u;
label_2c7400:
    // 0x2c7400: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c7404:
    // 0x2c7404: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2c7404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2c7408:
    // 0x2c7408: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2c740c:
    if (ctx->pc == 0x2C740Cu) {
        ctx->pc = 0x2C740Cu;
            // 0x2c740c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C7410u;
        goto label_2c7410;
    }
    ctx->pc = 0x2C7408u;
    {
        const bool branch_taken_0x2c7408 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C740Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7408u;
            // 0x2c740c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7408) {
            ctx->pc = 0x2C741Cu;
            goto label_2c741c;
        }
    }
    ctx->pc = 0x2C7410u;
label_2c7410:
    // 0x2c7410: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c7414:
    // 0x2c7414: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c7414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c7418:
    // 0x2c7418: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c7418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c741c:
    // 0x2c741c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c741cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c7420:
    // 0x2c7420: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c7420u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c7424:
    // 0x2c7424: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c7428:
    if (ctx->pc == 0x2C7428u) {
        ctx->pc = 0x2C7428u;
            // 0x2c7428: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C742Cu;
        goto label_2c742c;
    }
    ctx->pc = 0x2C7424u;
    {
        const bool branch_taken_0x2c7424 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c7424) {
            ctx->pc = 0x2C7428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7424u;
            // 0x2c7428: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7438u;
            goto label_2c7438;
        }
    }
    ctx->pc = 0x2C742Cu;
label_2c742c:
    // 0x2c742c: 0xc0400a8  jal         func_1002A0
label_2c7430:
    if (ctx->pc == 0x2C7430u) {
        ctx->pc = 0x2C7430u;
            // 0x2c7430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7434u;
        goto label_2c7434;
    }
    ctx->pc = 0x2C742Cu;
    SET_GPR_U32(ctx, 31, 0x2C7434u);
    ctx->pc = 0x2C7430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C742Cu;
            // 0x2c7430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7434u; }
        if (ctx->pc != 0x2C7434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7434u; }
        if (ctx->pc != 0x2C7434u) { return; }
    }
    ctx->pc = 0x2C7434u;
label_2c7434:
    // 0x2c7434: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c7434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7438:
    // 0x2c7438: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c7438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c743c:
    // 0x2c743c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c743cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7440:
    // 0x2c7440: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7444:
    // 0x2c7444: 0x3e00008  jr          $ra
label_2c7448:
    if (ctx->pc == 0x2C7448u) {
        ctx->pc = 0x2C7448u;
            // 0x2c7448: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C744Cu;
        goto label_2c744c;
    }
    ctx->pc = 0x2C7444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7444u;
            // 0x2c7448: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C744Cu;
label_2c744c:
    // 0x2c744c: 0x0  nop
    ctx->pc = 0x2c744cu;
    // NOP
}
