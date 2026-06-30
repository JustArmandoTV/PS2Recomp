#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00165A68
// Address: 0x165a68 - 0x165c80
void sub_00165A68_0x165a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165A68_0x165a68");
#endif

    switch (ctx->pc) {
        case 0x165b88u: goto label_165b88;
        case 0x165bf0u: goto label_165bf0;
        default: break;
    }

    ctx->pc = 0x165a68u;

label_165a68:
    // 0x165a68: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x165a68u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a6c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x165a6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165a70: 0x91820007  lbu         $v0, 0x7($t4)
    ctx->pc = 0x165a70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 7)));
    // 0x165a74: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x165a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165a78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x165a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x165a7c: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x165a7cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165a80: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x165a80u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x165a84: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x165a84u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165a88: 0x91820009  lbu         $v0, 0x9($t4)
    ctx->pc = 0x165a88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 9)));
    // 0x165a8c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x165a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x165a90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x165a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x165a94: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x165a94u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x165a98: 0x9583002a  lhu         $v1, 0x2A($t4)
    ctx->pc = 0x165a98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 42)));
    // 0x165a9c: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x165a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x165aa0: 0x91840008  lbu         $a0, 0x8($t4)
    ctx->pc = 0x165aa0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x165aa4: 0x108f0018  beq         $a0, $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x165AA4u;
    {
        const bool branch_taken_0x165aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x165AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165AA4u;
            // 0x165aa8: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165aa4) {
            ctx->pc = 0x165B08u;
            goto label_165b08;
        }
    }
    ctx->pc = 0x165AACu;
    // 0x165aac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x165AACu;
    {
        const bool branch_taken_0x165aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165aac) {
            ctx->pc = 0x165AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165AACu;
            // 0x165ab0: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x165AC8u;
            goto label_165ac8;
        }
    }
    ctx->pc = 0x165AB4u;
    // 0x165ab4: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x165AB4u;
    {
        const bool branch_taken_0x165ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x165ab4) {
            ctx->pc = 0x165AB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165AB4u;
            // 0x165ab8: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165AD8u;
            goto label_165ad8;
        }
    }
    ctx->pc = 0x165ABCu;
    // 0x165abc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x165ABCu;
    {
        const bool branch_taken_0x165abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165ABCu;
            // 0x165ac0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165abc) {
            ctx->pc = 0x165B50u;
            goto label_165b50;
        }
    }
    ctx->pc = 0x165AC4u;
    // 0x165ac4: 0x0  nop
    ctx->pc = 0x165ac4u;
    // NOP
label_165ac8:
    // 0x165ac8: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x165AC8u;
    {
        const bool branch_taken_0x165ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165ac8) {
            ctx->pc = 0x165ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165AC8u;
            // 0x165acc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165B50u;
            goto label_165b50;
        }
    }
    ctx->pc = 0x165AD0u;
    // 0x165ad0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x165AD0u;
    {
        const bool branch_taken_0x165ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165AD0u;
            // 0x165ad4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ad0) {
            ctx->pc = 0x165B28u;
            goto label_165b28;
        }
    }
    ctx->pc = 0x165AD8u;
label_165ad8:
    // 0x165ad8: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x165ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x165adc: 0x81420000  lb          $v0, 0x0($t2)
    ctx->pc = 0x165adcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x165ae0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x165ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x165ae4: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x165ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x165ae8: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x165ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x165aec: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x165aecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x165af0: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x165af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x165af4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x165af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x165af8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165afc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x165AFCu;
    {
        const bool branch_taken_0x165afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165AFCu;
            // 0x165b00: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165afc) {
            ctx->pc = 0x165B48u;
            goto label_165b48;
        }
    }
    ctx->pc = 0x165B04u;
    // 0x165b04: 0x0  nop
    ctx->pc = 0x165b04u;
    // NOP
label_165b08:
    // 0x165b08: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x165b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x165b0c: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x165b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x165b10: 0x81430000  lb          $v1, 0x0($t2)
    ctx->pc = 0x165b10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x165b14: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x165b14u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x165b18: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x165b18u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x165b1c: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x165b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x165b20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x165B20u;
    {
        const bool branch_taken_0x165b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165B20u;
            // 0x165b24: 0x8d82000c  lw          $v0, 0xC($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b20) {
            ctx->pc = 0x165B48u;
            goto label_165b48;
        }
    }
    ctx->pc = 0x165B28u;
