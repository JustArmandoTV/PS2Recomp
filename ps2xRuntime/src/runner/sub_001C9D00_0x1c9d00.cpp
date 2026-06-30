#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C9D00
// Address: 0x1c9d00 - 0x1ca190
void sub_001C9D00_0x1c9d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9D00_0x1c9d00");
#endif

    switch (ctx->pc) {
        case 0x1c9f78u: goto label_1c9f78;
        case 0x1ca054u: goto label_1ca054;
        case 0x1ca060u: goto label_1ca060;
        case 0x1ca0c4u: goto label_1ca0c4;
        case 0x1ca12cu: goto label_1ca12c;
        default: break;
    }

    ctx->pc = 0x1c9d00u;

    // 0x1c9d00: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1c9d00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d04: 0x3c06a000  lui         $a2, 0xA000
    ctx->pc = 0x1c9d04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40960 << 16));
    // 0x1c9d08: 0x30e5ff00  andi        $a1, $a3, 0xFF00
    ctx->pc = 0x1c9d08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x1c9d0c: 0x71a02  srl         $v1, $a3, 8
    ctx->pc = 0x1c9d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x1c9d10: 0x71602  srl         $v0, $a3, 24
    ctx->pc = 0x1c9d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x1c9d14: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1c9d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x1c9d18: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1c9d18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1c9d1c: 0x72600  sll         $a0, $a3, 24
    ctx->pc = 0x1c9d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x1c9d20: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1c9d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c9d24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9d24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9d28: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1c9d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1c9d2c: 0x34c60200  ori         $a2, $a2, 0x200
    ctx->pc = 0x1c9d2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
    // 0x1c9d30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c9d34: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c9d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c9d38: 0x10e60013  beq         $a3, $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C9D38u;
    {
        const bool branch_taken_0x1c9d38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1C9D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9D38u;
            // 0x1c9d3c: 0xc7102b  sltu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d38) {
            ctx->pc = 0x1C9D88u;
            goto label_1c9d88;
        }
    }
    ctx->pc = 0x1C9D40u;
    // 0x1c9d40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9D40u;
    {
        const bool branch_taken_0x1c9d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9d40) {
            ctx->pc = 0x1C9D58u;
            goto label_1c9d58;
        }
    }
    ctx->pc = 0x1C9D48u;
    // 0x1c9d48: 0x3c02a000  lui         $v0, 0xA000
    ctx->pc = 0x1c9d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40960 << 16));
    // 0x1c9d4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9D4Cu;
    {
        const bool branch_taken_0x1c9d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9D4Cu;
            // 0x1c9d50: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d4c) {
            ctx->pc = 0x1C9D70u;
            goto label_1c9d70;
        }
    }
    ctx->pc = 0x1C9D54u;
    // 0x1c9d54: 0x0  nop
    ctx->pc = 0x1c9d54u;
    // NOP
label_1c9d58:
    // 0x1c9d58: 0x3c02a000  lui         $v0, 0xA000
    ctx->pc = 0x1c9d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40960 << 16));
    // 0x1c9d5c: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x1c9d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x1c9d60: 0x10e2000a  beq         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9D60u;
    {
        const bool branch_taken_0x1c9d60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9D60u;
            // 0x1c9d64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d60) {
            ctx->pc = 0x1C9D8Cu;
            goto label_1c9d8c;
        }
    }
    ctx->pc = 0x1C9D68u;
    // 0x1c9d68: 0x3c02a000  lui         $v0, 0xA000
    ctx->pc = 0x1c9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40960 << 16));
    // 0x1c9d6c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1c9d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_1c9d70:
    // 0x1c9d70: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9D70u;
    {
        const bool branch_taken_0x1c9d70 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9D70u;
            // 0x1c9d74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d70) {
            ctx->pc = 0x1C9D88u;
            goto label_1c9d88;
        }
    }
    ctx->pc = 0x1C9D78u;
    // 0x1c9d78: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1c9d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1c9d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9D7Cu;
            // 0x1c9d80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9D84u;
    // 0x1c9d84: 0x0  nop
    ctx->pc = 0x1c9d84u;
    // NOP
