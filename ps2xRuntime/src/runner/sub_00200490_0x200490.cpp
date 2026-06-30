#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200490
// Address: 0x200490 - 0x200550
void sub_00200490_0x200490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200490_0x200490");
#endif

    switch (ctx->pc) {
        case 0x2004e8u: goto label_2004e8;
        case 0x20050cu: goto label_20050c;
        default: break;
    }

    ctx->pc = 0x200490u;

label_200490:
    // 0x200490: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x200490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x200494: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x200494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x200498: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x200498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20049c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20049cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2004a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2004a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2004a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2004a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2004a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2004acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2004b0: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x2004b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2004b4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2004b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2004b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2004b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2004bc: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x2004bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x2004c0: 0x743021  addu        $a2, $v1, $s4
    ctx->pc = 0x2004c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2004c4: 0x8ca30110  lw          $v1, 0x110($a1)
    ctx->pc = 0x2004c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x2004c8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2004c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004cc: 0x8cc50110  lw          $a1, 0x110($a2)
    ctx->pc = 0x2004ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 272)));
    // 0x2004d0: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2004d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2004d4: 0xacc30110  sw          $v1, 0x110($a2)
    ctx->pc = 0x2004d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 272), GPR_U32(ctx, 3));
    // 0x2004d8: 0x8c831c38  lw          $v1, 0x1C38($a0)
    ctx->pc = 0x2004d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7224)));
    // 0x2004dc: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2004DCu;
    {
        const bool branch_taken_0x2004dc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2004E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2004DCu;
            // 0x2004e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004dc) {
            ctx->pc = 0x200528u;
            goto label_200528;
        }
    }
    ctx->pc = 0x2004E4u;
    // 0x2004e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2004e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2004e8:
    // 0x2004e8: 0x8e831c34  lw          $v1, 0x1C34($s4)
    ctx->pc = 0x2004e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 7220)));
    // 0x2004ec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2004ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2004f0: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x2004f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2004f4: 0x14d30006  bne         $a2, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2004F4u;
    {
        const bool branch_taken_0x2004f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 19));
        if (branch_taken_0x2004f4) {
            ctx->pc = 0x200510u;
            goto label_200510;
        }
    }
    ctx->pc = 0x2004FCu;
    // 0x2004fc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2004fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x200500: 0x26470001  addiu       $a3, $s2, 0x1
    ctx->pc = 0x200500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x200504: 0xc080124  jal         func_200490
    ctx->pc = 0x200504u;
    SET_GPR_U32(ctx, 31, 0x20050Cu);
    ctx->pc = 0x200508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200504u;
            // 0x200508: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200490u;
    goto label_200490;
    ctx->pc = 0x20050Cu;
label_20050c:
    // 0x20050c: 0x0  nop
    ctx->pc = 0x20050cu;
    // NOP
label_200510:
    // 0x200510: 0x8e831c38  lw          $v1, 0x1C38($s4)
    ctx->pc = 0x200510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 7224)));
    // 0x200514: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x200514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x200518: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x200518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20051c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x20051Cu;
    {
        const bool branch_taken_0x20051c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20051Cu;
            // 0x200520: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20051c) {
            ctx->pc = 0x2004E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2004e8;
        }
    }
    ctx->pc = 0x200524u;
    // 0x200524: 0x0  nop
    ctx->pc = 0x200524u;
    // NOP
label_200528:
    // 0x200528: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x200528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20052c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20052cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200530: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x200530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200534: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x200534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x200538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20053c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20053cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200540: 0x3e00008  jr          $ra
    ctx->pc = 0x200540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200540u;
            // 0x200544: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200548u;
    // 0x200548: 0x0  nop
    ctx->pc = 0x200548u;
    // NOP
    // 0x20054c: 0x0  nop
    ctx->pc = 0x20054cu;
    // NOP
}