label_165b28:
    // 0x165b28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x165b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165b2c: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x165b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x165b30: 0x81420000  lb          $v0, 0x0($t2)
    ctx->pc = 0x165b30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x165b34: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x165b34u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x165b38: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x165b38u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x165b3c: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x165b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x165b40: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x165b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x165b44: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x165b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_165b48:
    // 0x165b48: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x165b48u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x165b4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x165b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_165b50:
    // 0x165b50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x165b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165b54: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x165b54u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x165b58: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x165b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x165b5c: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x165b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x165b60: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x165b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165b64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x165b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b68: 0x8d83000c  lw          $v1, 0xC($t4)
    ctx->pc = 0x165b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x165b6c: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x165b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x165b70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x165b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x165b74: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x165b74u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x165b78: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x165b78u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x165b7c: 0xa1050000  sb          $a1, 0x0($t0)
    ctx->pc = 0x165b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x165b80: 0x3e00008  jr          $ra
    ctx->pc = 0x165B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165B80u;
            // 0x165b84: 0xa0e60000  sb          $a2, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165B88u;
label_165b88:
    // 0x165b88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x165b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x165b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165b90: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x165b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x165b94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b98: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x165b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x165b9c: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x165b9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x165ba0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x165ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x165ba4: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x165ba4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x165ba8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x165ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x165bac: 0x2613000f  addiu       $s3, $s0, 0xF
    ctx->pc = 0x165bacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x165bb0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x165bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x165bb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x165bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165bb8: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x165bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x165bbc: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x165bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x165bc0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x165bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165bc4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x165bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x165bc8: 0x2603009c  addiu       $v1, $s0, 0x9C
    ctx->pc = 0x165bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x165bcc: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x165bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x165bd0: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x165bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x165bd4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x165bd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165bd8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x165bd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165bdc: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x165bdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x165be0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x165be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x165be4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x165be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x165be8: 0xc05969a  jal         func_165A68
    ctx->pc = 0x165BE8u;
    SET_GPR_U32(ctx, 31, 0x165BF0u);
    ctx->pc = 0x165BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165BE8u;
            // 0x165bec: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165A68u;
    goto label_165a68;
    ctx->pc = 0x165BF0u;
label_165bf0:
    // 0x165bf0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165BF0u;
    {
        const bool branch_taken_0x165bf0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x165bf0) {
            ctx->pc = 0x165BF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165BF0u;
            // 0x165bf4: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165C00u;
            goto label_165c00;
        }
    }
    ctx->pc = 0x165BF8u;
    // 0x165bf8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x165BF8u;
    {
        const bool branch_taken_0x165bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165BF8u;
            // 0x165bfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165bf8) {
            ctx->pc = 0x165C60u;
            goto label_165c60;
        }
    }
    ctx->pc = 0x165C00u;
label_165c00:
    // 0x165c00: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x165c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x165c04: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x165c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x165c08: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x165c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x165c0c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x165c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x165c10: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x165c10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x165c14: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x165c14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x165c18: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x165c18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x165c1c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x165c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x165c20: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x165c20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x165c24: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x165c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x165c28: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x165c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x165c2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x165c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165c30: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x165c30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x165c34: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x165c34u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x165c38: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x165c38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165c3c: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x165c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x165c40: 0xa6030098  sh          $v1, 0x98($s0)
    ctx->pc = 0x165c40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 3));
    // 0x165c44: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x165c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x165c48: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x165c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x165c4c: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x165c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
    // 0x165c50: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x165c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x165c54: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x165c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
    // 0x165c58: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x165c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x165c5c: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x165c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_165c60:
    // 0x165c60: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x165c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165c64: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x165c64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165c68: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x165c68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165c6c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x165c6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x165c70: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x165c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x165c74: 0x3e00008  jr          $ra
    ctx->pc = 0x165C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165C74u;
            // 0x165c78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165C7Cu;
    // 0x165c7c: 0x0  nop
    ctx->pc = 0x165c7cu;
    // NOP
}
