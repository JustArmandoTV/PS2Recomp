#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034E740
// Address: 0x34e740 - 0x34e8d0
void sub_0034E740_0x34e740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E740_0x34e740");
#endif

    switch (ctx->pc) {
        case 0x34e768u: goto label_34e768;
        case 0x34e788u: goto label_34e788;
        case 0x34e7c0u: goto label_34e7c0;
        case 0x34e7dcu: goto label_34e7dc;
        case 0x34e800u: goto label_34e800;
        case 0x34e860u: goto label_34e860;
        case 0x34e86cu: goto label_34e86c;
        case 0x34e878u: goto label_34e878;
        case 0x34e884u: goto label_34e884;
        case 0x34e890u: goto label_34e890;
        case 0x34e89cu: goto label_34e89c;
        case 0x34e8b4u: goto label_34e8b4;
        default: break;
    }

    ctx->pc = 0x34e740u;

    // 0x34e740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34e740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34e744: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x34e744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x34e748: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34e748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34e74c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x34e74cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x34e750: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34e750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34e754: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34e754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34e758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34e758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34e75c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34e75cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e760: 0xc0d3a6c  jal         func_34E9B0
    ctx->pc = 0x34E760u;
    SET_GPR_U32(ctx, 31, 0x34E768u);
    ctx->pc = 0x34E764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E760u;
            // 0x34e764: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34E9B0u;
    if (runtime->hasFunction(0x34E9B0u)) {
        auto targetFn = runtime->lookupFunction(0x34E9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E768u; }
        if (ctx->pc != 0x34E768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034E9B0_0x34e9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E768u; }
        if (ctx->pc != 0x34E768u) { return; }
    }
    ctx->pc = 0x34E768u;
label_34e768:
    // 0x34e768: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34e768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x34e76c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x34e770: 0x24635bd0  addiu       $v1, $v1, 0x5BD0
    ctx->pc = 0x34e770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23504));
    // 0x34e774: 0x24425c08  addiu       $v0, $v0, 0x5C08
    ctx->pc = 0x34e774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23560));
    // 0x34e778: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x34e778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x34e77c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e780: 0xc0d3a68  jal         func_34E9A0
    ctx->pc = 0x34E780u;
    SET_GPR_U32(ctx, 31, 0x34E788u);
    ctx->pc = 0x34E784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E780u;
            // 0x34e784: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34E9A0u;
    if (runtime->hasFunction(0x34E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x34E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E788u; }
        if (ctx->pc != 0x34E788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034E9A0_0x34e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E788u; }
        if (ctx->pc != 0x34E788u) { return; }
    }
    ctx->pc = 0x34E788u;
label_34e788:
    // 0x34e788: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x34e788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x34e78c: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x34e78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x34e790: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34e790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x34e794: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x34e794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34e798: 0x24425ac0  addiu       $v0, $v0, 0x5AC0
    ctx->pc = 0x34e798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23232));
    // 0x34e79c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34e79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34e7a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x34e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x34e7a4: 0x26320084  addiu       $s2, $s1, 0x84
    ctx->pc = 0x34e7a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x34e7a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x34e7ac: 0x24425af8  addiu       $v0, $v0, 0x5AF8
    ctx->pc = 0x34e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23288));
    // 0x34e7b0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x34e7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x34e7b4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x34e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x34e7b8: 0xc040140  jal         func_100500
    ctx->pc = 0x34E7B8u;
    SET_GPR_U32(ctx, 31, 0x34E7C0u);
    ctx->pc = 0x34E7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E7B8u;
            // 0x34e7bc: 0x23980  sll         $a3, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E7C0u; }
        if (ctx->pc != 0x34E7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E7C0u; }
        if (ctx->pc != 0x34E7C0u) { return; }
    }
    ctx->pc = 0x34E7C0u;
label_34e7c0:
    // 0x34e7c0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x34E7C0u;
    {
        const bool branch_taken_0x34e7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e7c0) {
            ctx->pc = 0x34E7C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E7C0u;
            // 0x34e7c4: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E7E0u;
            goto label_34e7e0;
        }
    }
    ctx->pc = 0x34E7C8u;
    // 0x34e7c8: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x34e7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x34e7cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x34e7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e7d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34e7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e7d4: 0xc0b4554  jal         func_2D1550
    ctx->pc = 0x34E7D4u;
    SET_GPR_U32(ctx, 31, 0x34E7DCu);
    ctx->pc = 0x34E7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E7D4u;
            // 0x34e7d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E7DCu; }
        if (ctx->pc != 0x34E7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E7DCu; }
        if (ctx->pc != 0x34E7DCu) { return; }
    }
    ctx->pc = 0x34E7DCu;
label_34e7dc:
    // 0x34e7dc: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x34e7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_34e7e0:
    // 0x34e7e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x34e7e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e7e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34e7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34e7e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34e7e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34e7ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34e7ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e7f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34e7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x34E7F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E7F4u;
            // 0x34e7f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34E7FCu;
    // 0x34e7fc: 0x0  nop
    ctx->pc = 0x34e7fcu;
    // NOP
