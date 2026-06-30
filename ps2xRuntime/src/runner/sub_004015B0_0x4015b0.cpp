#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004015B0
// Address: 0x4015b0 - 0x401740
void sub_004015B0_0x4015b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004015B0_0x4015b0");
#endif

    switch (ctx->pc) {
        case 0x401608u: goto label_401608;
        case 0x401610u: goto label_401610;
        case 0x40162cu: goto label_40162c;
        case 0x401650u: goto label_401650;
        case 0x401658u: goto label_401658;
        case 0x401684u: goto label_401684;
        case 0x401690u: goto label_401690;
        case 0x4016a4u: goto label_4016a4;
        case 0x401710u: goto label_401710;
        case 0x401724u: goto label_401724;
        default: break;
    }

    ctx->pc = 0x4015b0u;

    // 0x4015b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4015b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4015b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4015b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4015b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4015b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4015bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4015bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4015c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4015c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4015c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4015c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4015c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4015c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4015cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4015ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4015d0: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x4015d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4015d4: 0x10200053  beqz        $at, . + 4 + (0x53 << 2)
    ctx->pc = 0x4015D4u;
    {
        const bool branch_taken_0x4015d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4015D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4015D4u;
            // 0x4015d8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4015d4) {
            ctx->pc = 0x401724u;
            goto label_401724;
        }
    }
    ctx->pc = 0x4015DCu;
    // 0x4015dc: 0x3c0102aa  lui         $at, 0x2AA
    ctx->pc = 0x4015dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)682 << 16));
    // 0x4015e0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x4015e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x4015e4: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x4015e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x4015e8: 0x5420000a  bnel        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4015E8u;
    {
        const bool branch_taken_0x4015e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4015e8) {
            ctx->pc = 0x4015ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4015E8u;
            // 0x4015ec: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x401614u;
            goto label_401614;
        }
    }
    ctx->pc = 0x4015F0u;
    // 0x4015f0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x4015f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x4015f4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4015f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4015f8: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x4015f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x4015fc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4015fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x401600: 0xc049e92  jal         func_127A48
    ctx->pc = 0x401600u;
    SET_GPR_U32(ctx, 31, 0x401608u);
    ctx->pc = 0x401604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401600u;
            // 0x401604: 0x24a5b8a0  addiu       $a1, $a1, -0x4760 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401608u; }
        if (ctx->pc != 0x401608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401608u; }
        if (ctx->pc != 0x401608u) { return; }
    }
    ctx->pc = 0x401608u;
label_401608:
    // 0x401608: 0xc04981a  jal         func_126068
    ctx->pc = 0x401608u;
    SET_GPR_U32(ctx, 31, 0x401610u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401610u; }
        if (ctx->pc != 0x401610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401610u; }
        if (ctx->pc != 0x401610u) { return; }
    }
    ctx->pc = 0x401610u;
label_401610:
    // 0x401610: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x401610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_401614:
    // 0x401614: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x401614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x401618: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x401618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x40161c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x40161cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x401620: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x401620u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x401624: 0xc040180  jal         func_100600
    ctx->pc = 0x401624u;
    SET_GPR_U32(ctx, 31, 0x40162Cu);
    ctx->pc = 0x401628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401624u;
            // 0x401628: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40162Cu; }
        if (ctx->pc != 0x40162Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40162Cu; }
        if (ctx->pc != 0x40162Cu) { return; }
    }
    ctx->pc = 0x40162Cu;
label_40162c:
    // 0x40162c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x40162cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401630: 0x5640000a  bnel        $s2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x401630u;
    {
        const bool branch_taken_0x401630 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x401630) {
            ctx->pc = 0x401634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x401630u;
            // 0x401634: 0xafb00050  sw          $s0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40165Cu;
            goto label_40165c;
        }
    }
    ctx->pc = 0x401638u;
    // 0x401638: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x401638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x40163c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x40163cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x401640: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x401640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x401644: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x401644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x401648: 0xc049e92  jal         func_127A48
    ctx->pc = 0x401648u;
    SET_GPR_U32(ctx, 31, 0x401650u);
    ctx->pc = 0x40164Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401648u;
            // 0x40164c: 0x24a5b900  addiu       $a1, $a1, -0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401650u; }
        if (ctx->pc != 0x401650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401650u; }
        if (ctx->pc != 0x401650u) { return; }
    }
    ctx->pc = 0x401650u;
label_401650:
    // 0x401650: 0xc04981a  jal         func_126068
    ctx->pc = 0x401650u;
    SET_GPR_U32(ctx, 31, 0x401658u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401658u; }
        if (ctx->pc != 0x401658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401658u; }
        if (ctx->pc != 0x401658u) { return; }
    }
    ctx->pc = 0x401658u;
label_401658:
    // 0x401658: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x401658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
