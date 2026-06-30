#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F4750
// Address: 0x4f4750 - 0x4f48f0
void sub_004F4750_0x4f4750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4750_0x4f4750");
#endif

    switch (ctx->pc) {
        case 0x4f476cu: goto label_4f476c;
        case 0x4f478cu: goto label_4f478c;
        case 0x4f47dcu: goto label_4f47dc;
        case 0x4f47fcu: goto label_4f47fc;
        case 0x4f4820u: goto label_4f4820;
        case 0x4f4880u: goto label_4f4880;
        case 0x4f488cu: goto label_4f488c;
        case 0x4f4898u: goto label_4f4898;
        case 0x4f48a4u: goto label_4f48a4;
        case 0x4f48b0u: goto label_4f48b0;
        case 0x4f48bcu: goto label_4f48bc;
        case 0x4f48d4u: goto label_4f48d4;
        default: break;
    }

    ctx->pc = 0x4f4750u;

    // 0x4f4750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f4750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f4754: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4f4754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4f4758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f4758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f475c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4f475cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x4f4760: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f4760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f4764: 0xc13d274  jal         func_4F49D0
    ctx->pc = 0x4F4764u;
    SET_GPR_U32(ctx, 31, 0x4F476Cu);
    ctx->pc = 0x4F4768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4764u;
            // 0x4f4768: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F49D0u;
    if (runtime->hasFunction(0x4F49D0u)) {
        auto targetFn = runtime->lookupFunction(0x4F49D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F476Cu; }
        if (ctx->pc != 0x4F476Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F49D0_0x4f49d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F476Cu; }
        if (ctx->pc != 0x4F476Cu) { return; }
    }
    ctx->pc = 0x4F476Cu;
label_4f476c:
    // 0x4f476c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f476cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f4770: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f4770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f4774: 0x24634520  addiu       $v1, $v1, 0x4520
    ctx->pc = 0x4f4774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17696));
    // 0x4f4778: 0x24424558  addiu       $v0, $v0, 0x4558
    ctx->pc = 0x4f4778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17752));
    // 0x4f477c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f477cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f4780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f4780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4784: 0xc13d270  jal         func_4F49C0
    ctx->pc = 0x4F4784u;
    SET_GPR_U32(ctx, 31, 0x4F478Cu);
    ctx->pc = 0x4F4788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4784u;
            // 0x4f4788: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F49C0u;
    if (runtime->hasFunction(0x4F49C0u)) {
        auto targetFn = runtime->lookupFunction(0x4F49C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F478Cu; }
        if (ctx->pc != 0x4F478Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F49C0_0x4f49c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F478Cu; }
        if (ctx->pc != 0x4F478Cu) { return; }
    }
    ctx->pc = 0x4F478Cu;
label_4f478c:
    // 0x4f478c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4f478cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4f4790: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x4f4790u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x4f4794: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f4794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4f4798: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4f4798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x4f479c: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x4f479cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4f47a0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f47a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f47a4: 0x24e7c4f0  addiu       $a3, $a3, -0x3B10
    ctx->pc = 0x4f47a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952176));
    // 0x4f47a8: 0x248443d0  addiu       $a0, $a0, 0x43D0
    ctx->pc = 0x4f47a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17360));
    // 0x4f47ac: 0x24634408  addiu       $v1, $v1, 0x4408
    ctx->pc = 0x4f47acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17416));
    // 0x4f47b0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x4f47b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x4f47b4: 0x8cc80968  lw          $t0, 0x968($a2)
    ctx->pc = 0x4f47b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
    // 0x4f47b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4f47bc: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x4f47bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x4f47c0: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x4f47c0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f47c4: 0xa2070090  sb          $a3, 0x90($s0)
    ctx->pc = 0x4f47c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 144), (uint8_t)GPR_U32(ctx, 7));
    // 0x4f47c8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4f47c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4f47cc: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x4f47ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x4f47d0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4f47d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4f47d4: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4F47D4u;
    SET_GPR_U32(ctx, 31, 0x4F47DCu);
    ctx->pc = 0x4F47D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F47D4u;
            // 0x4f47d8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F47DCu; }
        if (ctx->pc != 0x4F47DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F47DCu; }
        if (ctx->pc != 0x4F47DCu) { return; }
    }
    ctx->pc = 0x4F47DCu;