label_1c9d88:
    // 0x1c9d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9d8c:
    // 0x1c9d8c: 0x8073234  j           func_1CC8D0
    ctx->pc = 0x1C9D8Cu;
    ctx->pc = 0x1C9D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9D8Cu;
            // 0x1c9d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C9D94u;
    // 0x1c9d94: 0x0  nop
    ctx->pc = 0x1c9d94u;
    // NOP
    // 0x1c9d98: 0x2c830030  sltiu       $v1, $a0, 0x30
    ctx->pc = 0x1c9d98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1c9d9c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C9D9Cu;
    {
        const bool branch_taken_0x1c9d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9D9Cu;
            // 0x1c9da0: 0x2402ff80  addiu       $v0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d9c) {
            ctx->pc = 0x1C9E24u;
            goto label_1c9e24;
        }
    }
    ctx->pc = 0x1C9DA4u;
    // 0x1c9da4: 0x3c02a00a  lui         $v0, 0xA00A
    ctx->pc = 0x1c9da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40970 << 16));
    // 0x1c9da8: 0x50a20031  beql        $a1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C9DA8u;
    {
        const bool branch_taken_0x1c9da8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c9da8) {
            ctx->pc = 0x1C9DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9DA8u;
            // 0x1c9dac: 0x3c05006e  lui         $a1, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)110 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9E70u;
            goto label_1c9e70;
        }
    }
    ctx->pc = 0x1C9DB0u;
    // 0x1c9db0: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1c9db0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1c9db4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9DB4u;
    {
        const bool branch_taken_0x1c9db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9DB4u;
            // 0x1c9db8: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9db4) {
            ctx->pc = 0x1C9DE0u;
            goto label_1c9de0;
        }
    }
    ctx->pc = 0x1C9DBCu;
    // 0x1c9dbc: 0x3c02a004  lui         $v0, 0xA004
    ctx->pc = 0x1c9dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40964 << 16));
    // 0x1c9dc0: 0x50a20015  beql        $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C9DC0u;
    {
        const bool branch_taken_0x1c9dc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c9dc0) {
            ctx->pc = 0x1C9DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9DC0u;
            // 0x1c9dc4: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9E18u;
            goto label_1c9e18;
        }
    }
    ctx->pc = 0x1C9DC8u;
    // 0x1c9dc8: 0x3c02a009  lui         $v0, 0xA009
    ctx->pc = 0x1c9dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40969 << 16));
    // 0x1c9dcc: 0x10a2001e  beq         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C9DCCu;
    {
        const bool branch_taken_0x1c9dcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9DCCu;
            // 0x1c9dd0: 0x2402ff80  addiu       $v0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9dcc) {
            ctx->pc = 0x1C9E48u;
            goto label_1c9e48;
        }
    }
    ctx->pc = 0x1C9DD4u;
    // 0x1c9dd4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1C9DD4u;
    {
        const bool branch_taken_0x1c9dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9dd4) {
            ctx->pc = 0x1C9EB0u;
            goto label_1c9eb0;
        }
    }
    ctx->pc = 0x1C9DDCu;
    // 0x1c9ddc: 0x0  nop
    ctx->pc = 0x1c9ddcu;
    // NOP
label_1c9de0:
    // 0x1c9de0: 0x10a20029  beq         $a1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C9DE0u;
    {
        const bool branch_taken_0x1c9de0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c9de0) {
            ctx->pc = 0x1C9E88u;
            goto label_1c9e88;
        }
    }
    ctx->pc = 0x1C9DE8u;
    // 0x1c9de8: 0x28a20101  slti        $v0, $a1, 0x101
    ctx->pc = 0x1c9de8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x1c9dec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9DECu;
    {
        const bool branch_taken_0x1c9dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9DECu;
            // 0x1c9df0: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9dec) {
            ctx->pc = 0x1C9E08u;
            goto label_1c9e08;
        }
    }
    ctx->pc = 0x1C9DF4u;
    // 0x1c9df4: 0x3c02a010  lui         $v0, 0xA010
    ctx->pc = 0x1c9df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40976 << 16));
    // 0x1c9df8: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C9DF8u;
    {
        const bool branch_taken_0x1c9df8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9DF8u;
            // 0x1c9dfc: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9df8) {
            ctx->pc = 0x1C9E30u;
            goto label_1c9e30;
        }
    }
    ctx->pc = 0x1C9E00u;
    // 0x1c9e00: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9E00u;
            // 0x1c9e04: 0x2402ff80  addiu       $v0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9E08u;
