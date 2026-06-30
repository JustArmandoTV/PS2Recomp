#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017D748
// Address: 0x17d748 - 0x17d8e0
void sub_0017D748_0x17d748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D748_0x17d748");
#endif

    switch (ctx->pc) {
        case 0x17d7b8u: goto label_17d7b8;
        case 0x17d82cu: goto label_17d82c;
        case 0x17d834u: goto label_17d834;
        default: break;
    }

    ctx->pc = 0x17d748u;

    // 0x17d748: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17d748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17d74c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17d74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17d750: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17d750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d754: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x17d754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x17d758: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17d758u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d75c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x17d75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x17d760: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x17d760u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d764: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x17d764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x17d768: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x17d768u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d76c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x17d76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x17d770: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x17d770u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d774: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x17d774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x17d778: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17d778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d77c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17d77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17d780: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17d780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17d784: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x17d784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x17d788: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x17d788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x17d78c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x17d78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x17d790: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x17d790u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17d794: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x17D794u;
    {
        const bool branch_taken_0x17d794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D794u;
            // 0x17d798: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d794) {
            ctx->pc = 0x17D880u;
            goto label_17d880;
        }
    }
    ctx->pc = 0x17D79Cu;
    // 0x17d79c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17d79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d7a0: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x17d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x17d7a4: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x17d7a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17d7a8: 0x241e000d  addiu       $fp, $zero, 0xD
    ctx->pc = 0x17d7a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x17d7ac: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x17d7acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d7b0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x17d7b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17d7b4: 0x0  nop
    ctx->pc = 0x17d7b4u;
    // NOP
label_17d7b8:
    // 0x17d7b8: 0x50540004  beql        $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D7B8u;
    {
        const bool branch_taken_0x17d7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x17d7b8) {
            ctx->pc = 0x17D7BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17D7B8u;
            // 0x17d7bc: 0x80a20001  lb          $v0, 0x1($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17D7CCu;
            goto label_17d7cc;
        }
    }
    ctx->pc = 0x17D7C0u;
    // 0x17d7c0: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x17D7C0u;
    {
        const bool branch_taken_0x17d7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D7C0u;
            // 0x17d7c4: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7c0) {
            ctx->pc = 0x17D85Cu;
            goto label_17d85c;
        }
    }
    ctx->pc = 0x17D7C8u;
    // 0x17d7c8: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x17d7c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_17d7cc:
    // 0x17d7cc: 0x50540004  beql        $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D7CCu;
    {
        const bool branch_taken_0x17d7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x17d7cc) {
            ctx->pc = 0x17D7D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17D7CCu;
            // 0x17d7d0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17D7E0u;
            goto label_17d7e0;
        }
    }
    ctx->pc = 0x17D7D4u;
    // 0x17d7d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D7D4u;
    {
        const bool branch_taken_0x17d7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D7D4u;
            // 0x17d7d8: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7d4) {
            ctx->pc = 0x17D7E8u;
            goto label_17d7e8;
        }
    }
    ctx->pc = 0x17D7DCu;
    // 0x17d7dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17d7dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17d7e0:
    // 0x17d7e0: 0x2722821  addu        $a1, $s3, $s2
    ctx->pc = 0x17d7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x17d7e4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x17d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_17d7e8:
    // 0x17d7e8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x17d7e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d7ec: 0x10540003  beq         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D7ECu;
    {
        const bool branch_taken_0x17d7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x17D7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D7ECu;
            // 0x17d7f0: 0x2448823  subu        $s1, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7ec) {
            ctx->pc = 0x17D7FCu;
            goto label_17d7fc;
        }
    }
    ctx->pc = 0x17D7F4u;
    // 0x17d7f4: 0x145e0003  bne         $v0, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D7F4u;
    {
        const bool branch_taken_0x17d7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x17D7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D7F4u;
            // 0x17d7f8: 0x24a2fffe  addiu       $v0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7f4) {
            ctx->pc = 0x17D804u;
            goto label_17d804;
        }
    }
    ctx->pc = 0x17D7FCu;
