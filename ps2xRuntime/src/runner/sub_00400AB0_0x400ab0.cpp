#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00400AB0
// Address: 0x400ab0 - 0x400e80
void sub_00400AB0_0x400ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00400AB0_0x400ab0");
#endif

    switch (ctx->pc) {
        case 0x400b84u: goto label_400b84;
        case 0x400da4u: goto label_400da4;
        case 0x400e0cu: goto label_400e0c;
        case 0x400e1cu: goto label_400e1c;
        default: break;
    }

    ctx->pc = 0x400ab0u;

    // 0x400ab0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x400ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x400ab4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x400ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x400ab8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x400ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x400abc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x400abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x400ac0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x400ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x400ac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x400ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x400ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x400ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x400acc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x400accu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400ad0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x400ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400ad4: 0x16300003  bne         $s1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x400AD4u;
    {
        const bool branch_taken_0x400ad4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x400AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x400AD4u;
            // 0x400ad8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400ad4) {
            ctx->pc = 0x400AE4u;
            goto label_400ae4;
        }
    }
    ctx->pc = 0x400ADCu;
    // 0x400adc: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x400ADCu;
    {
        const bool branch_taken_0x400adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x400AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x400ADCu;
            // 0x400ae0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400adc) {
            ctx->pc = 0x400E54u;
            goto label_400e54;
        }
    }
    ctx->pc = 0x400AE4u;
label_400ae4:
    // 0x400ae4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x400ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x400ae8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x400ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x400aec: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x400aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x400af0: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x400af0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x400af4: 0x2704823  subu        $t1, $s3, $s0
    ctx->pc = 0x400af4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x400af8: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x400AF8u;
    {
        const bool branch_taken_0x400af8 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x400AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x400AF8u;
            // 0x400afc: 0x91943  sra         $v1, $t1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 9), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400af8) {
            ctx->pc = 0x400B08u;
            goto label_400b08;
        }
    }
    ctx->pc = 0x400B00u;
    // 0x400b00: 0x2522001f  addiu       $v0, $t1, 0x1F
    ctx->pc = 0x400b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 31));
    // 0x400b04: 0x21943  sra         $v1, $v0, 5
    ctx->pc = 0x400b04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
