#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200550
// Address: 0x200550 - 0x200680
void sub_00200550_0x200550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200550_0x200550");
#endif

    switch (ctx->pc) {
        case 0x200580u: goto label_200580;
        case 0x2005b8u: goto label_2005b8;
        case 0x200624u: goto label_200624;
        case 0x200648u: goto label_200648;
        default: break;
    }

    ctx->pc = 0x200550u;

    // 0x200550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x200550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x200554: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x200554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200558: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x200558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20055c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20055cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x200560: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x200560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x200564: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x200564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x200568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20056c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20056cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200570: 0x8c821c38  lw          $v0, 0x1C38($a0)
    ctx->pc = 0x200570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7224)));
    // 0x200574: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x200574u;
    {
        const bool branch_taken_0x200574 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x200578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200574u;
            // 0x200578: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200574) {
            ctx->pc = 0x200610u;
            goto label_200610;
        }
    }
    ctx->pc = 0x20057Cu;
    // 0x20057c: 0x8e421c34  lw          $v0, 0x1C34($s2)
    ctx->pc = 0x20057cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7220)));
label_200580:
    // 0x200580: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x200580u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x200584: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x200584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x200588: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x200588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20058c: 0x1451001a  bne         $v0, $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x20058Cu;
    {
        const bool branch_taken_0x20058c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x20058c) {
            ctx->pc = 0x2005F8u;
            goto label_2005f8;
        }
    }
    ctx->pc = 0x200594u;
    // 0x200594: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x200594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x200598: 0x14500017  bne         $v0, $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x200598u;
    {
        const bool branch_taken_0x200598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x200598) {
            ctx->pc = 0x2005F8u;
            goto label_2005f8;
        }
    }
    ctx->pc = 0x2005A0u;
    // 0x2005a0: 0x8e421c38  lw          $v0, 0x1C38($s2)
    ctx->pc = 0x2005a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7224)));
    // 0x2005a4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2005a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2005a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2005a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2005ac: 0xe2082a  slt         $at, $a3, $v0
    ctx->pc = 0x2005acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2005b0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2005B0u;
    {
        const bool branch_taken_0x2005b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2005B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2005B0u;
            // 0x2005b4: 0xae421c38  sw          $v0, 0x1C38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005b0) {
            ctx->pc = 0x2005F0u;
            goto label_2005f0;
        }
    }
    ctx->pc = 0x2005B8u;
label_2005b8:
    // 0x2005b8: 0x8e431c34  lw          $v1, 0x1C34($s2)
    ctx->pc = 0x2005b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7220)));
    // 0x2005bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2005bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2005c0: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2005c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2005c4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2005c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2005c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2005c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2005cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2005ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2005d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2005d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2005d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2005d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2005d8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2005d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2005dc: 0x8e421c38  lw          $v0, 0x1C38($s2)
    ctx->pc = 0x2005dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7224)));
    // 0x2005e0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2005e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2005e4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2005E4u;
    {
        const bool branch_taken_0x2005e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2005E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2005E4u;
            // 0x2005e8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005e4) {
            ctx->pc = 0x2005B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2005b8;
        }
    }
    ctx->pc = 0x2005ECu;
    // 0x2005ec: 0x0  nop
    ctx->pc = 0x2005ecu;
    // NOP
label_2005f0:
    // 0x2005f0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2005f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2005f4: 0x0  nop
    ctx->pc = 0x2005f4u;
    // NOP
label_2005f8:
    // 0x2005f8: 0x8e421c38  lw          $v0, 0x1C38($s2)
    ctx->pc = 0x2005f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7224)));
    // 0x2005fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2005fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x200600: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x200600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x200604: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x200604u;
    {
        const bool branch_taken_0x200604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200604) {
            ctx->pc = 0x200608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x200604u;
            // 0x200608: 0x8e421c34  lw          $v0, 0x1C34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x200580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_200580;
        }
    }
    ctx->pc = 0x20060Cu;
    // 0x20060c: 0x0  nop
    ctx->pc = 0x20060cu;
    // NOP
label_200610:
    // 0x200610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200614: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x200614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200618: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x200618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20061c: 0xc080124  jal         func_200490
    ctx->pc = 0x20061Cu;
    SET_GPR_U32(ctx, 31, 0x200624u);
    ctx->pc = 0x200620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20061Cu;
            // 0x200620: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200490u;
    if (runtime->hasFunction(0x200490u)) {
        auto targetFn = runtime->lookupFunction(0x200490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200624u; }
        if (ctx->pc != 0x200624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200490_0x200490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200624u; }
        if (ctx->pc != 0x200624u) { return; }
    }
    ctx->pc = 0x200624u;
label_200624:
    // 0x200624: 0x8e431c3c  lw          $v1, 0x1C3C($s2)
    ctx->pc = 0x200624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7228)));
    // 0x200628: 0x8e441c38  lw          $a0, 0x1C38($s2)
    ctx->pc = 0x200628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7224)));
    // 0x20062c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x20062cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x200630: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x200630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x200634: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x200634u;
    {
        const bool branch_taken_0x200634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x200634) {
            ctx->pc = 0x200638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x200634u;
            // 0x200638: 0x8e441c38  lw          $a0, 0x1C38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20064Cu;
            goto label_20064c;
        }
    }
    ctx->pc = 0x20063Cu;
    // 0x20063c: 0x26441c34  addiu       $a0, $s2, 0x1C34
    ctx->pc = 0x20063cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7220));
    // 0x200640: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x200640u;
    SET_GPR_U32(ctx, 31, 0x200648u);
    ctx->pc = 0x200644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200640u;
            // 0x200644: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200648u; }
        if (ctx->pc != 0x200648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200648u; }
        if (ctx->pc != 0x200648u) { return; }
    }
    ctx->pc = 0x200648u;
label_200648:
    // 0x200648: 0x8e441c38  lw          $a0, 0x1C38($s2)
    ctx->pc = 0x200648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7224)));
label_20064c:
    // 0x20064c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x20064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x200650: 0xae431c38  sw          $v1, 0x1C38($s2)
    ctx->pc = 0x200650u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7224), GPR_U32(ctx, 3));
    // 0x200654: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x200654u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x200658: 0x8e431c34  lw          $v1, 0x1C34($s2)
    ctx->pc = 0x200658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7220)));
    // 0x20065c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20065cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200660: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x200660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x200664: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x200664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x200668: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x200668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20066c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20066cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200670: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x200670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x200674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200678: 0x3e00008  jr          $ra
    ctx->pc = 0x200678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20067Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200678u;
            // 0x20067c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200680u;
}
