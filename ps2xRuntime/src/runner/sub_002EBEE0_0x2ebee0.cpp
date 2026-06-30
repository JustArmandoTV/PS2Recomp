#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EBEE0
// Address: 0x2ebee0 - 0x2ec3a0
void sub_002EBEE0_0x2ebee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBEE0_0x2ebee0");
#endif

    switch (ctx->pc) {
        case 0x2ebf84u: goto label_2ebf84;
        case 0x2ebfe4u: goto label_2ebfe4;
        case 0x2ec040u: goto label_2ec040;
        case 0x2ec0a0u: goto label_2ec0a0;
        case 0x2ec24cu: goto label_2ec24c;
        case 0x2ec274u: goto label_2ec274;
        case 0x2ec2c4u: goto label_2ec2c4;
        case 0x2ec2ccu: goto label_2ec2cc;
        case 0x2ec2e0u: goto label_2ec2e0;
        case 0x2ec324u: goto label_2ec324;
        default: break;
    }

    ctx->pc = 0x2ebee0u;

    // 0x2ebee0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ebee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ebee4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2ebee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2ebee8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ebee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ebeec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ebeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ebef0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2ebef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2ebef4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2ebef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2ebef8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ebef8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebefc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2ebefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2ebf00: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ebf00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf04: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ebf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ebf08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ebf08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ebf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ebf10: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x2ebf10u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ebf14: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x2ebf14u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ebf18: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2ebf18u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2ebf1c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2ebf1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2ebf20: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2ebf20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ebf24: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ebf24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ebf28: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x2ebf28u;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
    // 0x2ebf2c: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x2ebf2cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x2ebf30: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x2ebf30u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x2ebf34: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x2ebf34u;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
    // 0x2ebf38: 0x46008546  mov.s       $f21, $f16
    ctx->pc = 0x2ebf38u;
    ctx->f[21] = FPU_MOV_S(ctx->f[16]);
    // 0x2ebf3c: 0x106200a0  beq         $v1, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2EBF3Cu;
    {
        const bool branch_taken_0x2ebf3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EBF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBF3Cu;
            // 0x2ebf40: 0x46008d06  mov.s       $f20, $f17 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[17]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf3c) {
            ctx->pc = 0x2EC1C0u;
            goto label_2ec1c0;
        }
    }
    ctx->pc = 0x2EBF44u;
    // 0x2ebf44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ebf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ebf48: 0x10620089  beq         $v1, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x2EBF48u;
    {
        const bool branch_taken_0x2ebf48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebf48) {
            ctx->pc = 0x2EC170u;
            goto label_2ec170;
        }
    }
    ctx->pc = 0x2EBF50u;
    // 0x2ebf50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ebf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ebf54: 0x10620075  beq         $v1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2EBF54u;
    {
        const bool branch_taken_0x2ebf54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebf54) {
            ctx->pc = 0x2EC12Cu;
            goto label_2ec12c;
        }
    }
    ctx->pc = 0x2EBF5Cu;
    // 0x2ebf5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ebf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebf60: 0x10620064  beq         $v1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2EBF60u;
    {
        const bool branch_taken_0x2ebf60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebf60) {
            ctx->pc = 0x2EC0F4u;
            goto label_2ec0f4;
        }
    }
    ctx->pc = 0x2EBF68u;
    // 0x2ebf68: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBF68u;
    {
        const bool branch_taken_0x2ebf68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebf68) {
            ctx->pc = 0x2EBF78u;
            goto label_2ebf78;
        }
    }
    ctx->pc = 0x2EBF70u;
    // 0x2ebf70: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2EBF70u;
    {
        const bool branch_taken_0x2ebf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebf70) {
            ctx->pc = 0x2EC218u;
            goto label_2ec218;
        }
    }
    ctx->pc = 0x2EBF78u;
label_2ebf78:
    // 0x2ebf78: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ebf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ebf7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ebf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf80: 0x94430ef8  lhu         $v1, 0xEF8($v0)
    ctx->pc = 0x2ebf80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3832)));
