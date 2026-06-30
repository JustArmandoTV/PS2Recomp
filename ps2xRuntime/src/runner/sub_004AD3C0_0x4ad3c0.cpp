#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004AD3C0
// Address: 0x4ad3c0 - 0x4ad600
void sub_004AD3C0_0x4ad3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD3C0_0x4ad3c0");
#endif

    switch (ctx->pc) {
        case 0x4ad3dcu: goto label_4ad3dc;
        case 0x4ad3fcu: goto label_4ad3fc;
        case 0x4ad460u: goto label_4ad460;
        case 0x4ad480u: goto label_4ad480;
        case 0x4ad4dcu: goto label_4ad4dc;
        case 0x4ad518u: goto label_4ad518;
        case 0x4ad530u: goto label_4ad530;
        case 0x4ad590u: goto label_4ad590;
        case 0x4ad59cu: goto label_4ad59c;
        case 0x4ad5a8u: goto label_4ad5a8;
        case 0x4ad5b4u: goto label_4ad5b4;
        case 0x4ad5c0u: goto label_4ad5c0;
        case 0x4ad5ccu: goto label_4ad5cc;
        case 0x4ad5e4u: goto label_4ad5e4;
        default: break;
    }

    ctx->pc = 0x4ad3c0u;

    // 0x4ad3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ad3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ad3c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4ad3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4ad3c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ad3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ad3cc: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4ad3ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x4ad3d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ad3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4ad3d4: 0xc12b5b4  jal         func_4AD6D0
    ctx->pc = 0x4AD3D4u;
    SET_GPR_U32(ctx, 31, 0x4AD3DCu);
    ctx->pc = 0x4AD3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD3D4u;
            // 0x4ad3d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6D0u;
    if (runtime->hasFunction(0x4AD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x4AD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD3DCu; }
        if (ctx->pc != 0x4AD3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004AD6D0_0x4ad6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD3DCu; }
        if (ctx->pc != 0x4AD3DCu) { return; }
    }
    ctx->pc = 0x4AD3DCu;
label_4ad3dc:
    // 0x4ad3dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ad3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4ad3e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ad3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4ad3e4: 0x246304e0  addiu       $v1, $v1, 0x4E0
    ctx->pc = 0x4ad3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1248));
    // 0x4ad3e8: 0x24420518  addiu       $v0, $v0, 0x518
    ctx->pc = 0x4ad3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1304));
    // 0x4ad3ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ad3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ad3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ad3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad3f4: 0xc12b3cc  jal         func_4ACF30
    ctx->pc = 0x4AD3F4u;
    SET_GPR_U32(ctx, 31, 0x4AD3FCu);
    ctx->pc = 0x4AD3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD3F4u;
            // 0x4ad3f8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ACF30u;
    if (runtime->hasFunction(0x4ACF30u)) {
        auto targetFn = runtime->lookupFunction(0x4ACF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD3FCu; }
        if (ctx->pc != 0x4AD3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ACF30_0x4acf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD3FCu; }
        if (ctx->pc != 0x4AD3FCu) { return; }
    }
    ctx->pc = 0x4AD3FCu;
label_4ad3fc:
    // 0x4ad3fc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4ad3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4ad400: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ad400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4ad404: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ad404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4ad408: 0x24630580  addiu       $v1, $v1, 0x580
    ctx->pc = 0x4ad408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1408));
    // 0x4ad40c: 0x24420430  addiu       $v0, $v0, 0x430
    ctx->pc = 0x4ad40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
    // 0x4ad410: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x4ad410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x4ad414: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ad414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ad418: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ad418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4ad41c: 0x24420468  addiu       $v0, $v0, 0x468
    ctx->pc = 0x4ad41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1128));
    // 0x4ad420: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4ad420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4ad424: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ad424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4ad428: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4ad428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x4ad42c: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x4ad42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x4ad430: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ad430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4ad434: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x4ad434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x4ad438: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x4ad438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x4ad43c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ad43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4ad440: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x4ad440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x4ad444: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x4ad444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x4ad448: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4ad448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x4ad44c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ad44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4ad450: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x4ad450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
    // 0x4ad454: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4ad454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4ad458: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4AD458u;
    SET_GPR_U32(ctx, 31, 0x4AD460u);
    ctx->pc = 0x4AD45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD458u;
            // 0x4ad45c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD460u; }
        if (ctx->pc != 0x4AD460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD460u; }
        if (ctx->pc != 0x4AD460u) { return; }
    }
    ctx->pc = 0x4AD460u;
label_4ad460:
    // 0x4ad460: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x4ad460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x4ad464: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ad464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad468: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AD468u;
    {
        const bool branch_taken_0x4ad468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD468u;
            // 0x4ad46c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad468) {
            ctx->pc = 0x4AD484u;
            goto label_4ad484;
        }
    }
    ctx->pc = 0x4AD470u;
    // 0x4ad470: 0x3c0240d0  lui         $v0, 0x40D0
    ctx->pc = 0x4ad470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
    // 0x4ad474: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4ad474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4ad478: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x4AD478u;
    SET_GPR_U32(ctx, 31, 0x4AD480u);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD480u; }
        if (ctx->pc != 0x4AD480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD480u; }
        if (ctx->pc != 0x4AD480u) { return; }
    }
    ctx->pc = 0x4AD480u;
