#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AA3E0
// Address: 0x1aa3e0 - 0x1aa490
void sub_001AA3E0_0x1aa3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA3E0_0x1aa3e0");
#endif

    switch (ctx->pc) {
        case 0x1aa420u: goto label_1aa420;
        case 0x1aa434u: goto label_1aa434;
        default: break;
    }

    ctx->pc = 0x1aa3e0u;

    // 0x1aa3e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1aa3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1aa3e4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1aa3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1aa3e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aa3e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa3ec: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1aa3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1aa3f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1aa3f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa3f4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1aa3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1aa3f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1aa3f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa3fc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1aa3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1aa400: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1aa400u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa404: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1aa404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1aa408: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1aa408u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa40c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1aa40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1aa410: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1aa410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1aa414: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1aa414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1aa418: 0x8c931fec  lw          $s3, 0x1FEC($a0)
    ctx->pc = 0x1aa418u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8172)));
    // 0x1aa41c: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x1aa41cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1aa420:
    // 0x1aa420: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1aa420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa424: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aa428: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1aa428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa42c: 0xc064994  jal         func_192650
    ctx->pc = 0x1AA42Cu;
    SET_GPR_U32(ctx, 31, 0x1AA434u);
    ctx->pc = 0x1AA430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA42Cu;
            // 0x1aa430: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192650u;
    if (runtime->hasFunction(0x192650u)) {
        auto targetFn = runtime->lookupFunction(0x192650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA434u; }
        if (ctx->pc != 0x1AA434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192650_0x192650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA434u; }
        if (ctx->pc != 0x1AA434u) { return; }
    }
    ctx->pc = 0x1AA434u;
label_1aa434:
    // 0x1aa434: 0x2a060003  slti        $a2, $s0, 0x3
    ctx->pc = 0x1aa434u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1aa438: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1aa438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa43c: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x1aa43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1aa440: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x1aa440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1aa444: 0xb1182a  slt         $v1, $a1, $s1
    ctx->pc = 0x1aa444u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1aa448: 0x82900a  movz        $s2, $a0, $v0
    ctx->pc = 0x1aa448u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
    // 0x1aa44c: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x1AA44Cu;
    {
        const bool branch_taken_0x1aa44c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA44Cu;
            // 0x1aa450: 0xa3880a  movz        $s1, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa44c) {
            ctx->pc = 0x1AA420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aa420;
        }
    }
    ctx->pc = 0x1AA454u;
    // 0x1aa454: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x1aa454u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x1aa458: 0xae720008  sw          $s2, 0x8($s3)
    ctx->pc = 0x1aa458u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 18));
    // 0x1aa45c: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x1aa45cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
    // 0x1aa460: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1aa460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa464: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1aa464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1aa468: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1aa468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa46c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1aa46cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1aa470: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1aa470u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aa474: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1aa474u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aa478: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1aa478u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aa47c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1aa47cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1aa480: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1aa480u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aa484: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1aa484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aa488: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA488u;
            // 0x1aa48c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA490u;
}
