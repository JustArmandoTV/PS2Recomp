#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021E710
// Address: 0x21e710 - 0x21e9c0
void sub_0021E710_0x21e710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E710_0x21e710");
#endif

    switch (ctx->pc) {
        case 0x21e764u: goto label_21e764;
        case 0x21e90cu: goto label_21e90c;
        case 0x21e930u: goto label_21e930;
        case 0x21e974u: goto label_21e974;
        default: break;
    }

    ctx->pc = 0x21e710u;

    // 0x21e710: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21e710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21e714: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x21e714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x21e718: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21e718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x21e71c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21e71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21e720: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x21e720u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e724: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21e724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21e728: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x21e728u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e72c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21e72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21e730: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x21e730u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e734: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21e734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21e738: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21e738u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e73c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21e73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21e740: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21e740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21e744: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x21e744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x21e748: 0x94620010  lhu         $v0, 0x10($v1)
    ctx->pc = 0x21e748u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21e74c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x21e74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x21e750: 0xa4620010  sh          $v0, 0x10($v1)
    ctx->pc = 0x21e750u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x21e754: 0x8c920028  lw          $s2, 0x28($a0)
    ctx->pc = 0x21e754u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x21e758: 0x94710004  lhu         $s1, 0x4($v1)
    ctx->pc = 0x21e758u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21e75c: 0xc087438  jal         func_21D0E0
    ctx->pc = 0x21E75Cu;
    SET_GPR_U32(ctx, 31, 0x21E764u);
    ctx->pc = 0x21E760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E75Cu;
            // 0x21e760: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D0E0u;
    if (runtime->hasFunction(0x21D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x21D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E764u; }
        if (ctx->pc != 0x21E764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D0E0_0x21d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E764u; }
        if (ctx->pc != 0x21E764u) { return; }
    }
    ctx->pc = 0x21E764u;
label_21e764:
    // 0x21e764: 0xaea20028  sw          $v0, 0x28($s5)
    ctx->pc = 0x21e764u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 2));
    // 0x21e768: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21e768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e76c: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x21e76cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x21e770: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x21e770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x21e774: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x21e774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21e778: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x21e778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x21e77c: 0x24860030  addiu       $a2, $a0, 0x30
    ctx->pc = 0x21e77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x21e780: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x21e780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21e784: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x21e784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21e788: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x21e788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21e78c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x21e78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x21e790: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x21e790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21e794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e798: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x21e798u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x21e79c: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x21e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x21e7a0: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x21e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x21e7a4: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x21e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x21e7a8: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x21E7A8u;
    {
        const bool branch_taken_0x21e7a8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x21E7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E7A8u;
            // 0x21e7ac: 0xa0a2003f  sb          $v0, 0x3F($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 63), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7a8) {
            ctx->pc = 0x21E7D8u;
            goto label_21e7d8;
        }
    }
    ctx->pc = 0x21E7B0u;
    // 0x21e7b0: 0x9082fffb  lbu         $v0, -0x5($a0)
    ctx->pc = 0x21e7b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967291)));
    // 0x21e7b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x21e7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x21e7b8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x21E7B8u;
    {
        const bool branch_taken_0x21e7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e7b8) {
            ctx->pc = 0x21E7BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E7B8u;
            // 0x21e7bc: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E7DCu;
            goto label_21e7dc;
        }
    }
    ctx->pc = 0x21E7C0u;
    // 0x21e7c0: 0x9082fffa  lbu         $v0, -0x6($a0)
    ctx->pc = 0x21e7c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967290)));
    // 0x21e7c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E7C4u;
    {
        const bool branch_taken_0x21e7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e7c4) {
            ctx->pc = 0x21E7D8u;
            goto label_21e7d8;
        }
    }
    ctx->pc = 0x21E7CCu;
    // 0x21e7cc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x21e7ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e7d0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x21e7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x21e7d4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x21e7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_21e7d8:
    // 0x21e7d8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x21e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21e7dc:
    // 0x21e7dc: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x21e7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x21e7e0: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x21e7e0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
    // 0x21e7e4: 0x30480001  andi        $t0, $v0, 0x1
    ctx->pc = 0x21e7e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21e7e8: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x21e7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x21e7ec: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x21e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x21e7f0: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x21e7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x21e7f4: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x21e7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
    // 0x21e7f8: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x21e7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x21e7fc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x21e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x21e800: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x21e800u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x21e804: 0x24e700a0  addiu       $a3, $a3, 0xA0
    ctx->pc = 0x21e804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    // 0x21e808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e80c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21e80cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e810: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21e810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21e814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e818: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E818u;
    {
        const bool branch_taken_0x21e818 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x21E81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E818u;
            // 0x21e81c: 0xe63821  addu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e818) {
            ctx->pc = 0x21E82Cu;
            goto label_21e82c;
        }
    }
    ctx->pc = 0x21E820u;
    // 0x21e820: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x21e820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x21e824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21e824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e828: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21e828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21e82c:
    // 0x21e82c: 0x51000005  beql        $t0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E82Cu;
    {
        const bool branch_taken_0x21e82c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e82c) {
            ctx->pc = 0x21E830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E82Cu;
            // 0x21e830: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E844u;
            goto label_21e844;
        }
    }
    ctx->pc = 0x21E834u;
    // 0x21e834: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x21e834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x21e838: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21e838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21e83c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21E83Cu;
    {
        const bool branch_taken_0x21e83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E83Cu;
            // 0x21e840: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e83c) {
            ctx->pc = 0x21E84Cu;
            goto label_21e84c;
        }
    }
    ctx->pc = 0x21E844u;