label_2ebf84:
    // 0x2ebf84: 0x5493000e  bnel        $a0, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x2EBF84u;
    {
        const bool branch_taken_0x2ebf84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        if (branch_taken_0x2ebf84) {
            ctx->pc = 0x2EBF88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBF84u;
            // 0x2ebf88: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EBFC0u;
            goto label_2ebfc0;
        }
    }
    ctx->pc = 0x2EBF8Cu;
    // 0x2ebf8c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ebf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ebf90: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2ebf90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ebf94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBF94u;
    {
        const bool branch_taken_0x2ebf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebf94) {
            ctx->pc = 0x2EBFA4u;
            goto label_2ebfa4;
        }
    }
    ctx->pc = 0x2EBF9Cu;
    // 0x2ebf9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBF9Cu;
    {
        const bool branch_taken_0x2ebf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBF9Cu;
            // 0x2ebfa0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf9c) {
            ctx->pc = 0x2EBFB8u;
            goto label_2ebfb8;
        }
    }
    ctx->pc = 0x2EBFA4u;
label_2ebfa4:
    // 0x2ebfa4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ebfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ebfa8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2ebfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2ebfac: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x2ebfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x2ebfb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ebfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ebfb4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2ebfb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ebfb8:
    // 0x2ebfb8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2EBFB8u;
    {
        const bool branch_taken_0x2ebfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebfb8) {
            ctx->pc = 0x2EC0ECu;
            goto label_2ec0ec;
        }
    }
    ctx->pc = 0x2EBFC0u;
label_2ebfc0:
    // 0x2ebfc0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2ebfc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ebfc4: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2EBFC4u;
    {
        const bool branch_taken_0x2ebfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebfc4) {
            ctx->pc = 0x2EBF84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ebf84;
        }
    }
    ctx->pc = 0x2EBFCCu;
    // 0x2ebfcc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ebfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ebfd0: 0x2622023  subu        $a0, $s3, $v0
    ctx->pc = 0x2ebfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2ebfd4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ebfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ebfd8: 0x94430f00  lhu         $v1, 0xF00($v0)
    ctx->pc = 0x2ebfd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3840)));
    // 0x2ebfdc: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EBFDCu;
    {
        const bool branch_taken_0x2ebfdc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2EBFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBFDCu;
            // 0x2ebfe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebfdc) {
            ctx->pc = 0x2EC028u;
            goto label_2ec028;
        }
    }
    ctx->pc = 0x2EBFE4u;
label_2ebfe4:
    // 0x2ebfe4: 0x54a4000d  bnel        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EBFE4u;
    {
        const bool branch_taken_0x2ebfe4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ebfe4) {
            ctx->pc = 0x2EBFE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBFE4u;
            // 0x2ebfe8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EC01Cu;
            goto label_2ec01c;
        }
    }
    ctx->pc = 0x2EBFECu;
    // 0x2ebfec: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2ebfecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ebff0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBFF0u;
    {
        const bool branch_taken_0x2ebff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebff0) {
            ctx->pc = 0x2EC000u;
            goto label_2ec000;
        }
    }
    ctx->pc = 0x2EBFF8u;
    // 0x2ebff8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBFF8u;
    {
        const bool branch_taken_0x2ebff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBFF8u;
            // 0x2ebffc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebff8) {
            ctx->pc = 0x2EC014u;
            goto label_2ec014;
        }
    }
    ctx->pc = 0x2EC000u;
label_2ec000:
    // 0x2ec000: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec004: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ec004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ec008: 0x244210b0  addiu       $v0, $v0, 0x10B0
    ctx->pc = 0x2ec008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2ec00c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec010: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2ec010u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec014:
    // 0x2ec014: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2EC014u;
    {
        const bool branch_taken_0x2ec014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec014) {
            ctx->pc = 0x2EC0ECu;
            goto label_2ec0ec;
        }
    }
    ctx->pc = 0x2EC01Cu;
label_2ec01c:
    // 0x2ec01c: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2ec01cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ec020: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2EC020u;
    {
        const bool branch_taken_0x2ec020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec020) {
            ctx->pc = 0x2EBFE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ebfe4;
        }
    }
    ctx->pc = 0x2EC028u;
