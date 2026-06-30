#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00166B10
// Address: 0x166b10 - 0x166b90
void sub_00166B10_0x166b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166B10_0x166b10");
#endif

    ctx->pc = 0x166b10u;

    // 0x166b10: 0x28a50012  slti        $a1, $a1, 0x12
    ctx->pc = 0x166b10u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x166b14: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x166b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166b18: 0x14a0001b  bnez        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x166B18u;
    {
        const bool branch_taken_0x166b18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x166B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166B18u;
            // 0x166b1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b18) {
            ctx->pc = 0x166B88u;
            goto label_166b88;
        }
    }
    ctx->pc = 0x166B20u;
    // 0x166b20: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x166b20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x166b24: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x166b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x166b28: 0x2408ff00  addiu       $t0, $zero, -0x100
    ctx->pc = 0x166b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x166b2c: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x166b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x166b30: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x166b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x166b34: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x166b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x166b38: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x166b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x166b3c: 0x14650012  bne         $v1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x166B3Cu;
    {
        const bool branch_taken_0x166b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x166B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166B3Cu;
            // 0x166b40: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b3c) {
            ctx->pc = 0x166B88u;
            goto label_166b88;
        }
    }
    ctx->pc = 0x166B44u;
    // 0x166b44: 0x94e40002  lhu         $a0, 0x2($a3)
    ctx->pc = 0x166b44u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x166b48: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x166b48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x166b4c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x166b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x166b50: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x166b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x166b54: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x166b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x166b58: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x166b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x166b5c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x166b5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x166b60: 0x2863000e  slti        $v1, $v1, 0xE
    ctx->pc = 0x166b60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x166b64: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x166B64u;
    {
        const bool branch_taken_0x166b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x166B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166B64u;
            // 0x166b68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b64) {
            ctx->pc = 0x166B88u;
            goto label_166b88;
        }
    }
    ctx->pc = 0x166B6Cu;
    // 0x166b6c: 0x94e40010  lhu         $a0, 0x10($a3)
    ctx->pc = 0x166b6cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x166b70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x166b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166b74: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x166b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x166b78: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x166b78u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x166b7c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x166b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x166b80: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x166b80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x166b84: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x166b84u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_166b88:
    // 0x166b88: 0x3e00008  jr          $ra
    ctx->pc = 0x166B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166B90u;
}