label_21e844:
    // 0x21e844: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21e844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21e848: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21e848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_21e84c:
    // 0x21e84c: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x21e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x21e850: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x21e850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x21e854: 0x50c00027  beql        $a2, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x21E854u;
    {
        const bool branch_taken_0x21e854 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e854) {
            ctx->pc = 0x21E858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E854u;
            // 0x21e858: 0x8ea60028  lw          $a2, 0x28($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E8F4u;
            goto label_21e8f4;
        }
    }
    ctx->pc = 0x21E85Cu;
    // 0x21e85c: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x21e85cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x21e860: 0xe6082a  slt         $at, $a3, $a2
    ctx->pc = 0x21e860u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21e864: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21E864u;
    {
        const bool branch_taken_0x21e864 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e864) {
            ctx->pc = 0x21E868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E864u;
            // 0x21e868: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E86Cu;
            goto label_21e86c;
        }
    }
    ctx->pc = 0x21E86Cu;
label_21e86c:
    // 0x21e86c: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x21e86cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21e870: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E870u;
    {
        const bool branch_taken_0x21e870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E870u;
            // 0x21e874: 0xae860008  sw          $a2, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e870) {
            ctx->pc = 0x21E880u;
            goto label_21e880;
        }
    }
    ctx->pc = 0x21E878u;
    // 0x21e878: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21E878u;
    {
        const bool branch_taken_0x21e878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E878u;
            // 0x21e87c: 0xae860008  sw          $a2, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e878) {
            ctx->pc = 0x21E888u;
            goto label_21e888;
        }
    }
    ctx->pc = 0x21E880u;
label_21e880:
    // 0x21e880: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x21e880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e884: 0xae860008  sw          $a2, 0x8($s4)
    ctx->pc = 0x21e884u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
label_21e888:
    // 0x21e888: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x21e888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x21e88c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x21e88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x21e890: 0xae86000c  sw          $a2, 0xC($s4)
    ctx->pc = 0x21e890u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 6));
    // 0x21e894: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x21e894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x21e898: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x21e898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x21e89c: 0xae860010  sw          $a2, 0x10($s4)
    ctx->pc = 0x21e89cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 6));
    // 0x21e8a0: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x21e8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x21e8a4: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x21e8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x21e8a8: 0xae860014  sw          $a2, 0x14($s4)
    ctx->pc = 0x21e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 6));
    // 0x21e8ac: 0x8c490028  lw          $t1, 0x28($v0)
    ctx->pc = 0x21e8acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x21e8b0: 0x95280018  lhu         $t0, 0x18($t1)
    ctx->pc = 0x21e8b0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x21e8b4: 0x95270014  lhu         $a3, 0x14($t1)
    ctx->pc = 0x21e8b4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x21e8b8: 0x95260016  lhu         $a2, 0x16($t1)
    ctx->pc = 0x21e8b8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 22)));
    // 0x21e8bc: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x21e8bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x21e8c0: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x21e8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x21e8c4: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x21e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x21e8c8: 0xa5230016  sh          $v1, 0x16($t1)
    ctx->pc = 0x21e8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x21e8cc: 0xa5280018  sh          $t0, 0x18($t1)
    ctx->pc = 0x21e8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 24), (uint16_t)GPR_U32(ctx, 8));
    // 0x21e8d0: 0xa5250014  sh          $a1, 0x14($t1)
    ctx->pc = 0x21e8d0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 20), (uint16_t)GPR_U32(ctx, 5));
    // 0x21e8d4: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x21e8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x21e8d8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x21e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x21e8dc: 0x94630014  lhu         $v1, 0x14($v1)
    ctx->pc = 0x21e8dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x21e8e0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x21e8e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21e8e4: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21E8E4u;
    {
        const bool branch_taken_0x21e8e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e8e4) {
            ctx->pc = 0x21E8E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E8E4u;
            // 0x21e8e8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E8ECu;
            goto label_21e8ec;
        }
    }
    ctx->pc = 0x21E8ECu;