label_400b08:
    // 0x400b08: 0x106000bb  beqz        $v1, . + 4 + (0xBB << 2)
    ctx->pc = 0x400B08u;
    {
        const bool branch_taken_0x400b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x400b08) {
            ctx->pc = 0x400DF8u;
            goto label_400df8;
        }
    }
    ctx->pc = 0x400B10u;
    // 0x400b10: 0x213082b  sltu        $at, $s0, $s3
    ctx->pc = 0x400b10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x400b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x400b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400b18: 0x102000b7  beqz        $at, . + 4 + (0xB7 << 2)
    ctx->pc = 0x400B18u;
    {
        const bool branch_taken_0x400b18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x400B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x400B18u;
            // 0x400b1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400b18) {
            ctx->pc = 0x400DF8u;
            goto label_400df8;
        }
    }
    ctx->pc = 0x400B20u;
    // 0x400b20: 0x2528001f  addiu       $t0, $t1, 0x1F
    ctx->pc = 0x400b20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 31));
    // 0x400b24: 0x2662ff00  addiu       $v0, $s3, -0x100
    ctx->pc = 0x400b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967040));
    // 0x400b28: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x400B28u;
    {
        const bool branch_taken_0x400b28 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x400B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x400B28u;
            // 0x400b2c: 0x83143  sra         $a2, $t0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 8), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400b28) {
            ctx->pc = 0x400B38u;
            goto label_400b38;
        }
    }
    ctx->pc = 0x400B30u;
    // 0x400b30: 0x2506001f  addiu       $a2, $t0, 0x1F
    ctx->pc = 0x400b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 31));
    // 0x400b34: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x400b34u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_400b38:
    // 0x400b38: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x400b38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x400b3c: 0x14200096  bnez        $at, . + 4 + (0x96 << 2)
    ctx->pc = 0x400B3Cu;
    {
        const bool branch_taken_0x400b3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x400b3c) {
            ctx->pc = 0x400D98u;
            goto label_400d98;
        }
    }
    ctx->pc = 0x400B44u;
    // 0x400b44: 0x270082b  sltu        $at, $s3, $s0
    ctx->pc = 0x400b44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x400b48: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x400B48u;
    {
        const bool branch_taken_0x400b48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x400B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x400B48u;
            // 0x400b4c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400b48) {
            ctx->pc = 0x400B7Cu;
            goto label_400b7c;
        }
    }
    ctx->pc = 0x400B50u;
    // 0x400b50: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x400b50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x400b54: 0x1273024  and         $a2, $t1, $a3
    ctx->pc = 0x400b54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x400b58: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x400B58u;
    {
        const bool branch_taken_0x400b58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x400B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x400B58u;
            // 0x400b5c: 0x640a0001  daddiu      $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x400b58) {
            ctx->pc = 0x400B70u;
            goto label_400b70;
        }
    }
    ctx->pc = 0x400B60u;
    // 0x400b60: 0x1073024  and         $a2, $t0, $a3
    ctx->pc = 0x400b60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x400b64: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x400B64u;
    {
        const bool branch_taken_0x400b64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x400b64) {
            ctx->pc = 0x400B70u;
            goto label_400b70;
        }
    }
    ctx->pc = 0x400B6Cu;
    // 0x400b6c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x400b6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_400b70:
    // 0x400b70: 0x11400002  beqz        $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x400B70u;
    {
        const bool branch_taken_0x400b70 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x400b70) {
            ctx->pc = 0x400B7Cu;
            goto label_400b7c;
        }
    }
    ctx->pc = 0x400B78u;
    // 0x400b78: 0x640b0001  daddiu      $t3, $zero, 0x1
    ctx->pc = 0x400b78u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_400b7c:
    // 0x400b7c: 0x11600086  beqz        $t3, . + 4 + (0x86 << 2)
    ctx->pc = 0x400B7Cu;
    {
        const bool branch_taken_0x400b7c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x400b7c) {
            ctx->pc = 0x400D98u;
            goto label_400d98;
        }
    }
    ctx->pc = 0x400B84u;
