#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F5EB0
// Address: 0x4f5eb0 - 0x4f5fc0
void sub_004F5EB0_0x4f5eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5EB0_0x4f5eb0");
#endif

    switch (ctx->pc) {
        case 0x4f5efcu: goto label_4f5efc;
        case 0x4f5f34u: goto label_4f5f34;
        case 0x4f5f4cu: goto label_4f5f4c;
        case 0x4f5f58u: goto label_4f5f58;
        default: break;
    }

    ctx->pc = 0x4f5eb0u;

    // 0x4f5eb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f5eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4f5eb4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4f5eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4f5eb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4f5eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4f5ebc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f5ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4f5ec0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f5ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4f5ec4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f5ec4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5ec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f5ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4f5ecc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4f5eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f5ed0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f5ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f5ed4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4f5ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x4f5ed8: 0x8c63095c  lw          $v1, 0x95C($v1)
    ctx->pc = 0x4f5ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2396)));
    // 0x4f5edc: 0x5064002f  beql        $v1, $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x4F5EDCu;
    {
        const bool branch_taken_0x4f5edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4f5edc) {
            ctx->pc = 0x4F5EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5EDCu;
            // 0x4f5ee0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F5F9Cu;
            goto label_4f5f9c;
        }
    }
    ctx->pc = 0x4F5EE4u;
    // 0x4f5ee4: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x4f5ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x4f5ee8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4f5ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x4f5eec: 0x2668000d  addiu       $t0, $s3, 0xD
    ctx->pc = 0x4f5eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 13));
    // 0x4f5ef0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4f5ef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5ef4: 0x24c60e80  addiu       $a2, $a2, 0xE80
    ctx->pc = 0x4f5ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3712));
    // 0x4f5ef8: 0x24a58ab0  addiu       $a1, $a1, -0x7550
    ctx->pc = 0x4f5ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937264));
label_4f5efc:
    // 0x4f5efc: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x4f5efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4f5f00: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4f5f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4f5f04: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x4f5f04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f5f08: 0x2ce20008  sltiu       $v0, $a3, 0x8
    ctx->pc = 0x4f5f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x4f5f0c: 0x80840e3f  lb          $a0, 0xE3F($a0)
    ctx->pc = 0x4f5f0cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3647)));
    // 0x4f5f10: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4f5f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x4f5f14: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x4f5f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4f5f18: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x4f5f18u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f5f1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4f5f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4f5f20: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x4f5f20u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4f5f24: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x4F5F24u;
    {
        const bool branch_taken_0x4f5f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F5F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5F24u;
            // 0x4f5f28: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5f24) {
            ctx->pc = 0x4F5EFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f5efc;
        }
    }
    ctx->pc = 0x4F5F2Cu;
    // 0x4f5f2c: 0xc13d740  jal         func_4F5D00
    ctx->pc = 0x4F5F2Cu;
    SET_GPR_U32(ctx, 31, 0x4F5F34u);
    ctx->pc = 0x4F5F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5F2Cu;
            // 0x4f5f30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F5D00u;
    if (runtime->hasFunction(0x4F5D00u)) {
        auto targetFn = runtime->lookupFunction(0x4F5D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5F34u; }
        if (ctx->pc != 0x4F5F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F5D00_0x4f5d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5F34u; }
        if (ctx->pc != 0x4F5F34u) { return; }
    }
    ctx->pc = 0x4F5F34u;
label_4f5f34:
    // 0x4f5f34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4f5f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x4f5f38: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x4f5f38u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
    // 0x4f5f3c: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x4f5f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x4f5f40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4f5f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5f44: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x4f5f44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
    // 0x4f5f48: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x4f5f48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4f5f4c:
    // 0x4f5f4c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4f5f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4f5f50: 0xc0ca6b4  jal         func_329AD0
    ctx->pc = 0x4F5F50u;
    SET_GPR_U32(ctx, 31, 0x4F5F58u);
    ctx->pc = 0x4F5F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5F50u;
            // 0x4f5f54: 0x8c440d78  lw          $a0, 0xD78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329AD0u;
    if (runtime->hasFunction(0x329AD0u)) {
        auto targetFn = runtime->lookupFunction(0x329AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5F58u; }
        if (ctx->pc != 0x4F5F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329AD0_0x329ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5F58u; }
        if (ctx->pc != 0x4F5F58u) { return; }
    }
    ctx->pc = 0x4F5F58u;
label_4f5f58:
    // 0x4f5f58: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x4f5f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4f5f5c: 0x3c01005b  lui         $at, 0x5B
    ctx->pc = 0x4f5f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)91 << 16));
    // 0x4f5f60: 0x34218d80  ori         $at, $at, 0x8D80
    ctx->pc = 0x4f5f60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36224);
    // 0x4f5f64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f5f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f5f68: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x4f5f68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x4f5f6c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F5F6Cu;
    {
        const bool branch_taken_0x4f5f6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F5F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5F6Cu;
            // 0x4f5f70: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5f6c) {
            ctx->pc = 0x4F5F80u;
            goto label_4f5f80;
        }
    }
    ctx->pc = 0x4F5F74u;
    // 0x4f5f74: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x4f5f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x4f5f78: 0x34638d7f  ori         $v1, $v1, 0x8D7F
    ctx->pc = 0x4f5f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36223);
    // 0x4f5f7c: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x4f5f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_4f5f80:
    // 0x4f5f80: 0x82030026  lb          $v1, 0x26($s0)
    ctx->pc = 0x4f5f80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x4f5f84: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4f5f84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4f5f88: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4f5f88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4f5f8c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x4f5f8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4f5f90: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4F5F90u;
    {
        const bool branch_taken_0x4f5f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F5F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5F90u;
            // 0x4f5f94: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5f90) {
            ctx->pc = 0x4F5F4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f5f4c;
        }
    }
    ctx->pc = 0x4F5F98u;
    // 0x4f5f98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f5f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4f5f9c:
    // 0x4f5f9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f5f9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f5fa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f5fa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f5fa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f5fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f5fa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f5fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5fac: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5FACu;
            // 0x4f5fb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F5FB4u;
    // 0x4f5fb4: 0x0  nop
    ctx->pc = 0x4f5fb4u;
    // NOP
    // 0x4f5fb8: 0x0  nop
    ctx->pc = 0x4f5fb8u;
    // NOP
    // 0x4f5fbc: 0x0  nop
    ctx->pc = 0x4f5fbcu;
    // NOP
}
