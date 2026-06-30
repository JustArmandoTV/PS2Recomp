#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE630
// Address: 0x1be630 - 0x1be6d0
void sub_001BE630_0x1be630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE630_0x1be630");
#endif

    switch (ctx->pc) {
        case 0x1be65cu: goto label_1be65c;
        default: break;
    }

    ctx->pc = 0x1be630u;

    // 0x1be630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be634: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1be634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1be638: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1be638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be63c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1be63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1be640: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1be640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be644: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be648: 0x2406009c  addiu       $a2, $zero, 0x9C
    ctx->pc = 0x1be648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x1be64c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be650: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1be650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1be654: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1BE654u;
    SET_GPR_U32(ctx, 31, 0x1BE65Cu);
    ctx->pc = 0x1BE658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE654u;
            // 0x1be658: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE65Cu; }
        if (ctx->pc != 0x1BE65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE65Cu; }
        if (ctx->pc != 0x1BE65Cu) { return; }
    }
    ctx->pc = 0x1BE65Cu;
label_1be65c:
    // 0x1be65c: 0x2623001f  addiu       $v1, $s1, 0x1F
    ctx->pc = 0x1be65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x1be660: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x1be660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1be664: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1be664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1be668: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1be668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be66c: 0x24650c00  addiu       $a1, $v1, 0xC00
    ctx->pc = 0x1be66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3072));
    // 0x1be670: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x1be670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x1be674: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x1be674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1be678: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1be678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1be67c: 0xae110050  sw          $s1, 0x50($s0)
    ctx->pc = 0x1be67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
    // 0x1be680: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x1be680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
    // 0x1be684: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x1be684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x1be688: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1be688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1be68c: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x1be68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    // 0x1be690: 0xae050044  sw          $a1, 0x44($s0)
    ctx->pc = 0x1be690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 5));
    // 0x1be694: 0xae060058  sw          $a2, 0x58($s0)
    ctx->pc = 0x1be694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 6));
    // 0x1be698: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1be698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1be69c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1be69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1be6a0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1be6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1be6a4: 0xae070028  sw          $a3, 0x28($s0)
    ctx->pc = 0x1be6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 7));
    // 0x1be6a8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1be6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1be6ac: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1be6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1be6b0: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x1be6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1be6b4: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1be6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1be6b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1be6b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be6bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be6bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be6c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1be6c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be6c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1be6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1be6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE6C8u;
            // 0x1be6cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE6D0u;
}