label_400b84:
    // 0x400b84: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x400b84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x400b88: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x400b88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x400b8c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x400b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x400b90: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x400b90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x400b94: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x400b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x400b98: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x400b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x400b9c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x400b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400ba0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x400ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x400ba4: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x400ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x400ba8: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x400ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x400bac: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x400bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x400bb0: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x400bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x400bb4: 0x8ca60018  lw          $a2, 0x18($a1)
    ctx->pc = 0x400bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x400bb8: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x400bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x400bbc: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x400bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400bc0: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x400bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x400bc4: 0x8ca60020  lw          $a2, 0x20($a1)
    ctx->pc = 0x400bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x400bc8: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x400bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x400bcc: 0x8ca60024  lw          $a2, 0x24($a1)
    ctx->pc = 0x400bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x400bd0: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x400bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
    // 0x400bd4: 0x8ca60028  lw          $a2, 0x28($a1)
    ctx->pc = 0x400bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x400bd8: 0xac860028  sw          $a2, 0x28($a0)
    ctx->pc = 0x400bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
    // 0x400bdc: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x400bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400be0: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x400be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x400be4: 0x8ca60030  lw          $a2, 0x30($a1)
    ctx->pc = 0x400be4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x400be8: 0xac860030  sw          $a2, 0x30($a0)
    ctx->pc = 0x400be8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
    // 0x400bec: 0x8ca60034  lw          $a2, 0x34($a1)
    ctx->pc = 0x400becu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x400bf0: 0xac860034  sw          $a2, 0x34($a0)
    ctx->pc = 0x400bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
    // 0x400bf4: 0x8ca60038  lw          $a2, 0x38($a1)
    ctx->pc = 0x400bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x400bf8: 0xac860038  sw          $a2, 0x38($a0)
    ctx->pc = 0x400bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 6));
    // 0x400bfc: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x400bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400c00: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x400c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x400c04: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x400c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x400c08: 0xac860040  sw          $a2, 0x40($a0)
    ctx->pc = 0x400c08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 6));
    // 0x400c0c: 0x8ca60044  lw          $a2, 0x44($a1)
    ctx->pc = 0x400c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x400c10: 0xac860044  sw          $a2, 0x44($a0)
    ctx->pc = 0x400c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 6));
    // 0x400c14: 0x8ca60048  lw          $a2, 0x48($a1)
    ctx->pc = 0x400c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x400c18: 0xac860048  sw          $a2, 0x48($a0)
    ctx->pc = 0x400c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 6));
    // 0x400c1c: 0xc4a0004c  lwc1        $f0, 0x4C($a1)
    ctx->pc = 0x400c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400c20: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x400c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x400c24: 0x8ca60050  lw          $a2, 0x50($a1)
    ctx->pc = 0x400c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x400c28: 0xac860050  sw          $a2, 0x50($a0)
    ctx->pc = 0x400c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 6));
    // 0x400c2c: 0x8ca60054  lw          $a2, 0x54($a1)
    ctx->pc = 0x400c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x400c30: 0xac860054  sw          $a2, 0x54($a0)
    ctx->pc = 0x400c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 6));
    // 0x400c34: 0x8ca60058  lw          $a2, 0x58($a1)
    ctx->pc = 0x400c34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x400c38: 0xac860058  sw          $a2, 0x58($a0)
    ctx->pc = 0x400c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 6));
    // 0x400c3c: 0xc4a0005c  lwc1        $f0, 0x5C($a1)
    ctx->pc = 0x400c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400c40: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x400c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x400c44: 0x8ca60060  lw          $a2, 0x60($a1)
    ctx->pc = 0x400c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x400c48: 0xac860060  sw          $a2, 0x60($a0)
    ctx->pc = 0x400c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 6));
    // 0x400c4c: 0x8ca60064  lw          $a2, 0x64($a1)
    ctx->pc = 0x400c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x400c50: 0xac860064  sw          $a2, 0x64($a0)
    ctx->pc = 0x400c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 6));
    // 0x400c54: 0x8ca60068  lw          $a2, 0x68($a1)
    ctx->pc = 0x400c54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x400c58: 0xac860068  sw          $a2, 0x68($a0)
    ctx->pc = 0x400c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 6));
    // 0x400c5c: 0xc4a0006c  lwc1        $f0, 0x6C($a1)
    ctx->pc = 0x400c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400c60: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x400c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x400c64: 0x8ca60070  lw          $a2, 0x70($a1)
    ctx->pc = 0x400c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x400c68: 0xac860070  sw          $a2, 0x70($a0)
    ctx->pc = 0x400c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 6));
    // 0x400c6c: 0x8ca60074  lw          $a2, 0x74($a1)
    ctx->pc = 0x400c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x400c70: 0xac860074  sw          $a2, 0x74($a0)
    ctx->pc = 0x400c70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 6));
    // 0x400c74: 0x8ca60078  lw          $a2, 0x78($a1)
    ctx->pc = 0x400c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x400c78: 0xac860078  sw          $a2, 0x78($a0)
    ctx->pc = 0x400c78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 6));
    // 0x400c7c: 0xc4a0007c  lwc1        $f0, 0x7C($a1)
    ctx->pc = 0x400c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400c80: 0xe480007c  swc1        $f0, 0x7C($a0)
    ctx->pc = 0x400c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x400c84: 0x8ca60080  lw          $a2, 0x80($a1)
    ctx->pc = 0x400c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x400c88: 0xac860080  sw          $a2, 0x80($a0)
    ctx->pc = 0x400c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 6));
    // 0x400c8c: 0x8ca60084  lw          $a2, 0x84($a1)
    ctx->pc = 0x400c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x400c90: 0xac860084  sw          $a2, 0x84($a0)
    ctx->pc = 0x400c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 6));
    // 0x400c94: 0x8ca60088  lw          $a2, 0x88($a1)
    ctx->pc = 0x400c94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x400c98: 0xac860088  sw          $a2, 0x88($a0)
    ctx->pc = 0x400c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 6));
    // 0x400c9c: 0xc4a0008c  lwc1        $f0, 0x8C($a1)
    ctx->pc = 0x400c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400ca0: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x400ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x400ca4: 0x8ca60090  lw          $a2, 0x90($a1)
    ctx->pc = 0x400ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x400ca8: 0xac860090  sw          $a2, 0x90($a0)
    ctx->pc = 0x400ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 6));
    // 0x400cac: 0x8ca60094  lw          $a2, 0x94($a1)
    ctx->pc = 0x400cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x400cb0: 0xac860094  sw          $a2, 0x94($a0)
    ctx->pc = 0x400cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 6));
    // 0x400cb4: 0x8ca60098  lw          $a2, 0x98($a1)
    ctx->pc = 0x400cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 152)));
    // 0x400cb8: 0xac860098  sw          $a2, 0x98($a0)
    ctx->pc = 0x400cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 6));
    // 0x400cbc: 0xc4a0009c  lwc1        $f0, 0x9C($a1)
    ctx->pc = 0x400cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400cc0: 0xe480009c  swc1        $f0, 0x9C($a0)
    ctx->pc = 0x400cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x400cc4: 0x8ca600a0  lw          $a2, 0xA0($a1)
    ctx->pc = 0x400cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x400cc8: 0xac8600a0  sw          $a2, 0xA0($a0)
    ctx->pc = 0x400cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 6));
    // 0x400ccc: 0x8ca600a4  lw          $a2, 0xA4($a1)
    ctx->pc = 0x400cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
    // 0x400cd0: 0xac8600a4  sw          $a2, 0xA4($a0)
    ctx->pc = 0x400cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 6));
    // 0x400cd4: 0x8ca600a8  lw          $a2, 0xA8($a1)
    ctx->pc = 0x400cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x400cd8: 0xac8600a8  sw          $a2, 0xA8($a0)
    ctx->pc = 0x400cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 6));
    // 0x400cdc: 0xc4a000ac  lwc1        $f0, 0xAC($a1)
    ctx->pc = 0x400cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400ce0: 0xe48000ac  swc1        $f0, 0xAC($a0)
    ctx->pc = 0x400ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x400ce4: 0x8ca600b0  lw          $a2, 0xB0($a1)
    ctx->pc = 0x400ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x400ce8: 0xac8600b0  sw          $a2, 0xB0($a0)
    ctx->pc = 0x400ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 6));
    // 0x400cec: 0x8ca600b4  lw          $a2, 0xB4($a1)
    ctx->pc = 0x400cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x400cf0: 0xac8600b4  sw          $a2, 0xB4($a0)
    ctx->pc = 0x400cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 6));
    // 0x400cf4: 0x8ca600b8  lw          $a2, 0xB8($a1)
    ctx->pc = 0x400cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x400cf8: 0xac8600b8  sw          $a2, 0xB8($a0)
    ctx->pc = 0x400cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 6));
    // 0x400cfc: 0xc4a000bc  lwc1        $f0, 0xBC($a1)
    ctx->pc = 0x400cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400d00: 0xe48000bc  swc1        $f0, 0xBC($a0)
    ctx->pc = 0x400d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 188), bits); }
    // 0x400d04: 0x8ca600c0  lw          $a2, 0xC0($a1)
    ctx->pc = 0x400d04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x400d08: 0xac8600c0  sw          $a2, 0xC0($a0)
    ctx->pc = 0x400d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 6));
    // 0x400d0c: 0x8ca600c4  lw          $a2, 0xC4($a1)
    ctx->pc = 0x400d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x400d10: 0xac8600c4  sw          $a2, 0xC4($a0)
    ctx->pc = 0x400d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 6));
    // 0x400d14: 0x8ca600c8  lw          $a2, 0xC8($a1)
    ctx->pc = 0x400d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
    // 0x400d18: 0xac8600c8  sw          $a2, 0xC8($a0)
    ctx->pc = 0x400d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 6));
    // 0x400d1c: 0xc4a000cc  lwc1        $f0, 0xCC($a1)
    ctx->pc = 0x400d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400d20: 0xe48000cc  swc1        $f0, 0xCC($a0)
    ctx->pc = 0x400d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 204), bits); }
    // 0x400d24: 0x8ca600d0  lw          $a2, 0xD0($a1)
    ctx->pc = 0x400d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x400d28: 0xac8600d0  sw          $a2, 0xD0($a0)
    ctx->pc = 0x400d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 6));
    // 0x400d2c: 0x8ca600d4  lw          $a2, 0xD4($a1)
    ctx->pc = 0x400d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x400d30: 0xac8600d4  sw          $a2, 0xD4($a0)
    ctx->pc = 0x400d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 6));
    // 0x400d34: 0x8ca600d8  lw          $a2, 0xD8($a1)
    ctx->pc = 0x400d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 216)));
    // 0x400d38: 0xac8600d8  sw          $a2, 0xD8($a0)
    ctx->pc = 0x400d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 6));
    // 0x400d3c: 0xc4a000dc  lwc1        $f0, 0xDC($a1)
    ctx->pc = 0x400d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400d40: 0xe48000dc  swc1        $f0, 0xDC($a0)
    ctx->pc = 0x400d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
    // 0x400d44: 0x8ca600e0  lw          $a2, 0xE0($a1)
    ctx->pc = 0x400d44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x400d48: 0xac8600e0  sw          $a2, 0xE0($a0)
    ctx->pc = 0x400d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 6));
    // 0x400d4c: 0x8ca600e4  lw          $a2, 0xE4($a1)
    ctx->pc = 0x400d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x400d50: 0xac8600e4  sw          $a2, 0xE4($a0)
    ctx->pc = 0x400d50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 6));
    // 0x400d54: 0x8ca600e8  lw          $a2, 0xE8($a1)
    ctx->pc = 0x400d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 232)));
    // 0x400d58: 0xac8600e8  sw          $a2, 0xE8($a0)
    ctx->pc = 0x400d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 6));
    // 0x400d5c: 0xc4a000ec  lwc1        $f0, 0xEC($a1)
    ctx->pc = 0x400d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400d60: 0xe48000ec  swc1        $f0, 0xEC($a0)
    ctx->pc = 0x400d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
    // 0x400d64: 0x8ca600f0  lw          $a2, 0xF0($a1)
    ctx->pc = 0x400d64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x400d68: 0xac8600f0  sw          $a2, 0xF0($a0)
    ctx->pc = 0x400d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 6));
    // 0x400d6c: 0x8ca600f4  lw          $a2, 0xF4($a1)
    ctx->pc = 0x400d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
    // 0x400d70: 0xac8600f4  sw          $a2, 0xF4($a0)
    ctx->pc = 0x400d70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 6));
    // 0x400d74: 0x8ca600f8  lw          $a2, 0xF8($a1)
    ctx->pc = 0x400d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x400d78: 0xac8600f8  sw          $a2, 0xF8($a0)
    ctx->pc = 0x400d78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 6));
    // 0x400d7c: 0xc4a000fc  lwc1        $f0, 0xFC($a1)
    ctx->pc = 0x400d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400d80: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x400d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x400d84: 0xe48000fc  swc1        $f0, 0xFC($a0)
    ctx->pc = 0x400d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 252), bits); }
    // 0x400d88: 0xa2302b  sltu        $a2, $a1, $v0
    ctx->pc = 0x400d88u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x400d8c: 0x14c0ff7d  bnez        $a2, . + 4 + (-0x83 << 2)
    ctx->pc = 0x400D8Cu;
    {
        const bool branch_taken_0x400d8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x400D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x400D8Cu;
            // 0x400d90: 0x24840100  addiu       $a0, $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400d8c) {
            ctx->pc = 0x400B84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_400b84;
        }
    }
    ctx->pc = 0x400D94u;
    // 0x400d94: 0x0  nop
    ctx->pc = 0x400d94u;
    // NOP
