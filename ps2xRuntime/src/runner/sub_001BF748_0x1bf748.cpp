#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BF748
// Address: 0x1bf748 - 0x1bfb30
void sub_001BF748_0x1bf748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF748_0x1bf748");
#endif

    switch (ctx->pc) {
        case 0x1bf770u: goto label_1bf770;
        case 0x1bf798u: goto label_1bf798;
        case 0x1bf7d8u: goto label_1bf7d8;
        case 0x1bf7e4u: goto label_1bf7e4;
        case 0x1bf998u: goto label_1bf998;
        case 0x1bf9f8u: goto label_1bf9f8;
        case 0x1bfa08u: goto label_1bfa08;
        case 0x1bfab8u: goto label_1bfab8;
        case 0x1bfb08u: goto label_1bfb08;
        default: break;
    }

    ctx->pc = 0x1bf748u;

    // 0x1bf748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bf74c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bf74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bf750: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bf750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf754: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1bf754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bf758: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bf758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bf75c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bf75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bf760: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1bf760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf764: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1bf764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1bf768: 0xc06fee4  jal         func_1BFB90
    ctx->pc = 0x1BF768u;
    SET_GPR_U32(ctx, 31, 0x1BF770u);
    ctx->pc = 0x1BF76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF768u;
            // 0x1bf76c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB90u;
    if (runtime->hasFunction(0x1BFB90u)) {
        auto targetFn = runtime->lookupFunction(0x1BFB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF770u; }
        if (ctx->pc != 0x1BF770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFB90_0x1bfb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF770u; }
        if (ctx->pc != 0x1BF770u) { return; }
    }
    ctx->pc = 0x1BF770u;
label_1bf770:
    // 0x1bf770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf774: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bf774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf778: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bf778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bf77c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1bf77cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf780: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bf780u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bf784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf788: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1bf788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bf78c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bf78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bf790: 0x806fde6  j           func_1BF798
    ctx->pc = 0x1BF790u;
    ctx->pc = 0x1BF794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF790u;
            // 0x1bf794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF798u;
    goto label_1bf798;
    ctx->pc = 0x1BF798u;
label_1bf798:
    // 0x1bf798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bf798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bf79c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bf79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bf7a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf7a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bf7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bf7a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bf7a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf7ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bf7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bf7b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1bf7b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf7b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1bf7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1bf7b8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1bf7b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf7bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bf7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bf7c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1bf7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bf7c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF7C4u;
    {
        const bool branch_taken_0x1bf7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF7C4u;
            // 0x1bf7c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf7c4) {
            ctx->pc = 0x1BF7DCu;
            goto label_1bf7dc;
        }
    }
    ctx->pc = 0x1BF7CCu;
    // 0x1bf7cc: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1bf7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1bf7d0: 0xc06f8e2  jal         func_1BE388
    ctx->pc = 0x1BF7D0u;
    SET_GPR_U32(ctx, 31, 0x1BF7D8u);
    ctx->pc = 0x1BF7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF7D0u;
            // 0x1bf7d4: 0x24a5b6b0  addiu       $a1, $a1, -0x4950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE388u;
    if (runtime->hasFunction(0x1BE388u)) {
        auto targetFn = runtime->lookupFunction(0x1BE388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF7D8u; }
        if (ctx->pc != 0x1BF7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE388_0x1be388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF7D8u; }
        if (ctx->pc != 0x1BF7D8u) { return; }
    }
    ctx->pc = 0x1BF7D8u;
label_1bf7d8:
    // 0x1bf7d8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1bf7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1bf7dc:
    // 0x1bf7dc: 0xc06fd96  jal         func_1BF658
    ctx->pc = 0x1BF7DCu;
    SET_GPR_U32(ctx, 31, 0x1BF7E4u);
    ctx->pc = 0x1BF7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF7DCu;
            // 0x1bf7e0: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF658u;
    if (runtime->hasFunction(0x1BF658u)) {
        auto targetFn = runtime->lookupFunction(0x1BF658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF7E4u; }
        if (ctx->pc != 0x1BF7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF658_0x1bf658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF7E4u; }
        if (ctx->pc != 0x1BF7E4u) { return; }
    }
    ctx->pc = 0x1BF7E4u;
