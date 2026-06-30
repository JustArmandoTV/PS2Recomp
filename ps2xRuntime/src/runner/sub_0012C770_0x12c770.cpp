#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012C770
// Address: 0x12c770 - 0x12d620
void sub_0012C770_0x12c770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C770_0x12c770");
#endif

    switch (ctx->pc) {
        case 0x12c7b8u: goto label_12c7b8;
        case 0x12c80cu: goto label_12c80c;
        case 0x12c810u: goto label_12c810;
        case 0x12c830u: goto label_12c830;
        case 0x12c884u: goto label_12c884;
        case 0x12c8e0u: goto label_12c8e0;
        case 0x12c8f8u: goto label_12c8f8;
        case 0x12c944u: goto label_12c944;
        case 0x12c984u: goto label_12c984;
        case 0x12c9b0u: goto label_12c9b0;
        case 0x12c9bcu: goto label_12c9bc;
        case 0x12c9f0u: goto label_12c9f0;
        case 0x12ca10u: goto label_12ca10;
        case 0x12ca90u: goto label_12ca90;
        case 0x12caecu: goto label_12caec;
        case 0x12cb48u: goto label_12cb48;
        case 0x12cb90u: goto label_12cb90;
        case 0x12cbbcu: goto label_12cbbc;
        case 0x12cbe4u: goto label_12cbe4;
        case 0x12cbf4u: goto label_12cbf4;
        case 0x12cbf8u: goto label_12cbf8;
        case 0x12cc00u: goto label_12cc00;
        case 0x12cc38u: goto label_12cc38;
        case 0x12cc54u: goto label_12cc54;
        case 0x12cc58u: goto label_12cc58;
        case 0x12cc6cu: goto label_12cc6c;
        case 0x12cc70u: goto label_12cc70;
        case 0x12cc78u: goto label_12cc78;
        case 0x12cc84u: goto label_12cc84;
        case 0x12cc90u: goto label_12cc90;
        case 0x12cc9cu: goto label_12cc9c;
        case 0x12cca8u: goto label_12cca8;
        case 0x12ccd0u: goto label_12ccd0;
        case 0x12cce8u: goto label_12cce8;
        case 0x12cd40u: goto label_12cd40;
        case 0x12cd88u: goto label_12cd88;
        case 0x12cd8cu: goto label_12cd8c;
        case 0x12cda0u: goto label_12cda0;
        case 0x12cdb0u: goto label_12cdb0;
        case 0x12cdbcu: goto label_12cdbc;
        case 0x12cddcu: goto label_12cddc;
        case 0x12cdf0u: goto label_12cdf0;
        case 0x12ce00u: goto label_12ce00;
        case 0x12ce1cu: goto label_12ce1c;
        case 0x12ce90u: goto label_12ce90;
        case 0x12cea4u: goto label_12cea4;
        case 0x12ceb4u: goto label_12ceb4;
        case 0x12ceccu: goto label_12cecc;
        case 0x12cee4u: goto label_12cee4;
        case 0x12cefcu: goto label_12cefc;
        case 0x12cf14u: goto label_12cf14;
        case 0x12cf28u: goto label_12cf28;
        case 0x12cf40u: goto label_12cf40;
        case 0x12cf70u: goto label_12cf70;
        case 0x12cf80u: goto label_12cf80;
        case 0x12cf88u: goto label_12cf88;
        case 0x12d024u: goto label_12d024;
        case 0x12d044u: goto label_12d044;
        case 0x12d050u: goto label_12d050;
        case 0x12d060u: goto label_12d060;
        case 0x12d068u: goto label_12d068;
        case 0x12d08cu: goto label_12d08c;
        case 0x12d098u: goto label_12d098;
        case 0x12d0c8u: goto label_12d0c8;
        case 0x12d0dcu: goto label_12d0dc;
        case 0x12d0f8u: goto label_12d0f8;
        case 0x12d140u: goto label_12d140;
        case 0x12d14cu: goto label_12d14c;
        case 0x12d158u: goto label_12d158;
        case 0x12d1a8u: goto label_12d1a8;
        case 0x12d1b0u: goto label_12d1b0;
        case 0x12d1bcu: goto label_12d1bc;
        case 0x12d1c8u: goto label_12d1c8;
        case 0x12d1d4u: goto label_12d1d4;
        case 0x12d1f8u: goto label_12d1f8;
        case 0x12d228u: goto label_12d228;
        case 0x12d230u: goto label_12d230;
        case 0x12d23cu: goto label_12d23c;
        case 0x12d26cu: goto label_12d26c;
        case 0x12d27cu: goto label_12d27c;
        case 0x12d284u: goto label_12d284;
        case 0x12d2c0u: goto label_12d2c0;
        case 0x12d2d4u: goto label_12d2d4;
        case 0x12d2dcu: goto label_12d2dc;
        case 0x12d2e4u: goto label_12d2e4;
        case 0x12d2f8u: goto label_12d2f8;
        case 0x12d304u: goto label_12d304;
        case 0x12d310u: goto label_12d310;
        case 0x12d31cu: goto label_12d31c;
        case 0x12d35cu: goto label_12d35c;
        case 0x12d36cu: goto label_12d36c;
        case 0x12d378u: goto label_12d378;
        case 0x12d38cu: goto label_12d38c;
        case 0x12d3a4u: goto label_12d3a4;
        case 0x12d3bcu: goto label_12d3bc;
        case 0x12d3d0u: goto label_12d3d0;
        case 0x12d438u: goto label_12d438;
        case 0x12d470u: goto label_12d470;
        case 0x12d488u: goto label_12d488;
        case 0x12d4ccu: goto label_12d4cc;
        case 0x12d4dcu: goto label_12d4dc;
        case 0x12d4f0u: goto label_12d4f0;
        case 0x12d4fcu: goto label_12d4fc;
        case 0x12d508u: goto label_12d508;
        case 0x12d528u: goto label_12d528;
        case 0x12d534u: goto label_12d534;
        case 0x12d608u: goto label_12d608;
        case 0x12d610u: goto label_12d610;
        default: break;
    }

    ctx->pc = 0x12c770u;

label_12c770:
    // 0x12c770: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x12c770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x12c774: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12c774u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c778: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x12c778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x12c77c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12c77cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c780: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x12c780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x12c784: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x12c784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x12c788: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x12c788u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c78c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x12c78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x12c790: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x12c790u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c794: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x12c794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x12c798: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x12c798u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c79c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x12c79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x12c7a0: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x12c7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x12c7a4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x12c7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x12c7a8: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x12c7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x12c7ac: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x12c7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x12c7b0: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x12c7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x12c7b4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x12c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_12c7b8:
    // 0x12c7b8: 0x93cc0000  lbu         $t4, 0x0($fp)
    ctx->pc = 0x12c7b8u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12c7bc: 0xc7600  sll         $t6, $t4, 24
    ctx->pc = 0x12c7bcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x12c7c0: 0xe7603  sra         $t6, $t6, 24
    ctx->pc = 0x12c7c0u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 24));
    // 0x12c7c4: 0x2dcf002e  sltiu       $t7, $t6, 0x2E
    ctx->pc = 0x12c7c4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
    // 0x12c7c8: 0x11e00025  beqz        $t7, . + 4 + (0x25 << 2)
    ctx->pc = 0x12C7C8u;
    {
        const bool branch_taken_0x12c7c8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C7C8u;
            // 0x12c7cc: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7c8) {
            ctx->pc = 0x12C860u;
            goto label_12c860;
        }
    }
    ctx->pc = 0x12C7D0u;
    // 0x12c7d0: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x12c7d0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x12c7d4: 0x25ce0ab0  addiu       $t6, $t6, 0xAB0
    ctx->pc = 0x12c7d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2736));
    // 0x12c7d8: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12c7d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12c7dc: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x12c7dcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12c7e0: 0x1a00008  jr          $t5
    ctx->pc = 0x12C7E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C7E8u: goto label_12c7e8;
            case 0x12C7F0u: goto label_12c7f0;
            case 0x12C808u: goto label_12c808;
            case 0x12C860u: goto label_12c860;
            case 0x12D5B8u: goto label_12d5b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12C7E8u;
label_12c7e8:
    // 0x12c7e8: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x12c7e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c7ec: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x12c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
label_12c7f0:
    // 0x12c7f0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12c7f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12c7f4: 0x93cc0000  lbu         $t4, 0x0($fp)
    ctx->pc = 0x12c7f4u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12c7f8: 0xc7e00  sll         $t7, $t4, 24
    ctx->pc = 0x12c7f8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x12c7fc: 0xf7e03  sra         $t7, $t7, 24
    ctx->pc = 0x12c7fcu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 24));
    // 0x12c800: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12C800u;
    {
        const bool branch_taken_0x12c800 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C800u;
            // 0x12c804: 0xc7600  sll         $t6, $t4, 24 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c800) {
            ctx->pc = 0x12C864u;
            goto label_12c864;
        }
    }
    ctx->pc = 0x12C808u;
label_12c808:
    // 0x12c808: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x12c808u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12c80c:
    // 0x12c80c: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x12c80cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_12c810:
    // 0x12c810: 0x55a00001  bnel        $t5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12C810u;
    {
        const bool branch_taken_0x12c810 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c810) {
            ctx->pc = 0x12C814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C810u;
            // 0x12c814: 0xadbe0000  sw          $fp, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C818u;
            goto label_12c818;
        }
    }
    ctx->pc = 0x12C818u;
label_12c818:
    // 0x12c818: 0x8fae0010  lw          $t6, 0x10($sp)
    ctx->pc = 0x12c818u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c81c: 0x11c00004  beqz        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C81Cu;
    {
        const bool branch_taken_0x12c81c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C81Cu;
            // 0x12c820: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c81c) {
            ctx->pc = 0x12C830u;
            goto label_12c830;
        }
    }
    ctx->pc = 0x12C824u;
    // 0x12c824: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12c824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c828: 0xc049622  jal         func_125888
    ctx->pc = 0x12C828u;
    SET_GPR_U32(ctx, 31, 0x12C830u);
    ctx->pc = 0x12C82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C828u;
            // 0x12c82c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C830u; }
        if (ctx->pc != 0x12C830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C830u; }
        if (ctx->pc != 0x12C830u) { return; }
    }
    ctx->pc = 0x12C830u;
label_12c830:
    // 0x12c830: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x12c830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12c834: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x12c834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c838: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x12c838u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12c83c: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x12c83cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12c840: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x12c840u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12c844: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x12c844u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x12c848: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x12c848u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c84c: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x12c84cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12c850: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x12c850u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12c854: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x12c854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x12c858: 0x3e00008  jr          $ra
    ctx->pc = 0x12C858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C858u;
            // 0x12c85c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C860u;
label_12c860:
    // 0x12c860: 0xc7600  sll         $t6, $t4, 24
    ctx->pc = 0x12c860u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_12c864:
    // 0x12c864: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x12c864u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12c868: 0xe7603  sra         $t6, $t6, 24
    ctx->pc = 0x12c868u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 24));
    // 0x12c86c: 0x15cf000f  bne         $t6, $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x12C86Cu;
    {
        const bool branch_taken_0x12c86c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x12C870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C86Cu;
            // 0x12c870: 0xc2600  sll         $a0, $t4, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c86c) {
            ctx->pc = 0x12C8ACu;
            goto label_12c8ac;
        }
    }
    ctx->pc = 0x12C874u;
    // 0x12c874: 0x3c0782d  daddu       $t7, $fp, $zero
    ctx->pc = 0x12c874u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c878: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x12c878u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c87c: 0x240e0030  addiu       $t6, $zero, 0x30
    ctx->pc = 0x12c87cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12c880: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12c880u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_12c884:
    // 0x12c884: 0x91ec0000  lbu         $t4, 0x0($t7)
    ctx->pc = 0x12c884u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12c888: 0xc6e00  sll         $t5, $t4, 24
    ctx->pc = 0x12c888u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x12c88c: 0xd6e03  sra         $t5, $t5, 24
    ctx->pc = 0x12c88cu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 24));
    // 0x12c890: 0x0  nop
    ctx->pc = 0x12c890u;
    // NOP
    // 0x12c894: 0x0  nop
    ctx->pc = 0x12c894u;
    // NOP
    // 0x12c898: 0x51aefffa  beql        $t5, $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12C898u;
    {
        const bool branch_taken_0x12c898 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 14));
        if (branch_taken_0x12c898) {
            ctx->pc = 0x12C89Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C898u;
            // 0x12c89c: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C884u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c884;
        }
    }
    ctx->pc = 0x12C8A0u;
    // 0x12c8a0: 0x11a0ffda  beqz        $t5, . + 4 + (-0x26 << 2)
    ctx->pc = 0x12C8A0u;
    {
        const bool branch_taken_0x12c8a0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8A0u;
            // 0x12c8a4: 0x1e0f02d  daddu       $fp, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8a0) {
            ctx->pc = 0x12C80Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c80c;
        }
    }
    ctx->pc = 0x12C8A8u;
    // 0x12c8a8: 0xc2600  sll         $a0, $t4, 24
    ctx->pc = 0x12c8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_12c8ac:
    // 0x12c8ac: 0xafbe0020  sw          $fp, 0x20($sp)
    ctx->pc = 0x12c8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
    // 0x12c8b0: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x12c8b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x12c8b4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x12c8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x12c8b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12c8b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8bc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x12c8bcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8c0: 0x288f0030  slti        $t7, $a0, 0x30
    ctx->pc = 0x12c8c0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x12c8c4: 0x15e00014  bnez        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x12C8C4u;
    {
        const bool branch_taken_0x12c8c4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8C4u;
            // 0x12c8c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8c4) {
            ctx->pc = 0x12C918u;
            goto label_12c918;
        }
    }
    ctx->pc = 0x12C8CCu;
    // 0x12c8cc: 0x288f003a  slti        $t7, $a0, 0x3A
    ctx->pc = 0x12c8ccu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x12c8d0: 0x11e00012  beqz        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x12C8D0u;
    {
        const bool branch_taken_0x12c8d0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8D0u;
            // 0x12c8d4: 0x240f002e  addiu       $t7, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8d0) {
            ctx->pc = 0x12C91Cu;
            goto label_12c91c;
        }
    }
    ctx->pc = 0x12C8D8u;
    // 0x12c8d8: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x12c8d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12c8dc: 0x2a4f0009  slti        $t7, $s2, 0x9
    ctx->pc = 0x12c8dcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
label_12c8e0:
    // 0x12c8e0: 0x11e0032d  beqz        $t7, . + 4 + (0x32D << 2)
    ctx->pc = 0x12C8E0u;
    {
        const bool branch_taken_0x12c8e0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8E0u;
            // 0x12c8e4: 0x8fac0030  lw          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8e0) {
            ctx->pc = 0x12D598u;
            goto label_12d598;
        }
    }
    ctx->pc = 0x12C8E8u;
    // 0x12c8e8: 0x18e7818  mult        $t7, $t4, $t6
    ctx->pc = 0x12c8e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x12c8ec: 0x1e47821  addu        $t7, $t7, $a0
    ctx->pc = 0x12c8ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x12c8f0: 0x25efffd0  addiu       $t7, $t7, -0x30
    ctx->pc = 0x12c8f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967248));
    // 0x12c8f4: 0xafaf0030  sw          $t7, 0x30($sp)
    ctx->pc = 0x12c8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 15));
label_12c8f8:
    // 0x12c8f8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12c8f8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12c8fc: 0x83c40000  lb          $a0, 0x0($fp)
    ctx->pc = 0x12c8fcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12c900: 0x288f0030  slti        $t7, $a0, 0x30
    ctx->pc = 0x12c900u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x12c904: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C904u;
    {
        const bool branch_taken_0x12c904 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C904u;
            // 0x12c908: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c904) {
            ctx->pc = 0x12C918u;
            goto label_12c918;
        }
    }
    ctx->pc = 0x12C90Cu;
    // 0x12c90c: 0x288f003a  slti        $t7, $a0, 0x3A
    ctx->pc = 0x12c90cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x12c910: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x12C910u;
    {
        const bool branch_taken_0x12c910 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C910u;
            // 0x12c914: 0x2a4f0009  slti        $t7, $s2, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c910) {
            ctx->pc = 0x12C8E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c8e0;
        }
    }
    ctx->pc = 0x12C918u;