label_400d98:
    // 0x400d98: 0xb3082b  sltu        $at, $a1, $s3
    ctx->pc = 0x400d98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x400d9c: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x400D9Cu;
    {
        const bool branch_taken_0x400d9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x400d9c) {
            ctx->pc = 0x400DF8u;
            goto label_400df8;
        }
    }
    ctx->pc = 0x400DA4u;
label_400da4:
    // 0x400da4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x400da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x400da8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x400da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x400dac: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x400dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x400db0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x400db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x400db4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x400db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x400db8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x400db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x400dbc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x400dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400dc0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x400dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x400dc4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x400dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x400dc8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x400dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x400dcc: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x400dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x400dd0: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x400dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x400dd4: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x400dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x400dd8: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x400dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x400ddc: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x400ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x400de0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x400de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x400de4: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x400de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x400de8: 0xb3102b  sltu        $v0, $a1, $s3
    ctx->pc = 0x400de8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x400dec: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x400DECu;
    {
        const bool branch_taken_0x400dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x400DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x400DECu;
            // 0x400df0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400dec) {
            ctx->pc = 0x400DA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_400da4;
        }
    }
    ctx->pc = 0x400DF4u;
    // 0x400df4: 0x0  nop
    ctx->pc = 0x400df4u;
    // NOP
