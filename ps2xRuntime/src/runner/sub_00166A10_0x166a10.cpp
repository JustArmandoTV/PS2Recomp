#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00166A10
// Address: 0x166a10 - 0x166b10
void sub_00166A10_0x166a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166A10_0x166a10");
#endif

    ctx->pc = 0x166a10u;

    // 0x166a10: 0x28a50010  slti        $a1, $a1, 0x10
    ctx->pc = 0x166a10u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x166a14: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x166a14u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a18: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x166a18u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166a1c: 0x14a0003a  bnez        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x166A1Cu;
    {
        const bool branch_taken_0x166a1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x166A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166A1Cu;
            // 0x166a20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a1c) {
            ctx->pc = 0x166B08u;
            goto label_166b08;
        }
    }
    ctx->pc = 0x166A24u;
    // 0x166a24: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x166a24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x166a28: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x166a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x166a2c: 0x91840001  lbu         $a0, 0x1($t4)
    ctx->pc = 0x166a2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x166a30: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x166a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x166a34: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x166a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x166a38: 0x14850033  bne         $a0, $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x166A38u;
    {
        const bool branch_taken_0x166a38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x166A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166A38u;
            // 0x166a3c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a38) {
            ctx->pc = 0x166B08u;
            goto label_166b08;
        }
    }
    ctx->pc = 0x166A40u;
    // 0x166a40: 0x91830002  lbu         $v1, 0x2($t4)
    ctx->pc = 0x166a40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x166a44: 0x91820003  lbu         $v0, 0x3($t4)
    ctx->pc = 0x166a44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
    // 0x166a48: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x166a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x166a4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166a50: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x166a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x166a54: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x166a54u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x166a58: 0x91830004  lbu         $v1, 0x4($t4)
    ctx->pc = 0x166a58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x166a5c: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x166a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x166a60: 0x91820005  lbu         $v0, 0x5($t4)
    ctx->pc = 0x166a60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 5)));
    // 0x166a64: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x166a64u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x166a68: 0x91830006  lbu         $v1, 0x6($t4)
    ctx->pc = 0x166a68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 6)));
    // 0x166a6c: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x166a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x166a70: 0x91840007  lbu         $a0, 0x7($t4)
    ctx->pc = 0x166a70u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 7)));
    // 0x166a74: 0xa1440000  sb          $a0, 0x0($t2)
    ctx->pc = 0x166a74u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x166a78: 0x91820008  lbu         $v0, 0x8($t4)
    ctx->pc = 0x166a78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x166a7c: 0x9183000a  lbu         $v1, 0xA($t4)
    ctx->pc = 0x166a7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 10)));
    // 0x166a80: 0x91840009  lbu         $a0, 0x9($t4)
    ctx->pc = 0x166a80u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 9)));
    // 0x166a84: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x166a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x166a88: 0x9185000b  lbu         $a1, 0xB($t4)
    ctx->pc = 0x166a88u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 11)));
    // 0x166a8c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x166a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x166a90: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x166a90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x166a94: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x166a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x166a98: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x166a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x166a9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166aa0: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x166aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x166aa4: 0x9183000d  lbu         $v1, 0xD($t4)
    ctx->pc = 0x166aa4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 13)));
    // 0x166aa8: 0x9182000c  lbu         $v0, 0xC($t4)
    ctx->pc = 0x166aa8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x166aac: 0x9184000e  lbu         $a0, 0xE($t4)
    ctx->pc = 0x166aacu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 14)));
    // 0x166ab0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x166ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x166ab4: 0x9185000f  lbu         $a1, 0xF($t4)
    ctx->pc = 0x166ab4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 15)));
    // 0x166ab8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x166ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x166abc: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x166abcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x166ac0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x166ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x166ac4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x166ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166ac8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x166ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x166acc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x166accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x166ad0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x166ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x166ad4: 0x81080000  lb          $t0, 0x0($t0)
    ctx->pc = 0x166ad4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x166ad8: 0x55000003  bnel        $t0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x166AD8u;
    {
        const bool branch_taken_0x166ad8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x166ad8) {
            ctx->pc = 0x166ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166AD8u;
            // 0x166adc: 0x81220000  lb          $v0, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166AE8u;
            goto label_166ae8;
        }
    }
    ctx->pc = 0x166AE0u;
    // 0x166ae0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x166AE0u;
    {
        const bool branch_taken_0x166ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166AE0u;
            // 0x166ae4: 0xada00000  sw          $zero, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ae0) {
            ctx->pc = 0x166B04u;
            goto label_166b04;
        }
    }
    ctx->pc = 0x166AE8u;
label_166ae8:
    // 0x166ae8: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x166AE8u;
    {
        const bool branch_taken_0x166ae8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x166ae8) {
            ctx->pc = 0x166AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166AE8u;
            // 0x166aec: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x166AF0u;
            goto label_166af0;
        }
    }
    ctx->pc = 0x166AF0u;
label_166af0:
    // 0x166af0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x166af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x166af4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x166af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x166af8: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x166af8u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x166afc: 0x1012  mflo        $v0
    ctx->pc = 0x166afcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x166b00: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x166b00u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
label_166b04:
    // 0x166b04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x166b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166b08:
    // 0x166b08: 0x3e00008  jr          $ra
    ctx->pc = 0x166B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166B10u;
}