label_12c918:
    // 0x12c918: 0x240f002e  addiu       $t7, $zero, 0x2E
    ctx->pc = 0x12c918u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_12c91c:
    // 0x12c91c: 0x148f003b  bne         $a0, $t7, . + 4 + (0x3B << 2)
    ctx->pc = 0x12C91Cu;
    {
        const bool branch_taken_0x12c91c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        ctx->pc = 0x12C920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C91Cu;
            // 0x12c920: 0xafb2000c  sw          $s2, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c91c) {
            ctx->pc = 0x12CA0Cu;
            goto label_12ca0c;
        }
    }
    ctx->pc = 0x12C924u;
    // 0x12c924: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12c924u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12c928: 0x16400315  bnez        $s2, . + 4 + (0x315 << 2)
    ctx->pc = 0x12C928u;
    {
        const bool branch_taken_0x12c928 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C928u;
            // 0x12c92c: 0x83c40000  lb          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c928) {
            ctx->pc = 0x12D580u;
            goto label_12d580;
        }
    }
    ctx->pc = 0x12C930u;
    // 0x12c930: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x12c930u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12c934: 0x148f000c  bne         $a0, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x12C934u;
    {
        const bool branch_taken_0x12c934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        ctx->pc = 0x12C938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C934u;
            // 0x12c938: 0x248fffcf  addiu       $t7, $a0, -0x31 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c934) {
            ctx->pc = 0x12C968u;
            goto label_12c968;
        }
    }
    ctx->pc = 0x12C93Cu;
    // 0x12c93c: 0x3c0782d  daddu       $t7, $fp, $zero
    ctx->pc = 0x12c93cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c940: 0x240e0030  addiu       $t6, $zero, 0x30
    ctx->pc = 0x12c940u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_12c944:
    // 0x12c944: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12c944u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12c948: 0x81e40000  lb          $a0, 0x0($t7)
    ctx->pc = 0x12c948u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12c94c: 0x0  nop
    ctx->pc = 0x12c94cu;
    // NOP
    // 0x12c950: 0x0  nop
    ctx->pc = 0x12c950u;
    // NOP
    // 0x12c954: 0x0  nop
    ctx->pc = 0x12c954u;
    // NOP
    // 0x12c958: 0x108efffa  beq         $a0, $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12C958u;
    {
        const bool branch_taken_0x12c958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 14));
        ctx->pc = 0x12C95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C958u;
            // 0x12c95c: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c958) {
            ctx->pc = 0x12C944u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c944;
        }
    }
    ctx->pc = 0x12C960u;
    // 0x12c960: 0x1e0f02d  daddu       $fp, $t7, $zero
    ctx->pc = 0x12c960u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c964: 0x248fffcf  addiu       $t7, $a0, -0x31
    ctx->pc = 0x12c964u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_12c968:
    // 0x12c968: 0x2def0009  sltiu       $t7, $t7, 0x9
    ctx->pc = 0x12c968u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x12c96c: 0x11e00028  beqz        $t7, . + 4 + (0x28 << 2)
    ctx->pc = 0x12C96Cu;
    {
        const bool branch_taken_0x12c96c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C96Cu;
            // 0x12c970: 0x240f0065  addiu       $t7, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c96c) {
            ctx->pc = 0x12CA10u;
            goto label_12ca10;
        }
    }
    ctx->pc = 0x12C974u;
    // 0x12c974: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x12c974u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c978: 0xafbe0020  sw          $fp, 0x20($sp)
    ctx->pc = 0x12c978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
    // 0x12c97c: 0x248bffd0  addiu       $t3, $a0, -0x30
    ctx->pc = 0x12c97cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x12c980: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12c980u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c984:
    // 0x12c984: 0x1160001b  beqz        $t3, . + 4 + (0x1B << 2)
    ctx->pc = 0x12C984u;
    {
        const bool branch_taken_0x12c984 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C984u;
            // 0x12c988: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c984) {
            ctx->pc = 0x12C9F4u;
            goto label_12c9f4;
        }
    }
    ctx->pc = 0x12C98Cu;
    // 0x12c98c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c990: 0x4a782a  slt         $t7, $v0, $t2
    ctx->pc = 0x12c990u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x12c994: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x12C994u;
    {
        const bool branch_taken_0x12c994 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C994u;
            // 0x12c998: 0x1aa6821  addu        $t5, $t5, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c994) {
            ctx->pc = 0x12C9D0u;
            goto label_12c9d0;
        }
    }
    ctx->pc = 0x12C99Cu;
    // 0x12c99c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x12c99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12c9a0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x12c9a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9a4: 0x254cffff  addiu       $t4, $t2, -0x1
    ctx->pc = 0x12c9a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x12c9a8: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x12c9a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12c9ac: 0x28ef0009  slti        $t7, $a3, 0x9
    ctx->pc = 0x12c9acu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
label_12c9b0:
    // 0x12c9b0: 0x11e002ed  beqz        $t7, . + 4 + (0x2ED << 2)
    ctx->pc = 0x12C9B0u;
    {
        const bool branch_taken_0x12c9b0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C9B0u;
            // 0x12c9b4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9b0) {
            ctx->pc = 0x12D568u;
            goto label_12d568;
        }
    }
    ctx->pc = 0x12C9B8u;
    // 0x12c9b8: 0x8e2018  mult        $a0, $a0, $t6
    ctx->pc = 0x12c9b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_12c9bc:
    // 0x12c9bc: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x12c9bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x12c9c0: 0x1580fffb  bnez        $t4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12C9C0u;
    {
        const bool branch_taken_0x12c9c0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C9C0u;
            // 0x12c9c4: 0x28ef0009  slti        $t7, $a3, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9c0) {
            ctx->pc = 0x12C9B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c9b0;
        }
    }
    ctx->pc = 0x12C9C8u;
    // 0x12c9c8: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x12c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x12c9cc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x12c9ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12c9d0:
    // 0x12c9d0: 0x2a4f0009  slti        $t7, $s2, 0x9
    ctx->pc = 0x12c9d0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x12c9d4: 0x11e002dd  beqz        $t7, . + 4 + (0x2DD << 2)
    ctx->pc = 0x12C9D4u;
    {
        const bool branch_taken_0x12c9d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C9D4u;
            // 0x12c9d8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9d4) {
            ctx->pc = 0x12D54Cu;
            goto label_12d54c;
        }
    }
    ctx->pc = 0x12C9DCu;
    // 0x12c9dc: 0x8fae0030  lw          $t6, 0x30($sp)
    ctx->pc = 0x12c9dcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12c9e0: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x12c9e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12c9e4: 0x1cf7818  mult        $t7, $t6, $t7
    ctx->pc = 0x12c9e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x12c9e8: 0x1eb7821  addu        $t7, $t7, $t3
    ctx->pc = 0x12c9e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x12c9ec: 0xafaf0030  sw          $t7, 0x30($sp)
    ctx->pc = 0x12c9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 15));
label_12c9f0:
    // 0x12c9f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12c9f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c9f4:
    // 0x12c9f4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12c9f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12c9f8: 0x83c40000  lb          $a0, 0x0($fp)
    ctx->pc = 0x12c9f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12c9fc: 0x248fffd0  addiu       $t7, $a0, -0x30
    ctx->pc = 0x12c9fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x12ca00: 0x2dee000a  sltiu       $t6, $t7, 0xA
    ctx->pc = 0x12ca00u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12ca04: 0x15c0ffdf  bnez        $t6, . + 4 + (-0x21 << 2)
    ctx->pc = 0x12CA04u;
    {
        const bool branch_taken_0x12ca04 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA04u;
            // 0x12ca08: 0x1e0582d  daddu       $t3, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca04) {
            ctx->pc = 0x12C984u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c984;
        }
    }
    ctx->pc = 0x12CA0Cu;
label_12ca0c:
    // 0x12ca0c: 0x240f0065  addiu       $t7, $zero, 0x65
    ctx->pc = 0x12ca0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_12ca10:
    // 0x12ca10: 0x108f0004  beq         $a0, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CA10u;
    {
        const bool branch_taken_0x12ca10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x12CA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA10u;
            // 0x12ca14: 0xffa00018  sd          $zero, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca10) {
            ctx->pc = 0x12CA24u;
            goto label_12ca24;
        }
    }
    ctx->pc = 0x12CA18u;
    // 0x12ca18: 0x240f0045  addiu       $t7, $zero, 0x45
    ctx->pc = 0x12ca18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x12ca1c: 0x148f004a  bne         $a0, $t7, . + 4 + (0x4A << 2)
    ctx->pc = 0x12CA1Cu;
    {
        const bool branch_taken_0x12ca1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        if (branch_taken_0x12ca1c) {
            ctx->pc = 0x12CB48u;
            goto label_12cb48;
        }
    }
    ctx->pc = 0x12CA24u;
label_12ca24:
    // 0x12ca24: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CA24u;
    {
        const bool branch_taken_0x12ca24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ca24) {
            ctx->pc = 0x12CA28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA24u;
            // 0x12ca28: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12CA40u;
            goto label_12ca40;
        }
    }
    ctx->pc = 0x12CA2Cu;
    // 0x12ca2c: 0x55400004  bnel        $t2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CA2Cu;
    {
        const bool branch_taken_0x12ca2c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ca2c) {
            ctx->pc = 0x12CA30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA2Cu;
            // 0x12ca30: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12CA40u;
            goto label_12ca40;
        }
    }
    ctx->pc = 0x12CA34u;
    // 0x12ca34: 0x5120ff75  beql        $t1, $zero, . + 4 + (-0x8B << 2)
    ctx->pc = 0x12CA34u;
    {
        const bool branch_taken_0x12ca34 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ca34) {
            ctx->pc = 0x12CA38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA34u;
            // 0x12ca38: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C80Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c80c;
        }
    }
    ctx->pc = 0x12CA3Cu;
    // 0x12ca3c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x12ca3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12ca40:
    // 0x12ca40: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12ca40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12ca44: 0x240f002b  addiu       $t7, $zero, 0x2B
    ctx->pc = 0x12ca44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x12ca48: 0x83c40000  lb          $a0, 0x0($fp)
    ctx->pc = 0x12ca48u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12ca4c: 0x108f0005  beq         $a0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CA4Cu;
    {
        const bool branch_taken_0x12ca4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x12CA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA4Cu;
            // 0x12ca50: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca4c) {
            ctx->pc = 0x12CA64u;
            goto label_12ca64;
        }
    }
    ctx->pc = 0x12CA54u;
    // 0x12ca54: 0x240f002d  addiu       $t7, $zero, 0x2D
    ctx->pc = 0x12ca54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12ca58: 0x148f0005  bne         $a0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CA58u;
    {
        const bool branch_taken_0x12ca58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        ctx->pc = 0x12CA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA58u;
            // 0x12ca5c: 0x248fffd0  addiu       $t7, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca58) {
            ctx->pc = 0x12CA70u;
            goto label_12ca70;
        }
    }
    ctx->pc = 0x12CA60u;
    // 0x12ca60: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x12ca60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12ca64:
    // 0x12ca64: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12ca64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12ca68: 0x83c40000  lb          $a0, 0x0($fp)
    ctx->pc = 0x12ca68u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12ca6c: 0x248fffd0  addiu       $t7, $a0, -0x30
    ctx->pc = 0x12ca6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_12ca70:
    // 0x12ca70: 0x2def000a  sltiu       $t7, $t7, 0xA
    ctx->pc = 0x12ca70u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12ca74: 0x11e002b3  beqz        $t7, . + 4 + (0x2B3 << 2)
    ctx->pc = 0x12CA74u;
    {
        const bool branch_taken_0x12ca74 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA74u;
            // 0x12ca78: 0x240f0030  addiu       $t7, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca74) {
            ctx->pc = 0x12D544u;
            goto label_12d544;
        }
    }
    ctx->pc = 0x12CA7Cu;
    // 0x12ca7c: 0x148f000d  bne         $a0, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x12CA7Cu;
    {
        const bool branch_taken_0x12ca7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        ctx->pc = 0x12CA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA7Cu;
            // 0x12ca80: 0x248fffcf  addiu       $t7, $a0, -0x31 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca7c) {
            ctx->pc = 0x12CAB4u;
            goto label_12cab4;
        }
    }
    ctx->pc = 0x12CA84u;
    // 0x12ca84: 0x3c0782d  daddu       $t7, $fp, $zero
    ctx->pc = 0x12ca84u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca88: 0x240e0030  addiu       $t6, $zero, 0x30
    ctx->pc = 0x12ca88u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12ca8c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12ca8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_12ca90:
    // 0x12ca90: 0x81e40000  lb          $a0, 0x0($t7)
    ctx->pc = 0x12ca90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12ca94: 0x0  nop
    ctx->pc = 0x12ca94u;
    // NOP
    // 0x12ca98: 0x0  nop
    ctx->pc = 0x12ca98u;
    // NOP
    // 0x12ca9c: 0x0  nop
    ctx->pc = 0x12ca9cu;
    // NOP
    // 0x12caa0: 0x0  nop
    ctx->pc = 0x12caa0u;
    // NOP
    // 0x12caa4: 0x508efffa  beql        $a0, $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12CAA4u;
    {
        const bool branch_taken_0x12caa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 14));
        if (branch_taken_0x12caa4) {
            ctx->pc = 0x12CAA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12CAA4u;
            // 0x12caa8: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12CA90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ca90;
        }
    }
    ctx->pc = 0x12CAACu;
    // 0x12caac: 0x1e0f02d  daddu       $fp, $t7, $zero
    ctx->pc = 0x12caacu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cab0: 0x248fffcf  addiu       $t7, $a0, -0x31
    ctx->pc = 0x12cab0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_12cab4:
    // 0x12cab4: 0x2def0009  sltiu       $t7, $t7, 0x9
    ctx->pc = 0x12cab4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x12cab8: 0x11e002a0  beqz        $t7, . + 4 + (0x2A0 << 2)
    ctx->pc = 0x12CAB8u;
    {
        const bool branch_taken_0x12cab8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CAB8u;
            // 0x12cabc: 0x3c0602d  daddu       $t4, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cab8) {
            ctx->pc = 0x12D53Cu;
            goto label_12d53c;
        }
    }
    ctx->pc = 0x12CAC0u;
    // 0x12cac0: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x12cac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x12cac4: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x12cac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x12cac8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12cac8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12cacc: 0x83c40000  lb          $a0, 0x0($fp)
    ctx->pc = 0x12caccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12cad0: 0x288f0030  slti        $t7, $a0, 0x30
    ctx->pc = 0x12cad0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x12cad4: 0x15e00013  bnez        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x12CAD4u;
    {
        const bool branch_taken_0x12cad4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CAD4u;
            // 0x12cad8: 0x3cc7823  subu        $t7, $fp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cad4) {
            ctx->pc = 0x12CB24u;
            goto label_12cb24;
        }
    }
    ctx->pc = 0x12CADCu;
    // 0x12cadc: 0x288f003a  slti        $t7, $a0, 0x3A
    ctx->pc = 0x12cadcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x12cae0: 0x11e00010  beqz        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x12CAE0u;
    {
        const bool branch_taken_0x12cae0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CAE0u;
            // 0x12cae4: 0x3cc7823  subu        $t7, $fp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cae0) {
            ctx->pc = 0x12CB24u;
            goto label_12cb24;
        }
    }
    ctx->pc = 0x12CAE8u;
    // 0x12cae8: 0xdfae0018  ld          $t6, 0x18($sp)
    ctx->pc = 0x12cae8u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12caec:
    // 0x12caec: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12caecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12caf0: 0xe78b8  dsll        $t7, $t6, 2
    ctx->pc = 0x12caf0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) << 2);
    // 0x12caf4: 0x1ee782d  daddu       $t7, $t7, $t6
    ctx->pc = 0x12caf4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 14));
    // 0x12caf8: 0xf7878  dsll        $t7, $t7, 1
    ctx->pc = 0x12caf8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 1);
    // 0x12cafc: 0x8f782d  daddu       $t7, $a0, $t7
    ctx->pc = 0x12cafcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 15));
    // 0x12cb00: 0x83c40000  lb          $a0, 0x0($fp)
    ctx->pc = 0x12cb00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12cb04: 0x65efffd0  daddiu      $t7, $t7, -0x30
    ctx->pc = 0x12cb04u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 15) + (int64_t)(int32_t)4294967248);
    // 0x12cb08: 0x288e0030  slti        $t6, $a0, 0x30
    ctx->pc = 0x12cb08u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x12cb0c: 0x15c00004  bnez        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CB0Cu;
    {
        const bool branch_taken_0x12cb0c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CB0Cu;
            // 0x12cb10: 0xffaf0018  sd          $t7, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb0c) {
            ctx->pc = 0x12CB20u;
            goto label_12cb20;
        }
    }
    ctx->pc = 0x12CB14u;
    // 0x12cb14: 0x288f003a  slti        $t7, $a0, 0x3A
    ctx->pc = 0x12cb14u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x12cb18: 0x15e0fff4  bnez        $t7, . + 4 + (-0xC << 2)
    ctx->pc = 0x12CB18u;
    {
        const bool branch_taken_0x12cb18 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CB18u;
            // 0x12cb1c: 0xdfae0018  ld          $t6, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb18) {
            ctx->pc = 0x12CAECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12caec;
        }
    }
    ctx->pc = 0x12CB20u;
