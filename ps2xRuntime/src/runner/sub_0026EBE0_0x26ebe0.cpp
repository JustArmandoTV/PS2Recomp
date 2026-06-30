#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026EBE0
// Address: 0x26ebe0 - 0x26f0f0
void sub_0026EBE0_0x26ebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EBE0_0x26ebe0");
#endif

    switch (ctx->pc) {
        case 0x26eca0u: goto label_26eca0;
        case 0x26ece8u: goto label_26ece8;
        case 0x26ed2cu: goto label_26ed2c;
        case 0x26ed78u: goto label_26ed78;
        case 0x26edbcu: goto label_26edbc;
        case 0x26ee04u: goto label_26ee04;
        case 0x26ee50u: goto label_26ee50;
        case 0x26ee78u: goto label_26ee78;
        case 0x26ee8cu: goto label_26ee8c;
        case 0x26eed4u: goto label_26eed4;
        case 0x26ef1cu: goto label_26ef1c;
        case 0x26ef68u: goto label_26ef68;
        case 0x26ef84u: goto label_26ef84;
        case 0x26ef9cu: goto label_26ef9c;
        case 0x26efe4u: goto label_26efe4;
        case 0x26f02cu: goto label_26f02c;
        case 0x26f074u: goto label_26f074;
        case 0x26f0c0u: goto label_26f0c0;
        default: break;
    }

    ctx->pc = 0x26ebe0u;

    // 0x26ebe0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x26ebe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x26ebe4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x26ebe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x26ebe8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26ebe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x26ebec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x26ebecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x26ebf0: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x26ebf0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebf4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26ebf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26ebf8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x26ebf8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebfc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26ebfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26ec00: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x26ec00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26ec04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26ec08: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x26ec08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26ec0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26ec10: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x26ec10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ec14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ec18: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x26ec18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26ec1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26ec20: 0x2a610003  slti        $at, $s3, 0x3
    ctx->pc = 0x26ec20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26ec24: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x26ec24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26ec28: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x26ec28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ec2c: 0x102000d0  beqz        $at, . + 4 + (0xD0 << 2)
    ctx->pc = 0x26EC2Cu;
    {
        const bool branch_taken_0x26ec2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EC2Cu;
            // 0x26ec30: 0xd28823  subu        $s1, $a2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec2c) {
            ctx->pc = 0x26EF70u;
            goto label_26ef70;
        }
    }
    ctx->pc = 0x26EC34u;
    // 0x26ec34: 0xd78023  subu        $s0, $a2, $s7
    ctx->pc = 0x26ec34u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x26ec38: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EC38u;
    {
        const bool branch_taken_0x26ec38 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x26EC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EC38u;
            // 0x26ec3c: 0x2a2100f9  slti        $at, $s1, 0xF9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)249) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec38) {
            ctx->pc = 0x26EC48u;
            goto label_26ec48;
        }
    }
    ctx->pc = 0x26EC40u;
    // 0x26ec40: 0x14200085  bnez        $at, . + 4 + (0x85 << 2)
    ctx->pc = 0x26EC40u;
    {
        const bool branch_taken_0x26ec40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ec40) {
            ctx->pc = 0x26EE58u;
            goto label_26ee58;
        }
    }
    ctx->pc = 0x26EC48u;
label_26ec48:
    // 0x26ec48: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x26ec48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x26ec4c: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x26ec4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x26ec50: 0x10200081  beqz        $at, . + 4 + (0x81 << 2)
    ctx->pc = 0x26EC50u;
    {
        const bool branch_taken_0x26ec50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EC50u;
            // 0x26ec54: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec50) {
            ctx->pc = 0x26EE58u;
            goto label_26ee58;
        }
    }
    ctx->pc = 0x26EC58u;
    // 0x26ec58: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x26ec58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x26ec5c: 0x1020007e  beqz        $at, . + 4 + (0x7E << 2)
    ctx->pc = 0x26EC5Cu;
    {
        const bool branch_taken_0x26ec5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ec5c) {
            ctx->pc = 0x26EE58u;
            goto label_26ee58;
        }
    }
    ctx->pc = 0x26EC64u;
    // 0x26ec64: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26ec68: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x26ec68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26ec6c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x26ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x26ec70: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26ec74: 0xa071ffff  sb          $s1, -0x1($v1)
    ctx->pc = 0x26ec74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x26ec78: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ec7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26ec80: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26ec80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26ec84: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26ec84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ec88: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26ec8c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26ec8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26ec90: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EC90u;
    {
        const bool branch_taken_0x26ec90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ec90) {
            ctx->pc = 0x26ECA0u;
            goto label_26eca0;
        }
    }
    ctx->pc = 0x26EC98u;
    // 0x26ec98: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26EC98u;
    SET_GPR_U32(ctx, 31, 0x26ECA0u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ECA0u; }
        if (ctx->pc != 0x26ECA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ECA0u; }
        if (ctx->pc != 0x26ECA0u) { return; }
    }
    ctx->pc = 0x26ECA0u;