label_2ec028:
    // 0x2ec028: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ec028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ec02c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2ec02cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ec030: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec034: 0x94430f08  lhu         $v1, 0xF08($v0)
    ctx->pc = 0x2ec034u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3848)));
    // 0x2ec038: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EC038u;
    {
        const bool branch_taken_0x2ec038 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2EC03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC038u;
            // 0x2ec03c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec038) {
            ctx->pc = 0x2EC088u;
            goto label_2ec088;
        }
    }
    ctx->pc = 0x2EC040u;
label_2ec040:
    // 0x2ec040: 0x54a4000d  bnel        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EC040u;
    {
        const bool branch_taken_0x2ec040 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ec040) {
            ctx->pc = 0x2EC044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC040u;
            // 0x2ec044: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EC078u;
            goto label_2ec078;
        }
    }
    ctx->pc = 0x2EC048u;
    // 0x2ec048: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2ec048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ec04c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC04Cu;
    {
        const bool branch_taken_0x2ec04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec04c) {
            ctx->pc = 0x2EC05Cu;
            goto label_2ec05c;
        }
    }
    ctx->pc = 0x2EC054u;
    // 0x2ec054: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC054u;
    {
        const bool branch_taken_0x2ec054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC054u;
            // 0x2ec058: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec054) {
            ctx->pc = 0x2EC070u;
            goto label_2ec070;
        }
    }
    ctx->pc = 0x2EC05Cu;
label_2ec05c:
    // 0x2ec05c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec060: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ec060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ec064: 0x24421240  addiu       $v0, $v0, 0x1240
    ctx->pc = 0x2ec064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2ec068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec06c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2ec06cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec070:
    // 0x2ec070: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2EC070u;
    {
        const bool branch_taken_0x2ec070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec070) {
            ctx->pc = 0x2EC0ECu;
            goto label_2ec0ec;
        }
    }
    ctx->pc = 0x2EC078u;
label_2ec078:
    // 0x2ec078: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2ec078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ec07c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2EC07Cu;
    {
        const bool branch_taken_0x2ec07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec07c) {
            ctx->pc = 0x2EC040u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec040;
        }
    }
    ctx->pc = 0x2EC084u;
    // 0x2ec084: 0x0  nop
    ctx->pc = 0x2ec084u;
    // NOP
label_2ec088:
    // 0x2ec088: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ec088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ec08c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2ec08cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ec090: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec094: 0x94430f10  lhu         $v1, 0xF10($v0)
    ctx->pc = 0x2ec094u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3856)));
    // 0x2ec098: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EC098u;
    {
        const bool branch_taken_0x2ec098 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2EC09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC098u;
            // 0x2ec09c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec098) {
            ctx->pc = 0x2EC0E8u;
            goto label_2ec0e8;
        }
    }
    ctx->pc = 0x2EC0A0u;
label_2ec0a0:
    // 0x2ec0a0: 0x54a4000d  bnel        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EC0A0u;
    {
        const bool branch_taken_0x2ec0a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ec0a0) {
            ctx->pc = 0x2EC0A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC0A0u;
            // 0x2ec0a4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EC0D8u;
            goto label_2ec0d8;
        }
    }
    ctx->pc = 0x2EC0A8u;
    // 0x2ec0a8: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2ec0a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ec0ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC0ACu;
    {
        const bool branch_taken_0x2ec0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec0ac) {
            ctx->pc = 0x2EC0BCu;
            goto label_2ec0bc;
        }
    }
    ctx->pc = 0x2EC0B4u;
    // 0x2ec0b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC0B4u;
    {
        const bool branch_taken_0x2ec0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC0B4u;
            // 0x2ec0b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec0b4) {
            ctx->pc = 0x2EC0D0u;
            goto label_2ec0d0;
        }
    }
    ctx->pc = 0x2EC0BCu;
label_2ec0bc:
    // 0x2ec0bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec0c0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ec0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ec0c4: 0x24421310  addiu       $v0, $v0, 0x1310
    ctx->pc = 0x2ec0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4880));
    // 0x2ec0c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec0cc: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2ec0ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec0d0:
    // 0x2ec0d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC0D0u;
    {
        const bool branch_taken_0x2ec0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec0d0) {
            ctx->pc = 0x2EC0ECu;
            goto label_2ec0ec;
        }
    }
    ctx->pc = 0x2EC0D8u;