label_12cb20:
    // 0x12cb20: 0x3cc7823  subu        $t7, $fp, $t4
    ctx->pc = 0x12cb20u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 12)));
label_12cb24:
    // 0x12cb24: 0x3c0e0098  lui         $t6, 0x98
    ctx->pc = 0x12cb24u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)152 << 16));
    // 0x12cb28: 0xdfac0018  ld          $t4, 0x18($sp)
    ctx->pc = 0x12cb28u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12cb2c: 0x29ef0009  slti        $t7, $t7, 0x9
    ctx->pc = 0x12cb2cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x12cb30: 0x35ce967f  ori         $t6, $t6, 0x967F
    ctx->pc = 0x12cb30u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)38527);
    // 0x12cb34: 0x1cf600a  movz        $t4, $t6, $t7
    ctx->pc = 0x12cb34u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 14));
    // 0x12cb38: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CB38u;
    {
        const bool branch_taken_0x12cb38 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CB38u;
            // 0x12cb3c: 0xffac0018  sd          $t4, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb38) {
            ctx->pc = 0x12CB48u;
            goto label_12cb48;
        }
    }
    ctx->pc = 0x12CB40u;
    // 0x12cb40: 0xc602f  dsubu       $t4, $zero, $t4
    ctx->pc = 0x12cb40u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 12));
    // 0x12cb44: 0xffac0018  sd          $t4, 0x18($sp)
    ctx->pc = 0x12cb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 12));
label_12cb48:
    // 0x12cb48: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CB48u;
    {
        const bool branch_taken_0x12cb48 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CB48u;
            // 0x12cb4c: 0xdfae0018  ld          $t6, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb48) {
            ctx->pc = 0x12CB68u;
            goto label_12cb68;
        }
    }
    ctx->pc = 0x12CB50u;
    // 0x12cb50: 0x1540ff2f  bnez        $t2, . + 4 + (-0xD1 << 2)
    ctx->pc = 0x12CB50u;
    {
        const bool branch_taken_0x12cb50 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CB50u;
            // 0x12cb54: 0x8fad0008  lw          $t5, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb50) {
            ctx->pc = 0x12C810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c810;
        }
    }
    ctx->pc = 0x12CB58u;
    // 0x12cb58: 0x1520ff2d  bnez        $t1, . + 4 + (-0xD3 << 2)
    ctx->pc = 0x12CB58u;
    {
        const bool branch_taken_0x12cb58 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cb58) {
            ctx->pc = 0x12C810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c810;
        }
    }
    ctx->pc = 0x12CB60u;
    // 0x12cb60: 0x1000ff2b  b           . + 4 + (-0xD5 << 2)
    ctx->pc = 0x12CB60u;
    {
        const bool branch_taken_0x12cb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CB60u;
            // 0x12cb64: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb60) {
            ctx->pc = 0x12C810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c810;
        }
    }
    ctx->pc = 0x12CB68u;
label_12cb68:
    // 0x12cb68: 0x2a4f0011  slti        $t7, $s2, 0x11
    ctx->pc = 0x12cb68u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12cb6c: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x12cb6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12cb70: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x12cb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12cb74: 0x1cd702f  dsubu       $t6, $t6, $t5
    ctx->pc = 0x12cb74u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) - GPR_U64(ctx, 13));
    // 0x12cb78: 0x24f980b  movn        $s3, $s2, $t7
    ctx->pc = 0x12cb78u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 18));
    // 0x12cb7c: 0xe603c  dsll32      $t4, $t6, 0
    ctx->pc = 0x12cb7cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12cb80: 0xffae0018  sd          $t6, 0x18($sp)
    ctx->pc = 0x12cb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 14));
    // 0x12cb84: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x12cb84u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x12cb88: 0xc049776  jal         func_125DD8
    ctx->pc = 0x12CB88u;
    SET_GPR_U32(ctx, 31, 0x12CB90u);
    ctx->pc = 0x12CB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CB88u;
            // 0x12cb8c: 0xafac0054  sw          $t4, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CB90u; }
        if (ctx->pc != 0x12CB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CB90u; }
        if (ctx->pc != 0x12CB90u) { return; }
    }
    ctx->pc = 0x12CB90u;
label_12cb90:
    // 0x12cb90: 0x8fad000c  lw          $t5, 0xC($sp)
    ctx->pc = 0x12cb90u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12cb94: 0x8fae000c  lw          $t6, 0xC($sp)
    ctx->pc = 0x12cb94u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12cb98: 0x8fb00054  lw          $s0, 0x54($sp)
    ctx->pc = 0x12cb98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x12cb9c: 0x24e680a  movz        $t5, $s2, $t6
    ctx->pc = 0x12cb9cu;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 18));
    // 0x12cba0: 0x8faf0030  lw          $t7, 0x30($sp)
    ctx->pc = 0x12cba0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12cba4: 0x5e10005  bgez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CBA4u;
    {
        const bool branch_taken_0x12cba4 = (GPR_S32(ctx, 15) >= 0);
        ctx->pc = 0x12CBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CBA4u;
            // 0x12cba8: 0xafad000c  sw          $t5, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cba4) {
            ctx->pc = 0x12CBBCu;
            goto label_12cbbc;
        }
    }
    ctx->pc = 0x12CBACu;
    // 0x12cbac: 0x2405041f  addiu       $a1, $zero, 0x41F
    ctx->pc = 0x12cbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
    // 0x12cbb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12cbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cbb4: 0xc04960a  jal         func_125828
    ctx->pc = 0x12CBB4u;
    SET_GPR_U32(ctx, 31, 0x12CBBCu);
    ctx->pc = 0x12CBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CBB4u;
            // 0x12cbb8: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CBBCu; }
        if (ctx->pc != 0x12CBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CBBCu; }
        if (ctx->pc != 0x12CBBCu) { return; }
    }
    ctx->pc = 0x12CBBCu;
label_12cbbc:
    // 0x12cbbc: 0x2a6f000a  slti        $t7, $s3, 0xA
    ctx->pc = 0x12cbbcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x12cbc0: 0x15e00010  bnez        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x12CBC0u;
    {
        const bool branch_taken_0x12cbc0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CBC0u;
            // 0x12cbc4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbc0) {
            ctx->pc = 0x12CC04u;
            goto label_12cc04;
        }
    }
    ctx->pc = 0x12CBC8u;
    // 0x12cbc8: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x12cbc8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x12cbcc: 0x1378c0  sll         $t7, $s3, 3
    ctx->pc = 0x12cbccu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x12cbd0: 0x25ce0978  addiu       $t6, $t6, 0x978
    ctx->pc = 0x12cbd0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2424));
    // 0x12cbd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12cbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cbd8: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12cbd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12cbdc: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x12CBDCu;
    SET_GPR_U32(ctx, 31, 0x12CBE4u);
    ctx->pc = 0x12CBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CBDCu;
            // 0x12cbe0: 0xdde4ffb8  ld          $a0, -0x48($t7) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 15), 4294967224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CBE4u; }
        if (ctx->pc != 0x12CBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CBE4u; }
        if (ctx->pc != 0x12CBE4u) { return; }
    }
    ctx->pc = 0x12CBE4u;
label_12cbe4:
    // 0x12cbe4: 0x620024c  bltz        $s1, . + 4 + (0x24C << 2)
    ctx->pc = 0x12CBE4u;
    {
        const bool branch_taken_0x12cbe4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x12CBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CBE4u;
            // 0x12cbe8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbe4) {
            ctx->pc = 0x12D518u;
            goto label_12d518;
        }
    }
    ctx->pc = 0x12CBECu;
    // 0x12cbec: 0xc048cfa  jal         func_1233E8
    ctx->pc = 0x12CBECu;
    SET_GPR_U32(ctx, 31, 0x12CBF4u);
    ctx->pc = 0x12CBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CBECu;
            // 0x12cbf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1233E8u;
    if (runtime->hasFunction(0x1233E8u)) {
        auto targetFn = runtime->lookupFunction(0x1233E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CBF4u; }
        if (ctx->pc != 0x12CBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001233E8_0x1233e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CBF4u; }
        if (ctx->pc != 0x12CBF4u) { return; }
    }
    ctx->pc = 0x12CBF4u;
label_12cbf4:
    // 0x12cbf4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12cbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12cbf8:
    // 0x12cbf8: 0xc04960a  jal         func_125828
    ctx->pc = 0x12CBF8u;
    SET_GPR_U32(ctx, 31, 0x12CC00u);
    ctx->pc = 0x12CBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CBF8u;
            // 0x12cbfc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CC00u; }
        if (ctx->pc != 0x12CC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CC00u; }
        if (ctx->pc != 0x12CC00u) { return; }
    }
    ctx->pc = 0x12CC00u;
label_12cc00:
    // 0x12cc00: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12cc00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12cc04:
    // 0x12cc04: 0x2537823  subu        $t7, $s2, $s3
    ctx->pc = 0x12cc04u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x12cc08: 0x20f8021  addu        $s0, $s0, $t7
    ctx->pc = 0x12cc08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    // 0x12cc0c: 0x1a0001fe  blez        $s0, . + 4 + (0x1FE << 2)
    ctx->pc = 0x12CC0Cu;
    {
        const bool branch_taken_0x12cc0c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12CC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CC0Cu;
            // 0x12cc10: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc0c) {
            ctx->pc = 0x12D408u;
            goto label_12d408;
        }
    }
    ctx->pc = 0x12CC14u;
    // 0x12cc14: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x12cc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x12cc18: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12CC18u;
    {
        const bool branch_taken_0x12cc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CC18u;
            // 0x12cc1c: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc18) {
            ctx->pc = 0x12CC3Cu;
            goto label_12cc3c;
        }
    }
    ctx->pc = 0x12CC20u;
    // 0x12cc20: 0x270c0  sll         $t6, $v0, 3
    ctx->pc = 0x12cc20u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12cc24: 0x25ef0978  addiu       $t7, $t7, 0x978
    ctx->pc = 0x12cc24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2424));
    // 0x12cc28: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12cc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc2c: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x12cc2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12cc30: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x12CC30u;
    SET_GPR_U32(ctx, 31, 0x12CC38u);
    ctx->pc = 0x12CC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CC30u;
            // 0x12cc34: 0xddc40000  ld          $a0, 0x0($t6) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 14), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CC38u; }
        if (ctx->pc != 0x12CC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CC38u; }
        if (ctx->pc != 0x12CC38u) { return; }
    }
    ctx->pc = 0x12CC38u;
label_12cc38:
    // 0x12cc38: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12cc38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12cc3c:
    // 0x12cc3c: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x12cc3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x12cc40: 0x20f8024  and         $s0, $s0, $t7
    ctx->pc = 0x12cc40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 15));
    // 0x12cc44: 0x12000050  beqz        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x12CC44u;
    {
        const bool branch_taken_0x12cc44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CC44u;
            // 0x12cc48: 0x2a0f0135  slti        $t7, $s0, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)309) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc44) {
            ctx->pc = 0x12CD88u;
            goto label_12cd88;
        }
    }
    ctx->pc = 0x12CC4Cu;
    // 0x12cc4c: 0x55e00018  bnel        $t7, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x12CC4Cu;
    {
        const bool branch_taken_0x12cc4c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cc4c) {
            ctx->pc = 0x12CC50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12CC4Cu;
            // 0x12cc50: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12CCB0u;
            goto label_12ccb0;
        }
    }
    ctx->pc = 0x12CC54u;
label_12cc54:
    // 0x12cc54: 0x240f0022  addiu       $t7, $zero, 0x22
    ctx->pc = 0x12cc54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_12cc58:
    // 0x12cc58: 0x8fac0050  lw          $t4, 0x50($sp)
    ctx->pc = 0x12cc58u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12cc5c: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x12cc5cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x12cc60: 0xaecf0000  sw          $t7, 0x0($s6)
    ctx->pc = 0x12cc60u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 15));
    // 0x12cc64: 0x1180fee9  beqz        $t4, . + 4 + (-0x117 << 2)
    ctx->pc = 0x12CC64u;
    {
        const bool branch_taken_0x12cc64 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CC64u;
            // 0x12cc68: 0xddd50030  ld          $s5, 0x30($t6) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 14), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc64) {
            ctx->pc = 0x12C80Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c80c;
        }
    }
    ctx->pc = 0x12CC6Cu;
label_12cc6c:
    // 0x12cc6c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12cc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12cc70:
    // 0x12cc70: 0xc04a76a  jal         func_129DA8
    ctx->pc = 0x12CC70u;
    SET_GPR_U32(ctx, 31, 0x12CC78u);
    ctx->pc = 0x12CC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CC70u;
            // 0x12cc74: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA8u;
    if (runtime->hasFunction(0x129DA8u)) {
        auto targetFn = runtime->lookupFunction(0x129DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CC78u; }
        if (ctx->pc != 0x12CC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DA8_0x129da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CC78u; }
        if (ctx->pc != 0x12CC78u) { return; }
    }
    ctx->pc = 0x12CC78u;
label_12cc78:
    // 0x12cc78: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x12cc78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12cc7c: 0xc04a76a  jal         func_129DA8
    ctx->pc = 0x12CC7Cu;
    SET_GPR_U32(ctx, 31, 0x12CC84u);
    ctx->pc = 0x12CC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CC7Cu;
            // 0x12cc80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA8u;
    if (runtime->hasFunction(0x129DA8u)) {
        auto targetFn = runtime->lookupFunction(0x129DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CC84u; }
        if (ctx->pc != 0x12CC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DA8_0x129da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CC84u; }
        if (ctx->pc != 0x12CC84u) { return; }
    }
    ctx->pc = 0x12CC84u;
label_12cc84:
    // 0x12cc84: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12cc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc88: 0xc04a76a  jal         func_129DA8
    ctx->pc = 0x12CC88u;
    SET_GPR_U32(ctx, 31, 0x12CC90u);
    ctx->pc = 0x12CC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CC88u;
            // 0x12cc8c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA8u;
    if (runtime->hasFunction(0x129DA8u)) {
        auto targetFn = runtime->lookupFunction(0x129DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CC90u; }
        if (ctx->pc != 0x12CC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DA8_0x129da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CC90u; }
        if (ctx->pc != 0x12CC90u) { return; }
    }
    ctx->pc = 0x12CC90u;
label_12cc90:
    // 0x12cc90: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x12cc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12cc94: 0xc04a76a  jal         func_129DA8
    ctx->pc = 0x12CC94u;
    SET_GPR_U32(ctx, 31, 0x12CC9Cu);
    ctx->pc = 0x12CC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CC94u;
            // 0x12cc98: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA8u;
    if (runtime->hasFunction(0x129DA8u)) {
        auto targetFn = runtime->lookupFunction(0x129DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CC9Cu; }
        if (ctx->pc != 0x12CC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DA8_0x129da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CC9Cu; }
        if (ctx->pc != 0x12CC9Cu) { return; }
    }
    ctx->pc = 0x12CC9Cu;
label_12cc9c:
    // 0x12cc9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12cc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cca0: 0xc04a76a  jal         func_129DA8
    ctx->pc = 0x12CCA0u;
    SET_GPR_U32(ctx, 31, 0x12CCA8u);
    ctx->pc = 0x12CCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CCA0u;
            // 0x12cca4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA8u;
    if (runtime->hasFunction(0x129DA8u)) {
        auto targetFn = runtime->lookupFunction(0x129DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CCA8u; }
        if (ctx->pc != 0x12CCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DA8_0x129da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CCA8u; }
        if (ctx->pc != 0x12CCA8u) { return; }
    }
    ctx->pc = 0x12CCA8u;
label_12cca8:
    // 0x12cca8: 0x1000fed9  b           . + 4 + (-0x127 << 2)
    ctx->pc = 0x12CCA8u;
    {
        const bool branch_taken_0x12cca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CCA8u;
            // 0x12ccac: 0x8fad0008  lw          $t5, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cca8) {
            ctx->pc = 0x12C810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c810;
        }
    }
    ctx->pc = 0x12CCB0u;
label_12ccb0:
    // 0x12ccb0: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x12CCB0u;
    {
        const bool branch_taken_0x12ccb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CCB0u;
            // 0x12ccb4: 0x2a0f0002  slti        $t7, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ccb0) {
            ctx->pc = 0x12CD88u;
            goto label_12cd88;
        }
    }
    ctx->pc = 0x12CCB8u;
    // 0x12ccb8: 0x15e00012  bnez        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x12CCB8u;
    {
        const bool branch_taken_0x12ccb8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CCB8u;
            // 0x12ccbc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ccb8) {
            ctx->pc = 0x12CD04u;
            goto label_12cd04;
        }
    }
    ctx->pc = 0x12CCC0u;
    // 0x12ccc0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x12ccc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ccc4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12ccc4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12ccc8: 0x180982d  daddu       $s3, $t4, $zero
    ctx->pc = 0x12ccc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cccc: 0x25f00a40  addiu       $s0, $t7, 0xA40
    ctx->pc = 0x12ccccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 2624));