label_17d7fc:
    // 0x17d7fc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x17d7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d800: 0x24a2fffe  addiu       $v0, $a1, -0x2
    ctx->pc = 0x17d800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_17d804:
    // 0x17d804: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x17d804u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d808: 0x50740004  beql        $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D808u;
    {
        const bool branch_taken_0x17d808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x17d808) {
            ctx->pc = 0x17D80Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17D808u;
            // 0x17d80c: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17D81Cu;
            goto label_17d81c;
        }
    }
    ctx->pc = 0x17D810u;
    // 0x17d810: 0x147e0003  bne         $v1, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D810u;
    {
        const bool branch_taken_0x17d810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 30));
        ctx->pc = 0x17D814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D810u;
            // 0x17d814: 0x2642821  addu        $a1, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d810) {
            ctx->pc = 0x17D820u;
            goto label_17d820;
        }
    }
    ctx->pc = 0x17D818u;
    // 0x17d818: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x17d818u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_17d81c:
    // 0x17d81c: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x17d81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_17d820:
    // 0x17d820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d824: 0xc04a508  jal         func_129420
    ctx->pc = 0x17D824u;
    SET_GPR_U32(ctx, 31, 0x17D82Cu);
    ctx->pc = 0x17D828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D824u;
            // 0x17d828: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D82Cu; }
        if (ctx->pc != 0x17D82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D82Cu; }
        if (ctx->pc != 0x17D82Cu) { return; }
    }
    ctx->pc = 0x17D82Cu;
label_17d82c:
    // 0x17d82c: 0xc05f2ce  jal         func_17CB38
    ctx->pc = 0x17D82Cu;
    SET_GPR_U32(ctx, 31, 0x17D834u);
    ctx->pc = 0x17D830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D82Cu;
            // 0x17d830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CB38u;
    if (runtime->hasFunction(0x17CB38u)) {
        auto targetFn = runtime->lookupFunction(0x17CB38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D834u; }
        if (ctx->pc != 0x17D834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CB38_0x17cb38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D834u; }
        if (ctx->pc != 0x17D834u) { return; }
    }
    ctx->pc = 0x17D834u;
label_17d834:
    // 0x17d834: 0x2113021  addu        $a2, $s0, $s1
    ctx->pc = 0x17d834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x17d838: 0x80c2ffff  lb          $v0, -0x1($a2)
    ctx->pc = 0x17d838u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x17d83c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17D83Cu;
    {
        const bool branch_taken_0x17d83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d83c) {
            ctx->pc = 0x17D840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17D83Cu;
            // 0x17d840: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17D844u;
            goto label_17d844;
        }
    }
    ctx->pc = 0x17D844u;
label_17d844:
    // 0x17d844: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x17d844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17d848: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x17d848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x17d84c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x17d84cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x17d850: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x17d850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17d854: 0x12b6000a  beq         $s5, $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x17D854u;
    {
        const bool branch_taken_0x17d854 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 22));
        ctx->pc = 0x17D858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D854u;
            // 0x17d858: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d854) {
            ctx->pc = 0x17D880u;
            goto label_17d880;
        }
    }
    ctx->pc = 0x17D85Cu;
label_17d85c:
    // 0x17d85c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x17d85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17d860: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x17d860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17d864: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D864u;
    {
        const bool branch_taken_0x17d864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D864u;
            // 0x17d868: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d864) {
            ctx->pc = 0x17D880u;
            goto label_17d880;
        }
    }
    ctx->pc = 0x17D86Cu;
    // 0x17d86c: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x17d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x17d870: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17d870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d874: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x17d874u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17d878: 0x5460ffcf  bnel        $v1, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x17D878u;
    {
        const bool branch_taken_0x17d878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d878) {
            ctx->pc = 0x17D87Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17D878u;
            // 0x17d87c: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17D7B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17d7b8;
        }
    }
    ctx->pc = 0x17D880u;
label_17d880:
    // 0x17d880: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17d880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17d884: 0x24426540  addiu       $v0, $v0, 0x6540
    ctx->pc = 0x17d884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25920));
    // 0x17d888: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17d888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d88c: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17D88Cu;
    {
        const bool branch_taken_0x17d88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d88c) {
            ctx->pc = 0x17D890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17D88Cu;
            // 0x17d890: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17D8ACu;
            goto label_17d8ac;
        }
    }
    ctx->pc = 0x17D894u;
    // 0x17d894: 0xac57000c  sw          $s7, 0xC($v0)
    ctx->pc = 0x17d894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 23));
    // 0x17d898: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17d898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d89c: 0xac560008  sw          $s6, 0x8($v0)
    ctx->pc = 0x17d89cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 22));
    // 0x17d8a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17d8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17d8a4: 0xac550004  sw          $s5, 0x4($v0)
    ctx->pc = 0x17d8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 21));
    // 0x17d8a8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x17d8a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17d8ac:
    // 0x17d8ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17d8acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d8b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17d8b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17d8b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17d8b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d8b8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x17d8b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17d8bc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x17d8bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d8c0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x17d8c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17d8c4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x17d8c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17d8c8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x17d8c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17d8cc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x17d8ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17d8d0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x17d8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17d8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x17D8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D8D4u;
            // 0x17d8d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D8DCu;
    // 0x17d8dc: 0x0  nop
    ctx->pc = 0x17d8dcu;
    // NOP
}