label_2ec0d8:
    // 0x2ec0d8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2ec0d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ec0dc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2EC0DCu;
    {
        const bool branch_taken_0x2ec0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec0dc) {
            ctx->pc = 0x2EC0A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec0a0;
        }
    }
    ctx->pc = 0x2EC0E4u;
    // 0x2ec0e4: 0x0  nop
    ctx->pc = 0x2ec0e4u;
    // NOP
label_2ec0e8:
    // 0x2ec0e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ec0e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec0ec:
    // 0x2ec0ec: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2EC0ECu;
    {
        const bool branch_taken_0x2ec0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec0ec) {
            ctx->pc = 0x2EC218u;
            goto label_2ec218;
        }
    }
    ctx->pc = 0x2EC0F4u;
label_2ec0f4:
    // 0x2ec0f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec0f8: 0x94420ef8  lhu         $v0, 0xEF8($v0)
    ctx->pc = 0x2ec0f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3832)));
    // 0x2ec0fc: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2ec0fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ec100: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC100u;
    {
        const bool branch_taken_0x2ec100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec100) {
            ctx->pc = 0x2EC110u;
            goto label_2ec110;
        }
    }
    ctx->pc = 0x2EC108u;
    // 0x2ec108: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC108u;
    {
        const bool branch_taken_0x2ec108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec108) {
            ctx->pc = 0x2EC124u;
            goto label_2ec124;
        }
    }
    ctx->pc = 0x2EC110u;
label_2ec110:
    // 0x2ec110: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec114: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2ec114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2ec118: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x2ec118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x2ec11c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec120: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2ec120u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec124:
    // 0x2ec124: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2EC124u;
    {
        const bool branch_taken_0x2ec124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec124) {
            ctx->pc = 0x2EC218u;
            goto label_2ec218;
        }
    }
    ctx->pc = 0x2EC12Cu;
label_2ec12c:
    // 0x2ec12c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ec12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ec130: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec134: 0x94630ef8  lhu         $v1, 0xEF8($v1)
    ctx->pc = 0x2ec134u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3832)));
    // 0x2ec138: 0x94420f00  lhu         $v0, 0xF00($v0)
    ctx->pc = 0x2ec138u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3840)));
    // 0x2ec13c: 0x2631823  subu        $v1, $s3, $v1
    ctx->pc = 0x2ec13cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2ec140: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2ec140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ec144: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC144u;
    {
        const bool branch_taken_0x2ec144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec144) {
            ctx->pc = 0x2EC154u;
            goto label_2ec154;
        }
    }
    ctx->pc = 0x2EC14Cu;
    // 0x2ec14c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC14Cu;
    {
        const bool branch_taken_0x2ec14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec14c) {
            ctx->pc = 0x2EC168u;
            goto label_2ec168;
        }
    }
    ctx->pc = 0x2EC154u;
label_2ec154:
    // 0x2ec154: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec158: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ec158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ec15c: 0x244210b0  addiu       $v0, $v0, 0x10B0
    ctx->pc = 0x2ec15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2ec160: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec164: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2ec164u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec168:
    // 0x2ec168: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2EC168u;
    {
        const bool branch_taken_0x2ec168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec168) {
            ctx->pc = 0x2EC218u;
            goto label_2ec218;
        }
    }
    ctx->pc = 0x2EC170u;
label_2ec170:
    // 0x2ec170: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec174: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ec174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ec178: 0x94440ef8  lhu         $a0, 0xEF8($v0)
    ctx->pc = 0x2ec178u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3832)));
    // 0x2ec17c: 0x94630f00  lhu         $v1, 0xF00($v1)
    ctx->pc = 0x2ec17cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3840)));
    // 0x2ec180: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec184: 0x94420f08  lhu         $v0, 0xF08($v0)
    ctx->pc = 0x2ec184u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3848)));
    // 0x2ec188: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ec188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ec18c: 0x2631823  subu        $v1, $s3, $v1
    ctx->pc = 0x2ec18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2ec190: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2ec190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ec194: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC194u;
    {
        const bool branch_taken_0x2ec194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec194) {
            ctx->pc = 0x2EC1A4u;
            goto label_2ec1a4;
        }
    }
    ctx->pc = 0x2EC19Cu;
    // 0x2ec19c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC19Cu;
    {
        const bool branch_taken_0x2ec19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec19c) {
            ctx->pc = 0x2EC1B8u;
            goto label_2ec1b8;
        }
    }
    ctx->pc = 0x2EC1A4u;