label_1c9e08:
    // 0x1c9e08: 0x50a20025  beql        $a1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C9E08u;
    {
        const bool branch_taken_0x1c9e08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c9e08) {
            ctx->pc = 0x1C9E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9E08u;
            // 0x1c9e0c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9EA0u;
            goto label_1c9ea0;
        }
    }
    ctx->pc = 0x1C9E10u;
    // 0x1c9e10: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9E10u;
            // 0x1c9e14: 0x2402ff80  addiu       $v0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9E18u;
label_1c9e18:
    // 0x1c9e18: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1c9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1c9e1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c9e20: 0x90423e96  lbu         $v0, 0x3E96($v0)
    ctx->pc = 0x1c9e20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16022)));
label_1c9e24:
    // 0x1c9e24: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9E2Cu;
    // 0x1c9e2c: 0x0  nop
    ctx->pc = 0x1c9e2cu;
    // NOP
label_1c9e30:
    // 0x1c9e30: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1c9e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1c9e34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c9e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c9e38: 0x90423e97  lbu         $v0, 0x3E97($v0)
    ctx->pc = 0x1c9e38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16023)));
    // 0x1c9e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9E44u;
    // 0x1c9e44: 0x0  nop
    ctx->pc = 0x1c9e44u;
    // NOP
label_1c9e48:
    // 0x1c9e48: 0x3c05006e  lui         $a1, 0x6E
    ctx->pc = 0x1c9e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)110 << 16));
    // 0x1c9e4c: 0x24a33e80  addiu       $v1, $a1, 0x3E80
    ctx->pc = 0x1c9e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16000));
    // 0x1c9e50: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x1c9e50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1c9e54: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x1c9e54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c9e58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c9e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c9e5c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9E5Cu;
    {
        const bool branch_taken_0x1c9e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9e5c) {
            ctx->pc = 0x1C9E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9E5Cu;
            // 0x1c9e60: 0x24a23e80  addiu       $v0, $a1, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16000));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9E74u;
            goto label_1c9e74;
        }
    }
    ctx->pc = 0x1C9E64u;
    // 0x1c9e64: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9E64u;
            // 0x1c9e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9E6Cu;
    // 0x1c9e6c: 0x0  nop
    ctx->pc = 0x1c9e6cu;
    // NOP
label_1c9e70:
    // 0x1c9e70: 0x24a23e80  addiu       $v0, $a1, 0x3E80
    ctx->pc = 0x1c9e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16000));
label_1c9e74:
    // 0x1c9e74: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1c9e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c9e78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c9e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c9e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9E7Cu;
            // 0x1c9e80: 0x90620015  lbu         $v0, 0x15($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 21)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9E84u;
    // 0x1c9e84: 0x0  nop
    ctx->pc = 0x1c9e84u;
    // NOP
label_1c9e88:
    // 0x1c9e88: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1c9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1c9e8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c9e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c9e90: 0x90426e9c  lbu         $v0, 0x6E9C($v0)
    ctx->pc = 0x1c9e90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 28316)));
    // 0x1c9e94: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9E9Cu;
    // 0x1c9e9c: 0x0  nop
    ctx->pc = 0x1c9e9cu;
    // NOP
label_1c9ea0:
    // 0x1c9ea0: 0x8c43a70c  lw          $v1, -0x58F4($v0)
    ctx->pc = 0x1c9ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944524)));
    // 0x1c9ea4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c9ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c9ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9EA8u;
            // 0x1c9eac: 0x90620080  lbu         $v0, 0x80($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9EB0u;
