#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AE3B8
// Address: 0x1ae3b8 - 0x1ae4a8
void sub_001AE3B8_0x1ae3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE3B8_0x1ae3b8");
#endif

    switch (ctx->pc) {
        case 0x1ae3f0u: goto label_1ae3f0;
        case 0x1ae404u: goto label_1ae404;
        case 0x1ae414u: goto label_1ae414;
        case 0x1ae428u: goto label_1ae428;
        case 0x1ae444u: goto label_1ae444;
        case 0x1ae454u: goto label_1ae454;
        case 0x1ae47cu: goto label_1ae47c;
        default: break;
    }

    ctx->pc = 0x1ae3b8u;

    // 0x1ae3b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ae3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ae3bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ae3c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ae3c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae3c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ae3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ae3c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ae3c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae3cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ae3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ae3d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ae3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ae3d4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1ae3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1ae3d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ae3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ae3dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ae3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ae3e0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1ae3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1ae3e4: 0x8e552030  lw          $s5, 0x2030($s2)
    ctx->pc = 0x1ae3e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8240)));
    // 0x1ae3e8: 0xc06b92a  jal         func_1AE4A8
    ctx->pc = 0x1AE3E8u;
    SET_GPR_U32(ctx, 31, 0x1AE3F0u);
    ctx->pc = 0x1AE3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE3E8u;
            // 0x1ae3ec: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE4A8u;
    if (runtime->hasFunction(0x1AE4A8u)) {
        auto targetFn = runtime->lookupFunction(0x1AE4A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3F0u; }
        if (ctx->pc != 0x1AE3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE4A8_0x1ae4a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3F0u; }
        if (ctx->pc != 0x1AE3F0u) { return; }
    }
    ctx->pc = 0x1AE3F0u;
label_1ae3f0:
    // 0x1ae3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae3f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ae3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae3f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae3fc: 0xc06189a  jal         func_186268
    ctx->pc = 0x1AE3FCu;
    SET_GPR_U32(ctx, 31, 0x1AE404u);
    ctx->pc = 0x1AE400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE3FCu;
            // 0x1ae400: 0x26b6008c  addiu       $s6, $s5, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186268u;
    if (runtime->hasFunction(0x186268u)) {
        auto targetFn = runtime->lookupFunction(0x186268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE404u; }
        if (ctx->pc != 0x1AE404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186268_0x186268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE404u; }
        if (ctx->pc != 0x1AE404u) { return; }
    }
    ctx->pc = 0x1AE404u;
label_1ae404:
    // 0x1ae404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae408: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ae408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae40c: 0xc064fa8  jal         func_193EA0
    ctx->pc = 0x1AE40Cu;
    SET_GPR_U32(ctx, 31, 0x1AE414u);
    ctx->pc = 0x1AE410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE40Cu;
            // 0x1ae410: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193EA0u;
    if (runtime->hasFunction(0x193EA0u)) {
        auto targetFn = runtime->lookupFunction(0x193EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE414u; }
        if (ctx->pc != 0x1AE414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193EA0_0x193ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE414u; }
        if (ctx->pc != 0x1AE414u) { return; }
    }
    ctx->pc = 0x1AE414u;
label_1ae414:
    // 0x1ae414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae41c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ae41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae420: 0xc06189a  jal         func_186268
    ctx->pc = 0x1AE420u;
    SET_GPR_U32(ctx, 31, 0x1AE428u);
    ctx->pc = 0x1AE424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE420u;
            // 0x1ae424: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186268u;
    if (runtime->hasFunction(0x186268u)) {
        auto targetFn = runtime->lookupFunction(0x186268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE428u; }
        if (ctx->pc != 0x1AE428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186268_0x186268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE428u; }
        if (ctx->pc != 0x1AE428u) { return; }
    }
    ctx->pc = 0x1AE428u;
label_1ae428:
    // 0x1ae428: 0x548823  subu        $s1, $v0, $s4
    ctx->pc = 0x1ae428u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1ae42c: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x1ae42cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x1ae430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae434: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ae434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae438: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ae438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae43c: 0xc06b212  jal         func_1AC848
    ctx->pc = 0x1AE43Cu;
    SET_GPR_U32(ctx, 31, 0x1AE444u);
    ctx->pc = 0x1AE440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE43Cu;
            // 0x1ae440: 0x34e70f07  ori         $a3, $a3, 0xF07 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3847);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC848u;
    if (runtime->hasFunction(0x1AC848u)) {
        auto targetFn = runtime->lookupFunction(0x1AC848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE444u; }
        if (ctx->pc != 0x1AE444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC848_0x1ac848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE444u; }
        if (ctx->pc != 0x1AE444u) { return; }
    }
    ctx->pc = 0x1AE444u;
label_1ae444:
    // 0x1ae444: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae448: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae44c: 0xc06b1e8  jal         func_1AC7A0
    ctx->pc = 0x1AE44Cu;
    SET_GPR_U32(ctx, 31, 0x1AE454u);
    ctx->pc = 0x1AE450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE44Cu;
            // 0x1ae450: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC7A0u;
    if (runtime->hasFunction(0x1AC7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1AC7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE454u; }
        if (ctx->pc != 0x1AE454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC7A0_0x1ac7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE454u; }
        if (ctx->pc != 0x1AE454u) { return; }
    }
    ctx->pc = 0x1AE454u;
label_1ae454:
    // 0x1ae454: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ae454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae458: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae45c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE45Cu;
    {
        const bool branch_taken_0x1ae45c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE45Cu;
            // 0x1ae460: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae45c) {
            ctx->pc = 0x1AE480u;
            goto label_1ae480;
        }
    }
    ctx->pc = 0x1AE464u;
    // 0x1ae464: 0x82c20058  lb          $v0, 0x58($s6)
    ctx->pc = 0x1ae464u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x1ae468: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE468u;
    {
        const bool branch_taken_0x1ae468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE468u;
            // 0x1ae46c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae468) {
            ctx->pc = 0x1AE474u;
            goto label_1ae474;
        }
    }
    ctx->pc = 0x1AE470u;
    // 0x1ae470: 0xaea2016c  sw          $v0, 0x16C($s5)
    ctx->pc = 0x1ae470u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 364), GPR_U32(ctx, 2));
label_1ae474:
    // 0x1ae474: 0xc06cec6  jal         func_1B3B18
    ctx->pc = 0x1AE474u;
    SET_GPR_U32(ctx, 31, 0x1AE47Cu);
    ctx->pc = 0x1AE478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE474u;
            // 0x1ae478: 0x8ec60018  lw          $a2, 0x18($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3B18u;
    if (runtime->hasFunction(0x1B3B18u)) {
        auto targetFn = runtime->lookupFunction(0x1B3B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE47Cu; }
        if (ctx->pc != 0x1AE47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3B18_0x1b3b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE47Cu; }
        if (ctx->pc != 0x1AE47Cu) { return; }
    }
    ctx->pc = 0x1AE47Cu;
label_1ae47c:
    // 0x1ae47c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ae47cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae480:
    // 0x1ae480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae484: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ae484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ae488: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ae488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae48c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ae48cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ae490: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ae490u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae494: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ae494u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ae498: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ae498u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae49c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1ae49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE4A0u;
            // 0x1ae4a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE4A8u;
}
