#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037D5E0
// Address: 0x37d5e0 - 0x37d720
void sub_0037D5E0_0x37d5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D5E0_0x37d5e0");
#endif

    switch (ctx->pc) {
        case 0x37d5fcu: goto label_37d5fc;
        case 0x37d61cu: goto label_37d61c;
        case 0x37d650u: goto label_37d650;
        case 0x37d6b0u: goto label_37d6b0;
        case 0x37d6bcu: goto label_37d6bc;
        case 0x37d6c8u: goto label_37d6c8;
        case 0x37d6d4u: goto label_37d6d4;
        case 0x37d6e0u: goto label_37d6e0;
        case 0x37d6ecu: goto label_37d6ec;
        case 0x37d704u: goto label_37d704;
        default: break;
    }

    ctx->pc = 0x37d5e0u;

    // 0x37d5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37d5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37d5e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x37d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x37d5e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37d5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37d5ec: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x37d5ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x37d5f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37d5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37d5f4: 0xc0df600  jal         func_37D800
    ctx->pc = 0x37D5F4u;
    SET_GPR_U32(ctx, 31, 0x37D5FCu);
    ctx->pc = 0x37D5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D5F4u;
            // 0x37d5f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37D800u;
    if (runtime->hasFunction(0x37D800u)) {
        auto targetFn = runtime->lookupFunction(0x37D800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D5FCu; }
        if (ctx->pc != 0x37D5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037D800_0x37d800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D5FCu; }
        if (ctx->pc != 0x37D5FCu) { return; }
    }
    ctx->pc = 0x37D5FCu;
label_37d5fc:
    // 0x37d5fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x37d600: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37d600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x37d604: 0x24637600  addiu       $v1, $v1, 0x7600
    ctx->pc = 0x37d604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30208));
    // 0x37d608: 0x24427638  addiu       $v0, $v0, 0x7638
    ctx->pc = 0x37d608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30264));
    // 0x37d60c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37d60cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x37d610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37d610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d614: 0xc0df5fc  jal         func_37D7F0
    ctx->pc = 0x37D614u;
    SET_GPR_U32(ctx, 31, 0x37D61Cu);
    ctx->pc = 0x37D618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D614u;
            // 0x37d618: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37D7F0u;
    if (runtime->hasFunction(0x37D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x37D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D61Cu; }
        if (ctx->pc != 0x37D61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037D7F0_0x37d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D61Cu; }
        if (ctx->pc != 0x37D61Cu) { return; }
    }
    ctx->pc = 0x37D61Cu;
label_37d61c:
    // 0x37d61c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x37d61cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x37d620: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37d620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x37d624: 0x24427510  addiu       $v0, $v0, 0x7510
    ctx->pc = 0x37d624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29968));
    // 0x37d628: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37d628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37d62c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x37d630: 0x24427548  addiu       $v0, $v0, 0x7548
    ctx->pc = 0x37d630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30024));
    // 0x37d634: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x37d634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x37d638: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37d638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d63c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37d63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37d640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d644: 0x3e00008  jr          $ra
    ctx->pc = 0x37D644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D644u;
            // 0x37d648: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37D64Cu;
    // 0x37d64c: 0x0  nop
    ctx->pc = 0x37d64cu;
    // NOP
label_37d650:
    // 0x37d650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37d650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37d654: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37d654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37d658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37d658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37d65c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37d65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37d660: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37d660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d664: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x37D664u;
    {
        const bool branch_taken_0x37d664 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D664u;
            // 0x37d668: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d664) {
            ctx->pc = 0x37D704u;
            goto label_37d704;
        }
    }
    ctx->pc = 0x37D66Cu;
    // 0x37d66c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37d66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x37d670: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37d670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x37d674: 0x24637600  addiu       $v1, $v1, 0x7600
    ctx->pc = 0x37d674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30208));
    // 0x37d678: 0x24427638  addiu       $v0, $v0, 0x7638
    ctx->pc = 0x37d678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30264));
    // 0x37d67c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37d67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x37d680: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x37D680u;
    {
        const bool branch_taken_0x37d680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D680u;
            // 0x37d684: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d680) {
            ctx->pc = 0x37D6ECu;
            goto label_37d6ec;
        }
    }
    ctx->pc = 0x37D688u;
    // 0x37d688: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37d688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x37d68c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x37d690: 0x246375b0  addiu       $v1, $v1, 0x75B0
    ctx->pc = 0x37d690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30128));
    // 0x37d694: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x37d694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x37d698: 0x244275e8  addiu       $v0, $v0, 0x75E8
    ctx->pc = 0x37d698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30184));
    // 0x37d69c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37d69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x37d6a0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x37d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x37d6a4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x37d6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x37d6a8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x37D6A8u;
    SET_GPR_U32(ctx, 31, 0x37D6B0u);
    ctx->pc = 0x37D6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D6A8u;
            // 0x37d6ac: 0x24a5cad0  addiu       $a1, $a1, -0x3530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D6B0u; }
        if (ctx->pc != 0x37D6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D6B0u; }
        if (ctx->pc != 0x37D6B0u) { return; }
    }
    ctx->pc = 0x37D6B0u;