label_21e8ec:
    // 0x21e8ec: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x21e8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x21e8f0: 0x8ea60028  lw          $a2, 0x28($s5)
    ctx->pc = 0x21e8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_21e8f4:
    // 0x21e8f4: 0x52460008  beql        $s2, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x21E8F4u;
    {
        const bool branch_taken_0x21e8f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        if (branch_taken_0x21e8f4) {
            ctx->pc = 0x21E8F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E8F4u;
            // 0x21e8f8: 0x8ea20010  lw          $v0, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E918u;
            goto label_21e918;
        }
    }
    ctx->pc = 0x21E8FCu;
    // 0x21e8fc: 0x96070002  lhu         $a3, 0x2($s0)
    ctx->pc = 0x21e8fcu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x21e900: 0x8ea40024  lw          $a0, 0x24($s5)
    ctx->pc = 0x21e900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x21e904: 0xc08ecb8  jal         func_23B2E0
    ctx->pc = 0x21E904u;
    SET_GPR_U32(ctx, 31, 0x21E90Cu);
    ctx->pc = 0x21E908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E904u;
            // 0x21e908: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B2E0u;
    if (runtime->hasFunction(0x23B2E0u)) {
        auto targetFn = runtime->lookupFunction(0x23B2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E90Cu; }
        if (ctx->pc != 0x21E90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B2E0_0x23b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E90Cu; }
        if (ctx->pc != 0x21E90Cu) { return; }
    }
    ctx->pc = 0x21E90Cu;
label_21e90c:
    // 0x21e90c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x21e90cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x21e910: 0xaea2002c  sw          $v0, 0x2C($s5)
    ctx->pc = 0x21e910u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 2));
    // 0x21e914: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x21e914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_21e918:
    // 0x21e918: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x21e918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21e91c: 0x4c0000c  bltz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x21E91Cu;
    {
        const bool branch_taken_0x21e91c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x21e91c) {
            ctx->pc = 0x21E950u;
            goto label_21e950;
        }
    }
    ctx->pc = 0x21E924u;
    // 0x21e924: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x21e924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x21e928: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x21e928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x21e92c: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x21e92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_21e930:
    // 0x21e930: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x21e930u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21e934: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E934u;
    {
        const bool branch_taken_0x21e934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21e934) {
            ctx->pc = 0x21E938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E934u;
            // 0x21e938: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E948u;
            goto label_21e948;
        }
    }
    ctx->pc = 0x21E93Cu;
    // 0x21e93c: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x21e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x21e940: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x21E940u;
    {
        const bool branch_taken_0x21e940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E940u;
            // 0x21e944: 0xa0510000  sb          $s1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e940) {
            ctx->pc = 0x21E994u;
            goto label_21e994;
        }
    }
    ctx->pc = 0x21E948u;
label_21e948:
    // 0x21e948: 0x4c1fff9  bgez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21E948u;
    {
        const bool branch_taken_0x21e948 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x21E94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E948u;
            // 0x21e94c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e948) {
            ctx->pc = 0x21E930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21e930;
        }
    }
    ctx->pc = 0x21E950u;
label_21e950:
    // 0x21e950: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x21e950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x21e954: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x21e954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x21e958: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x21e958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x21e95c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x21e95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x21e960: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E960u;
    {
        const bool branch_taken_0x21e960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21E964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E960u;
            // 0x21e964: 0x323000ff  andi        $s0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e960) {
            ctx->pc = 0x21E974u;
            goto label_21e974;
        }
    }
    ctx->pc = 0x21E968u;
    // 0x21e968: 0x26a4000c  addiu       $a0, $s5, 0xC
    ctx->pc = 0x21e968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x21e96c: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x21E96Cu;
    SET_GPR_U32(ctx, 31, 0x21E974u);
    ctx->pc = 0x21E970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E96Cu;
            // 0x21e970: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E974u; }
        if (ctx->pc != 0x21E974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E974u; }
        if (ctx->pc != 0x21E974u) { return; }
    }
    ctx->pc = 0x21E974u;
label_21e974:
    // 0x21e974: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x21e974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x21e978: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x21e978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21e97c: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x21e97cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
    // 0x21e980: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x21e980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x21e984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21e984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21e988: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x21e988u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x21e98c: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x21e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x21e990: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x21e990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21e994:
    // 0x21e994: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x21e994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21e998: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x21e998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x21e99c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21e99cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21e9a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21e9a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21e9a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21e9a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21e9a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21e9a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21e9ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21e9acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e9b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21e9b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e9b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x21E9B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E9B8u;
            // 0x21e9bc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E9C0u;
}