label_1bf7e4:
    // 0x1bf7e4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1bf7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf7e8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1bf7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1bf7ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf7f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf7f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bf7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf7f8: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF7F8u;
    {
        const bool branch_taken_0x1bf7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BF7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF7F8u;
            // 0x1bf7fc: 0x24c6b6b8  addiu       $a2, $a2, -0x4948 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf7f8) {
            ctx->pc = 0x1BF820u;
            goto label_1bf820;
        }
    }
    ctx->pc = 0x1BF800u;
    // 0x1bf800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bf800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bf804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bf808: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bf808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf80c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bf80cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bf810: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bf810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf814: 0x806f9cc  j           func_1BE730
    ctx->pc = 0x1BF814u;
    ctx->pc = 0x1BF818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF814u;
            // 0x1bf818: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE730u;
    if (runtime->hasFunction(0x1BE730u)) {
        auto targetFn = runtime->lookupFunction(0x1BE730u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BE730_0x1be730(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BF81Cu;
    // 0x1bf81c: 0x0  nop
    ctx->pc = 0x1bf81cu;
    // NOP
label_1bf820:
    // 0x1bf820: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bf820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bf824: 0x10670012  beq         $v1, $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BF824u;
    {
        const bool branch_taken_0x1bf824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1BF828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF824u;
            // 0x1bf828: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf824) {
            ctx->pc = 0x1BF870u;
            goto label_1bf870;
        }
    }
    ctx->pc = 0x1BF82Cu;
    // 0x1bf82c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BF82Cu;
    {
        const bool branch_taken_0x1bf82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF82Cu;
            // 0x1bf830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf82c) {
            ctx->pc = 0x1BF8A0u;
            goto label_1bf8a0;
        }
    }
    ctx->pc = 0x1BF834u;
    // 0x1bf834: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bf834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf838: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1BF838u;
    {
        const bool branch_taken_0x1bf838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bf838) {
            ctx->pc = 0x1BF83Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF838u;
            // 0x1bf83c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BF8A4u;
            goto label_1bf8a4;
        }
    }
    ctx->pc = 0x1BF840u;
    // 0x1bf840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bf844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf848: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bf848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf84c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bf84cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bf850: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bf850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf854: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bf854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf858: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1bf858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf85c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bf85cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bf860: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bf860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf864: 0x806fe32  j           func_1BF8C8
    ctx->pc = 0x1BF864u;
    ctx->pc = 0x1BF868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF864u;
            // 0x1bf868: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF8C8u;
    goto label_1bf8c8;
    ctx->pc = 0x1BF86Cu;
    // 0x1bf86c: 0x0  nop
    ctx->pc = 0x1bf86cu;
    // NOP
label_1bf870:
    // 0x1bf870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bf874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf878: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bf878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf87c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bf87cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bf880: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bf880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf884: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bf884u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf888: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1bf888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf88c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bf88cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bf890: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bf890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf894: 0x806fe8c  j           func_1BFA30
    ctx->pc = 0x1BF894u;
    ctx->pc = 0x1BF898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF894u;
            // 0x1bf898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFA30u;
    goto label_1bfa30;
    ctx->pc = 0x1BF89Cu;
    // 0x1bf89c: 0x0  nop
    ctx->pc = 0x1bf89cu;
    // NOP