label_37d6b0:
    // 0x37d6b0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x37d6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x37d6b4: 0xc0aeacc  jal         func_2BAB30
    ctx->pc = 0x37D6B4u;
    SET_GPR_U32(ctx, 31, 0x37D6BCu);
    ctx->pc = 0x37D6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D6B4u;
            // 0x37d6b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB30u;
    if (runtime->hasFunction(0x2BAB30u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D6BCu; }
        if (ctx->pc != 0x37D6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB30_0x2bab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D6BCu; }
        if (ctx->pc != 0x37D6BCu) { return; }
    }
    ctx->pc = 0x37D6BCu;
label_37d6bc:
    // 0x37d6bc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x37d6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x37d6c0: 0xc0df5e0  jal         func_37D780
    ctx->pc = 0x37D6C0u;
    SET_GPR_U32(ctx, 31, 0x37D6C8u);
    ctx->pc = 0x37D6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D6C0u;
            // 0x37d6c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37D780u;
    if (runtime->hasFunction(0x37D780u)) {
        auto targetFn = runtime->lookupFunction(0x37D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D6C8u; }
        if (ctx->pc != 0x37D6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037D780_0x37d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D6C8u; }
        if (ctx->pc != 0x37D6C8u) { return; }
    }
    ctx->pc = 0x37D6C8u;
label_37d6c8:
    // 0x37d6c8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x37d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x37d6cc: 0xc0df5e0  jal         func_37D780
    ctx->pc = 0x37D6CCu;
    SET_GPR_U32(ctx, 31, 0x37D6D4u);
    ctx->pc = 0x37D6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D6CCu;
            // 0x37d6d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37D780u;
    if (runtime->hasFunction(0x37D780u)) {
        auto targetFn = runtime->lookupFunction(0x37D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D6D4u; }
        if (ctx->pc != 0x37D6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037D780_0x37d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D6D4u; }
        if (ctx->pc != 0x37D6D4u) { return; }
    }
    ctx->pc = 0x37D6D4u;
label_37d6d4:
    // 0x37d6d4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x37d6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x37d6d8: 0xc0df5c8  jal         func_37D720
    ctx->pc = 0x37D6D8u;
    SET_GPR_U32(ctx, 31, 0x37D6E0u);
    ctx->pc = 0x37D6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D6D8u;
            // 0x37d6dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37D720u;
    if (runtime->hasFunction(0x37D720u)) {
        auto targetFn = runtime->lookupFunction(0x37D720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D6E0u; }
        if (ctx->pc != 0x37D6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037D720_0x37d720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D6E0u; }
        if (ctx->pc != 0x37D6E0u) { return; }
    }
    ctx->pc = 0x37D6E0u;
label_37d6e0:
    // 0x37d6e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37d6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d6e4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x37D6E4u;
    SET_GPR_U32(ctx, 31, 0x37D6ECu);
    ctx->pc = 0x37D6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D6E4u;
            // 0x37d6e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D6ECu; }
        if (ctx->pc != 0x37D6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D6ECu; }
        if (ctx->pc != 0x37D6ECu) { return; }
    }
    ctx->pc = 0x37D6ECu;
label_37d6ec:
    // 0x37d6ec: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x37d6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x37d6f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37d6f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x37d6f4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37D6F4u;
    {
        const bool branch_taken_0x37d6f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x37d6f4) {
            ctx->pc = 0x37D6F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37D6F4u;
            // 0x37d6f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37D708u;
            goto label_37d708;
        }
    }
    ctx->pc = 0x37D6FCu;
    // 0x37d6fc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x37D6FCu;
    SET_GPR_U32(ctx, 31, 0x37D704u);
    ctx->pc = 0x37D700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D6FCu;
            // 0x37d700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D704u; }
        if (ctx->pc != 0x37D704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D704u; }
        if (ctx->pc != 0x37D704u) { return; }
    }
    ctx->pc = 0x37D704u;
label_37d704:
    // 0x37d704: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37d704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37d708:
    // 0x37d708: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37d708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37d70c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37d70cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d710: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37d710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d714: 0x3e00008  jr          $ra
    ctx->pc = 0x37D714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D714u;
            // 0x37d718: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37D71Cu;
    // 0x37d71c: 0x0  nop
    ctx->pc = 0x37d71cu;
    // NOP
}
