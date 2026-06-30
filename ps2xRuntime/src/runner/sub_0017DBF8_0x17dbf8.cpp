#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017DBF8
// Address: 0x17dbf8 - 0x17dcc0
void sub_0017DBF8_0x17dbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DBF8_0x17dbf8");
#endif

    switch (ctx->pc) {
        case 0x17dc40u: goto label_17dc40;
        case 0x17dc68u: goto label_17dc68;
        default: break;
    }

    ctx->pc = 0x17dbf8u;

    // 0x17dbf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17dbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17dbfc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17dbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17dc00: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x17dc00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17dc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17dc08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17dc08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17dc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17dc10: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17dc10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc14: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17dc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17dc18: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17dc18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc1c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x17dc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17dc20: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x17dc20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17dc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17dc28: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17dc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17dc2c: 0x1a800018  blez        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x17DC2Cu;
    {
        const bool branch_taken_0x17dc2c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x17DC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DC2Cu;
            // 0x17dc30: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc2c) {
            ctx->pc = 0x17DC90u;
            goto label_17dc90;
        }
    }
    ctx->pc = 0x17DC34u;
    // 0x17dc34: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17dc38: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x17dc38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc3c: 0x24556540  addiu       $s5, $v0, 0x6540
    ctx->pc = 0x17dc3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 25920));
label_17dc40:
    // 0x17dc40: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x17dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x17dc44: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x17dc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc48: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x17dc48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17dc4c: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x17dc4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17dc50: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17dc50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17dc54: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x17dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17dc58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17dc58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17dc5c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17dc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17dc60: 0xc05f5ac  jal         func_17D6B0
    ctx->pc = 0x17DC60u;
    SET_GPR_U32(ctx, 31, 0x17DC68u);
    ctx->pc = 0x17DC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DC60u;
            // 0x17dc64: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D6B0u;
    if (runtime->hasFunction(0x17D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x17D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC68u; }
        if (ctx->pc != 0x17DC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D6B0_0x17d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC68u; }
        if (ctx->pc != 0x17DC68u) { return; }
    }
    ctx->pc = 0x17DC68u;
label_17dc68:
    // 0x17dc68: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17DC68u;
    {
        const bool branch_taken_0x17dc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DC68u;
            // 0x17dc6c: 0x214182a  slt         $v1, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc68) {
            ctx->pc = 0x17DC88u;
            goto label_17dc88;
        }
    }
    ctx->pc = 0x17DC70u;
    // 0x17dc70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17dc74: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x17dc74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x17dc78: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x17dc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17dc7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17DC7Cu;
    {
        const bool branch_taken_0x17dc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DC7Cu;
            // 0x17dc80: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc7c) {
            ctx->pc = 0x17DC98u;
            goto label_17dc98;
        }
    }
    ctx->pc = 0x17DC84u;
    // 0x17dc84: 0x0  nop
    ctx->pc = 0x17dc84u;
    // NOP
label_17dc88:
    // 0x17dc88: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17DC88u;
    {
        const bool branch_taken_0x17dc88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DC88u;
            // 0x17dc8c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc88) {
            ctx->pc = 0x17DC40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17dc40;
        }
    }
    ctx->pc = 0x17DC90u;
label_17dc90:
    // 0x17dc90: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x17dc90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x17dc94: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x17dc94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_17dc98:
    // 0x17dc98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17dc98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dc9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17dc9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17dca0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17dca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dca4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17dca4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17dca8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17dca8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dcac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17dcacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17dcb0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17dcb0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17dcb4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x17dcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17dcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x17DCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DCB8u;
            // 0x17dcbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17DCC0u;
}
