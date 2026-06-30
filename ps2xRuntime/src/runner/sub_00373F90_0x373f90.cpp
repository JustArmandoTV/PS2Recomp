#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00373F90
// Address: 0x373f90 - 0x374030
void sub_00373F90_0x373f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373F90_0x373f90");
#endif

    switch (ctx->pc) {
        case 0x373fd4u: goto label_373fd4;
        case 0x374008u: goto label_374008;
        default: break;
    }

    ctx->pc = 0x373f90u;

    // 0x373f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373f94: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x373F94u;
    {
        const bool branch_taken_0x373f94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x373F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373F94u;
            // 0x373f98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373f94) {
            ctx->pc = 0x373FC4u;
            goto label_373fc4;
        }
    }
    ctx->pc = 0x373F9Cu;
    // 0x373f9c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x373f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x373fa0: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x373fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x373fa4: 0x8c666058  lw          $a2, 0x6058($v1)
    ctx->pc = 0x373fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24664)));
    // 0x373fa8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x373fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x373fac: 0x90c5000c  lbu         $a1, 0xC($a2)
    ctx->pc = 0x373facu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x373fb0: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x373fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x373fb4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x373fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x373fb8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x373fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x373fbc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x373FBCu;
    {
        const bool branch_taken_0x373fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373FBCu;
            // 0x373fc0: 0xa0c3000c  sb          $v1, 0xC($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373fbc) {
            ctx->pc = 0x373FD4u;
            goto label_373fd4;
        }
    }
    ctx->pc = 0x373FC4u;
label_373fc4:
    // 0x373fc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x373fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x373fc8: 0x8c446058  lw          $a0, 0x6058($v0)
    ctx->pc = 0x373fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24664)));
    // 0x373fcc: 0xc04a508  jal         func_129420
    ctx->pc = 0x373FCCu;
    SET_GPR_U32(ctx, 31, 0x373FD4u);
    ctx->pc = 0x373FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373FCCu;
            // 0x373fd0: 0x3406fd40  ori         $a2, $zero, 0xFD40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373FD4u; }
        if (ctx->pc != 0x373FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373FD4u; }
        if (ctx->pc != 0x373FD4u) { return; }
    }
    ctx->pc = 0x373FD4u;
label_373fd4:
    // 0x373fd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x373FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373FD8u;
            // 0x373fdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x373FE0u;
    // 0x373fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x373fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x373fe4: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x373fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
    // 0x373fe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x373fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x373fec: 0x3405fd3c  ori         $a1, $zero, 0xFD3C
    ctx->pc = 0x373fecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64828);
    // 0x373ff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x373ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x373ff4: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x373ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x373ff8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ffc: 0x24e77790  addiu       $a3, $a3, 0x7790
    ctx->pc = 0x373ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30608));
    // 0x374000: 0xc155a20  jal         func_556880
    ctx->pc = 0x374000u;
    SET_GPR_U32(ctx, 31, 0x374008u);
    ctx->pc = 0x374004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374000u;
            // 0x374004: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x556880u;
    if (runtime->hasFunction(0x556880u)) {
        auto targetFn = runtime->lookupFunction(0x556880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374008u; }
        if (ctx->pc != 0x374008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00556880_0x556880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374008u; }
        if (ctx->pc != 0x374008u) { return; }
    }
    ctx->pc = 0x374008u;
label_374008:
    // 0x374008: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x374008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37400c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x37400cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x374010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x374010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x374014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374018: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x374018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x37401c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x37401cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x374020: 0x3e00008  jr          $ra
    ctx->pc = 0x374020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374020u;
            // 0x374024: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374028u;
    // 0x374028: 0x0  nop
    ctx->pc = 0x374028u;
    // NOP
    // 0x37402c: 0x0  nop
    ctx->pc = 0x37402cu;
    // NOP
}