label_12ccd0:
    // 0x12ccd0: 0x322f0001  andi        $t7, $s1, 0x1
    ctx->pc = 0x12ccd0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x12ccd4: 0x51e00006  beql        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CCD4u;
    {
        const bool branch_taken_0x12ccd4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ccd4) {
            ctx->pc = 0x12CCD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12CCD4u;
            // 0x12ccd8: 0x118843  sra         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12CCF0u;
            goto label_12ccf0;
        }
    }
    ctx->pc = 0x12CCDCu;
    // 0x12ccdc: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x12ccdcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12cce0: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x12CCE0u;
    SET_GPR_U32(ctx, 31, 0x12CCE8u);
    ctx->pc = 0x12CCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CCE0u;
            // 0x12cce4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CCE8u; }
        if (ctx->pc != 0x12CCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CCE8u; }
        if (ctx->pc != 0x12CCE8u) { return; }
    }
    ctx->pc = 0x12CCE8u;
label_12cce8:
    // 0x12cce8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12cce8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ccec: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x12ccecu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
label_12ccf0:
    // 0x12ccf0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x12ccf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x12ccf4: 0x2a2f0002  slti        $t7, $s1, 0x2
    ctx->pc = 0x12ccf4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12ccf8: 0x11e0fff5  beqz        $t7, . + 4 + (-0xB << 2)
    ctx->pc = 0x12CCF8u;
    {
        const bool branch_taken_0x12ccf8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CCF8u;
            // 0x12ccfc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ccf8) {
            ctx->pc = 0x12CCD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ccd0;
        }
    }
    ctx->pc = 0x12CD00u;
    // 0x12cd00: 0x260602d  daddu       $t4, $s3, $zero
    ctx->pc = 0x12cd00u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12cd04:
    // 0x12cd04: 0x3c0efcb0  lui         $t6, 0xFCB0
    ctx->pc = 0x12cd04u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)64688 << 16));
    // 0x12cd08: 0x15683f  dsra32      $t5, $s5, 0
    ctx->pc = 0x12cd08u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 21) >> (32 + 0));
    // 0x12cd0c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12cd0cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12cd10: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x12cd10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12cd14: 0x25ef0a40  addiu       $t7, $t7, 0xA40
    ctx->pc = 0x12cd14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2624));
    // 0x12cd18: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x12cd18u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x12cd1c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x12cd1cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x12cd20: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x12cd20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x12cd24: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x12cd24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x12cd28: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x12cd28u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x12cd2c: 0x2b0a824  and         $s5, $s5, $s0
    ctx->pc = 0x12cd2cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 16));
    // 0x12cd30: 0xdd840000  ld          $a0, 0x0($t4)
    ctx->pc = 0x12cd30u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x12cd34: 0x2ada825  or          $s5, $s5, $t5
    ctx->pc = 0x12cd34u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 13));
    // 0x12cd38: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x12CD38u;
    SET_GPR_U32(ctx, 31, 0x12CD40u);
    ctx->pc = 0x12CD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CD38u;
            // 0x12cd3c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CD40u; }
        if (ctx->pc != 0x12CD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CD40u; }
        if (ctx->pc != 0x12CD40u) { return; }
    }
    ctx->pc = 0x12CD40u;
label_12cd40:
    // 0x12cd40: 0x2703f  dsra32      $t6, $v0, 0
    ctx->pc = 0x12cd40u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12cd44: 0x3c0f7ff0  lui         $t7, 0x7FF0
    ctx->pc = 0x12cd44u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32752 << 16));
    // 0x12cd48: 0x1cf7824  and         $t7, $t6, $t7
    ctx->pc = 0x12cd48u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x12cd4c: 0xf883c  dsll32      $s1, $t7, 0
    ctx->pc = 0x12cd4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12cd50: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x12cd50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x12cd54: 0x3c0f7ca0  lui         $t7, 0x7CA0
    ctx->pc = 0x12cd54u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)31904 << 16));
    // 0x12cd58: 0x1f1782b  sltu        $t7, $t7, $s1
    ctx->pc = 0x12cd58u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x12cd5c: 0x15e0ffbe  bnez        $t7, . + 4 + (-0x42 << 2)
    ctx->pc = 0x12CD5Cu;
    {
        const bool branch_taken_0x12cd5c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CD5Cu;
            // 0x12cd60: 0x240f0022  addiu       $t7, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd5c) {
            ctx->pc = 0x12CC58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cc58;
        }
    }
    ctx->pc = 0x12CD64u;
    // 0x12cd64: 0x3c0f7c90  lui         $t7, 0x7C90
    ctx->pc = 0x12cd64u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)31888 << 16));
    // 0x12cd68: 0x1f1782b  sltu        $t7, $t7, $s1
    ctx->pc = 0x12cd68u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x12cd6c: 0x11e001a0  beqz        $t7, . + 4 + (0x1A0 << 2)
    ctx->pc = 0x12CD6Cu;
    {
        const bool branch_taken_0x12cd6c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CD6Cu;
            // 0x12cd70: 0x3c0f7fef  lui         $t7, 0x7FEF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32751 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd6c) {
            ctx->pc = 0x12D3F0u;
            goto label_12d3f0;
        }
    }
    ctx->pc = 0x12CD74u;
    // 0x12cd74: 0x50a824  and         $s5, $v0, $s0
    ctx->pc = 0x12cd74u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x12cd78: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12cd78u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12cd7c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12cd7cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12cd80: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x12cd80u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
    // 0x12cd84: 0x2b0a825  or          $s5, $s5, $s0
    ctx->pc = 0x12cd84u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 16));
label_12cd88:
    // 0x12cd88: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x12cd88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12cd8c:
    // 0x12cd8c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x12cd8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd90: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x12cd90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12cd94: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12cd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd98: 0xc04a7b8  jal         func_129EE0
    ctx->pc = 0x12CD98u;
    SET_GPR_U32(ctx, 31, 0x12CDA0u);
    ctx->pc = 0x12CD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CD98u;
            // 0x12cd9c: 0x8fa80030  lw          $t0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129EE0u;
    if (runtime->hasFunction(0x129EE0u)) {
        auto targetFn = runtime->lookupFunction(0x129EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CDA0u; }
        if (ctx->pc != 0x12CDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129EE0_0x129ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CDA0u; }
        if (ctx->pc != 0x12CDA0u) { return; }
    }
    ctx->pc = 0x12CDA0u;
label_12cda0:
    // 0x12cda0: 0x244e000c  addiu       $t6, $v0, 0xC
    ctx->pc = 0x12cda0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x12cda4: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x12cda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x12cda8: 0xafae0058  sw          $t6, 0x58($sp)
    ctx->pc = 0x12cda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 14));
    // 0x12cdac: 0x8faf0050  lw          $t7, 0x50($sp)
    ctx->pc = 0x12cdacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_12cdb0:
    // 0x12cdb0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12cdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cdb4: 0xc04a740  jal         func_129D00
    ctx->pc = 0x12CDB4u;
    SET_GPR_U32(ctx, 31, 0x12CDBCu);
    ctx->pc = 0x12CDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CDB4u;
            // 0x12cdb8: 0x8de50004  lw          $a1, 0x4($t7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129D00u;
    if (runtime->hasFunction(0x129D00u)) {
        auto targetFn = runtime->lookupFunction(0x129D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CDBCu; }
        if (ctx->pc != 0x12CDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129D00_0x129d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CDBCu; }
        if (ctx->pc != 0x12CDBCu) { return; }
    }
    ctx->pc = 0x12CDBCu;
label_12cdbc:
    // 0x12cdbc: 0x8fac0050  lw          $t4, 0x50($sp)
    ctx->pc = 0x12cdbcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12cdc0: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x12cdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x12cdc4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x12cdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12cdc8: 0x8d860010  lw          $a2, 0x10($t4)
    ctx->pc = 0x12cdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x12cdcc: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x12cdccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x12cdd0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x12cdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12cdd4: 0xc04a508  jal         func_129420
    ctx->pc = 0x12CDD4u;
    SET_GPR_U32(ctx, 31, 0x12CDDCu);
    ctx->pc = 0x12CDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CDD4u;
            // 0x12cdd8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CDDCu; }
        if (ctx->pc != 0x12CDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CDDCu; }
        if (ctx->pc != 0x12CDDCu) { return; }
    }
    ctx->pc = 0x12CDDCu;
label_12cddc:
    // 0x12cddc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12cddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cde0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12cde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cde4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x12cde4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cde8: 0xc04aa92  jal         func_12AA48
    ctx->pc = 0x12CDE8u;
    SET_GPR_U32(ctx, 31, 0x12CDF0u);
    ctx->pc = 0x12CDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CDE8u;
            // 0x12cdec: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AA48u;
    if (runtime->hasFunction(0x12AA48u)) {
        auto targetFn = runtime->lookupFunction(0x12AA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CDF0u; }
        if (ctx->pc != 0x12CDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AA48_0x12aa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CDF0u; }
        if (ctx->pc != 0x12CDF0u) { return; }
    }
    ctx->pc = 0x12CDF0u;
label_12cdf0:
    // 0x12cdf0: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x12cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x12cdf4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12cdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cdf8: 0xc04a854  jal         func_12A150
    ctx->pc = 0x12CDF8u;
    SET_GPR_U32(ctx, 31, 0x12CE00u);
    ctx->pc = 0x12CDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CDF8u;
            // 0x12cdfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A150u;
    if (runtime->hasFunction(0x12A150u)) {
        auto targetFn = runtime->lookupFunction(0x12A150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CE00u; }
        if (ctx->pc != 0x12CE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A150_0x12a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CE00u; }
        if (ctx->pc != 0x12CE00u) { return; }
    }
    ctx->pc = 0x12CE00u;
label_12ce00:
    // 0x12ce00: 0xdfad0018  ld          $t5, 0x18($sp)
    ctx->pc = 0x12ce00u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ce04: 0x5a00174  bltz        $t5, . + 4 + (0x174 << 2)
    ctx->pc = 0x12CE04u;
    {
        const bool branch_taken_0x12ce04 = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x12CE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CE04u;
            // 0x12ce08: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce04) {
            ctx->pc = 0x12D3D8u;
            goto label_12d3d8;
        }
    }
    ctx->pc = 0x12CE0Cu;
    // 0x12ce0c: 0x8fb10054  lw          $s1, 0x54($sp)
    ctx->pc = 0x12ce0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x12ce10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12ce10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12ce14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce18: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x12ce18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12ce1c:
    // 0x12ce1c: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x12ce1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ce20: 0x5e20002  bltzl       $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x12CE20u;
    {
        const bool branch_taken_0x12ce20 = (GPR_S32(ctx, 15) < 0);
        if (branch_taken_0x12ce20) {
            ctx->pc = 0x12CE24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12CE20u;
            // 0x12ce24: 0x22f8823  subu        $s1, $s1, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12CE2Cu;
            goto label_12ce2c;
        }
    }
    ctx->pc = 0x12CE28u;
    // 0x12ce28: 0x24f9021  addu        $s2, $s2, $t7
    ctx->pc = 0x12ce28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
label_12ce2c:
    // 0x12ce2c: 0x8fad0004  lw          $t5, 0x4($sp)
    ctx->pc = 0x12ce2cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12ce30: 0x25ec0433  addiu       $t4, $t7, 0x433
    ctx->pc = 0x12ce30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 1075));
    // 0x12ce34: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x12ce34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x12ce38: 0x25e2ffff  addiu       $v0, $t7, -0x1
    ctx->pc = 0x12ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x12ce3c: 0x284efc02  slti        $t6, $v0, -0x3FE
    ctx->pc = 0x12ce3cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x12ce40: 0x15c00003  bnez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CE40u;
    {
        const bool branch_taken_0x12ce40 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CE40u;
            // 0x12ce44: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce40) {
            ctx->pc = 0x12CE50u;
            goto label_12ce50;
        }
    }
    ctx->pc = 0x12CE48u;
    // 0x12ce48: 0x240f0036  addiu       $t7, $zero, 0x36
    ctx->pc = 0x12ce48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x12ce4c: 0x1ed6023  subu        $t4, $t7, $t5
    ctx->pc = 0x12ce4cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
label_12ce50:
    // 0x12ce50: 0x22c1021  addu        $v0, $s1, $t4
    ctx->pc = 0x12ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 12)));
    // 0x12ce54: 0x24c9021  addu        $s2, $s2, $t4
    ctx->pc = 0x12ce54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 12)));
    // 0x12ce58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12ce58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce5c: 0x242782a  slt         $t7, $s2, $v0
    ctx->pc = 0x12ce5cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12ce60: 0x24f100b  movn        $v0, $s2, $t7
    ctx->pc = 0x12ce60u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
    // 0x12ce64: 0x262702a  slt         $t6, $s3, $v0
    ctx->pc = 0x12ce64u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12ce68: 0x26e100b  movn        $v0, $s3, $t6
    ctx->pc = 0x12ce68u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 19));
    // 0x12ce6c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CE6Cu;
    {
        const bool branch_taken_0x12ce6c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12ce6c) {
            ctx->pc = 0x12CE80u;
            goto label_12ce80;
        }
    }
    ctx->pc = 0x12CE74u;
    // 0x12ce74: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x12ce74u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x12ce78: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x12ce78u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x12ce7c: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x12ce7cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_12ce80:
    // 0x12ce80: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x12CE80u;
    {
        const bool branch_taken_0x12ce80 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x12CE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CE80u;
            // 0x12ce84: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce80) {
            ctx->pc = 0x12CEB8u;
            goto label_12ceb8;
        }
    }
    ctx->pc = 0x12CE88u;
    // 0x12ce88: 0xc04a8e4  jal         func_12A390
    ctx->pc = 0x12CE88u;
    SET_GPR_U32(ctx, 31, 0x12CE90u);
    ctx->pc = 0x12CE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CE88u;
            // 0x12ce8c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A390u;
    if (runtime->hasFunction(0x12A390u)) {
        auto targetFn = runtime->lookupFunction(0x12A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CE90u; }
        if (ctx->pc != 0x12CE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A390_0x12a390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CE90u; }
        if (ctx->pc != 0x12CE90u) { return; }
    }
    ctx->pc = 0x12CE90u;
label_12ce90:
    // 0x12ce90: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x12ce90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ce94: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12ce94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12ce98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce9c: 0xc04a862  jal         func_12A188
    ctx->pc = 0x12CE9Cu;
    SET_GPR_U32(ctx, 31, 0x12CEA4u);
    ctx->pc = 0x12CEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CE9Cu;
            // 0x12cea0: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A188u;
    if (runtime->hasFunction(0x12A188u)) {
        auto targetFn = runtime->lookupFunction(0x12A188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CEA4u; }
        if (ctx->pc != 0x12CEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A188_0x12a188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CEA4u; }
        if (ctx->pc != 0x12CEA4u) { return; }
    }
    ctx->pc = 0x12CEA4u;
label_12cea4:
    // 0x12cea4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12cea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12cea8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12cea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ceac: 0xc04a76a  jal         func_129DA8
    ctx->pc = 0x12CEACu;
    SET_GPR_U32(ctx, 31, 0x12CEB4u);
    ctx->pc = 0x12CEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CEACu;
            // 0x12ceb0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA8u;
    if (runtime->hasFunction(0x129DA8u)) {
        auto targetFn = runtime->lookupFunction(0x129DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CEB4u; }
        if (ctx->pc != 0x12CEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DA8_0x129da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CEB4u; }
        if (ctx->pc != 0x12CEB4u) { return; }
    }
    ctx->pc = 0x12CEB4u;
label_12ceb4:
    // 0x12ceb4: 0xafb00048  sw          $s0, 0x48($sp)
    ctx->pc = 0x12ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 16));
label_12ceb8:
    // 0x12ceb8: 0x1a400005  blez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CEB8u;
    {
        const bool branch_taken_0x12ceb8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x12CEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CEB8u;
            // 0x12cebc: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ceb8) {
            ctx->pc = 0x12CED0u;
            goto label_12ced0;
        }
    }
    ctx->pc = 0x12CEC0u;
    // 0x12cec0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12cec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cec4: 0xc04a926  jal         func_12A498
    ctx->pc = 0x12CEC4u;
    SET_GPR_U32(ctx, 31, 0x12CECCu);
    ctx->pc = 0x12CEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CEC4u;
            // 0x12cec8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A498u;
    if (runtime->hasFunction(0x12A498u)) {
        auto targetFn = runtime->lookupFunction(0x12A498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CECCu; }
        if (ctx->pc != 0x12CECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A498_0x12a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CECCu; }
        if (ctx->pc != 0x12CECCu) { return; }
    }
    ctx->pc = 0x12CECCu;