label_26eca0:
    // 0x26eca0: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x26eca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26eca4: 0x113a03  sra         $a3, $s1, 8
    ctx->pc = 0x26eca4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 17), 8));
    // 0x26eca8: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x26eca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26ecac: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26ecacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ecb0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26ecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26ecb4: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26ecb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26ecb8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26ecbc: 0xa067ffff  sb          $a3, -0x1($v1)
    ctx->pc = 0x26ecbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 7));
    // 0x26ecc0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ecc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26ecc8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26eccc: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26ecccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ecd0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26ecd4: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26ecd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26ecd8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26ECD8u;
    {
        const bool branch_taken_0x26ecd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ecd8) {
            ctx->pc = 0x26ECE8u;
            goto label_26ece8;
        }
    }
    ctx->pc = 0x26ECE0u;
    // 0x26ece0: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26ECE0u;
    SET_GPR_U32(ctx, 31, 0x26ECE8u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ECE8u; }
        if (ctx->pc != 0x26ECE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ECE8u; }
        if (ctx->pc != 0x26ECE8u) { return; }
    }
    ctx->pc = 0x26ECE8u;
label_26ece8:
    // 0x26ece8: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x26ece8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26ecec: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x26ececu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26ecf0: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26ecf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ecf4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26ecf8: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26ecf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26ecfc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26ed00: 0xa070ffff  sb          $s0, -0x1($v1)
    ctx->pc = 0x26ed00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 16));
    // 0x26ed04: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26ed04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ed08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26ed0c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26ed10: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26ed10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ed14: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26ed18: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26ed18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26ed1c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26ED1Cu;
    {
        const bool branch_taken_0x26ed1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ed1c) {
            ctx->pc = 0x26ED30u;
            goto label_26ed30;
        }
    }
    ctx->pc = 0x26ED24u;
    // 0x26ed24: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26ED24u;
    SET_GPR_U32(ctx, 31, 0x26ED2Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ED2Cu; }
        if (ctx->pc != 0x26ED2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ED2Cu; }
        if (ctx->pc != 0x26ED2Cu) { return; }
    }
    ctx->pc = 0x26ED2Cu;
label_26ed2c:
    // 0x26ed2c: 0x0  nop
    ctx->pc = 0x26ed2cu;
    // NOP
label_26ed30:
    // 0x26ed30: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x26ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26ed34: 0x103a03  sra         $a3, $s0, 8
    ctx->pc = 0x26ed34u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 8));
    // 0x26ed38: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x26ed38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26ed3c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26ed3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ed40: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26ed40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26ed44: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26ed44u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26ed48: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26ed4c: 0xa067ffff  sb          $a3, -0x1($v1)
    ctx->pc = 0x26ed4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 7));
    // 0x26ed50: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ed54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26ed54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26ed58: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26ed58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26ed5c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26ed5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ed60: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26ed60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26ed64: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26ed64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26ed68: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26ED68u;
    {
        const bool branch_taken_0x26ed68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ed68) {
            ctx->pc = 0x26ED78u;
            goto label_26ed78;
        }
    }
    ctx->pc = 0x26ED70u;
    // 0x26ed70: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26ED70u;
    SET_GPR_U32(ctx, 31, 0x26ED78u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ED78u; }
        if (ctx->pc != 0x26ED78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ED78u; }
        if (ctx->pc != 0x26ED78u) { return; }
    }
    ctx->pc = 0x26ED78u;