label_4ad480:
    // 0x4ad480: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ad480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ad484:
    // 0x4ad484: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x4ad484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x4ad488: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ad488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad48c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ad48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ad490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad494: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD494u;
            // 0x4ad498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AD49Cu;
    // 0x4ad49c: 0x0  nop
    ctx->pc = 0x4ad49cu;
    // NOP
    // 0x4ad4a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ad4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ad4a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ad4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ad4a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ad4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ad4ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ad4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4ad4b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad4b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad4b4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4AD4B4u;
    {
        const bool branch_taken_0x4ad4b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD4B4u;
            // 0x4ad4b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad4b4) {
            ctx->pc = 0x4AD518u;
            goto label_4ad518;
        }
    }
    ctx->pc = 0x4AD4BCu;
    // 0x4ad4bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ad4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4ad4c0: 0x24420580  addiu       $v0, $v0, 0x580
    ctx->pc = 0x4ad4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x4ad4c4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x4AD4C4u;
    {
        const bool branch_taken_0x4ad4c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD4C4u;
            // 0x4ad4c8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad4c4) {
            ctx->pc = 0x4AD500u;
            goto label_4ad500;
        }
    }
    ctx->pc = 0x4AD4CCu;
    // 0x4ad4cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ad4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4ad4d0: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x4ad4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x4ad4d4: 0xc0d37dc  jal         func_34DF70
    ctx->pc = 0x4AD4D4u;
    SET_GPR_U32(ctx, 31, 0x4AD4DCu);
    ctx->pc = 0x4AD4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD4D4u;
            // 0x4ad4d8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD4DCu; }
        if (ctx->pc != 0x4AD4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD4DCu; }
        if (ctx->pc != 0x4AD4DCu) { return; }
    }
    ctx->pc = 0x4AD4DCu;
label_4ad4dc:
    // 0x4ad4dc: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AD4DCu;
    {
        const bool branch_taken_0x4ad4dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad4dc) {
            ctx->pc = 0x4AD4E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD4DCu;
            // 0x4ad4e0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AD504u;
            goto label_4ad504;
        }
    }
    ctx->pc = 0x4AD4E4u;
    // 0x4ad4e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ad4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4ad4e8: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x4ad4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x4ad4ec: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD4ECu;
    {
        const bool branch_taken_0x4ad4ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD4ECu;
            // 0x4ad4f0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad4ec) {
            ctx->pc = 0x4AD500u;
            goto label_4ad500;
        }
    }
    ctx->pc = 0x4AD4F4u;
    // 0x4ad4f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ad4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4ad4f8: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4ad4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x4ad4fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ad4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4ad500:
    // 0x4ad500: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4ad500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4ad504:
    // 0x4ad504: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ad504u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4ad508: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD508u;
    {
        const bool branch_taken_0x4ad508 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ad508) {
            ctx->pc = 0x4AD50Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD508u;
            // 0x4ad50c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AD51Cu;
            goto label_4ad51c;
        }
    }
    ctx->pc = 0x4AD510u;
    // 0x4ad510: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4AD510u;
    SET_GPR_U32(ctx, 31, 0x4AD518u);
    ctx->pc = 0x4AD514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD510u;
            // 0x4ad514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD518u; }
        if (ctx->pc != 0x4AD518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD518u; }
        if (ctx->pc != 0x4AD518u) { return; }
    }
    ctx->pc = 0x4AD518u;
label_4ad518:
    // 0x4ad518: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ad518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ad51c:
    // 0x4ad51c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ad51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ad520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ad520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ad524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad528: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD528u;
            // 0x4ad52c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AD530u;
label_4ad530:
    // 0x4ad530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ad530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ad534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ad534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ad538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ad538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ad53c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ad53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4ad540: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad544: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4AD544u;
    {
        const bool branch_taken_0x4ad544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD544u;
            // 0x4ad548: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad544) {
            ctx->pc = 0x4AD5E4u;
            goto label_4ad5e4;
        }
    }
    ctx->pc = 0x4AD54Cu;
    // 0x4ad54c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ad54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4ad550: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ad550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4ad554: 0x246304e0  addiu       $v1, $v1, 0x4E0
    ctx->pc = 0x4ad554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1248));
    // 0x4ad558: 0x24420518  addiu       $v0, $v0, 0x518
    ctx->pc = 0x4ad558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1304));
    // 0x4ad55c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ad55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ad560: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4AD560u;
    {
        const bool branch_taken_0x4ad560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD560u;
            // 0x4ad564: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad560) {
            ctx->pc = 0x4AD5CCu;
            goto label_4ad5cc;
        }
    }
    ctx->pc = 0x4AD568u;
    // 0x4ad568: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ad568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4ad56c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ad56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4ad570: 0x24630490  addiu       $v1, $v1, 0x490
    ctx->pc = 0x4ad570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
    // 0x4ad574: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x4ad574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
    // 0x4ad578: 0x244204c8  addiu       $v0, $v0, 0x4C8
    ctx->pc = 0x4ad578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1224));
    // 0x4ad57c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ad57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ad580: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4ad580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4ad584: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4ad584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4ad588: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4AD588u;
    SET_GPR_U32(ctx, 31, 0x4AD590u);
    ctx->pc = 0x4AD58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD588u;
            // 0x4ad58c: 0x24a5c400  addiu       $a1, $a1, -0x3C00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD590u; }
        if (ctx->pc != 0x4AD590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD590u; }
        if (ctx->pc != 0x4AD590u) { return; }
    }
    ctx->pc = 0x4AD590u;