label_12cecc:
    // 0x12cecc: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x12ceccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_12ced0:
    // 0x12ced0: 0x1a800005  blez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CED0u;
    {
        const bool branch_taken_0x12ced0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x12CED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CED0u;
            // 0x12ced4: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ced0) {
            ctx->pc = 0x12CEE8u;
            goto label_12cee8;
        }
    }
    ctx->pc = 0x12CED8u;
    // 0x12ced8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x12ced8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cedc: 0xc04a8e4  jal         func_12A390
    ctx->pc = 0x12CEDCu;
    SET_GPR_U32(ctx, 31, 0x12CEE4u);
    ctx->pc = 0x12CEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CEDCu;
            // 0x12cee0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A390u;
    if (runtime->hasFunction(0x12A390u)) {
        auto targetFn = runtime->lookupFunction(0x12A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CEE4u; }
        if (ctx->pc != 0x12CEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A390_0x12a390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CEE4u; }
        if (ctx->pc != 0x12CEE4u) { return; }
    }
    ctx->pc = 0x12CEE4u;
label_12cee4:
    // 0x12cee4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x12cee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_12cee8:
    // 0x12cee8: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CEE8u;
    {
        const bool branch_taken_0x12cee8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x12CEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CEE8u;
            // 0x12ceec: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cee8) {
            ctx->pc = 0x12CF00u;
            goto label_12cf00;
        }
    }
    ctx->pc = 0x12CEF0u;
    // 0x12cef0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12cef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cef4: 0xc04a926  jal         func_12A498
    ctx->pc = 0x12CEF4u;
    SET_GPR_U32(ctx, 31, 0x12CEFCu);
    ctx->pc = 0x12CEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CEF4u;
            // 0x12cef8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A498u;
    if (runtime->hasFunction(0x12A498u)) {
        auto targetFn = runtime->lookupFunction(0x12A498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CEFCu; }
        if (ctx->pc != 0x12CEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A498_0x12a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CEFCu; }
        if (ctx->pc != 0x12CEFCu) { return; }
    }
    ctx->pc = 0x12CEFCu;
label_12cefc:
    // 0x12cefc: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x12cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_12cf00:
    // 0x12cf00: 0x1a600005  blez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CF00u;
    {
        const bool branch_taken_0x12cf00 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x12CF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CF00u;
            // 0x12cf04: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf00) {
            ctx->pc = 0x12CF18u;
            goto label_12cf18;
        }
    }
    ctx->pc = 0x12CF08u;
    // 0x12cf08: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12cf08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf0c: 0xc04a926  jal         func_12A498
    ctx->pc = 0x12CF0Cu;
    SET_GPR_U32(ctx, 31, 0x12CF14u);
    ctx->pc = 0x12CF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CF0Cu;
            // 0x12cf10: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A498u;
    if (runtime->hasFunction(0x12A498u)) {
        auto targetFn = runtime->lookupFunction(0x12A498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF14u; }
        if (ctx->pc != 0x12CF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A498_0x12a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF14u; }
        if (ctx->pc != 0x12CF14u) { return; }
    }
    ctx->pc = 0x12CF14u;
label_12cf14:
    // 0x12cf14: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x12cf14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12cf18:
    // 0x12cf18: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12cf18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12cf1c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12cf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf20: 0xc04a998  jal         func_12A660
    ctx->pc = 0x12CF20u;
    SET_GPR_U32(ctx, 31, 0x12CF28u);
    ctx->pc = 0x12CF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CF20u;
            // 0x12cf24: 0x8fa6004c  lw          $a2, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A660u;
    if (runtime->hasFunction(0x12A660u)) {
        auto targetFn = runtime->lookupFunction(0x12A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF28u; }
        if (ctx->pc != 0x12CF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A660_0x12a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF28u; }
        if (ctx->pc != 0x12CF28u) { return; }
    }
    ctx->pc = 0x12CF28u;
label_12cf28:
    // 0x12cf28: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x12cf28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12cf2c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12cf2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12cf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf34: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12cf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf38: 0xc04a97e  jal         func_12A5F8
    ctx->pc = 0x12CF38u;
    SET_GPR_U32(ctx, 31, 0x12CF40u);
    ctx->pc = 0x12CF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CF38u;
            // 0x12cf3c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A5F8u;
    if (runtime->hasFunction(0x12A5F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF40u; }
        if (ctx->pc != 0x12CF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A5F8_0x12a5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF40u; }
        if (ctx->pc != 0x12CF40u) { return; }
    }
    ctx->pc = 0x12CF40u;
label_12cf40:
    // 0x12cf40: 0x4410021  bgez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x12CF40u;
    {
        const bool branch_taken_0x12cf40 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12cf40) {
            ctx->pc = 0x12CFC8u;
            goto label_12cfc8;
        }
    }
    ctx->pc = 0x12CF48u;
    // 0x12cf48: 0x1640ff48  bnez        $s2, . + 4 + (-0xB8 << 2)
    ctx->pc = 0x12CF48u;
    {
        const bool branch_taken_0x12cf48 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CF48u;
            // 0x12cf4c: 0x240ff000  addiu       $t7, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf48) {
            ctx->pc = 0x12CC6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cc6c;
        }
    }
    ctx->pc = 0x12CF50u;
    // 0x12cf50: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x12cf50u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x12cf54: 0x2af7824  and         $t7, $s5, $t7
    ctx->pc = 0x12cf54u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) & GPR_U64(ctx, 15));
    // 0x12cf58: 0x55e0ff45  bnel        $t7, $zero, . + 4 + (-0xBB << 2)
    ctx->pc = 0x12CF58u;
    {
        const bool branch_taken_0x12cf58 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cf58) {
            ctx->pc = 0x12CF5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12CF58u;
            // 0x12cf5c: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12CC70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cc70;
        }
    }
    ctx->pc = 0x12CF60u;
    // 0x12cf60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12cf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf64: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12cf64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf68: 0xc04a926  jal         func_12A498
    ctx->pc = 0x12CF68u;
    SET_GPR_U32(ctx, 31, 0x12CF70u);
    ctx->pc = 0x12CF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CF68u;
            // 0x12cf6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A498u;
    if (runtime->hasFunction(0x12A498u)) {
        auto targetFn = runtime->lookupFunction(0x12A498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF70u; }
        if (ctx->pc != 0x12CF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A498_0x12a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF70u; }
        if (ctx->pc != 0x12CF70u) { return; }
    }
    ctx->pc = 0x12CF70u;
label_12cf70:
    // 0x12cf70: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12cf70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12cf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf78: 0xc04a97e  jal         func_12A5F8
    ctx->pc = 0x12CF78u;
    SET_GPR_U32(ctx, 31, 0x12CF80u);
    ctx->pc = 0x12CF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CF78u;
            // 0x12cf7c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A5F8u;
    if (runtime->hasFunction(0x12A5F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF80u; }
        if (ctx->pc != 0x12CF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A5F8_0x12a5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF80u; }
        if (ctx->pc != 0x12CF80u) { return; }
    }
    ctx->pc = 0x12CF80u;
label_12cf80:
    // 0x12cf80: 0x1840ff3a  blez        $v0, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x12CF80u;
    {
        const bool branch_taken_0x12cf80 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12CF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CF80u;
            // 0x12cf84: 0x15783f  dsra32      $t7, $s5, 0 (Delay Slot)
        SET_GPR_S64(ctx, 15, GPR_S64(ctx, 21) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf80) {
            ctx->pc = 0x12CC6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cc6c;
        }
    }
    ctx->pc = 0x12CF88u;
label_12cf88:
    // 0x12cf88: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x12cf88u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x12cf8c: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x12cf8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x12cf90: 0x3c0dfff0  lui         $t5, 0xFFF0
    ctx->pc = 0x12cf90u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65520 << 16));
    // 0x12cf94: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x12cf94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x12cf98: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12cf98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12cf9c: 0xf103c  dsll32      $v0, $t7, 0
    ctx->pc = 0x12cf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12cfa0: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x12cfa0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x12cfa4: 0x3c0f000f  lui         $t7, 0xF
    ctx->pc = 0x12cfa4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)15 << 16));
    // 0x12cfa8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12cfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12cfac: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12cfacu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12cfb0: 0x2aea824  and         $s5, $s5, $t6
    ctx->pc = 0x12cfb0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 14));
    // 0x12cfb4: 0x4f7825  or          $t7, $v0, $t7
    ctx->pc = 0x12cfb4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x12cfb8: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12cfb8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12cfbc: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x12cfbcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
    // 0x12cfc0: 0x1000ff2a  b           . + 4 + (-0xD6 << 2)
    ctx->pc = 0x12CFC0u;
    {
        const bool branch_taken_0x12cfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CFC0u;
            // 0x12cfc4: 0x2aea825  or          $s5, $s5, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cfc0) {
            ctx->pc = 0x12CC6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cc6c;
        }
    }
    ctx->pc = 0x12CFC8u;
label_12cfc8:
    // 0x12cfc8: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x12CFC8u;
    {
        const bool branch_taken_0x12cfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CFC8u;
            // 0x12cfcc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cfc8) {
            ctx->pc = 0x12D0C0u;
            goto label_12d0c0;
        }
    }
    ctx->pc = 0x12CFD0u;
    // 0x12cfd0: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
    ctx->pc = 0x12CFD0u;
    {
        const bool branch_taken_0x12cfd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CFD0u;
            // 0x12cfd4: 0x240ef000  addiu       $t6, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cfd0) {
            ctx->pc = 0x12D0A0u;
            goto label_12d0a0;
        }
    }
    ctx->pc = 0x12CFD8u;
    // 0x12cfd8: 0xe733a  dsrl        $t6, $t6, 12
    ctx->pc = 0x12cfd8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 12);
    // 0x12cfdc: 0x2ae7824  and         $t7, $s5, $t6
    ctx->pc = 0x12cfdcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) & GPR_U64(ctx, 14));
    // 0x12cfe0: 0x15ee0010  bne         $t7, $t6, . + 4 + (0x10 << 2)
    ctx->pc = 0x12CFE0u;
    {
        const bool branch_taken_0x12cfe0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x12CFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CFE0u;
            // 0x12cfe4: 0x15783c  dsll32      $t7, $s5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cfe0) {
            ctx->pc = 0x12D024u;
            goto label_12d024;
        }
    }
    ctx->pc = 0x12CFE8u;
    // 0x12cfe8: 0x15783f  dsra32      $t7, $s5, 0
    ctx->pc = 0x12cfe8u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 21) >> (32 + 0));
    // 0x12cfec: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x12cfecu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x12cff0: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x12cff0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x12cff4: 0x3c0d0010  lui         $t5, 0x10
    ctx->pc = 0x12cff4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16 << 16));
    // 0x12cff8: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x12cff8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x12cffc: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x12cffcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x12d000: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12d000u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12d004: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x12d004u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x12d008: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12d008u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12d00c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12d00cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d010: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12d010u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12d014: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12d014u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12d018: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x12d018u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
    // 0x12d01c: 0x1000ff13  b           . + 4 + (-0xED << 2)
    ctx->pc = 0x12D01Cu;
    {
        const bool branch_taken_0x12d01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D01Cu;
            // 0x12d020: 0x2aea824  and         $s5, $s5, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d01c) {
            ctx->pc = 0x12CC6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cc6c;
        }
    }
    ctx->pc = 0x12D024u;
label_12d024:
    // 0x12d024: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x12d024u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x12d028: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x12d028u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x12d02c: 0x11e0ff10  beqz        $t7, . + 4 + (-0xF0 << 2)
    ctx->pc = 0x12D02Cu;
    {
        const bool branch_taken_0x12d02c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D02Cu;
            // 0x12d030: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d02c) {
            ctx->pc = 0x12CC70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cc70;
        }
    }
    ctx->pc = 0x12D034u;
    // 0x12d034: 0x16400013  bnez        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x12D034u;
    {
        const bool branch_taken_0x12d034 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d034) {
            ctx->pc = 0x12D084u;
            goto label_12d084;
        }
    }
    ctx->pc = 0x12D03Cu;
    // 0x12d03c: 0xc04a9f8  jal         func_12A7E0
    ctx->pc = 0x12D03Cu;
    SET_GPR_U32(ctx, 31, 0x12D044u);
    ctx->pc = 0x12D040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D03Cu;
            // 0x12d040: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A7E0u;
    if (runtime->hasFunction(0x12A7E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D044u; }
        if (ctx->pc != 0x12D044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A7E0_0x12a7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D044u; }
        if (ctx->pc != 0x12D044u) { return; }
    }
    ctx->pc = 0x12D044u;
label_12d044:
    // 0x12d044: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12d044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d048: 0xc049622  jal         func_125888
    ctx->pc = 0x12D048u;
    SET_GPR_U32(ctx, 31, 0x12D050u);
    ctx->pc = 0x12D04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D048u;
            // 0x12d04c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D050u; }
        if (ctx->pc != 0x12D050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D050u; }
        if (ctx->pc != 0x12D050u) { return; }
    }
    ctx->pc = 0x12D050u;
label_12d050:
    // 0x12d050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12d054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d058: 0xc049760  jal         func_125D80
    ctx->pc = 0x12D058u;
    SET_GPR_U32(ctx, 31, 0x12D060u);
    ctx->pc = 0x12D05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D058u;
            // 0x12d05c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D060u; }
        if (ctx->pc != 0x12D060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D060u; }
        if (ctx->pc != 0x12D060u) { return; }
    }
    ctx->pc = 0x12D060u;
label_12d060:
    // 0x12d060: 0x1440ff03  bnez        $v0, . + 4 + (-0xFD << 2)
    ctx->pc = 0x12D060u;
    {
        const bool branch_taken_0x12d060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D060u;
            // 0x12d064: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d060) {
            ctx->pc = 0x12CC70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cc70;
        }
    }
    ctx->pc = 0x12D068u;
label_12d068:
    // 0x12d068: 0x240f0022  addiu       $t7, $zero, 0x22
    ctx->pc = 0x12d068u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x12d06c: 0x8fad0050  lw          $t5, 0x50($sp)
    ctx->pc = 0x12d06cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12d070: 0xaecf0000  sw          $t7, 0x0($s6)
    ctx->pc = 0x12d070u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 15));
    // 0x12d074: 0x11a0fde5  beqz        $t5, . + 4 + (-0x21B << 2)
    ctx->pc = 0x12D074u;
    {
        const bool branch_taken_0x12d074 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D074u;
            // 0x12d078: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d074) {
            ctx->pc = 0x12C80Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c80c;
        }
    }
    ctx->pc = 0x12D07Cu;
    // 0x12d07c: 0x1000fefc  b           . + 4 + (-0x104 << 2)
    ctx->pc = 0x12D07Cu;
    {
        const bool branch_taken_0x12d07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D07Cu;
            // 0x12d080: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d07c) {
            ctx->pc = 0x12CC70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cc70;
        }
    }
    ctx->pc = 0x12D084u;
label_12d084:
    // 0x12d084: 0xc04a9f8  jal         func_12A7E0
    ctx->pc = 0x12D084u;
    SET_GPR_U32(ctx, 31, 0x12D08Cu);
    ctx->pc = 0x12D088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D084u;
            // 0x12d088: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A7E0u;
    if (runtime->hasFunction(0x12A7E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D08Cu; }
        if (ctx->pc != 0x12D08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A7E0_0x12a7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D08Cu; }
        if (ctx->pc != 0x12D08Cu) { return; }
    }
    ctx->pc = 0x12D08Cu;
label_12d08c:
    // 0x12d08c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12d08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d090: 0xc04960a  jal         func_125828
    ctx->pc = 0x12D090u;
    SET_GPR_U32(ctx, 31, 0x12D098u);
    ctx->pc = 0x12D094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D090u;
            // 0x12d094: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D098u; }
        if (ctx->pc != 0x12D098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D098u; }
        if (ctx->pc != 0x12D098u) { return; }
    }
    ctx->pc = 0x12D098u;
label_12d098:
    // 0x12d098: 0x1000fef4  b           . + 4 + (-0x10C << 2)
    ctx->pc = 0x12D098u;
    {
        const bool branch_taken_0x12d098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D098u;
            // 0x12d09c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d098) {
            ctx->pc = 0x12CC6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cc6c;
        }
    }
    ctx->pc = 0x12D0A0u;