label_1c9eb0:
    // 0x1c9eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9EB8u;
    // 0x1c9eb8: 0x2c830030  sltiu       $v1, $a0, 0x30
    ctx->pc = 0x1c9eb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1c9ebc: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C9EBCu;
    {
        const bool branch_taken_0x1c9ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9EBCu;
            // 0x1c9ec0: 0x2402ff80  addiu       $v0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ebc) {
            ctx->pc = 0x1C9F48u;
            goto label_1c9f48;
        }
    }
    ctx->pc = 0x1C9EC4u;
    // 0x1c9ec4: 0x3c02b027  lui         $v0, 0xB027
    ctx->pc = 0x1c9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45095 << 16));
    // 0x1c9ec8: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9EC8u;
    {
        const bool branch_taken_0x1c9ec8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9EC8u;
            // 0x1c9ecc: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ec8) {
            ctx->pc = 0x1C9EE8u;
            goto label_1c9ee8;
        }
    }
    ctx->pc = 0x1C9ED0u;
    // 0x1c9ed0: 0x3c02b02a  lui         $v0, 0xB02A
    ctx->pc = 0x1c9ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45098 << 16));
    // 0x1c9ed4: 0x50c20010  beql        $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C9ED4u;
    {
        const bool branch_taken_0x1c9ed4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c9ed4) {
            ctx->pc = 0x1C9ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9ED4u;
            // 0x1c9ed8: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9F18u;
            goto label_1c9f18;
        }
    }
    ctx->pc = 0x1C9EDCu;
    // 0x1c9edc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9EDCu;
            // 0x1c9ee0: 0x2402ff80  addiu       $v0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9EE4u;
    // 0x1c9ee4: 0x0  nop
    ctx->pc = 0x1c9ee4u;
    // NOP
label_1c9ee8:
    // 0x1c9ee8: 0x3c04006e  lui         $a0, 0x6E
    ctx->pc = 0x1c9ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)110 << 16));
    // 0x1c9eec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c9eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c9ef0: 0x24843e80  addiu       $a0, $a0, 0x3E80
    ctx->pc = 0x1c9ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16000));
    // 0x1c9ef4: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x1c9ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x1c9ef8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c9ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c9efc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c9efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c9f00: 0x94430300  lhu         $v1, 0x300($v0)
    ctx->pc = 0x1c9f00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 768)));
    // 0x1c9f04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c9f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c9f08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c9f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c9f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9F0Cu;
            // 0x1c9f10: 0x90621b00  lbu         $v0, 0x1B00($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6912)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9F14u;
    // 0x1c9f14: 0x0  nop
    ctx->pc = 0x1c9f14u;
    // NOP
label_1c9f18:
    // 0x1c9f18: 0x3c04006e  lui         $a0, 0x6E
    ctx->pc = 0x1c9f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)110 << 16));
    // 0x1c9f1c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c9f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c9f20: 0x24843e80  addiu       $a0, $a0, 0x3E80
    ctx->pc = 0x1c9f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16000));
    // 0x1c9f24: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c9f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c9f28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c9f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c9f2c: 0x9443030c  lhu         $v1, 0x30C($v0)
    ctx->pc = 0x1c9f2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 780)));
    // 0x1c9f30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c9f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c9f34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c9f38: 0x90621b0d  lbu         $v0, 0x1B0D($v1)
    ctx->pc = 0x1c9f38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6925)));
    // 0x1c9f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9F3Cu;
            // 0x1c9f40: 0x2442ffc0  addiu       $v0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9F44u;
    // 0x1c9f44: 0x0  nop
    ctx->pc = 0x1c9f44u;
    // NOP
label_1c9f48:
    // 0x1c9f48: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9F50u;
    // 0x1c9f50: 0x2c830030  sltiu       $v1, $a0, 0x30
    ctx->pc = 0x1c9f50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1c9f54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9f54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f58: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C9F58u;
    {
        const bool branch_taken_0x1c9f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9F58u;
            // 0x1c9f5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f58) {
            ctx->pc = 0x1C9FC0u;
            goto label_1c9fc0;
        }
    }
    ctx->pc = 0x1C9F60u;
    // 0x1c9f60: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1c9f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1c9f64: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1c9f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1c9f68: 0x24423e80  addiu       $v0, $v0, 0x3E80
    ctx->pc = 0x1c9f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16000));
    // 0x1c9f6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f70: 0x24462300  addiu       $a2, $v0, 0x2300
    ctx->pc = 0x1c9f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8960));
    // 0x1c9f74: 0x0  nop
    ctx->pc = 0x1c9f74u;
    // NOP
