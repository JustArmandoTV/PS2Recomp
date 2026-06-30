#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013F5C0
// Address: 0x13f5c0 - 0x13f690
void sub_0013F5C0_0x13f5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F5C0_0x13f5c0");
#endif

    switch (ctx->pc) {
        case 0x13f5ecu: goto label_13f5ec;
        case 0x13f624u: goto label_13f624;
        case 0x13f670u: goto label_13f670;
        default: break;
    }

    ctx->pc = 0x13f5c0u;

    // 0x13f5c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13f5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13f5c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13f5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13f5c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13f5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13f5cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13f5d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13f5d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f5d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13f5d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13f5d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f5dc: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x13f5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x13f5e0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13f5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f5e4: 0xc056ce0  jal         func_15B380
    ctx->pc = 0x13F5E4u;
    SET_GPR_U32(ctx, 31, 0x13F5ECu);
    ctx->pc = 0x13F5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F5E4u;
            // 0x13f5e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B380u;
    if (runtime->hasFunction(0x15B380u)) {
        auto targetFn = runtime->lookupFunction(0x15B380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F5ECu; }
        if (ctx->pc != 0x13F5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B380_0x15b380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F5ECu; }
        if (ctx->pc != 0x13F5ECu) { return; }
    }
    ctx->pc = 0x13F5ECu;
label_13f5ec:
    // 0x13f5ec: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x13f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x13f5f0: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x13f5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x13f5f4: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x13f5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x13f5f8: 0x102480  sll         $a0, $s0, 18
    ctx->pc = 0x13f5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 18));
    // 0x13f5fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13f600: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x13f600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13f604: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x13f604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x13f608: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13f608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f60c: 0x34630180  ori         $v1, $v1, 0x180
    ctx->pc = 0x13f60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)384);
    // 0x13f610: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x13f610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13f614: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x13f614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x13f618: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x13f618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x13f61c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13F61Cu;
    {
        const bool branch_taken_0x13f61c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F61Cu;
            // 0x13f620: 0xac450014  sw          $a1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f61c) {
            ctx->pc = 0x13F668u;
            goto label_13f668;
        }
    }
    ctx->pc = 0x13F624u;
label_13f624:
    // 0x13f624: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13f624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13f628: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13f628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13f62c: 0xd0102b  sltu        $v0, $a2, $s0
    ctx->pc = 0x13f62cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x13f630: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x13f630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x13f634: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x13f634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x13f638: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x13f638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x13f63c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x13f63cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f640: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x13f640u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x13f644: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x13f644u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13f648: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x13f648u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x13f64c: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x13f64cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x13f650: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x13f650u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
    // 0x13f654: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x13f654u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x13f658: 0x7ca30030  sq          $v1, 0x30($a1)
    ctx->pc = 0x13f658u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
    // 0x13f65c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x13F65Cu;
    {
        const bool branch_taken_0x13f65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F65Cu;
            // 0x13f660: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f65c) {
            ctx->pc = 0x13F624u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13f624;
        }
    }
    ctx->pc = 0x13F664u;
    // 0x13f664: 0x0  nop
    ctx->pc = 0x13f664u;
    // NOP
label_13f668:
    // 0x13f668: 0xc056d60  jal         func_15B580
    ctx->pc = 0x13F668u;
    SET_GPR_U32(ctx, 31, 0x13F670u);
    ctx->pc = 0x13F66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F668u;
            // 0x13f66c: 0x8f848418  lw          $a0, -0x7BE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B580u;
    if (runtime->hasFunction(0x15B580u)) {
        auto targetFn = runtime->lookupFunction(0x15B580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F670u; }
        if (ctx->pc != 0x13F670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B580_0x15b580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F670u; }
        if (ctx->pc != 0x13F670u) { return; }
    }
    ctx->pc = 0x13F670u;
label_13f670:
    // 0x13f670: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13f670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f674: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13f674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f67c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f67cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f680: 0x3e00008  jr          $ra
    ctx->pc = 0x13F680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F680u;
            // 0x13f684: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F688u;
    // 0x13f688: 0x0  nop
    ctx->pc = 0x13f688u;
    // NOP
    // 0x13f68c: 0x0  nop
    ctx->pc = 0x13f68cu;
    // NOP
}