label_26ed78:
    // 0x26ed78: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x26ed78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26ed7c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x26ed7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26ed80: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26ed80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ed84: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26ed84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26ed88: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26ed88u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26ed8c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26ed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26ed90: 0xa075ffff  sb          $s5, -0x1($v1)
    ctx->pc = 0x26ed90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 21));
    // 0x26ed94: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26ed94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ed98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26ed98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26ed9c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26ed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26eda0: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26eda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26eda4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26eda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26eda8: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26eda8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26edac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EDACu;
    {
        const bool branch_taken_0x26edac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26edac) {
            ctx->pc = 0x26EDC0u;
            goto label_26edc0;
        }
    }
    ctx->pc = 0x26EDB4u;
    // 0x26edb4: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26EDB4u;
    SET_GPR_U32(ctx, 31, 0x26EDBCu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EDBCu; }
        if (ctx->pc != 0x26EDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EDBCu; }
        if (ctx->pc != 0x26EDBCu) { return; }
    }
    ctx->pc = 0x26EDBCu;
label_26edbc:
    // 0x26edbc: 0x0  nop
    ctx->pc = 0x26edbcu;
    // NOP
label_26edc0:
    // 0x26edc0: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x26edc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26edc4: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x26edc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26edc8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26edc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26edcc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26edccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26edd0: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26edd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26edd4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26edd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26edd8: 0xa074ffff  sb          $s4, -0x1($v1)
    ctx->pc = 0x26edd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 20));
    // 0x26eddc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26eddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ede0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26ede4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26ede4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26ede8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26ede8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26edec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26edecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26edf0: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26edf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26edf4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EDF4u;
    {
        const bool branch_taken_0x26edf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26edf4) {
            ctx->pc = 0x26EE08u;
            goto label_26ee08;
        }
    }
    ctx->pc = 0x26EDFCu;
    // 0x26edfc: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26EDFCu;
    SET_GPR_U32(ctx, 31, 0x26EE04u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EE04u; }
        if (ctx->pc != 0x26EE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EE04u; }
        if (ctx->pc != 0x26EE04u) { return; }
    }
    ctx->pc = 0x26EE04u;
label_26ee04:
    // 0x26ee04: 0x0  nop
    ctx->pc = 0x26ee04u;
    // NOP
label_26ee08:
    // 0x26ee08: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x26ee08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26ee0c: 0x26670023  addiu       $a3, $s3, 0x23
    ctx->pc = 0x26ee0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 35));
    // 0x26ee10: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x26ee10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26ee14: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26ee14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ee18: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26ee18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26ee1c: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26ee1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26ee20: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26ee20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26ee24: 0xa067ffff  sb          $a3, -0x1($v1)
    ctx->pc = 0x26ee24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 7));
    // 0x26ee28: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26ee28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ee2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26ee30: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26ee30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26ee34: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26ee34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ee38: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26ee3c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26ee3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26ee40: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EE40u;
    {
        const bool branch_taken_0x26ee40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ee40) {
            ctx->pc = 0x26EE50u;
            goto label_26ee50;
        }
    }
    ctx->pc = 0x26EE48u;
    // 0x26ee48: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26EE48u;
    SET_GPR_U32(ctx, 31, 0x26EE50u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EE50u; }
        if (ctx->pc != 0x26EE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EE50u; }
        if (ctx->pc != 0x26EE50u) { return; }
    }
    ctx->pc = 0x26EE50u;
label_26ee50:
    // 0x26ee50: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x26EE50u;
    {
        const bool branch_taken_0x26ee50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ee50) {
            ctx->pc = 0x26F0C0u;
            goto label_26f0c0;
        }
    }
    ctx->pc = 0x26EE58u;