label_2ec1a4:
    // 0x2ec1a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec1a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ec1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ec1ac: 0x24421240  addiu       $v0, $v0, 0x1240
    ctx->pc = 0x2ec1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2ec1b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec1b4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2ec1b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec1b8:
    // 0x2ec1b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2EC1B8u;
    {
        const bool branch_taken_0x2ec1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec1b8) {
            ctx->pc = 0x2EC218u;
            goto label_2ec218;
        }
    }
    ctx->pc = 0x2EC1C0u;
label_2ec1c0:
    // 0x2ec1c0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ec1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ec1c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec1c8: 0x94650ef8  lhu         $a1, 0xEF8($v1)
    ctx->pc = 0x2ec1c8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3832)));
    // 0x2ec1cc: 0x94440f00  lhu         $a0, 0xF00($v0)
    ctx->pc = 0x2ec1ccu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3840)));
    // 0x2ec1d0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ec1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ec1d4: 0x94630f08  lhu         $v1, 0xF08($v1)
    ctx->pc = 0x2ec1d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3848)));
    // 0x2ec1d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec1dc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2ec1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2ec1e0: 0x94420f10  lhu         $v0, 0xF10($v0)
    ctx->pc = 0x2ec1e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3856)));
    // 0x2ec1e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ec1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ec1e8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2ec1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ec1ec: 0x2631823  subu        $v1, $s3, $v1
    ctx->pc = 0x2ec1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2ec1f0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2ec1f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ec1f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC1F4u;
    {
        const bool branch_taken_0x2ec1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec1f4) {
            ctx->pc = 0x2EC204u;
            goto label_2ec204;
        }
    }
    ctx->pc = 0x2EC1FCu;
    // 0x2ec1fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC1FCu;
    {
        const bool branch_taken_0x2ec1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec1fc) {
            ctx->pc = 0x2EC218u;
            goto label_2ec218;
        }
    }
    ctx->pc = 0x2EC204u;
label_2ec204:
    // 0x2ec204: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec208: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ec208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ec20c: 0x24421310  addiu       $v0, $v0, 0x1310
    ctx->pc = 0x2ec20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4880));
    // 0x2ec210: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec214: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2ec214u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec218:
    // 0x2ec218: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC218u;
    {
        const bool branch_taken_0x2ec218 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec218) {
            ctx->pc = 0x2EC228u;
            goto label_2ec228;
        }
    }
    ctx->pc = 0x2EC220u;
    // 0x2ec220: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2EC220u;
    {
        const bool branch_taken_0x2ec220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC220u;
            // 0x2ec224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec220) {
            ctx->pc = 0x2EC364u;
            goto label_2ec364;
        }
    }
    ctx->pc = 0x2EC228u;
label_2ec228:
    // 0x2ec228: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec22c: 0x944314a0  lhu         $v1, 0x14A0($v0)
    ctx->pc = 0x2ec22cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 5280)));
    // 0x2ec230: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ec230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ec234: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC234u;
    {
        const bool branch_taken_0x2ec234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EC238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC234u;
            // 0x2ec238: 0xa7a0008e  sh          $zero, 0x8E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 142), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec234) {
            ctx->pc = 0x2EC244u;
            goto label_2ec244;
        }
    }
    ctx->pc = 0x2EC23Cu;
    // 0x2ec23c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec240: 0xa44014a0  sh          $zero, 0x14A0($v0)
    ctx->pc = 0x2ec240u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5280), (uint16_t)GPR_U32(ctx, 0));
