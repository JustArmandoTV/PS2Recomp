#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A3750
// Address: 0x1a3750 - 0x1a3830
void sub_001A3750_0x1a3750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3750_0x1a3750");
#endif

    switch (ctx->pc) {
        case 0x1a37c0u: goto label_1a37c0;
        case 0x1a37d0u: goto label_1a37d0;
        case 0x1a37f0u: goto label_1a37f0;
        default: break;
    }

    ctx->pc = 0x1a3750u;

    // 0x1a3750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a3750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a3754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a3754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3758: 0x8c822074  lw          $v0, 0x2074($a0)
    ctx->pc = 0x1a3758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8308)));
    // 0x1a375c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a375cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3760: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a3760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a3764: 0x805d696  j           func_175A58
    ctx->pc = 0x1A3764u;
    ctx->pc = 0x1A3768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3764u;
            // 0x1a3768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175A58u;
    {
        auto targetFn = runtime->lookupFunction(0x175A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A376Cu;
    // 0x1a376c: 0x0  nop
    ctx->pc = 0x1a376cu;
    // NOP
    // 0x1a3770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a3770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a3774: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a3774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1a3778: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1a3778u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a377c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a377cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a3780: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a3780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3784: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a3784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a3788: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a3788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a378c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a378cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a3790: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a3790u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3794: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1a3794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1a3798: 0x2a020120  slti        $v0, $s0, 0x120
    ctx->pc = 0x1a3798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)288) ? 1 : 0);
    // 0x1a379c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1a379cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1a37a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a37a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a37a4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1a37a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1a37a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a37a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a37ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a37acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a37b0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A37B0u;
    {
        const bool branch_taken_0x1a37b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A37B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A37B0u;
            // 0x1a37b4: 0x8e542074  lw          $s4, 0x2074($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37b0) {
            ctx->pc = 0x1A3810u;
            goto label_1a3810;
        }
    }
    ctx->pc = 0x1A37B8u;
    // 0x1a37b8: 0xc05d660  jal         func_175980
    ctx->pc = 0x1A37B8u;
    SET_GPR_U32(ctx, 31, 0x1A37C0u);
    ctx->pc = 0x175980u;
    if (runtime->hasFunction(0x175980u)) {
        auto targetFn = runtime->lookupFunction(0x175980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37C0u; }
        if (ctx->pc != 0x1A37C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175980_0x175980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37C0u; }
        if (ctx->pc != 0x1A37C0u) { return; }
    }
    ctx->pc = 0x1A37C0u;
label_1a37c0:
    // 0x1a37c0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A37C0u;
    {
        const bool branch_taken_0x1a37c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A37C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A37C0u;
            // 0x1a37c4: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37c0) {
            ctx->pc = 0x1A37F4u;
            goto label_1a37f4;
        }
    }
    ctx->pc = 0x1A37C8u;
    // 0x1a37c8: 0xc06a108  jal         func_1A8420
    ctx->pc = 0x1A37C8u;
    SET_GPR_U32(ctx, 31, 0x1A37D0u);
    ctx->pc = 0x1A37CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A37C8u;
            // 0x1a37cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8420u;
    if (runtime->hasFunction(0x1A8420u)) {
        auto targetFn = runtime->lookupFunction(0x1A8420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37D0u; }
        if (ctx->pc != 0x1A37D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8420_0x1a8420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37D0u; }
        if (ctx->pc != 0x1A37D0u) { return; }
    }
    ctx->pc = 0x1A37D0u;
label_1a37d0:
    // 0x1a37d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a37d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a37d4: 0x2842006c  slti        $v0, $v0, 0x6C
    ctx->pc = 0x1a37d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)108) ? 1 : 0);
    // 0x1a37d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a37d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a37dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a37dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a37e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A37E0u;
    {
        const bool branch_taken_0x1a37e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A37E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A37E0u;
            // 0x1a37e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37e0) {
            ctx->pc = 0x1A37F4u;
            goto label_1a37f4;
        }
    }
    ctx->pc = 0x1A37E8u;
    // 0x1a37e8: 0xc068e0c  jal         func_1A3830
    ctx->pc = 0x1A37E8u;
    SET_GPR_U32(ctx, 31, 0x1A37F0u);
    ctx->pc = 0x1A3830u;
    if (runtime->hasFunction(0x1A3830u)) {
        auto targetFn = runtime->lookupFunction(0x1A3830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37F0u; }
        if (ctx->pc != 0x1A37F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3830_0x1a3830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37F0u; }
        if (ctx->pc != 0x1A37F0u) { return; }
    }
    ctx->pc = 0x1A37F0u;
label_1a37f0:
    // 0x1a37f0: 0x513823  subu        $a3, $v0, $s1
    ctx->pc = 0x1a37f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a37f4:
    // 0x1a37f4: 0xde4309c8  ld          $v1, 0x9C8($s2)
    ctx->pc = 0x1a37f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 2504)));
    // 0x1a37f8: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a37f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a37fc: 0x24423460  addiu       $v0, $v0, 0x3460
    ctx->pc = 0x1a37fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13408));
    // 0x1a3800: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x1a3800u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x1a3804: 0xe3182d  daddu       $v1, $a3, $v1
    ctx->pc = 0x1a3804u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1a3808: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x1a3808u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x1a380c: 0xfe4309c8  sd          $v1, 0x9C8($s2)
    ctx->pc = 0x1a380cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 2504), GPR_U64(ctx, 3));
label_1a3810:
    // 0x1a3810: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a3810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3814: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a3814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a3818: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a3818u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a381c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a381cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3820: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1a3820u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3824: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a3824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a3828: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A382Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3828u;
            // 0x1a382c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3830u;
}