label_1bf8a0:
    // 0x1bf8a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bf8a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf8a4:
    // 0x1bf8a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bf8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bf8a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bf8ac: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1bf8acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1bf8b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bf8b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf8b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bf8b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bf8b8: 0x24c6b6e8  addiu       $a2, $a2, -0x4918
    ctx->pc = 0x1bf8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948584));
    // 0x1bf8bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bf8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf8c0: 0x806f9cc  j           func_1BE730
    ctx->pc = 0x1BF8C0u;
    ctx->pc = 0x1BF8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF8C0u;
            // 0x1bf8c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE730u;
    if (runtime->hasFunction(0x1BE730u)) {
        auto targetFn = runtime->lookupFunction(0x1BE730u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BE730_0x1be730(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BF8C8u;
label_1bf8c8:
    // 0x1bf8c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1bf8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1bf8cc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1bf8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1bf8d0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1bf8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1bf8d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bf8d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8d8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1bf8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1bf8dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bf8dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8e0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1bf8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1bf8e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1bf8e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8e8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1bf8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1bf8ec: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x1bf8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1bf8f0: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1bf8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x1bf8f4: 0x262a0014  addiu       $t2, $s1, 0x14
    ctx->pc = 0x1bf8f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1bf8f8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1bf8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1bf8fc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1bf8fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf900: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1bf900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1bf904: 0x262b0024  addiu       $t3, $s1, 0x24
    ctx->pc = 0x1bf904u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x1bf908: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bf908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf90c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1bf90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1bf910: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1bf910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bf914: 0x8e0c0004  lw          $t4, 0x4($s0)
    ctx->pc = 0x1bf914u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bf918: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x1bf918u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1bf91c: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x1bf91cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1bf920: 0x1851818  mult        $v1, $t4, $a1
    ctx->pc = 0x1bf920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bf924: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1bf924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1bf928: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x1bf928u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1bf92c: 0x180a82d  daddu       $s5, $t4, $zero
    ctx->pc = 0x1bf92cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf930: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1bf930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bf934: 0x5a043  sra         $s4, $a1, 1
    ctx->pc = 0x1bf934u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1bf938: 0x8d4d0004  lw          $t5, 0x4($t2)
    ctx->pc = 0x1bf938u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1bf93c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1bf93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1bf940: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x1bf940u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bf944: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bf944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bf948: 0x8d6a0004  lw          $t2, 0x4($t3)
    ctx->pc = 0x1bf948u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1bf94c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1bf94cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1bf950: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1bf950u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1bf954: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1bf954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bf958: 0x8e4b000c  lw          $t3, 0xC($s2)
    ctx->pc = 0x1bf958u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1bf95c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1bf95cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1bf960: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1bf960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1bf964: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x1bf964u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1bf968: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x1bf968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1bf96c: 0xe7a80b  movn        $s5, $a3, $a3
    ctx->pc = 0x1bf96cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 7));
    // 0x1bf970: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1bf970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1bf974: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x1bf974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x1bf978: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x1bf978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x1bf97c: 0xafad0010  sw          $t5, 0x10($sp)
    ctx->pc = 0x1bf97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
    // 0x1bf980: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x1bf980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x1bf984: 0x11600002  beqz        $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF984u;
    {
        const bool branch_taken_0x1bf984 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF984u;
            // 0x1bf988: 0xafac000c  sw          $t4, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf984) {
            ctx->pc = 0x1BF990u;
            goto label_1bf990;
        }
    }
    ctx->pc = 0x1BF98Cu;
    // 0x1bf98c: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x1bf98cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1bf990:
    // 0x1bf990: 0xc06fecc  jal         func_1BFB30
    ctx->pc = 0x1BF990u;
    SET_GPR_U32(ctx, 31, 0x1BF998u);
    ctx->pc = 0x1BFB30u;
    if (runtime->hasFunction(0x1BFB30u)) {
        auto targetFn = runtime->lookupFunction(0x1BFB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF998u; }
        if (ctx->pc != 0x1BF998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFB30_0x1bfb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF998u; }
        if (ctx->pc != 0x1BF998u) { return; }
    }
    ctx->pc = 0x1BF998u;