label_26ee58:
    // 0x26ee58: 0x2951823  subu        $v1, $s4, $s5
    ctx->pc = 0x26ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x26ee5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ee60: 0x14620043  bne         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x26EE60u;
    {
        const bool branch_taken_0x26ee60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26EE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EE60u;
            // 0x26ee64: 0x2a2100fc  slti        $at, $s1, 0xFC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)252) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee60) {
            ctx->pc = 0x26EF70u;
            goto label_26ef70;
        }
    }
    ctx->pc = 0x26EE68u;
    // 0x26ee68: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x26EE68u;
    {
        const bool branch_taken_0x26ee68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EE68u;
            // 0x26ee6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee68) {
            ctx->pc = 0x26EE80u;
            goto label_26ee80;
        }
    }
    ctx->pc = 0x26EE70u;
    // 0x26ee70: 0xc09bda8  jal         func_26F6A0
    ctx->pc = 0x26EE70u;
    SET_GPR_U32(ctx, 31, 0x26EE78u);
    ctx->pc = 0x26EE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EE70u;
            // 0x26ee74: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26F6A0u;
    if (runtime->hasFunction(0x26F6A0u)) {
        auto targetFn = runtime->lookupFunction(0x26F6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EE78u; }
        if (ctx->pc != 0x26EE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026F6A0_0x26f6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EE78u; }
        if (ctx->pc != 0x26EE78u) { return; }
    }
    ctx->pc = 0x26EE78u;
label_26ee78:
    // 0x26ee78: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x26ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26ee7c: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x26ee7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_26ee80:
    // 0x26ee80: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26ee80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee84: 0xc09bda8  jal         func_26F6A0
    ctx->pc = 0x26EE84u;
    SET_GPR_U32(ctx, 31, 0x26EE8Cu);
    ctx->pc = 0x26EE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EE84u;
            // 0x26ee88: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26F6A0u;
    if (runtime->hasFunction(0x26F6A0u)) {
        auto targetFn = runtime->lookupFunction(0x26F6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EE8Cu; }
        if (ctx->pc != 0x26EE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026F6A0_0x26f6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EE8Cu; }
        if (ctx->pc != 0x26EE8Cu) { return; }
    }
    ctx->pc = 0x26EE8Cu;
label_26ee8c:
    // 0x26ee8c: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x26ee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26ee90: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x26ee90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ee94: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26ee98: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x26ee98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26ee9c: 0xd29023  subu        $s2, $a2, $s2
    ctx->pc = 0x26ee9cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x26eea0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x26eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x26eea4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26eea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26eea8: 0xa072ffff  sb          $s2, -0x1($v1)
    ctx->pc = 0x26eea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 18));
    // 0x26eeac: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26eeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26eeb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26eeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26eeb4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26eeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26eeb8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26eeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26eebc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26eec0: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26eec0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26eec4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EEC4u;
    {
        const bool branch_taken_0x26eec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26eec4) {
            ctx->pc = 0x26EED8u;
            goto label_26eed8;
        }
    }
    ctx->pc = 0x26EECCu;
    // 0x26eecc: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26EECCu;
    SET_GPR_U32(ctx, 31, 0x26EED4u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EED4u; }
        if (ctx->pc != 0x26EED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EED4u; }
        if (ctx->pc != 0x26EED4u) { return; }
    }
    ctx->pc = 0x26EED4u;
label_26eed4:
    // 0x26eed4: 0x0  nop
    ctx->pc = 0x26eed4u;
    // NOP
label_26eed8:
    // 0x26eed8: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x26eed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26eedc: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x26eedcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26eee0: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26eee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26eee4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26eee8: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26eee8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26eeec: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26eeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26eef0: 0xa075ffff  sb          $s5, -0x1($v1)
    ctx->pc = 0x26eef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 21));
    // 0x26eef4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26eef8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26eefc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26eefcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26ef00: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26ef00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ef04: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26ef08: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26ef08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26ef0c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EF0Cu;
    {
        const bool branch_taken_0x26ef0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ef0c) {
            ctx->pc = 0x26EF20u;
            goto label_26ef20;
        }
    }
    ctx->pc = 0x26EF14u;
    // 0x26ef14: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26EF14u;
    SET_GPR_U32(ctx, 31, 0x26EF1Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF1Cu; }
        if (ctx->pc != 0x26EF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF1Cu; }
        if (ctx->pc != 0x26EF1Cu) { return; }
    }
    ctx->pc = 0x26EF1Cu;