label_12d0a0:
    // 0x12d0a0: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x12d0a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x12d0a4: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x12d0a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x12d0a8: 0x2af7824  and         $t7, $s5, $t7
    ctx->pc = 0x12d0a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) & GPR_U64(ctx, 15));
    // 0x12d0ac: 0x55e0ffdd  bnel        $t7, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x12D0ACu;
    {
        const bool branch_taken_0x12d0ac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d0ac) {
            ctx->pc = 0x12D0B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D0ACu;
            // 0x12d0b0: 0x15783c  dsll32      $t7, $s5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D024u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d024;
        }
    }
    ctx->pc = 0x12D0B4u;
    // 0x12d0b4: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
    ctx->pc = 0x12D0B4u;
    {
        const bool branch_taken_0x12d0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D0B4u;
            // 0x12d0b8: 0x15783f  dsra32      $t7, $s5, 0 (Delay Slot)
        SET_GPR_S64(ctx, 15, GPR_S64(ctx, 21) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0b4) {
            ctx->pc = 0x12CF88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cf88;
        }
    }
    ctx->pc = 0x12D0BCu;
    // 0x12d0bc: 0x0  nop
    ctx->pc = 0x12d0bcu;
    // NOP
label_12d0c0:
    // 0x12d0c0: 0xc04aaf2  jal         func_12ABC8
    ctx->pc = 0x12D0C0u;
    SET_GPR_U32(ctx, 31, 0x12D0C8u);
    ctx->pc = 0x12D0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D0C0u;
            // 0x12d0c4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ABC8u;
    if (runtime->hasFunction(0x12ABC8u)) {
        auto targetFn = runtime->lookupFunction(0x12ABC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D0C8u; }
        if (ctx->pc != 0x12D0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012ABC8_0x12abc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D0C8u; }
        if (ctx->pc != 0x12D0C8u) { return; }
    }
    ctx->pc = 0x12D0C8u;
label_12d0c8:
    // 0x12d0c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12d0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d0cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12d0ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0d4: 0xc049760  jal         func_125D80
    ctx->pc = 0x12D0D4u;
    SET_GPR_U32(ctx, 31, 0x12D0DCu);
    ctx->pc = 0x12D0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D0D4u;
            // 0x12d0d8: 0x52fbc  dsll32      $a1, $a1, 30 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D0DCu; }
        if (ctx->pc != 0x12D0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D0DCu; }
        if (ctx->pc != 0x12D0DCu) { return; }
    }
    ctx->pc = 0x12D0DCu;
label_12d0dc:
    // 0x12d0dc: 0x5c4000ae  bgtzl       $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x12D0DCu;
    {
        const bool branch_taken_0x12d0dc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x12d0dc) {
            ctx->pc = 0x12D0E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D0DCu;
            // 0x12d0e0: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D398u;
            goto label_12d398;
        }
    }
    ctx->pc = 0x12D0E4u;
    // 0x12d0e4: 0x1240008f  beqz        $s2, . + 4 + (0x8F << 2)
    ctx->pc = 0x12D0E4u;
    {
        const bool branch_taken_0x12d0e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D0E4u;
            // 0x12d0e8: 0x240ff000  addiu       $t7, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0e4) {
            ctx->pc = 0x12D324u;
            goto label_12d324;
        }
    }
    ctx->pc = 0x12D0ECu;
    // 0x12d0ec: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x12d0ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x12d0f0: 0x10853c  dsll32      $s0, $s0, 20
    ctx->pc = 0x12d0f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 20));
    // 0x12d0f4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x12d0f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12d0f8:
    // 0x12d0f8: 0x15703f  dsra32      $t6, $s5, 0
    ctx->pc = 0x12d0f8u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 21) >> (32 + 0));
    // 0x12d0fc: 0x3c137ff0  lui         $s3, 0x7FF0
    ctx->pc = 0x12d0fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32752 << 16));
    // 0x12d100: 0x1d37824  and         $t7, $t6, $s3
    ctx->pc = 0x12d100u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & GPR_U64(ctx, 19));
    // 0x12d104: 0xafaf0030  sw          $t7, 0x30($sp)
    ctx->pc = 0x12d104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 15));
    // 0x12d108: 0x8fac0030  lw          $t4, 0x30($sp)
    ctx->pc = 0x12d108u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12d10c: 0x3c0f7fe0  lui         $t7, 0x7FE0
    ctx->pc = 0x12d10cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32736 << 16));
    // 0x12d110: 0x158f0065  bne         $t4, $t7, . + 4 + (0x65 << 2)
    ctx->pc = 0x12D110u;
    {
        const bool branch_taken_0x12d110 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 15));
        ctx->pc = 0x12D114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D110u;
            // 0x12d114: 0x3c0f0340  lui         $t7, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)832 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d110) {
            ctx->pc = 0x12D2A8u;
            goto label_12d2a8;
        }
    }
    ctx->pc = 0x12D118u;
    // 0x12d118: 0x3c0ffcb0  lui         $t7, 0xFCB0
    ctx->pc = 0x12d118u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64688 << 16));
    // 0x12d11c: 0xffb50040  sd          $s5, 0x40($sp)
    ctx->pc = 0x12d11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 21));
    // 0x12d120: 0x1cf7821  addu        $t7, $t6, $t7
    ctx->pc = 0x12d120u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12d124: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12d124u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d128: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12d128u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12d12c: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x12d12cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x12d130: 0x2aea824  and         $s5, $s5, $t6
    ctx->pc = 0x12d130u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 14));
    // 0x12d134: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x12d134u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
    // 0x12d138: 0xc04a9f8  jal         func_12A7E0
    ctx->pc = 0x12D138u;
    SET_GPR_U32(ctx, 31, 0x12D140u);
    ctx->pc = 0x12D13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D138u;
            // 0x12d13c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A7E0u;
    if (runtime->hasFunction(0x12A7E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D140u; }
        if (ctx->pc != 0x12D140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A7E0_0x12a7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D140u; }
        if (ctx->pc != 0x12D140u) { return; }
    }
    ctx->pc = 0x12D140u;
label_12d140:
    // 0x12d140: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d144: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x12D144u;
    SET_GPR_U32(ctx, 31, 0x12D14Cu);
    ctx->pc = 0x12D148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D144u;
            // 0x12d148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D14Cu; }
        if (ctx->pc != 0x12D14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D14Cu; }
        if (ctx->pc != 0x12D14Cu) { return; }
    }
    ctx->pc = 0x12D14Cu;
label_12d14c:
    // 0x12d14c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d150: 0xc04960a  jal         func_125828
    ctx->pc = 0x12D150u;
    SET_GPR_U32(ctx, 31, 0x12D158u);
    ctx->pc = 0x12D154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D150u;
            // 0x12d154: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D158u; }
        if (ctx->pc != 0x12D158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D158u; }
        if (ctx->pc != 0x12D158u) { return; }
    }
    ctx->pc = 0x12D158u;
label_12d158:
    // 0x12d158: 0x3c0f7c9f  lui         $t7, 0x7C9F
    ctx->pc = 0x12d158u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)31903 << 16));
    // 0x12d15c: 0x2683f  dsra32      $t5, $v0, 0
    ctx->pc = 0x12d15cu;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12d160: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12d160u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12d164: 0x1b37024  and         $t6, $t5, $s3
    ctx->pc = 0x12d164u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & GPR_U64(ctx, 19));
    // 0x12d168: 0x1ee782b  sltu        $t7, $t7, $t6
    ctx->pc = 0x12d168u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x12d16c: 0x11e0001b  beqz        $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x12D16Cu;
    {
        const bool branch_taken_0x12d16c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D16Cu;
            // 0x12d170: 0x240ff801  addiu       $t7, $zero, -0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965249));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d16c) {
            ctx->pc = 0x12D1DCu;
            goto label_12d1dc;
        }
    }
    ctx->pc = 0x12D174u;
    // 0x12d174: 0xdfac0040  ld          $t4, 0x40($sp)
    ctx->pc = 0x12d174u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12d178: 0xf7d3c  dsll32      $t7, $t7, 20
    ctx->pc = 0x12d178u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 20));
    // 0x12d17c: 0xf7827  nor         $t7, $zero, $t7
    ctx->pc = 0x12d17cu;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 15)));
    // 0x12d180: 0x118ffeb4  beq         $t4, $t7, . + 4 + (-0x14C << 2)
    ctx->pc = 0x12D180u;
    {
        const bool branch_taken_0x12d180 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 15));
        ctx->pc = 0x12D184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D180u;
            // 0x12d184: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d180) {
            ctx->pc = 0x12CC54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cc54;
        }
    }
    ctx->pc = 0x12D188u;
    // 0x12d188: 0x3c0f7fef  lui         $t7, 0x7FEF
    ctx->pc = 0x12d188u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32751 << 16));
    // 0x12d18c: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x12d18cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x12d190: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12d190u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12d194: 0x4da824  and         $s5, $v0, $t5
    ctx->pc = 0x12d194u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x12d198: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12d198u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12d19c: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x12d19cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
    // 0x12d1a0: 0x2ada825  or          $s5, $s5, $t5
    ctx->pc = 0x12d1a0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 13));
    // 0x12d1a4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12d1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12d1a8:
    // 0x12d1a8: 0xc04a76a  jal         func_129DA8
    ctx->pc = 0x12D1A8u;
    SET_GPR_U32(ctx, 31, 0x12D1B0u);
    ctx->pc = 0x12D1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D1A8u;
            // 0x12d1ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA8u;
    if (runtime->hasFunction(0x129DA8u)) {
        auto targetFn = runtime->lookupFunction(0x129DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D1B0u; }
        if (ctx->pc != 0x12D1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DA8_0x129da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D1B0u; }
        if (ctx->pc != 0x12D1B0u) { return; }
    }
    ctx->pc = 0x12D1B0u;
label_12d1b0:
    // 0x12d1b0: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x12d1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12d1b4: 0xc04a76a  jal         func_129DA8
    ctx->pc = 0x12D1B4u;
    SET_GPR_U32(ctx, 31, 0x12D1BCu);
    ctx->pc = 0x12D1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D1B4u;
            // 0x12d1b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA8u;
    if (runtime->hasFunction(0x129DA8u)) {
        auto targetFn = runtime->lookupFunction(0x129DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D1BCu; }
        if (ctx->pc != 0x12D1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DA8_0x129da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D1BCu; }
        if (ctx->pc != 0x12D1BCu) { return; }
    }
    ctx->pc = 0x12D1BCu;
label_12d1bc:
    // 0x12d1bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12d1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1c0: 0xc04a76a  jal         func_129DA8
    ctx->pc = 0x12D1C0u;
    SET_GPR_U32(ctx, 31, 0x12D1C8u);
    ctx->pc = 0x12D1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D1C0u;
            // 0x12d1c4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA8u;
    if (runtime->hasFunction(0x129DA8u)) {
        auto targetFn = runtime->lookupFunction(0x129DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D1C8u; }
        if (ctx->pc != 0x12D1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DA8_0x129da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D1C8u; }
        if (ctx->pc != 0x12D1C8u) { return; }
    }
    ctx->pc = 0x12D1C8u;
label_12d1c8:
    // 0x12d1c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12d1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1cc: 0xc04a76a  jal         func_129DA8
    ctx->pc = 0x12D1CCu;
    SET_GPR_U32(ctx, 31, 0x12D1D4u);
    ctx->pc = 0x12D1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D1CCu;
            // 0x12d1d0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA8u;
    if (runtime->hasFunction(0x129DA8u)) {
        auto targetFn = runtime->lookupFunction(0x129DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D1D4u; }
        if (ctx->pc != 0x12D1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DA8_0x129da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D1D4u; }
        if (ctx->pc != 0x12D1D4u) { return; }
    }
    ctx->pc = 0x12D1D4u;
label_12d1d4:
    // 0x12d1d4: 0x1000fef6  b           . + 4 + (-0x10A << 2)
    ctx->pc = 0x12D1D4u;
    {
        const bool branch_taken_0x12d1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D1D4u;
            // 0x12d1d8: 0x8faf0050  lw          $t7, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1d4) {
            ctx->pc = 0x12CDB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cdb0;
        }
    }
    ctx->pc = 0x12D1DCu;
label_12d1dc:
    // 0x12d1dc: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12d1dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d1e0: 0x3c0f0350  lui         $t7, 0x350
    ctx->pc = 0x12d1e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)848 << 16));
    // 0x12d1e4: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x12d1e4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x12d1e8: 0x1af7821  addu        $t7, $t5, $t7
    ctx->pc = 0x12d1e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x12d1ec: 0x4ea824  and         $s5, $v0, $t6
    ctx->pc = 0x12d1ecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x12d1f0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12d1f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12d1f4: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x12d1f4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
label_12d1f8:
    // 0x12d1f8: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x12d1f8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x12d1fc: 0x15783f  dsra32      $t7, $s5, 0
    ctx->pc = 0x12d1fcu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 21) >> (32 + 0));
    // 0x12d200: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x12d200u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x12d204: 0x8fae0030  lw          $t6, 0x30($sp)
    ctx->pc = 0x12d204u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12d208: 0xf883c  dsll32      $s1, $t7, 0
    ctx->pc = 0x12d208u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12d20c: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x12d20cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x12d210: 0xe683c  dsll32      $t5, $t6, 0
    ctx->pc = 0x12d210u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12d214: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x12d214u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x12d218: 0x15b1ffe3  bne         $t5, $s1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x12D218u;
    {
        const bool branch_taken_0x12d218 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 17));
        ctx->pc = 0x12D21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D218u;
            // 0x12d21c: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d218) {
            ctx->pc = 0x12D1A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d1a8;
        }
    }
    ctx->pc = 0x12D220u;
    // 0x12d220: 0xc048d94  jal         func_123650
    ctx->pc = 0x12D220u;
    SET_GPR_U32(ctx, 31, 0x12D228u);
    ctx->pc = 0x12D224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D220u;
            // 0x12d224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123650u;
    if (runtime->hasFunction(0x123650u)) {
        auto targetFn = runtime->lookupFunction(0x123650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D228u; }
        if (ctx->pc != 0x12D228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123650_0x123650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D228u; }
        if (ctx->pc != 0x12D228u) { return; }
    }
    ctx->pc = 0x12D228u;
label_12d228:
    // 0x12d228: 0xc048cfa  jal         func_1233E8
    ctx->pc = 0x12D228u;
    SET_GPR_U32(ctx, 31, 0x12D230u);
    ctx->pc = 0x12D22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D228u;
            // 0x12d22c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1233E8u;
    if (runtime->hasFunction(0x1233E8u)) {
        auto targetFn = runtime->lookupFunction(0x1233E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D230u; }
        if (ctx->pc != 0x12D230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001233E8_0x1233e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D230u; }
        if (ctx->pc != 0x12D230u) { return; }
    }
    ctx->pc = 0x12D230u;
label_12d230:
    // 0x12d230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12d230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d234: 0xc049622  jal         func_125888
    ctx->pc = 0x12D234u;
    SET_GPR_U32(ctx, 31, 0x12D23Cu);
    ctx->pc = 0x12D238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D234u;
            // 0x12d238: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D23Cu; }
        if (ctx->pc != 0x12D23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D23Cu; }
        if (ctx->pc != 0x12D23Cu) { return; }
    }
    ctx->pc = 0x12D23Cu;
label_12d23c:
    // 0x12d23c: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D23Cu;
    {
        const bool branch_taken_0x12d23c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D23Cu;
            // 0x12d240: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d23c) {
            ctx->pc = 0x12D258u;
            goto label_12d258;
        }
    }
    ctx->pc = 0x12D244u;
    // 0x12d244: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x12d244u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x12d248: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x12d248u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x12d24c: 0x2af7824  and         $t7, $s5, $t7
    ctx->pc = 0x12d24cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) & GPR_U64(ctx, 15));
    // 0x12d250: 0x11e00011  beqz        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x12D250u;
    {
        const bool branch_taken_0x12d250 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D250u;
            // 0x12d254: 0x3c0c0063  lui         $t4, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d250) {
            ctx->pc = 0x12D298u;
            goto label_12d298;
        }
    }
    ctx->pc = 0x12D258u;
label_12d258:
    // 0x12d258: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12d258u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12d25c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12d25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d260: 0x25ef0a98  addiu       $t7, $t7, 0xA98
    ctx->pc = 0x12d260u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2712));
    // 0x12d264: 0xc049760  jal         func_125D80
    ctx->pc = 0x12D264u;
    SET_GPR_U32(ctx, 31, 0x12D26Cu);
    ctx->pc = 0x12D268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D264u;
            // 0x12d268: 0xdde50000  ld          $a1, 0x0($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D26Cu; }
        if (ctx->pc != 0x12D26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D26Cu; }
        if (ctx->pc != 0x12D26Cu) { return; }
    }
    ctx->pc = 0x12D26Cu;
label_12d26c:
    // 0x12d26c: 0x440fe7f  bltz        $v0, . + 4 + (-0x181 << 2)
    ctx->pc = 0x12D26Cu;
    {
        const bool branch_taken_0x12d26c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12D270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D26Cu;
            // 0x12d270: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d26c) {
            ctx->pc = 0x12CC6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cc6c;
        }
    }
    ctx->pc = 0x12D274u;
    // 0x12d274: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12d274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d278: 0xdde40aa0  ld          $a0, 0xAA0($t7)
    ctx->pc = 0x12d278u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 15), 2720)));