label_40165c:
    // 0x40165c: 0xafb20058  sw          $s2, 0x58($sp)
    ctx->pc = 0x40165cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 18));
    // 0x401660: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x401660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x401664: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x401664u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x401668: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x401668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x40166c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40166cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x401670: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x401670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x401674: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x401674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x401678: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x401678u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x40167c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x40167Cu;
    {
        const bool branch_taken_0x40167c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40167c) {
            ctx->pc = 0x4016C8u;
            goto label_4016c8;
        }
    }
    ctx->pc = 0x401684u;
label_401684:
    // 0x401684: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x401684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x401688: 0xc100604  jal         func_401810
    ctx->pc = 0x401688u;
    SET_GPR_U32(ctx, 31, 0x401690u);
    ctx->pc = 0x40168Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401688u;
            // 0x40168c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401810u;
    if (runtime->hasFunction(0x401810u)) {
        auto targetFn = runtime->lookupFunction(0x401810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401690u; }
        if (ctx->pc != 0x401690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401810_0x401810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401690u; }
        if (ctx->pc != 0x401690u) { return; }
    }
    ctx->pc = 0x401690u;
label_401690:
    // 0x401690: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x401690u;
    {
        const bool branch_taken_0x401690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x401690) {
            ctx->pc = 0x4016A8u;
            goto label_4016a8;
        }
    }
    ctx->pc = 0x401698u;
    // 0x401698: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x401698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40169c: 0xc1005d0  jal         func_401740
    ctx->pc = 0x40169Cu;
    SET_GPR_U32(ctx, 31, 0x4016A4u);
    ctx->pc = 0x4016A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40169Cu;
            // 0x4016a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401740u;
    if (runtime->hasFunction(0x401740u)) {
        auto targetFn = runtime->lookupFunction(0x401740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4016A4u; }
        if (ctx->pc != 0x4016A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401740_0x401740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4016A4u; }
        if (ctx->pc != 0x4016A4u) { return; }
    }
    ctx->pc = 0x4016A4u;
label_4016a4:
    // 0x4016a4: 0x0  nop
    ctx->pc = 0x4016a4u;
    // NOP
label_4016a8:
    // 0x4016a8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x4016a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x4016ac: 0x26310060  addiu       $s1, $s1, 0x60
    ctx->pc = 0x4016acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x4016b0: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x4016b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x4016b4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4016b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4016b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4016b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4016bc: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x4016BCu;
    {
        const bool branch_taken_0x4016bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4016C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4016BCu;
            // 0x4016c0: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4016bc) {
            ctx->pc = 0x401684u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_401684;
        }
    }
    ctx->pc = 0x4016C4u;
    // 0x4016c4: 0x0  nop
    ctx->pc = 0x4016c4u;
    // NOP
label_4016c8:
    // 0x4016c8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x4016c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4016cc: 0x5053000e  beql        $v0, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x4016CCu;
    {
        const bool branch_taken_0x4016cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x4016cc) {
            ctx->pc = 0x4016D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4016CCu;
            // 0x4016d0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x401708u;
            goto label_401708;
        }
    }
    ctx->pc = 0x4016D4u;
    // 0x4016d4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x4016d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4016d8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4016d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4016dc: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x4016dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x4016e0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4016e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4016e4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x4016e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4016e8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4016e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4016ec: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x4016ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x4016f0: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x4016f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x4016f4: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x4016f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x4016f8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x4016f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4016fc: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x4016fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x401700: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x401700u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x401704: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x401704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_401708:
    // 0x401708: 0xc0b64ac  jal         func_2D92B0
    ctx->pc = 0x401708u;
    SET_GPR_U32(ctx, 31, 0x401710u);
    ctx->pc = 0x2D92B0u;
    if (runtime->hasFunction(0x2D92B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D92B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401710u; }
        if (ctx->pc != 0x401710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D92B0_0x2d92b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401710u; }
        if (ctx->pc != 0x401710u) { return; }
    }
    ctx->pc = 0x401710u;
label_401710:
    // 0x401710: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x401710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x401714: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x401714u;
    {
        const bool branch_taken_0x401714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x401714) {
            ctx->pc = 0x401718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x401714u;
            // 0x401718: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x401728u;
            goto label_401728;
        }
    }
    ctx->pc = 0x40171Cu;
    // 0x40171c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x40171Cu;
    SET_GPR_U32(ctx, 31, 0x401724u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401724u; }
        if (ctx->pc != 0x401724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401724u; }
        if (ctx->pc != 0x401724u) { return; }
    }
    ctx->pc = 0x401724u;
label_401724:
    // 0x401724: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x401724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_401728:
    // 0x401728: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x401728u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40172c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40172cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x401730: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x401730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x401734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x401734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x401738: 0x3e00008  jr          $ra
    ctx->pc = 0x401738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40173Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401738u;
            // 0x40173c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x401740u;
}