label_2ec244:
    // 0x2ec244: 0xc040180  jal         func_100600
    ctx->pc = 0x2EC244u;
    SET_GPR_U32(ctx, 31, 0x2EC24Cu);
    ctx->pc = 0x2EC248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC244u;
            // 0x2ec248: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC24Cu; }
        if (ctx->pc != 0x2EC24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC24Cu; }
        if (ctx->pc != 0x2EC24Cu) { return; }
    }
    ctx->pc = 0x2EC24Cu;
label_2ec24c:
    // 0x2ec24c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2EC24Cu;
    {
        const bool branch_taken_0x2ec24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC24Cu;
            // 0x2ec250: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec24c) {
            ctx->pc = 0x2EC32Cu;
            goto label_2ec32c;
        }
    }
    ctx->pc = 0x2EC254u;
    // 0x2ec254: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec25c: 0x8c5014d8  lw          $s0, 0x14D8($v0)
    ctx->pc = 0x2ec25cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ec260: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2ec260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ec264: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ec264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec268: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2ec268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2ec26c: 0xc0ba470  jal         func_2E91C0
    ctx->pc = 0x2EC26Cu;
    SET_GPR_U32(ctx, 31, 0x2EC274u);
    ctx->pc = 0x2EC270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC26Cu;
            // 0x2ec270: 0x3445f76e  ori         $a1, $v0, 0xF76E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63342);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E91C0u;
    if (runtime->hasFunction(0x2E91C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E91C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC274u; }
        if (ctx->pc != 0x2EC274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E91C0_0x2e91c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC274u; }
        if (ctx->pc != 0x2EC274u) { return; }
    }
    ctx->pc = 0x2EC274u;
label_2ec274:
    // 0x2ec274: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ec274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ec278: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ec278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec27c: 0x244230a0  addiu       $v0, $v0, 0x30A0
    ctx->pc = 0x2ec27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12448));
    // 0x2ec280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec284: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ec284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2ec288: 0x27a6008e  addiu       $a2, $sp, 0x8E
    ctx->pc = 0x2ec288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 142));
    // 0x2ec28c: 0xa2340078  sb          $s4, 0x78($s1)
    ctx->pc = 0x2ec28cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 20));
    // 0x2ec290: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ec290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ec294: 0xa2200079  sb          $zero, 0x79($s1)
    ctx->pc = 0x2ec294u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 121), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec298: 0xa633007a  sh          $s3, 0x7A($s1)
    ctx->pc = 0x2ec298u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 19));
    // 0x2ec29c: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x2ec29cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x2ec2a0: 0xa2200084  sb          $zero, 0x84($s1)
    ctx->pc = 0x2ec2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec2a4: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x2ec2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
    // 0x2ec2a8: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x2ec2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
    // 0x2ec2ac: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x2ec2acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x2ec2b0: 0xae2000ec  sw          $zero, 0xEC($s1)
    ctx->pc = 0x2ec2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 0));
    // 0x2ec2b4: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x2ec2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x2ec2b8: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x2ec2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x2ec2bc: 0xc0ba43c  jal         func_2E90F0
    ctx->pc = 0x2EC2BCu;
    SET_GPR_U32(ctx, 31, 0x2EC2C4u);
    ctx->pc = 0x2EC2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC2BCu;
            // 0x2ec2c0: 0xae3000f8  sw          $s0, 0xF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E90F0u;
    if (runtime->hasFunction(0x2E90F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E90F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC2C4u; }
        if (ctx->pc != 0x2EC2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E90F0_0x2e90f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC2C4u; }
        if (ctx->pc != 0x2EC2C4u) { return; }
    }
    ctx->pc = 0x2EC2C4u;
label_2ec2c4:
    // 0x2ec2c4: 0xc0ba1e8  jal         func_2E87A0
    ctx->pc = 0x2EC2C4u;
    SET_GPR_U32(ctx, 31, 0x2EC2CCu);
    ctx->pc = 0x2EC2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC2C4u;
            // 0x2ec2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E87A0u;
    if (runtime->hasFunction(0x2E87A0u)) {
        auto targetFn = runtime->lookupFunction(0x2E87A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC2CCu; }
        if (ctx->pc != 0x2EC2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E87A0_0x2e87a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC2CCu; }
        if (ctx->pc != 0x2EC2CCu) { return; }
    }
    ctx->pc = 0x2EC2CCu;
