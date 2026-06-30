#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00511700
// Address: 0x511700 - 0x5118a0
void sub_00511700_0x511700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00511700_0x511700");
#endif

    switch (ctx->pc) {
        case 0x51175cu: goto label_51175c;
        case 0x511778u: goto label_511778;
        case 0x51177cu: goto label_51177c;
        case 0x5117ccu: goto label_5117cc;
        case 0x5117d8u: goto label_5117d8;
        case 0x5117fcu: goto label_5117fc;
        case 0x511858u: goto label_511858;
        default: break;
    }

    ctx->pc = 0x511700u;

    // 0x511700: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x511700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x511704: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x511704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x511708: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x511708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x51170c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x51170cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x511710: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x511710u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511714: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x511714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x511718: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x511718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x51171c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x51171cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511720: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x511720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x511724: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x511724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x511728: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x511728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x51172c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x51172cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x511730: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x511730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x511734: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x511734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x511738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x511738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x51173c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x51173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x511740: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x511740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x511744: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x511744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x511748: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x511748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51174c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x51174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x511750: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x511750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511754: 0xc144628  jal         func_5118A0
    ctx->pc = 0x511754u;
    SET_GPR_U32(ctx, 31, 0x51175Cu);
    ctx->pc = 0x511758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511754u;
            // 0x511758: 0x24510090  addiu       $s1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5118A0u;
    if (runtime->hasFunction(0x5118A0u)) {
        auto targetFn = runtime->lookupFunction(0x5118A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51175Cu; }
        if (ctx->pc != 0x51175Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005118A0_0x5118a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51175Cu; }
        if (ctx->pc != 0x51175Cu) { return; }
    }
    ctx->pc = 0x51175Cu;
label_51175c:
    // 0x51175c: 0x8fc30070  lw          $v1, 0x70($fp)
    ctx->pc = 0x51175cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
    // 0x511760: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x511760u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511764: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x511764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x511768: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x511768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x51176c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x51176cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x511770: 0x1860003f  blez        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x511770u;
    {
        const bool branch_taken_0x511770 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x511774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511770u;
            // 0x511774: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511770) {
            ctx->pc = 0x511870u;
            goto label_511870;
        }
    }
    ctx->pc = 0x511778u;
label_511778:
    // 0x511778: 0x8fc20074  lw          $v0, 0x74($fp)
    ctx->pc = 0x511778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_51177c:
    // 0x51177c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x51177cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x511780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x511780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x511784: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x511784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x511788: 0x8c620124  lw          $v0, 0x124($v1)
    ctx->pc = 0x511788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x51178c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x51178Cu;
    {
        const bool branch_taken_0x51178c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x51178c) {
            ctx->pc = 0x5117A0u;
            goto label_5117a0;
        }
    }
    ctx->pc = 0x511794u;
    // 0x511794: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x511794u;
    {
        const bool branch_taken_0x511794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511794u;
            // 0x511798: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511794) {
            ctx->pc = 0x5117B8u;
            goto label_5117b8;
        }
    }
    ctx->pc = 0x51179Cu;
    // 0x51179c: 0x0  nop
    ctx->pc = 0x51179cu;
    // NOP
label_5117a0:
    // 0x5117a0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x5117a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x5117a4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x5117a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x5117a8: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x5117a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x5117ac: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x5117ACu;
    {
        const bool branch_taken_0x5117ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5117ac) {
            ctx->pc = 0x5117B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5117ACu;
            // 0x5117b0: 0x8fc20074  lw          $v0, 0x74($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51177Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51177c;
        }
    }
    ctx->pc = 0x5117B4u;
    // 0x5117b4: 0x0  nop
    ctx->pc = 0x5117b4u;
    // NOP
label_5117b8:
    // 0x5117b8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x5117b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x5117bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5117bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5117c0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x5117c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x5117c4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x5117C4u;
    SET_GPR_U32(ctx, 31, 0x5117CCu);
    ctx->pc = 0x5117C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5117C4u;
            // 0x5117c8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5117CCu; }
        if (ctx->pc != 0x5117CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5117CCu; }
        if (ctx->pc != 0x5117CCu) { return; }
    }
    ctx->pc = 0x5117CCu;