label_1c9f78:
    // 0x1c9f78: 0x90c5000c  lbu         $a1, 0xC($a2)
    ctx->pc = 0x1c9f78u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1c9f7c: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x1c9f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x1c9f80: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1C9F80u;
    {
        const bool branch_taken_0x1c9f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9f80) {
            ctx->pc = 0x1C9F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9F80u;
            // 0x1c9f84: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9FB0u;
            goto label_1c9fb0;
        }
    }
    ctx->pc = 0x1C9F88u;
    // 0x1c9f88: 0x90c2000e  lbu         $v0, 0xE($a2)
    ctx->pc = 0x1c9f88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x1c9f8c: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9F8Cu;
    {
        const bool branch_taken_0x1c9f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c9f8c) {
            ctx->pc = 0x1C9F90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9F8Cu;
            // 0x1c9f90: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9FB0u;
            goto label_1c9fb0;
        }
    }
    ctx->pc = 0x1C9F94u;
    // 0x1c9f94: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1c9f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1c9f98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c9f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c9f9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9F9Cu;
    {
        const bool branch_taken_0x1c9f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9F9Cu;
            // 0x1c9fa0: 0x24080100  addiu       $t0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f9c) {
            ctx->pc = 0x1C9FBCu;
            goto label_1c9fbc;
        }
    }
    ctx->pc = 0x1C9FA4u;
    // 0x1c9fa4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9FA4u;
    {
        const bool branch_taken_0x1c9fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9FA4u;
            // 0x1c9fa8: 0x24080101  addiu       $t0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9fa4) {
            ctx->pc = 0x1C9FBCu;
            goto label_1c9fbc;
        }
    }
    ctx->pc = 0x1C9FACu;
    // 0x1c9fac: 0x0  nop
    ctx->pc = 0x1c9facu;
    // NOP
label_1c9fb0:
    // 0x1c9fb0: 0x28e20030  slti        $v0, $a3, 0x30
    ctx->pc = 0x1c9fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1c9fb4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C9FB4u;
    {
        const bool branch_taken_0x1c9fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9FB4u;
            // 0x1c9fb8: 0x24c6002c  addiu       $a2, $a2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9fb4) {
            ctx->pc = 0x1C9F78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9f78;
        }
    }
    ctx->pc = 0x1C9FBCu;
label_1c9fbc:
    // 0x1c9fbc: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1c9fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1c9fc0:
    // 0x1c9fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9FC8u;
    // 0x1c9fc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9fcc: 0x24040e00  addiu       $a0, $zero, 0xE00
    ctx->pc = 0x1c9fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x1c9fd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c9fd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9fd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9fdc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1c9fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c9fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9fe4: 0x80728d0  j           func_1CA340
    ctx->pc = 0x1C9FE4u;
    ctx->pc = 0x1C9FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9FE4u;
            // 0x1c9fe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CA340_0x1ca340(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C9FECu;
    // 0x1c9fec: 0x0  nop
    ctx->pc = 0x1c9fecu;
    // NOP
    // 0x1c9ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9ff4: 0x3404fb00  ori         $a0, $zero, 0xFB00
    ctx->pc = 0x1c9ff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64256);
    // 0x1c9ff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c9ffc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca000: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca004: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1ca004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ca008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca00c: 0x80728d0  j           func_1CA340
    ctx->pc = 0x1CA00Cu;
    ctx->pc = 0x1CA010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA00Cu;
            // 0x1ca010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CA340_0x1ca340(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CA014u;
    // 0x1ca014: 0x0  nop
    ctx->pc = 0x1ca014u;
    // NOP
    // 0x1ca018: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1ca018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1ca01c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA01Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA01Cu;
            // 0x1ca020: 0x8c623e84  lw          $v0, 0x3E84($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16004)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA024u;
    // 0x1ca024: 0x0  nop
    ctx->pc = 0x1ca024u;
    // NOP
    // 0x1ca028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca02c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca02cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca034: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ca034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca038: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca03c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ca03cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca044: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1ca044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ca048: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ca048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ca04c: 0xc0728d0  jal         func_1CA340
    ctx->pc = 0x1CA04Cu;
    SET_GPR_U32(ctx, 31, 0x1CA054u);
    ctx->pc = 0x1CA050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA04Cu;
            // 0x1ca050: 0x3404fe00  ori         $a0, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA054u; }
        if (ctx->pc != 0x1CA054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA340_0x1ca340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA054u; }
        if (ctx->pc != 0x1CA054u) { return; }
    }
    ctx->pc = 0x1CA054u;
