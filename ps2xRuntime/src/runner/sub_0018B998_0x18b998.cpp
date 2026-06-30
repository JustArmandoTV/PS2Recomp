#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018B998
// Address: 0x18b998 - 0x18bab8
void sub_0018B998_0x18b998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B998_0x18b998");
#endif

    ctx->pc = 0x18b998u;

    // 0x18b998: 0x248b0180  addiu       $t3, $a0, 0x180
    ctx->pc = 0x18b998u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x18b99c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b9a0: 0x8d620430  lw          $v0, 0x430($t3)
    ctx->pc = 0x18b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1072)));
    // 0x18b9a4: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x18b9a4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b9a8: 0x8d640308  lw          $a0, 0x308($t3)
    ctx->pc = 0x18b9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 776)));
    // 0x18b9ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b9b0: 0xad630420  sw          $v1, 0x420($t3)
    ctx->pc = 0x18b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1056), GPR_U32(ctx, 3));
    // 0x18b9b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B9B4u;
    {
        const bool branch_taken_0x18b9b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B9B4u;
            // 0x18b9b8: 0xad620430  sw          $v0, 0x430($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 1072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b9b4) {
            ctx->pc = 0x18B9C8u;
            goto label_18b9c8;
        }
    }
    ctx->pc = 0x18B9BCu;
    // 0x18b9bc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x18b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18b9c0: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B9C0u;
    {
        const bool branch_taken_0x18b9c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x18b9c0) {
            ctx->pc = 0x18B9C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B9C0u;
            // 0x18b9c4: 0x8d620494  lw          $v0, 0x494($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B9D8u;
            goto label_18b9d8;
        }
    }
    ctx->pc = 0x18B9C8u;
label_18b9c8:
    // 0x18b9c8: 0x8d62030c  lw          $v0, 0x30C($t3)
    ctx->pc = 0x18b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 780)));
    // 0x18b9cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B9CCu;
    {
        const bool branch_taken_0x18b9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B9CCu;
            // 0x18b9d0: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b9cc) {
            ctx->pc = 0x18B9E4u;
            goto label_18b9e4;
        }
    }
    ctx->pc = 0x18B9D4u;
    // 0x18b9d4: 0x8d620494  lw          $v0, 0x494($t3)
    ctx->pc = 0x18b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
label_18b9d8:
    // 0x18b9d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b9dc: 0xad620494  sw          $v0, 0x494($t3)
    ctx->pc = 0x18b9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1172), GPR_U32(ctx, 2));
    // 0x18b9e0: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x18b9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_18b9e4:
    // 0x18b9e4: 0x1831824  and         $v1, $t4, $v1
    ctx->pc = 0x18b9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x18b9e8: 0x1833023  subu        $a2, $t4, $v1
    ctx->pc = 0x18b9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x18b9ec: 0x806a0000  lb          $t2, 0x0($v1)
    ctx->pc = 0x18b9ecu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18b9f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18b9f4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x18b9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18b9f8: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x18b9f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18b9fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18ba00: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x18ba00u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ba04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18ba04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18ba08: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x18ba08u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ba0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18ba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18ba10: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x18ba10u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ba14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18ba18: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x18ba18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ba1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18ba20: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x18ba20u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x18ba24: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x18ba24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x18ba28: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x18ba28u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x18ba2c: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x18ba2cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ba30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18ba34: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x18ba34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x18ba38: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x18ba38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ba3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18ba40: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x18ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x18ba44: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x18ba44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x18ba48: 0x6c1823  subu        $v1, $v1, $t4
    ctx->pc = 0x18ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x18ba4c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x18ba4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x18ba50: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18ba50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18ba54: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x18ba54u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x18ba58: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x18ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x18ba5c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x18ba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x18ba60: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x18ba60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x18ba64: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x18ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x18ba68: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x18ba68u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x18ba6c: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x18ba6cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x18ba70: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x18ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x18ba74: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x18ba74u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x18ba78: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x18ba78u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x18ba7c: 0x64823  negu        $t1, $a2
    ctx->pc = 0x18ba7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x18ba80: 0x1485025  or          $t2, $t2, $t0
    ctx->pc = 0x18ba80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x18ba84: 0x1242006  srlv        $a0, $a0, $t1
    ctx->pc = 0x18ba84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 9) & 0x1F));
    // 0x18ba88: 0xca5004  sllv        $t2, $t2, $a2
    ctx->pc = 0x18ba88u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x18ba8c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x18ba8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x18ba90: 0x1441825  or          $v1, $t2, $a0
    ctx->pc = 0x18ba90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x18ba94: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x18BA94u;
    {
        const bool branch_taken_0x18ba94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BA94u;
            // 0x18ba98: 0x1821021  addu        $v0, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba94) {
            ctx->pc = 0x18BAA8u;
            goto label_18baa8;
        }
    }
    ctx->pc = 0x18BA9Cu;
    // 0x18ba9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18BA9Cu;
    {
        const bool branch_taken_0x18ba9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BA9Cu;
            // 0x18baa0: 0xad63002c  sw          $v1, 0x2C($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba9c) {
            ctx->pc = 0x18BAACu;
            goto label_18baac;
        }
    }
    ctx->pc = 0x18BAA4u;
    // 0x18baa4: 0x0  nop
    ctx->pc = 0x18baa4u;
    // NOP
label_18baa8:
    // 0x18baa8: 0xad6a002c  sw          $t2, 0x2C($t3)
    ctx->pc = 0x18baa8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 44), GPR_U32(ctx, 10));
label_18baac:
    // 0x18baac: 0xad60030c  sw          $zero, 0x30C($t3)
    ctx->pc = 0x18baacu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 780), GPR_U32(ctx, 0));
    // 0x18bab0: 0x3e00008  jr          $ra
    ctx->pc = 0x18BAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BAB0u;
            // 0x18bab4: 0xad600308  sw          $zero, 0x308($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 776), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18BAB8u;
}
