#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00221E70
// Address: 0x221e70 - 0x221f30
void sub_00221E70_0x221e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221E70_0x221e70");
#endif

    switch (ctx->pc) {
        case 0x221ea8u: goto label_221ea8;
        case 0x221eecu: goto label_221eec;
        case 0x221f0cu: goto label_221f0c;
        default: break;
    }

    ctx->pc = 0x221e70u;

    // 0x221e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x221e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x221e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x221e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x221e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x221e7c: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x221E7Cu;
    {
        const bool branch_taken_0x221e7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x221E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221E7Cu;
            // 0x221e80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e7c) {
            ctx->pc = 0x221E94u;
            goto label_221e94;
        }
    }
    ctx->pc = 0x221E84u;
    // 0x221e84: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x221e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x221e88: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x221e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x221e8c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x221e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x221e90: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x221e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
label_221e94:
    // 0x221e94: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x221e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x221e98: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x221e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x221e9c: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x221e9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x221ea0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x221EA0u;
    {
        const bool branch_taken_0x221ea0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x221ea0) {
            ctx->pc = 0x221EC8u;
            goto label_221ec8;
        }
    }
    ctx->pc = 0x221EA8u;
label_221ea8:
    // 0x221ea8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x221ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x221eac: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x221eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x221eb0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x221eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x221eb4: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x221eb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x221eb8: 0x0  nop
    ctx->pc = 0x221eb8u;
    // NOP
    // 0x221ebc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x221EBCu;
    {
        const bool branch_taken_0x221ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x221ebc) {
            ctx->pc = 0x221EA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221ea8;
        }
    }
    ctx->pc = 0x221EC4u;
    // 0x221ec4: 0x0  nop
    ctx->pc = 0x221ec4u;
    // NOP
label_221ec8:
    // 0x221ec8: 0xae04004c  sw          $a0, 0x4C($s0)
    ctx->pc = 0x221ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 4));
    // 0x221ecc: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x221eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x221ed0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x221ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x221ed4: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x221ED4u;
    {
        const bool branch_taken_0x221ed4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x221ed4) {
            ctx->pc = 0x221ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221ED4u;
            // 0x221ed8: 0x8e05003c  lw          $a1, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x221EF0u;
            goto label_221ef0;
        }
    }
    ctx->pc = 0x221EDCu;
    // 0x221edc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x221edcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x221ee0: 0x8e070040  lw          $a3, 0x40($s0)
    ctx->pc = 0x221ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x221ee4: 0xc0854ea  jal         func_2153A8
    ctx->pc = 0x221EE4u;
    SET_GPR_U32(ctx, 31, 0x221EECu);
    ctx->pc = 0x221EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221EE4u;
            // 0x221ee8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2153A8u;
    if (runtime->hasFunction(0x2153A8u)) {
        auto targetFn = runtime->lookupFunction(0x2153A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221EECu; }
        if (ctx->pc != 0x221EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002153A8_0x2153a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221EECu; }
        if (ctx->pc != 0x221EECu) { return; }
    }
    ctx->pc = 0x221EECu;
label_221eec:
    // 0x221eec: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x221eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_221ef0:
    // 0x221ef0: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x221ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x221ef4: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x221EF4u;
    {
        const bool branch_taken_0x221ef4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x221ef4) {
            ctx->pc = 0x221EF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221EF4u;
            // 0x221ef8: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x221F10u;
            goto label_221f10;
        }
    }
    ctx->pc = 0x221EFCu;
    // 0x221efc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x221efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x221f00: 0x8e070040  lw          $a3, 0x40($s0)
    ctx->pc = 0x221f00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x221f04: 0xc0854ea  jal         func_2153A8
    ctx->pc = 0x221F04u;
    SET_GPR_U32(ctx, 31, 0x221F0Cu);
    ctx->pc = 0x221F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221F04u;
            // 0x221f08: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2153A8u;
    if (runtime->hasFunction(0x2153A8u)) {
        auto targetFn = runtime->lookupFunction(0x2153A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F0Cu; }
        if (ctx->pc != 0x221F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002153A8_0x2153a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F0Cu; }
        if (ctx->pc != 0x221F0Cu) { return; }
    }
    ctx->pc = 0x221F0Cu;
label_221f0c:
    // 0x221f0c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x221f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_221f10:
    // 0x221f10: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x221f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x221f14: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x221f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x221f18: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x221f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x221f1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x221f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221f20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x221f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221f24: 0x3e00008  jr          $ra
    ctx->pc = 0x221F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221F24u;
            // 0x221f28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221F2Cu;
    // 0x221f2c: 0x0  nop
    ctx->pc = 0x221f2cu;
    // NOP
}