label_1ca054:
    // 0x1ca054: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1ca054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1ca058: 0x24633080  addiu       $v1, $v1, 0x3080
    ctx->pc = 0x1ca058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12416));
    // 0x1ca05c: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x1ca05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_1ca060:
    // 0x1ca060: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ca060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca064: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ca064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ca068: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ca068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ca06c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1ca06cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1ca070: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x1ca070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1ca074: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1ca074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1ca078: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ca078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ca07c: 0x481fff8  bgez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CA07Cu;
    {
        const bool branch_taken_0x1ca07c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CA080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA07Cu;
            // 0x1ca080: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca07c) {
            ctx->pc = 0x1CA060u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ca060;
        }
    }
    ctx->pc = 0x1CA084u;
    // 0x1ca084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca08c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ca08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca090: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA090u;
            // 0x1ca094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA098u;
    // 0x1ca098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca09c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca0a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca0ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ca0acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0b0: 0x3404fc00  ori         $a0, $zero, 0xFC00
    ctx->pc = 0x1ca0b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x1ca0b4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1ca0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ca0b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ca0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ca0bc: 0xc0728d0  jal         func_1CA340
    ctx->pc = 0x1CA0BCu;
    SET_GPR_U32(ctx, 31, 0x1CA0C4u);
    ctx->pc = 0x1CA0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA0BCu;
            // 0x1ca0c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA0C4u; }
        if (ctx->pc != 0x1CA0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA340_0x1ca340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA0C4u; }
        if (ctx->pc != 0x1CA0C4u) { return; }
    }
    ctx->pc = 0x1CA0C4u;
label_1ca0c4:
    // 0x1ca0c4: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1ca0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1ca0c8: 0x24633080  addiu       $v1, $v1, 0x3080
    ctx->pc = 0x1ca0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12416));
    // 0x1ca0cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ca0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca0d0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1ca0d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca0d4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1ca0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ca0d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca0dc: 0x90640004  lbu         $a0, 0x4($v1)
    ctx->pc = 0x1ca0dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ca0e0: 0xa2240000  sb          $a0, 0x0($s1)
    ctx->pc = 0x1ca0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ca0e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca0e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA0E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA0E8u;
            // 0x1ca0ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA0F0u;
    // 0x1ca0f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ca0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ca0f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca0f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca100: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ca100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca104: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ca104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ca108: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ca108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca10c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ca10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ca110: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1ca110u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca114: 0x3404fd00  ori         $a0, $zero, 0xFD00
    ctx->pc = 0x1ca114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64768);
    // 0x1ca118: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca11c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca120: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ca120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ca124: 0xc0728d0  jal         func_1CA340
    ctx->pc = 0x1CA124u;
    SET_GPR_U32(ctx, 31, 0x1CA12Cu);
    ctx->pc = 0x1CA128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA124u;
            // 0x1ca128: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA12Cu; }
        if (ctx->pc != 0x1CA12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA340_0x1ca340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA12Cu; }
        if (ctx->pc != 0x1CA12Cu) { return; }
    }
    ctx->pc = 0x1CA12Cu;
label_1ca12c:
    // 0x1ca12c: 0x3c04006e  lui         $a0, 0x6E
    ctx->pc = 0x1ca12cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)110 << 16));
    // 0x1ca130: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ca130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca134: 0x24843080  addiu       $a0, $a0, 0x3080
    ctx->pc = 0x1ca134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12416));
    // 0x1ca138: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ca138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ca13c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ca13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ca140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca144: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ca144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ca148: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1ca148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1ca14c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca14cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca150: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ca150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ca154: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1ca154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1ca158: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ca158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca15c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1ca15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ca160: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ca160u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1ca164: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ca164u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca168: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA168u;
            // 0x1ca16c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA170u;
    // 0x1ca170: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1ca170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1ca174: 0x24423e80  addiu       $v0, $v0, 0x3E80
    ctx->pc = 0x1ca174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16000));
    // 0x1ca178: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ca178u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca17c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ca17cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1ca180: 0x90440009  lbu         $a0, 0x9($v0)
    ctx->pc = 0x1ca180u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1ca184: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA184u;
            // 0x1ca188: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA18Cu;
    // 0x1ca18c: 0x0  nop
    ctx->pc = 0x1ca18cu;
    // NOP
}
