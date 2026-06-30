#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00164778
// Address: 0x164778 - 0x164898
void sub_00164778_0x164778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164778_0x164778");
#endif

    switch (ctx->pc) {
        case 0x1647c0u: goto label_1647c0;
        case 0x164814u: goto label_164814;
        case 0x164820u: goto label_164820;
        case 0x164830u: goto label_164830;
        case 0x164870u: goto label_164870;
        default: break;
    }

    ctx->pc = 0x164778u;

    // 0x164778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16477c: 0x3c08005d  lui         $t0, 0x5D
    ctx->pc = 0x16477cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)93 << 16));
    // 0x164780: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x164780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x164784: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x164784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164788: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x164788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16478c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x16478cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164790: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x164790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x164794: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x164794u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164798: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x164798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16479c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16479cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1647a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1647a4: 0x25036200  addiu       $v1, $t0, 0x6200
    ctx->pc = 0x1647a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 25088));
    // 0x1647a8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1647a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1647ac: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x1647acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1647b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1647B0u;
    {
        const bool branch_taken_0x1647b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1647B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1647B0u;
            // 0x1647b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647b0) {
            ctx->pc = 0x1647E4u;
            goto label_1647e4;
        }
    }
    ctx->pc = 0x1647B8u;
    // 0x1647b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1647b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1647bc: 0x0  nop
    ctx->pc = 0x1647bcu;
    // NOP
label_1647c0:
    // 0x1647c0: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x1647c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1647c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1647C4u;
    {
        const bool branch_taken_0x1647c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1647C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1647C4u;
            // 0x1647c8: 0x24630104  addiu       $v1, $v1, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647c4) {
            ctx->pc = 0x1647E4u;
            goto label_1647e4;
        }
    }
    ctx->pc = 0x1647CCu;
    // 0x1647cc: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x1647ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1647d0: 0x0  nop
    ctx->pc = 0x1647d0u;
    // NOP
    // 0x1647d4: 0x0  nop
    ctx->pc = 0x1647d4u;
    // NOP
    // 0x1647d8: 0x0  nop
    ctx->pc = 0x1647d8u;
    // NOP
    // 0x1647dc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1647DCu;
    {
        const bool branch_taken_0x1647dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1647dc) {
            ctx->pc = 0x1647E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1647DCu;
            // 0x1647e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1647C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1647c0;
        }
    }
    ctx->pc = 0x1647E4u;
label_1647e4:
    // 0x1647e4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1647e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1647e8: 0x10a30022  beq         $a1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1647E8u;
    {
        const bool branch_taken_0x1647e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1647ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1647E8u;
            // 0x1647ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647e8) {
            ctx->pc = 0x164874u;
            goto label_164874;
        }
    }
    ctx->pc = 0x1647F0u;
    // 0x1647f0: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x1647f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1647f4: 0x25036200  addiu       $v1, $t0, 0x6200
    ctx->pc = 0x1647f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 25088));
    // 0x1647f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1647f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1647fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1647fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164800: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x164800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x164804: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x164804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x164808: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x164808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16480c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x16480Cu;
    SET_GPR_U32(ctx, 31, 0x164814u);
    ctx->pc = 0x164810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16480Cu;
            // 0x164810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164814u; }
        if (ctx->pc != 0x164814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164814u; }
        if (ctx->pc != 0x164814u) { return; }
    }
    ctx->pc = 0x164814u;
label_164814:
    // 0x164814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164818: 0xc05df00  jal         func_177C00
    ctx->pc = 0x164818u;
    SET_GPR_U32(ctx, 31, 0x164820u);
    ctx->pc = 0x16481Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164818u;
            // 0x16481c: 0xa6030000  sh          $v1, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177C00u;
    if (runtime->hasFunction(0x177C00u)) {
        auto targetFn = runtime->lookupFunction(0x177C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164820u; }
        if (ctx->pc != 0x164820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C00_0x177c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164820u; }
        if (ctx->pc != 0x164820u) { return; }
    }
    ctx->pc = 0x164820u;
label_164820:
    // 0x164820: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x164820u;
    {
        const bool branch_taken_0x164820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164820u;
            // 0x164824: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164820) {
            ctx->pc = 0x164838u;
            goto label_164838;
        }
    }
    ctx->pc = 0x164828u;
    // 0x164828: 0xc059226  jal         func_164898
    ctx->pc = 0x164828u;
    SET_GPR_U32(ctx, 31, 0x164830u);
    ctx->pc = 0x16482Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164828u;
            // 0x16482c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164898u;
    if (runtime->hasFunction(0x164898u)) {
        auto targetFn = runtime->lookupFunction(0x164898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164830u; }
        if (ctx->pc != 0x164830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164898_0x164898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164830u; }
        if (ctx->pc != 0x164830u) { return; }
    }
    ctx->pc = 0x164830u;
label_164830:
    // 0x164830: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x164830u;
    {
        const bool branch_taken_0x164830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164830u;
            // 0x164834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164830) {
            ctx->pc = 0x164874u;
            goto label_164874;
        }
    }
    ctx->pc = 0x164838u;
label_164838:
    // 0x164838: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x164838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x16483c: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x16483cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x164840: 0x244246f0  addiu       $v0, $v0, 0x46F0
    ctx->pc = 0x164840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18160));
    // 0x164844: 0x24634720  addiu       $v1, $v1, 0x4720
    ctx->pc = 0x164844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18208));
    // 0x164848: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x164848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x16484c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16484cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164850: 0xae140038  sw          $s4, 0x38($s0)
    ctx->pc = 0x164850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
    // 0x164854: 0xae13003c  sw          $s3, 0x3C($s0)
    ctx->pc = 0x164854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 19));
    // 0x164858: 0xae110040  sw          $s1, 0x40($s0)
    ctx->pc = 0x164858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 17));
    // 0x16485c: 0xae120044  sw          $s2, 0x44($s0)
    ctx->pc = 0x16485cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 18));
    // 0x164860: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x164860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x164864: 0xae10007c  sw          $s0, 0x7C($s0)
    ctx->pc = 0x164864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 16));
    // 0x164868: 0xc0591d0  jal         func_164740
    ctx->pc = 0x164868u;
    SET_GPR_U32(ctx, 31, 0x164870u);
    ctx->pc = 0x16486Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164868u;
            // 0x16486c: 0xae100084  sw          $s0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164740u;
    if (runtime->hasFunction(0x164740u)) {
        auto targetFn = runtime->lookupFunction(0x164740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164870u; }
        if (ctx->pc != 0x164870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164740_0x164740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164870u; }
        if (ctx->pc != 0x164870u) { return; }
    }
    ctx->pc = 0x164870u;
label_164870:
    // 0x164870: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x164870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164874:
    // 0x164874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164878: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16487c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16487cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164880: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x164880u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164884: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x164884u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164888: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x164888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16488c: 0x3e00008  jr          $ra
    ctx->pc = 0x16488Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16488Cu;
            // 0x164890: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164894u;
    // 0x164894: 0x0  nop
    ctx->pc = 0x164894u;
    // NOP
}