label_2ec2cc:
    // 0x2ec2cc: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x2ec2ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x2ec2d0: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x2ec2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x2ec2d4: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x2ec2d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x2ec2d8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2EC2D8u;
    SET_GPR_U32(ctx, 31, 0x2EC2E0u);
    ctx->pc = 0x2EC2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC2D8u;
            // 0x2ec2dc: 0x4600bb86  mov.s       $f14, $f23 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC2E0u; }
        if (ctx->pc != 0x2EC2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC2E0u; }
        if (ctx->pc != 0x2EC2E0u) { return; }
    }
    ctx->pc = 0x2EC2E0u;
label_2ec2e0:
    // 0x2ec2e0: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x2ec2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x2ec2e4: 0x262300d0  addiu       $v1, $s1, 0xD0
    ctx->pc = 0x2ec2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x2ec2e8: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x2ec2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x2ec2ec: 0xae2300ec  sw          $v1, 0xEC($s1)
    ctx->pc = 0x2ec2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 3));
    // 0x2ec2f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ec2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ec2f4: 0x0  nop
    ctx->pc = 0x2ec2f4u;
    // NOP
    // 0x2ec2f8: 0x46161002  mul.s       $f0, $f2, $f22
    ctx->pc = 0x2ec2f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x2ec2fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ec2fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ec300: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2ec300u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2ec304: 0x46151042  mul.s       $f1, $f2, $f21
    ctx->pc = 0x2ec304u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x2ec308: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x2ec308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2ec30c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ec30cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ec310: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ec310u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ec314: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2ec314u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ec318: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2ec318u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2ec31c: 0xc04f308  jal         func_13CC20
    ctx->pc = 0x2EC31Cu;
    SET_GPR_U32(ctx, 31, 0x2EC324u);
    ctx->pc = 0x2EC320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC31Cu;
            // 0x2ec320: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CC20u;
    if (runtime->hasFunction(0x13CC20u)) {
        auto targetFn = runtime->lookupFunction(0x13CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC324u; }
        if (ctx->pc != 0x2EC324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CC20_0x13cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC324u; }
        if (ctx->pc != 0x2EC324u) { return; }
    }
    ctx->pc = 0x2EC324u;
label_2ec324:
    // 0x2ec324: 0x26220090  addiu       $v0, $s1, 0x90
    ctx->pc = 0x2ec324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2ec328: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x2ec328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_2ec32c:
    // 0x2ec32c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec330: 0x8c4214b0  lw          $v0, 0x14B0($v0)
    ctx->pc = 0x2ec330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5296)));
    // 0x2ec334: 0x2c410005  sltiu       $at, $v0, 0x5
    ctx->pc = 0x2ec334u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ec338: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2EC338u;
    {
        const bool branch_taken_0x2ec338 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec338) {
            ctx->pc = 0x2EC33Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC338u;
            // 0x2ec33c: 0x97a2008e  lhu         $v0, 0x8E($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 142)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EC364u;
            goto label_2ec364;
        }
    }
    ctx->pc = 0x2EC340u;
    // 0x2ec340: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2ec340u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ec344: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2ec344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ec348: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2ec348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2ec34c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ec34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ec350: 0x248414c0  addiu       $a0, $a0, 0x14C0
    ctx->pc = 0x2ec350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5312));
    // 0x2ec354: 0xac4314b0  sw          $v1, 0x14B0($v0)
    ctx->pc = 0x2ec354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5296), GPR_U32(ctx, 3));
    // 0x2ec358: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2ec358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ec35c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2ec35cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2ec360: 0x97a2008e  lhu         $v0, 0x8E($sp)
    ctx->pc = 0x2ec360u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 142)));
label_2ec364:
    // 0x2ec364: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ec364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ec368: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x2ec368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2ec36c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2ec36cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ec370: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x2ec370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2ec374: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2ec374u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ec378: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2ec378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2ec37c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2ec37cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ec380: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2ec380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ec384: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ec384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ec388: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2ec388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ec38c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ec38cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec390: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ec390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ec394: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC394u;
            // 0x2ec398: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EC39Cu;
    // 0x2ec39c: 0x0  nop
    ctx->pc = 0x2ec39cu;
    // NOP
}