label_4f47dc:
    // 0x4f47dc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x4f47dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x4f47e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f47e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f47e4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4F47E4u;
    {
        const bool branch_taken_0x4f47e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F47E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F47E4u;
            // 0x4f47e8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f47e4) {
            ctx->pc = 0x4F4800u;
            goto label_4f4800;
        }
    }
    ctx->pc = 0x4F47ECu;
    // 0x4f47ec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4f47ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x4f47f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4f47f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4f47f4: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x4F47F4u;
    SET_GPR_U32(ctx, 31, 0x4F47FCu);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F47FCu; }
        if (ctx->pc != 0x4F47FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F47FCu; }
        if (ctx->pc != 0x4F47FCu) { return; }
    }
    ctx->pc = 0x4F47FCu;
label_4f47fc:
    // 0x4f47fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f47fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f4800:
    // 0x4f4800: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4f4800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x4f4804: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f4804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f4808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f480c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f480cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f4810: 0x3e00008  jr          $ra
    ctx->pc = 0x4F4810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4810u;
            // 0x4f4814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F4818u;
    // 0x4f4818: 0x0  nop
    ctx->pc = 0x4f4818u;
    // NOP
    // 0x4f481c: 0x0  nop
    ctx->pc = 0x4f481cu;
    // NOP
label_4f4820:
    // 0x4f4820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f4820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f4824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f4824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f4828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f4828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4f482c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f482cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f4830: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f4830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4834: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4F4834u;
    {
        const bool branch_taken_0x4f4834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4834u;
            // 0x4f4838: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4834) {
            ctx->pc = 0x4F48D4u;
            goto label_4f48d4;
        }
    }
    ctx->pc = 0x4F483Cu;
    // 0x4f483c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f483cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f4840: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f4840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f4844: 0x24634520  addiu       $v1, $v1, 0x4520
    ctx->pc = 0x4f4844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17696));
    // 0x4f4848: 0x24424558  addiu       $v0, $v0, 0x4558
    ctx->pc = 0x4f4848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17752));
    // 0x4f484c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f484cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f4850: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4F4850u;
    {
        const bool branch_taken_0x4f4850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4850u;
            // 0x4f4854: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4850) {
            ctx->pc = 0x4F48BCu;
            goto label_4f48bc;
        }
    }
    ctx->pc = 0x4F4858u;
    // 0x4f4858: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f4858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f485c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f485cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f4860: 0x246344d0  addiu       $v1, $v1, 0x44D0
    ctx->pc = 0x4f4860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17616));
    // 0x4f4864: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x4f4864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x4f4868: 0x24424508  addiu       $v0, $v0, 0x4508
    ctx->pc = 0x4f4868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17672));
    // 0x4f486c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f486cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f4870: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4f4870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4f4874: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4f4874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4f4878: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4F4878u;
    SET_GPR_U32(ctx, 31, 0x4F4880u);
    ctx->pc = 0x4F487Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4878u;
            // 0x4f487c: 0x24a53f70  addiu       $a1, $a1, 0x3F70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4880u; }
        if (ctx->pc != 0x4F4880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4880u; }
        if (ctx->pc != 0x4F4880u) { return; }
    }
    ctx->pc = 0x4F4880u;
label_4f4880:
    // 0x4f4880: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4f4880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4f4884: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x4F4884u;
    SET_GPR_U32(ctx, 31, 0x4F488Cu);
    ctx->pc = 0x4F4888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4884u;
            // 0x4f4888: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F488Cu; }
        if (ctx->pc != 0x4F488Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F488Cu; }
        if (ctx->pc != 0x4F488Cu) { return; }
    }
    ctx->pc = 0x4F488Cu;
