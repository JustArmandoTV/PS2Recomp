#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D9CE0
// Address: 0x2d9ce0 - 0x2d9d90
void sub_002D9CE0_0x2d9ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9CE0_0x2d9ce0");
#endif

    switch (ctx->pc) {
        case 0x2d9d18u: goto label_2d9d18;
        case 0x2d9d5cu: goto label_2d9d5c;
        case 0x2d9d78u: goto label_2d9d78;
        default: break;
    }

    ctx->pc = 0x2d9ce0u;

    // 0x2d9ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d9ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d9ce4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2d9ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2d9ce8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d9ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d9cec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d9cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d9cf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d9cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d9cf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d9cf8: 0xac8002bc  sw          $zero, 0x2BC($a0)
    ctx->pc = 0x2d9cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 700), GPR_U32(ctx, 0));
    // 0x2d9cfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d00: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2d9d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d9d04: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x2d9d04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x2d9d08: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x2d9d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x2d9d0c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2d9d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d9d10: 0xc08bf20  jal         func_22FC80
    ctx->pc = 0x2D9D10u;
    SET_GPR_U32(ctx, 31, 0x2D9D18u);
    ctx->pc = 0x2D9D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9D10u;
            // 0x2d9d14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9D18u; }
        if (ctx->pc != 0x2D9D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9D18u; }
        if (ctx->pc != 0x2D9D18u) { return; }
    }
    ctx->pc = 0x2D9D18u;
label_2d9d18:
    // 0x2d9d18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d9d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9d1c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2d9d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2d9d20: 0xa20402c4  sb          $a0, 0x2C4($s0)
    ctx->pc = 0x2d9d20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 708), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d9d24: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d9d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d9d28: 0x8c840d6c  lw          $a0, 0xD6C($a0)
    ctx->pc = 0x2d9d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3436)));
    // 0x2d9d2c: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x2d9d2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d9d30: 0x50830012  beql        $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D9D30u;
    {
        const bool branch_taken_0x2d9d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d9d30) {
            ctx->pc = 0x2D9D34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9D30u;
            // 0x2d9d34: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D9D7Cu;
            goto label_2d9d7c;
        }
    }
    ctx->pc = 0x2D9D38u;
    // 0x2d9d38: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2d9d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d9d3c: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x2d9d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x2d9d40: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x2d9d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d9d44: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d9d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d9d48: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x2d9d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2d9d4c: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2d9d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2d9d50: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2d9d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2d9d54: 0xc0a545c  jal         func_295170
    ctx->pc = 0x2D9D54u;
    SET_GPR_U32(ctx, 31, 0x2D9D5Cu);
    ctx->pc = 0x2D9D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9D54u;
            // 0x2d9d58: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9D5Cu; }
        if (ctx->pc != 0x2D9D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9D5Cu; }
        if (ctx->pc != 0x2D9D5Cu) { return; }
    }
    ctx->pc = 0x2D9D5Cu;
label_2d9d5c:
    // 0x2d9d5c: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x2d9d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
    // 0x2d9d60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d9d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d9d64: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2d9d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d9d68: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x2d9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x2d9d6c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2d9d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d9d70: 0xc08bf20  jal         func_22FC80
    ctx->pc = 0x2D9D70u;
    SET_GPR_U32(ctx, 31, 0x2D9D78u);
    ctx->pc = 0x2D9D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9D70u;
            // 0x2d9d74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9D78u; }
        if (ctx->pc != 0x2D9D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9D78u; }
        if (ctx->pc != 0x2D9D78u) { return; }
    }
    ctx->pc = 0x2D9D78u;
label_2d9d78:
    // 0x2d9d78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d9d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9d7c:
    // 0x2d9d7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d9d7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9d80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9d84: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9D84u;
            // 0x2d9d88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9D8Cu;
    // 0x2d9d8c: 0x0  nop
    ctx->pc = 0x2d9d8cu;
    // NOP
}
