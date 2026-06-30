#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D1970
// Address: 0x3d1970 - 0x3d1b20
void sub_003D1970_0x3d1970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1970_0x3d1970");
#endif

    switch (ctx->pc) {
        case 0x3d19a4u: goto label_3d19a4;
        case 0x3d1a90u: goto label_3d1a90;
        case 0x3d1ae8u: goto label_3d1ae8;
        case 0x3d1b00u: goto label_3d1b00;
        default: break;
    }

    ctx->pc = 0x3d1970u;

    // 0x3d1970: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d1970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d1974: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3d1974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3d1978: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d1978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d197c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3d197cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d1980: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d1980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3d1984: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d1984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d1988: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d1988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d198c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d198cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d1990: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d1990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1994: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3d1994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1998: 0x34456d66  ori         $a1, $v0, 0x6D66
    ctx->pc = 0x3d1998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28006);
    // 0x3d199c: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x3D199Cu;
    SET_GPR_U32(ctx, 31, 0x3D19A4u);
    ctx->pc = 0x3D19A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D199Cu;
            // 0x3d19a0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D19A4u; }
        if (ctx->pc != 0x3D19A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D19A4u; }
        if (ctx->pc != 0x3D19A4u) { return; }
    }
    ctx->pc = 0x3D19A4u;
label_3d19a4:
    // 0x3d19a4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3d19a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3d19a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d19a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d19ac: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3d19acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x3d19b0: 0x244291f0  addiu       $v0, $v0, -0x6E10
    ctx->pc = 0x3d19b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939120));
    // 0x3d19b4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3d19b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x3d19b8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3d19b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x3d19bc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3d19bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3d19c0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3d19c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3d19c4: 0xa25107e0  sb          $s1, 0x7E0($s2)
    ctx->pc = 0x3d19c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2016), (uint8_t)GPR_U32(ctx, 17));
    // 0x3d19c8: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x3d19c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
    // 0x3d19cc: 0xae5007e8  sw          $s0, 0x7E8($s2)
    ctx->pc = 0x3d19ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2024), GPR_U32(ctx, 16));
    // 0x3d19d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3d19d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d19d4: 0xae4407ec  sw          $a0, 0x7EC($s2)
    ctx->pc = 0x3d19d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 4));
    // 0x3d19d8: 0x924407e0  lbu         $a0, 0x7E0($s2)
    ctx->pc = 0x3d19d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2016)));
    // 0x3d19dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3d19dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3d19e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d19e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d19e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3d19e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d19e8: 0xae4307e4  sw          $v1, 0x7E4($s2)
    ctx->pc = 0x3d19e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2020), GPR_U32(ctx, 3));
    // 0x3d19ec: 0x8c630e38  lw          $v1, 0xE38($v1)
    ctx->pc = 0x3d19ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3640)));
    // 0x3d19f0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D19F0u;
    {
        const bool branch_taken_0x3d19f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D19F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D19F0u;
            // 0x3d19f4: 0xae4307dc  sw          $v1, 0x7DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2012), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d19f0) {
            ctx->pc = 0x3D1A00u;
            goto label_3d1a00;
        }
    }
    ctx->pc = 0x3D19F8u;
    // 0x3d19f8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3d19f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d19fc: 0xae4207dc  sw          $v0, 0x7DC($s2)
    ctx->pc = 0x3d19fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2012), GPR_U32(ctx, 2));
label_3d1a00:
    // 0x3d1a00: 0x8e4207e8  lw          $v0, 0x7E8($s2)
    ctx->pc = 0x3d1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2024)));
    // 0x3d1a04: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D1A04u;
    {
        const bool branch_taken_0x3d1a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d1a04) {
            ctx->pc = 0x3D1A48u;
            goto label_3d1a48;
        }
    }
    ctx->pc = 0x3D1A0Cu;
    // 0x3d1a0c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d1a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3d1a10: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x3d1a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3d1a14: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3d1a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3d1a18: 0xae4307e8  sw          $v1, 0x7E8($s2)
    ctx->pc = 0x3d1a18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2024), GPR_U32(ctx, 3));
    // 0x3d1a1c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3d1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d1a20: 0x8c830788  lw          $v1, 0x788($a0)
    ctx->pc = 0x3d1a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1928)));
    // 0x3d1a24: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D1A24u;
    {
        const bool branch_taken_0x3d1a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d1a24) {
            ctx->pc = 0x3D1A28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1A24u;
            // 0x3d1a28: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D1A44u;
            goto label_3d1a44;
        }
    }
    ctx->pc = 0x3D1A2Cu;
    // 0x3d1a2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3d1a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d1a30: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D1A30u;
    {
        const bool branch_taken_0x3d1a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d1a30) {
            ctx->pc = 0x3D1A40u;
            goto label_3d1a40;
        }
    }
    ctx->pc = 0x3D1A38u;
    // 0x3d1a38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D1A38u;
    {
        const bool branch_taken_0x3d1a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1a38) {
            ctx->pc = 0x3D1A48u;
            goto label_3d1a48;
        }
    }
    ctx->pc = 0x3D1A40u;