label_4f488c:
    // 0x4f488c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4f488cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4f4890: 0xc13d254  jal         func_4F4950
    ctx->pc = 0x4F4890u;
    SET_GPR_U32(ctx, 31, 0x4F4898u);
    ctx->pc = 0x4F4894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4890u;
            // 0x4f4894: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F4950u;
    if (runtime->hasFunction(0x4F4950u)) {
        auto targetFn = runtime->lookupFunction(0x4F4950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4898u; }
        if (ctx->pc != 0x4F4898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F4950_0x4f4950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4898u; }
        if (ctx->pc != 0x4F4898u) { return; }
    }
    ctx->pc = 0x4F4898u;
label_4f4898:
    // 0x4f4898: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4f4898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4f489c: 0xc13d254  jal         func_4F4950
    ctx->pc = 0x4F489Cu;
    SET_GPR_U32(ctx, 31, 0x4F48A4u);
    ctx->pc = 0x4F48A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F489Cu;
            // 0x4f48a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F4950u;
    if (runtime->hasFunction(0x4F4950u)) {
        auto targetFn = runtime->lookupFunction(0x4F4950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F48A4u; }
        if (ctx->pc != 0x4F48A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F4950_0x4f4950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F48A4u; }
        if (ctx->pc != 0x4F48A4u) { return; }
    }
    ctx->pc = 0x4F48A4u;
label_4f48a4:
    // 0x4f48a4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4f48a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4f48a8: 0xc13d23c  jal         func_4F48F0
    ctx->pc = 0x4F48A8u;
    SET_GPR_U32(ctx, 31, 0x4F48B0u);
    ctx->pc = 0x4F48ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F48A8u;
            // 0x4f48ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F48F0u;
    if (runtime->hasFunction(0x4F48F0u)) {
        auto targetFn = runtime->lookupFunction(0x4F48F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F48B0u; }
        if (ctx->pc != 0x4F48B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F48F0_0x4f48f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F48B0u; }
        if (ctx->pc != 0x4F48B0u) { return; }
    }
    ctx->pc = 0x4F48B0u;
label_4f48b0:
    // 0x4f48b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f48b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f48b4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4F48B4u;
    SET_GPR_U32(ctx, 31, 0x4F48BCu);
    ctx->pc = 0x4F48B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F48B4u;
            // 0x4f48b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F48BCu; }
        if (ctx->pc != 0x4F48BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F48BCu; }
        if (ctx->pc != 0x4F48BCu) { return; }
    }
    ctx->pc = 0x4F48BCu;
label_4f48bc:
    // 0x4f48bc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4f48bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4f48c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f48c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4f48c4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F48C4u;
    {
        const bool branch_taken_0x4f48c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f48c4) {
            ctx->pc = 0x4F48C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F48C4u;
            // 0x4f48c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F48D8u;
            goto label_4f48d8;
        }
    }
    ctx->pc = 0x4F48CCu;
    // 0x4f48cc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F48CCu;
    SET_GPR_U32(ctx, 31, 0x4F48D4u);
    ctx->pc = 0x4F48D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F48CCu;
            // 0x4f48d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F48D4u; }
        if (ctx->pc != 0x4F48D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F48D4u; }
        if (ctx->pc != 0x4F48D4u) { return; }
    }
    ctx->pc = 0x4F48D4u;
label_4f48d4:
    // 0x4f48d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f48d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f48d8:
    // 0x4f48d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f48d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f48dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f48dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f48e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f48e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f48e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F48E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F48E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F48E4u;
            // 0x4f48e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F48ECu;
    // 0x4f48ec: 0x0  nop
    ctx->pc = 0x4f48ecu;
    // NOP
}