label_26ef1c:
    // 0x26ef1c: 0x0  nop
    ctx->pc = 0x26ef1cu;
    // NOP
label_26ef20:
    // 0x26ef20: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x26ef20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26ef24: 0x26670020  addiu       $a3, $s3, 0x20
    ctx->pc = 0x26ef24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x26ef28: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x26ef28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26ef2c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26ef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ef30: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26ef34: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26ef34u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26ef38: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26ef38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26ef3c: 0xa067ffff  sb          $a3, -0x1($v1)
    ctx->pc = 0x26ef3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 7));
    // 0x26ef40: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ef44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26ef48: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26ef48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26ef4c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26ef4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ef50: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26ef54: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26ef54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26ef58: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EF58u;
    {
        const bool branch_taken_0x26ef58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ef58) {
            ctx->pc = 0x26EF68u;
            goto label_26ef68;
        }
    }
    ctx->pc = 0x26EF60u;
    // 0x26ef60: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26EF60u;
    SET_GPR_U32(ctx, 31, 0x26EF68u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF68u; }
        if (ctx->pc != 0x26EF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF68u; }
        if (ctx->pc != 0x26EF68u) { return; }
    }
    ctx->pc = 0x26EF68u;
label_26ef68:
    // 0x26ef68: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x26EF68u;
    {
        const bool branch_taken_0x26ef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ef68) {
            ctx->pc = 0x26F0C0u;
            goto label_26f0c0;
        }
    }
    ctx->pc = 0x26EF70u;
label_26ef70:
    // 0x26ef70: 0x2a2100fc  slti        $at, $s1, 0xFC
    ctx->pc = 0x26ef70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)252) ? 1 : 0);
    // 0x26ef74: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x26EF74u;
    {
        const bool branch_taken_0x26ef74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EF74u;
            // 0x26ef78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef74) {
            ctx->pc = 0x26EF90u;
            goto label_26ef90;
        }
    }
    ctx->pc = 0x26EF7Cu;
    // 0x26ef7c: 0xc09bda8  jal         func_26F6A0
    ctx->pc = 0x26EF7Cu;
    SET_GPR_U32(ctx, 31, 0x26EF84u);
    ctx->pc = 0x26EF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EF7Cu;
            // 0x26ef80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26F6A0u;
    if (runtime->hasFunction(0x26F6A0u)) {
        auto targetFn = runtime->lookupFunction(0x26F6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF84u; }
        if (ctx->pc != 0x26EF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026F6A0_0x26f6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF84u; }
        if (ctx->pc != 0x26EF84u) { return; }
    }
    ctx->pc = 0x26EF84u;
label_26ef84:
    // 0x26ef84: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x26ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26ef88: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x26ef88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26ef8c: 0x0  nop
    ctx->pc = 0x26ef8cu;
    // NOP
label_26ef90:
    // 0x26ef90: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26ef90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef94: 0xc09bda8  jal         func_26F6A0
    ctx->pc = 0x26EF94u;
    SET_GPR_U32(ctx, 31, 0x26EF9Cu);
    ctx->pc = 0x26EF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EF94u;
            // 0x26ef98: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26F6A0u;
    if (runtime->hasFunction(0x26F6A0u)) {
        auto targetFn = runtime->lookupFunction(0x26F6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF9Cu; }
        if (ctx->pc != 0x26EF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026F6A0_0x26f6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF9Cu; }
        if (ctx->pc != 0x26EF9Cu) { return; }
    }
    ctx->pc = 0x26EF9Cu;
label_26ef9c:
    // 0x26ef9c: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x26ef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26efa0: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x26efa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26efa4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26efa8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x26efa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26efac: 0xf23023  subu        $a2, $a3, $s2
    ctx->pc = 0x26efacu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x26efb0: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x26efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x26efb4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26efb8: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26efb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26efbc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26efbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26efc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26efc4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26efc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26efc8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26efc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26efcc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26efccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26efd0: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26efd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26efd4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EFD4u;
    {
        const bool branch_taken_0x26efd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26efd4) {
            ctx->pc = 0x26EFE8u;
            goto label_26efe8;
        }
    }
    ctx->pc = 0x26EFDCu;
    // 0x26efdc: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26EFDCu;
    SET_GPR_U32(ctx, 31, 0x26EFE4u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EFE4u; }
        if (ctx->pc != 0x26EFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EFE4u; }
        if (ctx->pc != 0x26EFE4u) { return; }
    }
    ctx->pc = 0x26EFE4u;