label_34e800:
    // 0x34e800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34e800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34e804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34e804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34e808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34e808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34e80c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34e80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34e810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34e810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e814: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x34E814u;
    {
        const bool branch_taken_0x34e814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E814u;
            // 0x34e818: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e814) {
            ctx->pc = 0x34E8B4u;
            goto label_34e8b4;
        }
    }
    ctx->pc = 0x34E81Cu;
    // 0x34e81c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x34e820: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34e820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x34e824: 0x24635bd0  addiu       $v1, $v1, 0x5BD0
    ctx->pc = 0x34e824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23504));
    // 0x34e828: 0x24425c08  addiu       $v0, $v0, 0x5C08
    ctx->pc = 0x34e828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23560));
    // 0x34e82c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x34e82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x34e830: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x34E830u;
    {
        const bool branch_taken_0x34e830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E830u;
            // 0x34e834: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e830) {
            ctx->pc = 0x34E89Cu;
            goto label_34e89c;
        }
    }
    ctx->pc = 0x34E838u;
    // 0x34e838: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34e838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x34e83c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x34e840: 0x24635b80  addiu       $v1, $v1, 0x5B80
    ctx->pc = 0x34e840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23424));
    // 0x34e844: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34e844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34e848: 0x24425bb8  addiu       $v0, $v0, 0x5BB8
    ctx->pc = 0x34e848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23480));
    // 0x34e84c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x34e84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x34e850: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x34e850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x34e854: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x34e854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x34e858: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x34E858u;
    SET_GPR_U32(ctx, 31, 0x34E860u);
    ctx->pc = 0x34E85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E858u;
            // 0x34e85c: 0x24a5e2c0  addiu       $a1, $a1, -0x1D40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E860u; }
        if (ctx->pc != 0x34E860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E860u; }
        if (ctx->pc != 0x34E860u) { return; }
    }
    ctx->pc = 0x34E860u;
label_34e860:
    // 0x34e860: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x34e860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x34e864: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x34E864u;
    SET_GPR_U32(ctx, 31, 0x34E86Cu);
    ctx->pc = 0x34E868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E864u;
            // 0x34e868: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E86Cu; }
        if (ctx->pc != 0x34E86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E86Cu; }
        if (ctx->pc != 0x34E86Cu) { return; }
    }
    ctx->pc = 0x34E86Cu;
label_34e86c:
    // 0x34e86c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x34e86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x34e870: 0xc0d3a4c  jal         func_34E930
    ctx->pc = 0x34E870u;
    SET_GPR_U32(ctx, 31, 0x34E878u);
    ctx->pc = 0x34E874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E870u;
            // 0x34e874: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34E930u;
    if (runtime->hasFunction(0x34E930u)) {
        auto targetFn = runtime->lookupFunction(0x34E930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E878u; }
        if (ctx->pc != 0x34E878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034E930_0x34e930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E878u; }
        if (ctx->pc != 0x34E878u) { return; }
    }
    ctx->pc = 0x34E878u;
label_34e878:
    // 0x34e878: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x34e878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x34e87c: 0xc0d3a4c  jal         func_34E930
    ctx->pc = 0x34E87Cu;
    SET_GPR_U32(ctx, 31, 0x34E884u);
    ctx->pc = 0x34E880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E87Cu;
            // 0x34e880: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34E930u;
    if (runtime->hasFunction(0x34E930u)) {
        auto targetFn = runtime->lookupFunction(0x34E930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E884u; }
        if (ctx->pc != 0x34E884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034E930_0x34e930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E884u; }
        if (ctx->pc != 0x34E884u) { return; }
    }
    ctx->pc = 0x34E884u;
label_34e884:
    // 0x34e884: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x34e884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x34e888: 0xc0d3a34  jal         func_34E8D0
    ctx->pc = 0x34E888u;
    SET_GPR_U32(ctx, 31, 0x34E890u);
    ctx->pc = 0x34E88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E888u;
            // 0x34e88c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34E8D0u;
    if (runtime->hasFunction(0x34E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x34E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E890u; }
        if (ctx->pc != 0x34E890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034E8D0_0x34e8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E890u; }
        if (ctx->pc != 0x34E890u) { return; }
    }
    ctx->pc = 0x34E890u;
label_34e890:
    // 0x34e890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e894: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x34E894u;
    SET_GPR_U32(ctx, 31, 0x34E89Cu);
    ctx->pc = 0x34E898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E894u;
            // 0x34e898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E89Cu; }
        if (ctx->pc != 0x34E89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E89Cu; }
        if (ctx->pc != 0x34E89Cu) { return; }
    }
    ctx->pc = 0x34E89Cu;
label_34e89c:
    // 0x34e89c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x34e89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x34e8a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34e8a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x34e8a4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34E8A4u;
    {
        const bool branch_taken_0x34e8a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x34e8a4) {
            ctx->pc = 0x34E8A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E8A4u;
            // 0x34e8a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E8B8u;
            goto label_34e8b8;
        }
    }
    ctx->pc = 0x34E8ACu;
    // 0x34e8ac: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x34E8ACu;
    SET_GPR_U32(ctx, 31, 0x34E8B4u);
    ctx->pc = 0x34E8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E8ACu;
            // 0x34e8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E8B4u; }
        if (ctx->pc != 0x34E8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E8B4u; }
        if (ctx->pc != 0x34E8B4u) { return; }
    }
    ctx->pc = 0x34E8B4u;
label_34e8b4:
    // 0x34e8b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34e8b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34e8b8:
    // 0x34e8b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34e8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34e8bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34e8bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e8c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34e8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x34E8C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E8C4u;
            // 0x34e8c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34E8CCu;
    // 0x34e8cc: 0x0  nop
    ctx->pc = 0x34e8ccu;
    // NOP
}