label_3d1a40:
    // 0x3d1a40: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3d1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3d1a44:
    // 0x3d1a44: 0xae4207e8  sw          $v0, 0x7E8($s2)
    ctx->pc = 0x3d1a44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2024), GPR_U32(ctx, 2));
label_3d1a48:
    // 0x3d1a48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d1a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3d1a4c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3d1a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3d1a50: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3d1a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3d1a54: 0x246392a0  addiu       $v1, $v1, -0x6D60
    ctx->pc = 0x3d1a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939296));
    // 0x3d1a58: 0x8c840968  lw          $a0, 0x968($a0)
    ctx->pc = 0x3d1a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
    // 0x3d1a5c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3d1a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1a60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d1a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d1a64: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3d1a64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d1a68: 0xa24307e1  sb          $v1, 0x7E1($s2)
    ctx->pc = 0x3d1a68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2017), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d1a6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d1a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d1a70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d1a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d1a74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d1a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d1a78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d1a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d1a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D1A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1A7Cu;
            // 0x3d1a80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D1A84u;
    // 0x3d1a84: 0x0  nop
    ctx->pc = 0x3d1a84u;
    // NOP
    // 0x3d1a88: 0x0  nop
    ctx->pc = 0x3d1a88u;
    // NOP
    // 0x3d1a8c: 0x0  nop
    ctx->pc = 0x3d1a8cu;
    // NOP
label_3d1a90:
    // 0x3d1a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d1a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d1a94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d1a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d1a98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d1a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d1a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d1a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d1aa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d1aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1aa4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3D1AA4u;
    {
        const bool branch_taken_0x3d1aa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1AA4u;
            // 0x3d1aa8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1aa4) {
            ctx->pc = 0x3D1B00u;
            goto label_3d1b00;
        }
    }
    ctx->pc = 0x3D1AACu;
    // 0x3d1aac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d1aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3d1ab0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d1ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d1ab4: 0x24639220  addiu       $v1, $v1, -0x6DE0
    ctx->pc = 0x3d1ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939168));
    // 0x3d1ab8: 0x24429258  addiu       $v0, $v0, -0x6DA8
    ctx->pc = 0x3d1ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939224));
    // 0x3d1abc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d1abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3d1ac0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D1AC0u;
    {
        const bool branch_taken_0x3d1ac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1AC0u;
            // 0x3d1ac4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1ac0) {
            ctx->pc = 0x3D1AE8u;
            goto label_3d1ae8;
        }
    }
    ctx->pc = 0x3D1AC8u;
    // 0x3d1ac8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d1ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3d1acc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d1accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d1ad0: 0x246392d0  addiu       $v1, $v1, -0x6D30
    ctx->pc = 0x3d1ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939344));
    // 0x3d1ad4: 0x24429308  addiu       $v0, $v0, -0x6CF8
    ctx->pc = 0x3d1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939400));
    // 0x3d1ad8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d1ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3d1adc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d1adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1ae0: 0xc0f46c8  jal         func_3D1B20
    ctx->pc = 0x3D1AE0u;
    SET_GPR_U32(ctx, 31, 0x3D1AE8u);
    ctx->pc = 0x3D1AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1AE0u;
            // 0x3d1ae4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D1B20u;
    if (runtime->hasFunction(0x3D1B20u)) {
        auto targetFn = runtime->lookupFunction(0x3D1B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1AE8u; }
        if (ctx->pc != 0x3D1AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D1B20_0x3d1b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1AE8u; }
        if (ctx->pc != 0x3D1AE8u) { return; }
    }
    ctx->pc = 0x3D1AE8u;
label_3d1ae8:
    // 0x3d1ae8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3d1ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3d1aec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d1aecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3d1af0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D1AF0u;
    {
        const bool branch_taken_0x3d1af0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d1af0) {
            ctx->pc = 0x3D1AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1AF0u;
            // 0x3d1af4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D1B04u;
            goto label_3d1b04;
        }
    }
    ctx->pc = 0x3D1AF8u;
    // 0x3d1af8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3D1AF8u;
    SET_GPR_U32(ctx, 31, 0x3D1B00u);
    ctx->pc = 0x3D1AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1AF8u;
            // 0x3d1afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1B00u; }
        if (ctx->pc != 0x3D1B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1B00u; }
        if (ctx->pc != 0x3D1B00u) { return; }
    }
    ctx->pc = 0x3D1B00u;
label_3d1b00:
    // 0x3d1b00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d1b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d1b04:
    // 0x3d1b04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d1b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d1b08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d1b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d1b0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d1b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d1b10: 0x3e00008  jr          $ra
    ctx->pc = 0x3D1B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1B10u;
            // 0x3d1b14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D1B18u;
    // 0x3d1b18: 0x0  nop
    ctx->pc = 0x3d1b18u;
    // NOP
    // 0x3d1b1c: 0x0  nop
    ctx->pc = 0x3d1b1cu;
    // NOP
}
