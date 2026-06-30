#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00166B90
// Address: 0x166b90 - 0x166c08
void sub_00166B90_0x166b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166B90_0x166b90");
#endif

    ctx->pc = 0x166b90u;

    // 0x166b90: 0x28a50014  slti        $a1, $a1, 0x14
    ctx->pc = 0x166b90u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x166b94: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x166b94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166b98: 0x14a00019  bnez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x166B98u;
    {
        const bool branch_taken_0x166b98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x166B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166B98u;
            // 0x166b9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b98) {
            ctx->pc = 0x166C00u;
            goto label_166c00;
        }
    }
    ctx->pc = 0x166BA0u;
    // 0x166ba0: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x166ba0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x166ba4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x166ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x166ba8: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x166ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x166bac: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x166bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x166bb0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x166bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x166bb4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x166bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x166bb8: 0x14650011  bne         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x166BB8u;
    {
        const bool branch_taken_0x166bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x166BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166BB8u;
            // 0x166bbc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166bb8) {
            ctx->pc = 0x166C00u;
            goto label_166c00;
        }
    }
    ctx->pc = 0x166BC0u;
    // 0x166bc0: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x166bc0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x166bc4: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x166bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x166bc8: 0x91040003  lbu         $a0, 0x3($t0)
    ctx->pc = 0x166bc8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x166bcc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x166bccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x166bd0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x166bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x166bd4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x166bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x166bd8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x166bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x166bdc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x166bdcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x166be0: 0x28840010  slti        $a0, $a0, 0x10
    ctx->pc = 0x166be0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x166be4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x166BE4u;
    {
        const bool branch_taken_0x166be4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x166BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166BE4u;
            // 0x166be8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166be4) {
            ctx->pc = 0x166C00u;
            goto label_166c00;
        }
    }
    ctx->pc = 0x166BECu;
    // 0x166bec: 0x91040012  lbu         $a0, 0x12($t0)
    ctx->pc = 0x166becu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x166bf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x166bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166bf4: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x166bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x166bf8: 0x91030013  lbu         $v1, 0x13($t0)
    ctx->pc = 0x166bf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 19)));
    // 0x166bfc: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x166bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_166c00:
    // 0x166c00: 0x3e00008  jr          $ra
    ctx->pc = 0x166C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166C08u;
}