label_1bf998:
    // 0x1bf998: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x1bf998u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bf99c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1bf99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bf9a0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1bf9a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf9a4: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x1bf9a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bf9a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bf9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf9ac: 0x33fc2  srl         $a3, $v1, 31
    ctx->pc = 0x1bf9acu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1bf9b0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1bf9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1bf9b4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1bf9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1bf9b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bf9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf9bc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1bf9bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1bf9c0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1bf9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1bf9c4: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x1bf9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x1bf9c8: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x1bf9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x1bf9cc: 0xafb60024  sw          $s6, 0x24($sp)
    ctx->pc = 0x1bf9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 22));
    // 0x1bf9d0: 0xafb50028  sw          $s5, 0x28($sp)
    ctx->pc = 0x1bf9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 21));
    // 0x1bf9d4: 0x12690006  beq         $s3, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF9D4u;
    {
        const bool branch_taken_0x1bf9d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 9));
        ctx->pc = 0x1BF9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF9D4u;
            // 0x1bf9d8: 0xafb4002c  sw          $s4, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf9d4) {
            ctx->pc = 0x1BF9F0u;
            goto label_1bf9f0;
        }
    }
    ctx->pc = 0x1BF9DCu;
    // 0x1bf9dc: 0x126a0008  beq         $s3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BF9DCu;
    {
        const bool branch_taken_0x1bf9dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 10));
        ctx->pc = 0x1BF9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF9DCu;
            // 0x1bf9e0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf9dc) {
            ctx->pc = 0x1BFA00u;
            goto label_1bfa00;
        }
    }
    ctx->pc = 0x1BF9E4u;
    // 0x1bf9e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BF9E4u;
    {
        const bool branch_taken_0x1bf9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF9E4u;
            // 0x1bf9e8: 0xdfb10048  ld          $s1, 0x48($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf9e4) {
            ctx->pc = 0x1BFA10u;
            goto label_1bfa10;
        }
    }
    ctx->pc = 0x1BF9ECu;
    // 0x1bf9ec: 0x0  nop
    ctx->pc = 0x1bf9ecu;
    // NOP
label_1bf9f0:
    // 0x1bf9f0: 0xc06f5ea  jal         func_1BD7A8
    ctx->pc = 0x1BF9F0u;
    SET_GPR_U32(ctx, 31, 0x1BF9F8u);
    ctx->pc = 0x1BD7A8u;
    if (runtime->hasFunction(0x1BD7A8u)) {
        auto targetFn = runtime->lookupFunction(0x1BD7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF9F8u; }
        if (ctx->pc != 0x1BF9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD7A8_0x1bd7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF9F8u; }
        if (ctx->pc != 0x1BF9F8u) { return; }
    }
    ctx->pc = 0x1BF9F8u;
label_1bf9f8:
    // 0x1bf9f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF9F8u;
    {
        const bool branch_taken_0x1bf9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF9F8u;
            // 0x1bf9fc: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf9f8) {
            ctx->pc = 0x1BFA0Cu;
            goto label_1bfa0c;
        }
    }
    ctx->pc = 0x1BFA00u;
label_1bfa00:
    // 0x1bfa00: 0xc06f5ea  jal         func_1BD7A8
    ctx->pc = 0x1BFA00u;
    SET_GPR_U32(ctx, 31, 0x1BFA08u);
    ctx->pc = 0x1BFA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFA00u;
            // 0x1bfa04: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD7A8u;
    if (runtime->hasFunction(0x1BD7A8u)) {
        auto targetFn = runtime->lookupFunction(0x1BD7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFA08u; }
        if (ctx->pc != 0x1BFA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD7A8_0x1bd7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFA08u; }
        if (ctx->pc != 0x1BFA08u) { return; }
    }
    ctx->pc = 0x1BFA08u;
label_1bfa08:
    // 0x1bfa08: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1bfa08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bfa0c:
    // 0x1bfa0c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1bfa0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1bfa10:
    // 0x1bfa10: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1bfa10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bfa14: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1bfa14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bfa18: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1bfa18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bfa1c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1bfa1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bfa20: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1bfa20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bfa24: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1bfa24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1bfa28: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFA28u;
            // 0x1bfa2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFA30u;