label_12d27c:
    // 0x12d27c: 0xc049760  jal         func_125D80
    ctx->pc = 0x12D27Cu;
    SET_GPR_U32(ctx, 31, 0x12D284u);
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D284u; }
        if (ctx->pc != 0x12D284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D284u; }
        if (ctx->pc != 0x12D284u) { return; }
    }
    ctx->pc = 0x12D284u;
label_12d284:
    // 0x12d284: 0x440fe7a  bltz        $v0, . + 4 + (-0x186 << 2)
    ctx->pc = 0x12D284u;
    {
        const bool branch_taken_0x12d284 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12D288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D284u;
            // 0x12d288: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d284) {
            ctx->pc = 0x12CC70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cc70;
        }
    }
    ctx->pc = 0x12D28Cu;
    // 0x12d28c: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x12D28Cu;
    {
        const bool branch_taken_0x12d28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d28c) {
            ctx->pc = 0x12D1A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d1a8;
        }
    }
    ctx->pc = 0x12D294u;
    // 0x12d294: 0x0  nop
    ctx->pc = 0x12d294u;
    // NOP
label_12d298:
    // 0x12d298: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d29c: 0x258c0aa8  addiu       $t4, $t4, 0xAA8
    ctx->pc = 0x12d29cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2728));
    // 0x12d2a0: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x12D2A0u;
    {
        const bool branch_taken_0x12d2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D2A0u;
            // 0x12d2a4: 0xdd850000  ld          $a1, 0x0($t4) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2a0) {
            ctx->pc = 0x12D27Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d27c;
        }
    }
    ctx->pc = 0x12D2A8u;
label_12d2a8:
    // 0x12d2a8: 0x1ec782b  sltu        $t7, $t7, $t4
    ctx->pc = 0x12d2a8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x12d2ac: 0x15e00013  bnez        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x12D2ACu;
    {
        const bool branch_taken_0x12d2ac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D2ACu;
            // 0x12d2b0: 0x240403ff  addiu       $a0, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2ac) {
            ctx->pc = 0x12D2FCu;
            goto label_12d2fc;
        }
    }
    ctx->pc = 0x12D2B4u;
    // 0x12d2b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12d2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2b8: 0xc049760  jal         func_125D80
    ctx->pc = 0x12D2B8u;
    SET_GPR_U32(ctx, 31, 0x12D2C0u);
    ctx->pc = 0x12D2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D2B8u;
            // 0x12d2bc: 0x4253c  dsll32      $a0, $a0, 20 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D2C0u; }
        if (ctx->pc != 0x12D2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D2C0u; }
        if (ctx->pc != 0x12D2C0u) { return; }
    }
    ctx->pc = 0x12D2C0u;
label_12d2c0:
    // 0x12d2c0: 0x1c40000e  bgtz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12D2C0u;
    {
        const bool branch_taken_0x12d2c0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12D2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D2C0u;
            // 0x12d2c4: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2c0) {
            ctx->pc = 0x12D2FCu;
            goto label_12d2fc;
        }
    }
    ctx->pc = 0x12D2C8u;
    // 0x12d2c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12d2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2cc: 0xc04960a  jal         func_125828
    ctx->pc = 0x12D2CCu;
    SET_GPR_U32(ctx, 31, 0x12D2D4u);
    ctx->pc = 0x12D2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D2CCu;
            // 0x12d2d0: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D2D4u; }
        if (ctx->pc != 0x12D2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D2D4u; }
        if (ctx->pc != 0x12D2D4u) { return; }
    }
    ctx->pc = 0x12D2D4u;
label_12d2d4:
    // 0x12d2d4: 0xc0497a2  jal         func_125E88
    ctx->pc = 0x12D2D4u;
    SET_GPR_U32(ctx, 31, 0x12D2DCu);
    ctx->pc = 0x12D2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D2D4u;
            // 0x12d2d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125E88u;
    if (runtime->hasFunction(0x125E88u)) {
        auto targetFn = runtime->lookupFunction(0x125E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D2DCu; }
        if (ctx->pc != 0x12D2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125E88_0x125e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D2DCu; }
        if (ctx->pc != 0x12D2DCu) { return; }
    }
    ctx->pc = 0x12D2DCu;
label_12d2dc:
    // 0x12d2dc: 0xc049776  jal         func_125DD8
    ctx->pc = 0x12D2DCu;
    SET_GPR_U32(ctx, 31, 0x12D2E4u);
    ctx->pc = 0x12D2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D2DCu;
            // 0x12d2e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D2E4u; }
        if (ctx->pc != 0x12D2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D2E4u; }
        if (ctx->pc != 0x12D2E4u) { return; }
    }
    ctx->pc = 0x12D2E4u;
label_12d2e4:
    // 0x12d2e4: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D2E4u;
    {
        const bool branch_taken_0x12d2e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D2E4u;
            // 0x12d2e8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2e4) {
            ctx->pc = 0x12D2FCu;
            goto label_12d2fc;
        }
    }
    ctx->pc = 0x12D2ECu;
    // 0x12d2ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2f0: 0xc049622  jal         func_125888
    ctx->pc = 0x12D2F0u;
    SET_GPR_U32(ctx, 31, 0x12D2F8u);
    ctx->pc = 0x12D2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D2F0u;
            // 0x12d2f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D2F8u; }
        if (ctx->pc != 0x12D2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D2F8u; }
        if (ctx->pc != 0x12D2F8u) { return; }
    }
    ctx->pc = 0x12D2F8u;
label_12d2f8:
    // 0x12d2f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d2f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12d2fc:
    // 0x12d2fc: 0xc04a9f8  jal         func_12A7E0
    ctx->pc = 0x12D2FCu;
    SET_GPR_U32(ctx, 31, 0x12D304u);
    ctx->pc = 0x12D300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D2FCu;
            // 0x12d300: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A7E0u;
    if (runtime->hasFunction(0x12A7E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D304u; }
        if (ctx->pc != 0x12D304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A7E0_0x12a7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D304u; }
        if (ctx->pc != 0x12D304u) { return; }
    }
    ctx->pc = 0x12D304u;
label_12d304:
    // 0x12d304: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d308: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x12D308u;
    SET_GPR_U32(ctx, 31, 0x12D310u);
    ctx->pc = 0x12D30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D308u;
            // 0x12d30c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D310u; }
        if (ctx->pc != 0x12D310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D310u; }
        if (ctx->pc != 0x12D310u) { return; }
    }
    ctx->pc = 0x12D310u;
label_12d310:
    // 0x12d310: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12d310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d314: 0xc04960a  jal         func_125828
    ctx->pc = 0x12D314u;
    SET_GPR_U32(ctx, 31, 0x12D31Cu);
    ctx->pc = 0x12D318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D314u;
            // 0x12d318: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D31Cu; }
        if (ctx->pc != 0x12D31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D31Cu; }
        if (ctx->pc != 0x12D31Cu) { return; }
    }
    ctx->pc = 0x12D31Cu;
label_12d31c:
    // 0x12d31c: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x12D31Cu;
    {
        const bool branch_taken_0x12d31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D31Cu;
            // 0x12d320: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d31c) {
            ctx->pc = 0x12D1F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d1f8;
        }
    }
    ctx->pc = 0x12D324u;
label_12d324:
    // 0x12d324: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x12d324u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x12d328: 0x2af7824  and         $t7, $s5, $t7
    ctx->pc = 0x12d328u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) & GPR_U64(ctx, 15));
    // 0x12d32c: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D32Cu;
    {
        const bool branch_taken_0x12d32c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D32Cu;
            // 0x12d330: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d32c) {
            ctx->pc = 0x12D34Cu;
            goto label_12d34c;
        }
    }
    ctx->pc = 0x12D334u;
    // 0x12d334: 0x12afff4c  beq         $s5, $t7, . + 4 + (-0xB4 << 2)
    ctx->pc = 0x12D334u;
    {
        const bool branch_taken_0x12d334 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 15));
        ctx->pc = 0x12D338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D334u;
            // 0x12d338: 0x241003ff  addiu       $s0, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d334) {
            ctx->pc = 0x12D068u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d068;
        }
    }
    ctx->pc = 0x12D33Cu;
    // 0x12d33c: 0x2411fbff  addiu       $s1, $zero, -0x401
    ctx->pc = 0x12d33cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x12d340: 0x10853c  dsll32      $s0, $s0, 20
    ctx->pc = 0x12d340u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 20));
    // 0x12d344: 0x1000ff6c  b           . + 4 + (-0x94 << 2)
    ctx->pc = 0x12D344u;
    {
        const bool branch_taken_0x12d344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D344u;
            // 0x12d348: 0x118d3c  dsll32      $s1, $s1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d344) {
            ctx->pc = 0x12D0F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d0f8;
        }
    }
    ctx->pc = 0x12D34Cu;
label_12d34c:
    // 0x12d34c: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x12d34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x12d350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12d350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d354: 0xc049760  jal         func_125D80
    ctx->pc = 0x12D354u;
    SET_GPR_U32(ctx, 31, 0x12D35Cu);
    ctx->pc = 0x12D358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D354u;
            // 0x12d358: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D35Cu; }
        if (ctx->pc != 0x12D35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D35Cu; }
        if (ctx->pc != 0x12D35Cu) { return; }
    }
    ctx->pc = 0x12D35Cu;
label_12d35c:
    // 0x12d35c: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D35Cu;
    {
        const bool branch_taken_0x12d35c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12d35c) {
            ctx->pc = 0x12D360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D35Cu;
            // 0x12d360: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D380u;
            goto label_12d380;
        }
    }
    ctx->pc = 0x12D364u;
    // 0x12d364: 0x241001ff  addiu       $s0, $zero, 0x1FF
    ctx->pc = 0x12d364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x12d368: 0x10857c  dsll32      $s0, $s0, 21
    ctx->pc = 0x12d368u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 21));
label_12d36c:
    // 0x12d36c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12d36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d370: 0xc049622  jal         func_125888
    ctx->pc = 0x12D370u;
    SET_GPR_U32(ctx, 31, 0x12D378u);
    ctx->pc = 0x12D374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D370u;
            // 0x12d374: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D378u; }
        if (ctx->pc != 0x12D378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D378u; }
        if (ctx->pc != 0x12D378u) { return; }
    }
    ctx->pc = 0x12D378u;
label_12d378:
    // 0x12d378: 0x1000ff5f  b           . + 4 + (-0xA1 << 2)
    ctx->pc = 0x12D378u;
    {
        const bool branch_taken_0x12d378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D378u;
            // 0x12d37c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d378) {
            ctx->pc = 0x12D0F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d0f8;
        }
    }
    ctx->pc = 0x12D380u;
label_12d380:
    // 0x12d380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12d380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d384: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x12D384u;
    SET_GPR_U32(ctx, 31, 0x12D38Cu);
    ctx->pc = 0x12D388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D384u;
            // 0x12d388: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D38Cu; }
        if (ctx->pc != 0x12D38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D38Cu; }
        if (ctx->pc != 0x12D38Cu) { return; }
    }
    ctx->pc = 0x12D38Cu;
label_12d38c:
    // 0x12d38c: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x12D38Cu;
    {
        const bool branch_taken_0x12d38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D38Cu;
            // 0x12d390: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d38c) {
            ctx->pc = 0x12D36Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d36c;
        }
    }
    ctx->pc = 0x12D394u;
    // 0x12d394: 0x0  nop
    ctx->pc = 0x12d394u;
    // NOP
label_12d398:
    // 0x12d398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12d398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d39c: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x12D39Cu;
    SET_GPR_U32(ctx, 31, 0x12D3A4u);
    ctx->pc = 0x12D3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D39Cu;
            // 0x12d3a0: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D3A4u; }
        if (ctx->pc != 0x12D3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D3A4u; }
        if (ctx->pc != 0x12D3A4u) { return; }
    }
    ctx->pc = 0x12D3A4u;
label_12d3a4:
    // 0x12d3a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12d3a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3a8: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D3A8u;
    {
        const bool branch_taken_0x12d3a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D3A8u;
            // 0x12d3ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3a8) {
            ctx->pc = 0x12D3C0u;
            goto label_12d3c0;
        }
    }
    ctx->pc = 0x12D3B0u;
    // 0x12d3b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12d3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3b4: 0xc049622  jal         func_125888
    ctx->pc = 0x12D3B4u;
    SET_GPR_U32(ctx, 31, 0x12D3BCu);
    ctx->pc = 0x12D3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D3B4u;
            // 0x12d3b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D3BCu; }
        if (ctx->pc != 0x12D3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D3BCu; }
        if (ctx->pc != 0x12D3BCu) { return; }
    }
    ctx->pc = 0x12D3BCu;
label_12d3bc:
    // 0x12d3bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d3bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12d3c0:
    // 0x12d3c0: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x12d3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x12d3c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3c8: 0xc04960a  jal         func_125828
    ctx->pc = 0x12D3C8u;
    SET_GPR_U32(ctx, 31, 0x12D3D0u);
    ctx->pc = 0x12D3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D3C8u;
            // 0x12d3cc: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D3D0u; }
        if (ctx->pc != 0x12D3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D3D0u; }
        if (ctx->pc != 0x12D3D0u) { return; }
    }
    ctx->pc = 0x12D3D0u;
label_12d3d0:
    // 0x12d3d0: 0x1000ff49  b           . + 4 + (-0xB7 << 2)
    ctx->pc = 0x12D3D0u;
    {
        const bool branch_taken_0x12d3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D3D0u;
            // 0x12d3d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3d0) {
            ctx->pc = 0x12D0F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d0f8;
        }
    }
    ctx->pc = 0x12D3D8u;
label_12d3d8:
    // 0x12d3d8: 0x8fae0054  lw          $t6, 0x54($sp)
    ctx->pc = 0x12d3d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x12d3dc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x12d3dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12d3e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3e4: 0xe9023  negu        $s2, $t6
    ctx->pc = 0x12d3e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 14)));
    // 0x12d3e8: 0x1000fe8c  b           . + 4 + (-0x174 << 2)
    ctx->pc = 0x12D3E8u;
    {
        const bool branch_taken_0x12d3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D3E8u;
            // 0x12d3ec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3e8) {
            ctx->pc = 0x12CE1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ce1c;
        }
    }
    ctx->pc = 0x12D3F0u;
label_12d3f0:
    // 0x12d3f0: 0x3c0f0350  lui         $t7, 0x350
    ctx->pc = 0x12d3f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)848 << 16));
    // 0x12d3f4: 0x50a824  and         $s5, $v0, $s0
    ctx->pc = 0x12d3f4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x12d3f8: 0x1cf7821  addu        $t7, $t6, $t7
    ctx->pc = 0x12d3f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12d3fc: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12d3fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12d400: 0x1000fe61  b           . + 4 + (-0x19F << 2)
    ctx->pc = 0x12D400u;
    {
        const bool branch_taken_0x12d400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D400u;
            // 0x12d404: 0x2afa825  or          $s5, $s5, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d400) {
            ctx->pc = 0x12CD88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cd88;
        }
    }
    ctx->pc = 0x12D408u;
label_12d408:
    // 0x12d408: 0x601fe60  bgez        $s0, . + 4 + (-0x1A0 << 2)
    ctx->pc = 0x12D408u;
    {
        const bool branch_taken_0x12d408 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x12D40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D408u;
            // 0x12d40c: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d408) {
            ctx->pc = 0x12CD8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cd8c;
        }
    }
    ctx->pc = 0x12D410u;
    // 0x12d410: 0x108023  negu        $s0, $s0
    ctx->pc = 0x12d410u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x12d414: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x12d414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x12d418: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D418u;
    {
        const bool branch_taken_0x12d418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D418u;
            // 0x12d41c: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d418) {
            ctx->pc = 0x12D43Cu;
            goto label_12d43c;
        }
    }
    ctx->pc = 0x12D420u;
    // 0x12d420: 0x270c0  sll         $t6, $v0, 3
    ctx->pc = 0x12d420u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12d424: 0x25ef0978  addiu       $t7, $t7, 0x978
    ctx->pc = 0x12d424u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2424));
    // 0x12d428: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12d428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d42c: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x12d42cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12d430: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x12D430u;
    SET_GPR_U32(ctx, 31, 0x12D438u);
    ctx->pc = 0x12D434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D430u;
            // 0x12d434: 0xddc50000  ld          $a1, 0x0($t6) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D438u; }
        if (ctx->pc != 0x12D438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D438u; }
        if (ctx->pc != 0x12D438u) { return; }
    }
    ctx->pc = 0x12D438u;