label_26efe4:
    // 0x26efe4: 0x0  nop
    ctx->pc = 0x26efe4u;
    // NOP
label_26efe8:
    // 0x26efe8: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x26efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26efec: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x26efecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26eff0: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26eff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26eff4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26eff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26eff8: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26eff8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26effc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26effcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26f000: 0xa075ffff  sb          $s5, -0x1($v1)
    ctx->pc = 0x26f000u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 21));
    // 0x26f004: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26f004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26f008: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f00c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26f00cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26f010: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26f010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26f014: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26f014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26f018: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26f018u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f01c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F01Cu;
    {
        const bool branch_taken_0x26f01c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f01c) {
            ctx->pc = 0x26F030u;
            goto label_26f030;
        }
    }
    ctx->pc = 0x26F024u;
    // 0x26f024: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F024u;
    SET_GPR_U32(ctx, 31, 0x26F02Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F02Cu; }
        if (ctx->pc != 0x26F02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F02Cu; }
        if (ctx->pc != 0x26F02Cu) { return; }
    }
    ctx->pc = 0x26F02Cu;
label_26f02c:
    // 0x26f02c: 0x0  nop
    ctx->pc = 0x26f02cu;
    // NOP
label_26f030:
    // 0x26f030: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x26f030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26f034: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x26f034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26f038: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26f038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26f03c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26f040: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26f040u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26f044: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26f044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26f048: 0xa074ffff  sb          $s4, -0x1($v1)
    ctx->pc = 0x26f048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 20));
    // 0x26f04c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26f050: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f054: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26f054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26f058: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26f058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26f05c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26f05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26f060: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26f060u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f064: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F064u;
    {
        const bool branch_taken_0x26f064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f064) {
            ctx->pc = 0x26F078u;
            goto label_26f078;
        }
    }
    ctx->pc = 0x26F06Cu;
    // 0x26f06c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F06Cu;
    SET_GPR_U32(ctx, 31, 0x26F074u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F074u; }
        if (ctx->pc != 0x26F074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F074u; }
        if (ctx->pc != 0x26F074u) { return; }
    }
    ctx->pc = 0x26F074u;
label_26f074:
    // 0x26f074: 0x0  nop
    ctx->pc = 0x26f074u;
    // NOP
label_26f078:
    // 0x26f078: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x26f078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26f07c: 0x26670010  addiu       $a3, $s3, 0x10
    ctx->pc = 0x26f07cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x26f080: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x26f080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26f084: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26f084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26f088: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26f088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26f08c: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26f08cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26f090: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26f090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26f094: 0xa067ffff  sb          $a3, -0x1($v1)
    ctx->pc = 0x26f094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 7));
    // 0x26f098: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26f098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26f09c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f0a0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26f0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26f0a4: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26f0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26f0a8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26f0ac: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26f0acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f0b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F0B0u;
    {
        const bool branch_taken_0x26f0b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f0b0) {
            ctx->pc = 0x26F0C0u;
            goto label_26f0c0;
        }
    }
    ctx->pc = 0x26F0B8u;
    // 0x26f0b8: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F0B8u;
    SET_GPR_U32(ctx, 31, 0x26F0C0u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F0C0u; }
        if (ctx->pc != 0x26F0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F0C0u; }
        if (ctx->pc != 0x26F0C0u) { return; }
    }
    ctx->pc = 0x26F0C0u;
label_26f0c0:
    // 0x26f0c0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x26f0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26f0c4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x26f0c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26f0c8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26f0c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26f0cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26f0ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f0d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26f0d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26f0d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26f0d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f0d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26f0d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f0dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26f0dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f0e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f0e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x26F0E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F0E4u;
            // 0x26f0e8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F0ECu;
    // 0x26f0ec: 0x0  nop
    ctx->pc = 0x26f0ecu;
    // NOP
}