label_1bfa30:
    // 0x1bfa30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1bfa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1bfa34: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x1bfa34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bfa38: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1bfa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1bfa3c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1bfa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1bfa40: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1bfa40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa44: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1bfa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1bfa48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bfa48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa4c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1bfa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1bfa50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa54: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1bfa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1bfa58: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1bfa58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa5c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1bfa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x1bfa60: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1bfa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1bfa64: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1bfa64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa68: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1bfa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1bfa6c: 0x26d00004  addiu       $s0, $s6, 0x4
    ctx->pc = 0x1bfa6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x1bfa70: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1bfa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bfa74: 0x8e090004  lw          $t1, 0x4($s0)
    ctx->pc = 0x1bfa74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bfa78: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x1bfa78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bfa7c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1bfa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1bfa80: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x1bfa80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1bfa84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1bfa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bfa88: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1bfa88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bfa8c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1bfa8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa90: 0x108a80b  movn        $s5, $t0, $t0
    ctx->pc = 0x1bfa90u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 8));
    // 0x1bfa94: 0xafaa000c  sw          $t2, 0xC($sp)
    ctx->pc = 0x1bfa94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x1bfa98: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bfa98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1bfa9c: 0x29843  sra         $s3, $v0, 1
    ctx->pc = 0x1bfa9cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1bfaa0: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x1bfaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1bfaa4: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BFAA4u;
    {
        const bool branch_taken_0x1bfaa4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFAA4u;
            // 0x1bfaa8: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfaa4) {
            ctx->pc = 0x1BFAB0u;
            goto label_1bfab0;
        }
    }
    ctx->pc = 0x1BFAACu;
    // 0x1bfaac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1bfaacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bfab0:
    // 0x1bfab0: 0xc06fecc  jal         func_1BFB30
    ctx->pc = 0x1BFAB0u;
    SET_GPR_U32(ctx, 31, 0x1BFAB8u);
    ctx->pc = 0x1BFB30u;
    if (runtime->hasFunction(0x1BFB30u)) {
        auto targetFn = runtime->lookupFunction(0x1BFB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAB8u; }
        if (ctx->pc != 0x1BFAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFB30_0x1bfb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAB8u; }
        if (ctx->pc != 0x1BFAB8u) { return; }
    }
    ctx->pc = 0x1BFAB8u;
label_1bfab8:
    // 0x1bfab8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1bfab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bfabc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1bfabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bfac0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1bfac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bfac4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1bfac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1bfac8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1bfac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1bfacc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1bfaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bfad0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bfad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bfad4: 0xafb40024  sw          $s4, 0x24($sp)
    ctx->pc = 0x1bfad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 20));
    // 0x1bfad8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1bfad8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1bfadc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1bfadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1bfae0: 0xafb50028  sw          $s5, 0x28($sp)
    ctx->pc = 0x1bfae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 21));
    // 0x1bfae4: 0xafb3002c  sw          $s3, 0x2C($sp)
    ctx->pc = 0x1bfae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
    // 0x1bfae8: 0x12250007  beq         $s1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BFAE8u;
    {
        const bool branch_taken_0x1bfae8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x1BFAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFAE8u;
            // 0x1bfaec: 0xafa30034  sw          $v1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfae8) {
            ctx->pc = 0x1BFB08u;
            goto label_1bfb08;
        }
    }
    ctx->pc = 0x1BFAF0u;
    // 0x1bfaf0: 0x56260006  bnel        $s1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BFAF0u;
    {
        const bool branch_taken_0x1bfaf0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        if (branch_taken_0x1bfaf0) {
            ctx->pc = 0x1BFAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFAF0u;
            // 0x1bfaf4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BFB0Cu;
            goto label_1bfb0c;
        }
    }
    ctx->pc = 0x1BFAF8u;
    // 0x1bfaf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bfaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfafc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1bfafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb00: 0xc06f5ea  jal         func_1BD7A8
    ctx->pc = 0x1BFB00u;
    SET_GPR_U32(ctx, 31, 0x1BFB08u);
    ctx->pc = 0x1BFB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB00u;
            // 0x1bfb04: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD7A8u;
    if (runtime->hasFunction(0x1BD7A8u)) {
        auto targetFn = runtime->lookupFunction(0x1BD7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB08u; }
        if (ctx->pc != 0x1BFB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD7A8_0x1bd7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB08u; }
        if (ctx->pc != 0x1BFB08u) { return; }
    }
    ctx->pc = 0x1BFB08u;
label_1bfb08:
    // 0x1bfb08: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1bfb08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bfb0c:
    // 0x1bfb0c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1bfb0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1bfb10: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1bfb10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bfb14: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1bfb14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bfb18: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1bfb18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bfb1c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1bfb1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bfb20: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1bfb20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bfb24: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1bfb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1bfb28: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFB28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB28u;
            // 0x1bfb2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFB30u;
}