label_12d438:
    // 0x12d438: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12d438u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12d43c:
    // 0x12d43c: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x12d43cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x12d440: 0x20f8024  and         $s0, $s0, $t7
    ctx->pc = 0x12d440u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 15));
    // 0x12d444: 0x1200fe50  beqz        $s0, . + 4 + (-0x1B0 << 2)
    ctx->pc = 0x12D444u;
    {
        const bool branch_taken_0x12d444 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D444u;
            // 0x12d448: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d444) {
            ctx->pc = 0x12CD88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cd88;
        }
    }
    ctx->pc = 0x12D44Cu;
    // 0x12d44c: 0x2a0f0020  slti        $t7, $s0, 0x20
    ctx->pc = 0x12d44cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x12d450: 0x11e0ff05  beqz        $t7, . + 4 + (-0xFB << 2)
    ctx->pc = 0x12D450u;
    {
        const bool branch_taken_0x12d450 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D450u;
            // 0x12d454: 0x2a0f0002  slti        $t7, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d450) {
            ctx->pc = 0x12D068u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d068;
        }
    }
    ctx->pc = 0x12D458u;
    // 0x12d458: 0x15e00012  bnez        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x12D458u;
    {
        const bool branch_taken_0x12d458 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D458u;
            // 0x12d45c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d458) {
            ctx->pc = 0x12D4A4u;
            goto label_12d4a4;
        }
    }
    ctx->pc = 0x12D460u;
    // 0x12d460: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x12d460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d464: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12d464u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12d468: 0x180982d  daddu       $s3, $t4, $zero
    ctx->pc = 0x12d468u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d46c: 0x25f00a68  addiu       $s0, $t7, 0xA68
    ctx->pc = 0x12d46cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 2664));
label_12d470:
    // 0x12d470: 0x322f0001  andi        $t7, $s1, 0x1
    ctx->pc = 0x12d470u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x12d474: 0x51e00006  beql        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D474u;
    {
        const bool branch_taken_0x12d474 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d474) {
            ctx->pc = 0x12D478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D474u;
            // 0x12d478: 0x118843  sra         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D490u;
            goto label_12d490;
        }
    }
    ctx->pc = 0x12D47Cu;
    // 0x12d47c: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x12d47cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12d480: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x12D480u;
    SET_GPR_U32(ctx, 31, 0x12D488u);
    ctx->pc = 0x12D484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D480u;
            // 0x12d484: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D488u; }
        if (ctx->pc != 0x12D488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D488u; }
        if (ctx->pc != 0x12D488u) { return; }
    }
    ctx->pc = 0x12D488u;
label_12d488:
    // 0x12d488: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12d488u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d48c: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x12d48cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
label_12d490:
    // 0x12d490: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x12d490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x12d494: 0x2a2f0002  slti        $t7, $s1, 0x2
    ctx->pc = 0x12d494u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12d498: 0x11e0fff5  beqz        $t7, . + 4 + (-0xB << 2)
    ctx->pc = 0x12D498u;
    {
        const bool branch_taken_0x12d498 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D498u;
            // 0x12d49c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d498) {
            ctx->pc = 0x12D470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d470;
        }
    }
    ctx->pc = 0x12D4A0u;
    // 0x12d4a0: 0x260602d  daddu       $t4, $s3, $zero
    ctx->pc = 0x12d4a0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12d4a4:
    // 0x12d4a4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12d4a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12d4a8: 0xffb50040  sd          $s5, 0x40($sp)
    ctx->pc = 0x12d4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 21));
    // 0x12d4ac: 0xc70c0  sll         $t6, $t4, 3
    ctx->pc = 0x12d4acu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x12d4b0: 0x25ef0a68  addiu       $t7, $t7, 0xA68
    ctx->pc = 0x12d4b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2664));
    // 0x12d4b4: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x12d4b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12d4b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12d4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4bc: 0xddd00000  ld          $s0, 0x0($t6)
    ctx->pc = 0x12d4bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x12d4c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12d4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4c4: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x12D4C4u;
    SET_GPR_U32(ctx, 31, 0x12D4CCu);
    ctx->pc = 0x12D4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D4C4u;
            // 0x12d4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D4CCu; }
        if (ctx->pc != 0x12D4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D4CCu; }
        if (ctx->pc != 0x12D4CCu) { return; }
    }
    ctx->pc = 0x12D4CCu;
label_12d4cc:
    // 0x12d4cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4d0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12d4d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4d4: 0xc049760  jal         func_125D80
    ctx->pc = 0x12D4D4u;
    SET_GPR_U32(ctx, 31, 0x12D4DCu);
    ctx->pc = 0x12D4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D4D4u;
            // 0x12d4d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D4DCu; }
        if (ctx->pc != 0x12D4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D4DCu; }
        if (ctx->pc != 0x12D4DCu) { return; }
    }
    ctx->pc = 0x12D4DCu;
label_12d4dc:
    // 0x12d4dc: 0x5440fe2b  bnel        $v0, $zero, . + 4 + (-0x1D5 << 2)
    ctx->pc = 0x12D4DCu;
    {
        const bool branch_taken_0x12d4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d4dc) {
            ctx->pc = 0x12D4E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D4DCu;
            // 0x12d4e0: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12CD8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cd8c;
        }
    }
    ctx->pc = 0x12D4E4u;
    // 0x12d4e4: 0xdfa40040  ld          $a0, 0x40($sp)
    ctx->pc = 0x12d4e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12d4e8: 0xc04960a  jal         func_125828
    ctx->pc = 0x12D4E8u;
    SET_GPR_U32(ctx, 31, 0x12D4F0u);
    ctx->pc = 0x12D4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D4E8u;
            // 0x12d4ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D4F0u; }
        if (ctx->pc != 0x12D4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D4F0u; }
        if (ctx->pc != 0x12D4F0u) { return; }
    }
    ctx->pc = 0x12D4F0u;
label_12d4f0:
    // 0x12d4f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4f4: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x12D4F4u;
    SET_GPR_U32(ctx, 31, 0x12D4FCu);
    ctx->pc = 0x12D4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D4F4u;
            // 0x12d4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D4FCu; }
        if (ctx->pc != 0x12D4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D4FCu; }
        if (ctx->pc != 0x12D4FCu) { return; }
    }
    ctx->pc = 0x12D4FCu;
label_12d4fc:
    // 0x12d4fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d500: 0xc049760  jal         func_125D80
    ctx->pc = 0x12D500u;
    SET_GPR_U32(ctx, 31, 0x12D508u);
    ctx->pc = 0x12D504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D500u;
            // 0x12d504: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D508u; }
        if (ctx->pc != 0x12D508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D508u; }
        if (ctx->pc != 0x12D508u) { return; }
    }
    ctx->pc = 0x12D508u;
label_12d508:
    // 0x12d508: 0x1040fed7  beqz        $v0, . + 4 + (-0x129 << 2)
    ctx->pc = 0x12D508u;
    {
        const bool branch_taken_0x12d508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D508u;
            // 0x12d50c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d508) {
            ctx->pc = 0x12D068u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d068;
        }
    }
    ctx->pc = 0x12D510u;
    // 0x12d510: 0x1000fe1e  b           . + 4 + (-0x1E2 << 2)
    ctx->pc = 0x12D510u;
    {
        const bool branch_taken_0x12d510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D510u;
            // 0x12d514: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d510) {
            ctx->pc = 0x12CD8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cd8c;
        }
    }
    ctx->pc = 0x12D518u;
label_12d518:
    // 0x12d518: 0x11787a  dsrl        $t7, $s1, 1
    ctx->pc = 0x12d518u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) >> 1);
    // 0x12d51c: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x12d51cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x12d520: 0xc048cfa  jal         func_1233E8
    ctx->pc = 0x12D520u;
    SET_GPR_U32(ctx, 31, 0x12D528u);
    ctx->pc = 0x12D524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D520u;
            // 0x12d524: 0x8f2025  or          $a0, $a0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1233E8u;
    if (runtime->hasFunction(0x1233E8u)) {
        auto targetFn = runtime->lookupFunction(0x1233E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D528u; }
        if (ctx->pc != 0x12D528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001233E8_0x1233e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D528u; }
        if (ctx->pc != 0x12D528u) { return; }
    }
    ctx->pc = 0x12D528u;
label_12d528:
    // 0x12d528: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d52c: 0xc04960a  jal         func_125828
    ctx->pc = 0x12D52Cu;
    SET_GPR_U32(ctx, 31, 0x12D534u);
    ctx->pc = 0x12D530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D52Cu;
            // 0x12d530: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D534u; }
        if (ctx->pc != 0x12D534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D534u; }
        if (ctx->pc != 0x12D534u) { return; }
    }
    ctx->pc = 0x12D534u;
label_12d534:
    // 0x12d534: 0x1000fdb0  b           . + 4 + (-0x250 << 2)
    ctx->pc = 0x12D534u;
    {
        const bool branch_taken_0x12d534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D534u;
            // 0x12d538: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d534) {
            ctx->pc = 0x12CBF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cbf8;
        }
    }
    ctx->pc = 0x12D53Cu;
label_12d53c:
    // 0x12d53c: 0x1000fd82  b           . + 4 + (-0x27E << 2)
    ctx->pc = 0x12D53Cu;
    {
        const bool branch_taken_0x12d53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D53Cu;
            // 0x12d540: 0xffa00018  sd          $zero, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d53c) {
            ctx->pc = 0x12CB48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cb48;
        }
    }
    ctx->pc = 0x12D544u;
label_12d544:
    // 0x12d544: 0x1000fd80  b           . + 4 + (-0x280 << 2)
    ctx->pc = 0x12D544u;
    {
        const bool branch_taken_0x12d544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D544u;
            // 0x12d548: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d544) {
            ctx->pc = 0x12CB48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cb48;
        }
    }
    ctx->pc = 0x12D54Cu;
label_12d54c:
    // 0x12d54c: 0x2a4f0011  slti        $t7, $s2, 0x11
    ctx->pc = 0x12d54cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12d550: 0x11e0fd27  beqz        $t7, . + 4 + (-0x2D9 << 2)
    ctx->pc = 0x12D550u;
    {
        const bool branch_taken_0x12d550 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D550u;
            // 0x12d554: 0x1178b8  dsll        $t7, $s1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d550) {
            ctx->pc = 0x12C9F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c9f0;
        }
    }
    ctx->pc = 0x12D558u;
    // 0x12d558: 0x1f1782d  daddu       $t7, $t7, $s1
    ctx->pc = 0x12d558u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 17));
    // 0x12d55c: 0xf7878  dsll        $t7, $t7, 1
    ctx->pc = 0x12d55cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 1);
    // 0x12d560: 0x1000fd23  b           . + 4 + (-0x2DD << 2)
    ctx->pc = 0x12D560u;
    {
        const bool branch_taken_0x12d560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D560u;
            // 0x12d564: 0x16f882d  daddu       $s1, $t3, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d560) {
            ctx->pc = 0x12C9F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c9f0;
        }
    }
    ctx->pc = 0x12D568u;
label_12d568:
    // 0x12d568: 0x28ef0011  slti        $t7, $a3, 0x11
    ctx->pc = 0x12d568u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12d56c: 0x11e0fd13  beqz        $t7, . + 4 + (-0x2ED << 2)
    ctx->pc = 0x12D56Cu;
    {
        const bool branch_taken_0x12d56c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D56Cu;
            // 0x12d570: 0x1178b8  dsll        $t7, $s1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d56c) {
            ctx->pc = 0x12C9BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c9bc;
        }
    }
    ctx->pc = 0x12D574u;
    // 0x12d574: 0x1f1782d  daddu       $t7, $t7, $s1
    ctx->pc = 0x12d574u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 17));
    // 0x12d578: 0x1000fd10  b           . + 4 + (-0x2F0 << 2)
    ctx->pc = 0x12D578u;
    {
        const bool branch_taken_0x12d578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D578u;
            // 0x12d57c: 0xf8878  dsll        $s1, $t7, 1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 15) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d578) {
            ctx->pc = 0x12C9BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c9bc;
        }
    }
    ctx->pc = 0x12D580u;
label_12d580:
    // 0x12d580: 0x248bffd0  addiu       $t3, $a0, -0x30
    ctx->pc = 0x12d580u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x12d584: 0x2d6f000a  sltiu       $t7, $t3, 0xA
    ctx->pc = 0x12d584u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12d588: 0x11e0fd21  beqz        $t7, . + 4 + (-0x2DF << 2)
    ctx->pc = 0x12D588u;
    {
        const bool branch_taken_0x12d588 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D588u;
            // 0x12d58c: 0x240f0065  addiu       $t7, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d588) {
            ctx->pc = 0x12CA10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ca10;
        }
    }
    ctx->pc = 0x12D590u;
    // 0x12d590: 0x1000fcfc  b           . + 4 + (-0x304 << 2)
    ctx->pc = 0x12D590u;
    {
        const bool branch_taken_0x12d590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d590) {
            ctx->pc = 0x12C984u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c984;
        }
    }
    ctx->pc = 0x12D598u;
label_12d598:
    // 0x12d598: 0x2a4f0010  slti        $t7, $s2, 0x10
    ctx->pc = 0x12d598u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x12d59c: 0x11e0fcd6  beqz        $t7, . + 4 + (-0x32A << 2)
    ctx->pc = 0x12D59Cu;
    {
        const bool branch_taken_0x12d59c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D59Cu;
            // 0x12d5a0: 0x1178b8  dsll        $t7, $s1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d59c) {
            ctx->pc = 0x12C8F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c8f8;
        }
    }
    ctx->pc = 0x12D5A4u;
    // 0x12d5a4: 0x1f1782d  daddu       $t7, $t7, $s1
    ctx->pc = 0x12d5a4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 17));
    // 0x12d5a8: 0xf7878  dsll        $t7, $t7, 1
    ctx->pc = 0x12d5a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 1);
    // 0x12d5ac: 0x8f782d  daddu       $t7, $a0, $t7
    ctx->pc = 0x12d5acu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 15));
    // 0x12d5b0: 0x1000fcd1  b           . + 4 + (-0x32F << 2)
    ctx->pc = 0x12D5B0u;
    {
        const bool branch_taken_0x12d5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D5B0u;
            // 0x12d5b4: 0x65f1ffd0  daddiu      $s1, $t7, -0x30 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 15) + (int64_t)(int32_t)4294967248);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5b0) {
            ctx->pc = 0x12C8F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c8f8;
        }
    }
    ctx->pc = 0x12D5B8u;
label_12d5b8:
    // 0x12d5b8: 0x1000fc7f  b           . + 4 + (-0x381 << 2)
    ctx->pc = 0x12D5B8u;
    {
        const bool branch_taken_0x12d5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D5B8u;
            // 0x12d5bc: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5b8) {
            ctx->pc = 0x12C7B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c7b8;
        }
    }
    ctx->pc = 0x12D5C0u;
    // 0x12d5c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d5c4: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x12d5c4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12d5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d5cc: 0x3c0e005d  lui         $t6, 0x5D
    ctx->pc = 0x12d5ccu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)93 << 16));
    // 0x12d5d0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x12d5d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5d4: 0x8dc41ad8  lw          $a0, 0x1AD8($t6)
    ctx->pc = 0x12d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 6872)));
    // 0x12d5d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d5dc: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x12d5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5e0: 0x804b1dc  j           func_12C770
    ctx->pc = 0x12D5E0u;
    ctx->pc = 0x12D5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D5E0u;
            // 0x12d5e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C770u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_12c770;
    ctx->pc = 0x12D5E8u;
    // 0x12d5e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d5ec: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x12d5ecu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5f0: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x12d5f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
    // 0x12d5f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12d5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d5f8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x12d5f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5fc: 0x8de41ad8  lw          $a0, 0x1AD8($t7)
    ctx->pc = 0x12d5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
    // 0x12d600: 0xc04b1dc  jal         func_12C770
    ctx->pc = 0x12D600u;
    SET_GPR_U32(ctx, 31, 0x12D608u);
    ctx->pc = 0x12D604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D600u;
            // 0x12d604: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C770u;
    goto label_12c770;
    ctx->pc = 0x12D608u;
label_12d608:
    // 0x12d608: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x12D608u;
    SET_GPR_U32(ctx, 31, 0x12D610u);
    ctx->pc = 0x12D60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D608u;
            // 0x12d60c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D610u; }
        if (ctx->pc != 0x12D610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D610u; }
        if (ctx->pc != 0x12D610u) { return; }
    }
    ctx->pc = 0x12D610u;
label_12d610:
    // 0x12d610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d614: 0x3e00008  jr          $ra
    ctx->pc = 0x12D614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D614u;
            // 0x12d618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12D61Cu;
    // 0x12d61c: 0x0  nop
    ctx->pc = 0x12d61cu;
    // NOP
}