label_5117cc:
    // 0x5117cc: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x5117ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x5117d0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x5117d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5117d4: 0x0  nop
    ctx->pc = 0x5117d4u;
    // NOP
label_5117d8:
    // 0x5117d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x5117d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5117dc: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x5117DCu;
    {
        const bool branch_taken_0x5117dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x5117dc) {
            ctx->pc = 0x511820u;
            goto label_511820;
        }
    }
    ctx->pc = 0x5117E4u;
    // 0x5117e4: 0x16600014  bnez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x5117E4u;
    {
        const bool branch_taken_0x5117e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x5117e4) {
            ctx->pc = 0x511838u;
            goto label_511838;
        }
    }
    ctx->pc = 0x5117ECu;
    // 0x5117ec: 0x8e26004c  lw          $a2, 0x4C($s1)
    ctx->pc = 0x5117ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x5117f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5117f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5117f4: 0xc143a90  jal         func_50EA40
    ctx->pc = 0x5117F4u;
    SET_GPR_U32(ctx, 31, 0x5117FCu);
    ctx->pc = 0x5117F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5117F4u;
            // 0x5117f8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50EA40u;
    if (runtime->hasFunction(0x50EA40u)) {
        auto targetFn = runtime->lookupFunction(0x50EA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5117FCu; }
        if (ctx->pc != 0x5117FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050EA40_0x50ea40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5117FCu; }
        if (ctx->pc != 0x5117FCu) { return; }
    }
    ctx->pc = 0x5117FCu;
label_5117fc:
    // 0x5117fc: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x5117fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x511800: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x511800u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x511804: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x511804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x511808: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x511808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x51180c: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x51180cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
    // 0x511810: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x511810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x511814: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x511814u;
    {
        const bool branch_taken_0x511814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511814u;
            // 0x511818: 0xac5200c0  sw          $s2, 0xC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511814) {
            ctx->pc = 0x511838u;
            goto label_511838;
        }
    }
    ctx->pc = 0x51181Cu;
    // 0x51181c: 0x0  nop
    ctx->pc = 0x51181cu;
    // NOP
label_511820:
    // 0x511820: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x511820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x511824: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x511824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x511828: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x511828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x51182c: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x51182cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
    // 0x511830: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x511830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x511834: 0xac4400c0  sw          $a0, 0xC0($v0)
    ctx->pc = 0x511834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 4));
label_511838:
    // 0x511838: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x511838u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x51183c: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x51183cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x511840: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x511840u;
    {
        const bool branch_taken_0x511840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x511844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511840u;
            // 0x511844: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511840) {
            ctx->pc = 0x5117D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5117d8;
        }
    }
    ctx->pc = 0x511848u;
    // 0x511848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x511848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51184c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x51184cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x511850: 0xc04a508  jal         func_129420
    ctx->pc = 0x511850u;
    SET_GPR_U32(ctx, 31, 0x511858u);
    ctx->pc = 0x511854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511850u;
            // 0x511854: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511858u; }
        if (ctx->pc != 0x511858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511858u; }
        if (ctx->pc != 0x511858u) { return; }
    }
    ctx->pc = 0x511858u;
label_511858:
    // 0x511858: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x511858u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x51185c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x51185cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x511860: 0x2e3182a  slt         $v1, $s7, $v1
    ctx->pc = 0x511860u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x511864: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x511864u;
    {
        const bool branch_taken_0x511864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x511864) {
            ctx->pc = 0x511778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_511778;
        }
    }
    ctx->pc = 0x51186Cu;
    // 0x51186c: 0x0  nop
    ctx->pc = 0x51186cu;
    // NOP
label_511870:
    // 0x511870: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x511870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x511874: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x511874u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x511878: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x511878u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x51187c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x51187cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x511880: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x511880u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x511884: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x511884u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x511888: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x511888u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x51188c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51188cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x511890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x511890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x511894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x511894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x511898: 0x3e00008  jr          $ra
    ctx->pc = 0x511898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51189Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511898u;
            // 0x51189c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5118A0u;
}