label_400df8:
    // 0x400df8: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x400df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x400dfc: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x400dfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x400e00: 0x293082b  sltu        $at, $s4, $s3
    ctx->pc = 0x400e00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x400e04: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x400E04u;
    {
        const bool branch_taken_0x400e04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x400e04) {
            ctx->pc = 0x400E30u;
            goto label_400e30;
        }
    }
    ctx->pc = 0x400E0Cu;
label_400e0c:
    // 0x400e0c: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x400E0Cu;
    {
        const bool branch_taken_0x400e0c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x400e0c) {
            ctx->pc = 0x400E20u;
            goto label_400e20;
        }
    }
    ctx->pc = 0x400E14u;
    // 0x400e14: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x400E14u;
    SET_GPR_U32(ctx, 31, 0x400E1Cu);
    ctx->pc = 0x400E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x400E14u;
            // 0x400e18: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400E1Cu; }
        if (ctx->pc != 0x400E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x400E1Cu; }
        if (ctx->pc != 0x400E1Cu) { return; }
    }
    ctx->pc = 0x400E1Cu;
label_400e1c:
    // 0x400e1c: 0x0  nop
    ctx->pc = 0x400e1cu;
    // NOP
label_400e20:
    // 0x400e20: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x400e20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x400e24: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x400e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x400e28: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x400E28u;
    {
        const bool branch_taken_0x400e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x400e28) {
            ctx->pc = 0x400E0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_400e0c;
        }
    }
    ctx->pc = 0x400E30u;
label_400e30:
    // 0x400e30: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x400e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x400e34: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x400E34u;
    {
        const bool branch_taken_0x400e34 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x400E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x400E34u;
            // 0x400e38: 0x22143  sra         $a0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400e34) {
            ctx->pc = 0x400E44u;
            goto label_400e44;
        }
    }
    ctx->pc = 0x400E3Cu;
    // 0x400e3c: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x400e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x400e40: 0x22143  sra         $a0, $v0, 5
    ctx->pc = 0x400e40u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
label_400e44:
    // 0x400e44: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x400e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x400e48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x400e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400e4c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x400e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x400e50: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x400e50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_400e54:
    // 0x400e54: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x400e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x400e58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x400e58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x400e5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x400e5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x400e60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x400e60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x400e64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x400e64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x400e68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x400e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x400e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x400E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x400E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x400E6Cu;
            // 0x400e70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x400E74u;
    // 0x400e74: 0x0  nop
    ctx->pc = 0x400e74u;
    // NOP
    // 0x400e78: 0x0  nop
    ctx->pc = 0x400e78u;
    // NOP
    // 0x400e7c: 0x0  nop
    ctx->pc = 0x400e7cu;
    // NOP
}