label_4ad590:
    // 0x4ad590: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4ad590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4ad594: 0xc0aeacc  jal         func_2BAB30
    ctx->pc = 0x4AD594u;
    SET_GPR_U32(ctx, 31, 0x4AD59Cu);
    ctx->pc = 0x4AD598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD594u;
            // 0x4ad598: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB30u;
    if (runtime->hasFunction(0x2BAB30u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD59Cu; }
        if (ctx->pc != 0x4AD59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB30_0x2bab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD59Cu; }
        if (ctx->pc != 0x4AD59Cu) { return; }
    }
    ctx->pc = 0x4AD59Cu;
label_4ad59c:
    // 0x4ad59c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4ad59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4ad5a0: 0xc12b598  jal         func_4AD660
    ctx->pc = 0x4AD5A0u;
    SET_GPR_U32(ctx, 31, 0x4AD5A8u);
    ctx->pc = 0x4AD5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD5A0u;
            // 0x4ad5a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AD660u;
    if (runtime->hasFunction(0x4AD660u)) {
        auto targetFn = runtime->lookupFunction(0x4AD660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD5A8u; }
        if (ctx->pc != 0x4AD5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004AD660_0x4ad660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD5A8u; }
        if (ctx->pc != 0x4AD5A8u) { return; }
    }
    ctx->pc = 0x4AD5A8u;
label_4ad5a8:
    // 0x4ad5a8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4ad5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4ad5ac: 0xc12b598  jal         func_4AD660
    ctx->pc = 0x4AD5ACu;
    SET_GPR_U32(ctx, 31, 0x4AD5B4u);
    ctx->pc = 0x4AD5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD5ACu;
            // 0x4ad5b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AD660u;
    if (runtime->hasFunction(0x4AD660u)) {
        auto targetFn = runtime->lookupFunction(0x4AD660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD5B4u; }
        if (ctx->pc != 0x4AD5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004AD660_0x4ad660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD5B4u; }
        if (ctx->pc != 0x4AD5B4u) { return; }
    }
    ctx->pc = 0x4AD5B4u;
label_4ad5b4:
    // 0x4ad5b4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4ad5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4ad5b8: 0xc12b580  jal         func_4AD600
    ctx->pc = 0x4AD5B8u;
    SET_GPR_U32(ctx, 31, 0x4AD5C0u);
    ctx->pc = 0x4AD5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD5B8u;
            // 0x4ad5bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AD600u;
    if (runtime->hasFunction(0x4AD600u)) {
        auto targetFn = runtime->lookupFunction(0x4AD600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD5C0u; }
        if (ctx->pc != 0x4AD5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004AD600_0x4ad600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD5C0u; }
        if (ctx->pc != 0x4AD5C0u) { return; }
    }
    ctx->pc = 0x4AD5C0u;
label_4ad5c0:
    // 0x4ad5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ad5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad5c4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4AD5C4u;
    SET_GPR_U32(ctx, 31, 0x4AD5CCu);
    ctx->pc = 0x4AD5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD5C4u;
            // 0x4ad5c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD5CCu; }
        if (ctx->pc != 0x4AD5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD5CCu; }
        if (ctx->pc != 0x4AD5CCu) { return; }
    }
    ctx->pc = 0x4AD5CCu;
label_4ad5cc:
    // 0x4ad5cc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4ad5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4ad5d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ad5d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4ad5d4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD5D4u;
    {
        const bool branch_taken_0x4ad5d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ad5d4) {
            ctx->pc = 0x4AD5D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD5D4u;
            // 0x4ad5d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AD5E8u;
            goto label_4ad5e8;
        }
    }
    ctx->pc = 0x4AD5DCu;
    // 0x4ad5dc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4AD5DCu;
    SET_GPR_U32(ctx, 31, 0x4AD5E4u);
    ctx->pc = 0x4AD5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD5DCu;
            // 0x4ad5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD5E4u; }
        if (ctx->pc != 0x4AD5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD5E4u; }
        if (ctx->pc != 0x4AD5E4u) { return; }
    }
    ctx->pc = 0x4AD5E4u;
label_4ad5e4:
    // 0x4ad5e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ad5e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ad5e8:
    // 0x4ad5e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ad5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ad5ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ad5ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad5f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ad5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD5F4u;
            // 0x4ad5f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AD5FCu;
    // 0x4ad5fc: 0x0  nop
    ctx->pc = 0x4ad5fcu;
    // NOP
}
