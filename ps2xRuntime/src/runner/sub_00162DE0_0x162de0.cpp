#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00162DE0
// Address: 0x162de0 - 0x162e68
void sub_00162DE0_0x162de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162DE0_0x162de0");
#endif

    ctx->pc = 0x162de0u;

    // 0x162de0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x162de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162de4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x162de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x162de8: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x162de8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x162dec: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x162DECu;
    {
        const bool branch_taken_0x162dec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x162DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162DECu;
            // 0x162df0: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162dec) {
            ctx->pc = 0x162E08u;
            goto label_162e08;
        }
    }
    ctx->pc = 0x162DF4u;
    // 0x162df4: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x162df4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x162df8: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x162df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x162dfc: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x162DFCu;
    {
        const bool branch_taken_0x162dfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x162E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162DFCu;
            // 0x162e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162dfc) {
            ctx->pc = 0x162E60u;
            goto label_162e60;
        }
    }
    ctx->pc = 0x162E04u;
    // 0x162e04: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x162e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_162e08:
    // 0x162e08: 0x54c20006  bnel        $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x162E08u;
    {
        const bool branch_taken_0x162e08 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x162e08) {
            ctx->pc = 0x162E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162E08u;
            // 0x162e0c: 0x90a60010  lbu         $a2, 0x10($a1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162E24u;
            goto label_162e24;
        }
    }
    ctx->pc = 0x162E10u;
    // 0x162e10: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x162e10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x162e14: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x162e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x162e18: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x162E18u;
    {
        const bool branch_taken_0x162e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x162E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162E18u;
            // 0x162e1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e18) {
            ctx->pc = 0x162E60u;
            goto label_162e60;
        }
    }
    ctx->pc = 0x162E20u;
    // 0x162e20: 0x90a60010  lbu         $a2, 0x10($a1)
    ctx->pc = 0x162e20u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_162e24:
    // 0x162e24: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x162e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x162e28: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x162E28u;
    {
        const bool branch_taken_0x162e28 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x162E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162E28u;
            // 0x162e2c: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e28) {
            ctx->pc = 0x162E44u;
            goto label_162e44;
        }
    }
    ctx->pc = 0x162E30u;
    // 0x162e30: 0x90a40011  lbu         $a0, 0x11($a1)
    ctx->pc = 0x162e30u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
    // 0x162e34: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x162e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x162e38: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x162E38u;
    {
        const bool branch_taken_0x162e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x162E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162E38u;
            // 0x162e3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e38) {
            ctx->pc = 0x162E60u;
            goto label_162e60;
        }
    }
    ctx->pc = 0x162E40u;
    // 0x162e40: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x162e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_162e44:
    // 0x162e44: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x162E44u;
    {
        const bool branch_taken_0x162e44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x162E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162E44u;
            // 0x162e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e44) {
            ctx->pc = 0x162E60u;
            goto label_162e60;
        }
    }
    ctx->pc = 0x162E4Cu;
    // 0x162e4c: 0x90a40011  lbu         $a0, 0x11($a1)
    ctx->pc = 0x162e4cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
    // 0x162e50: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x162e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x162e54: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x162E54u;
    {
        const bool branch_taken_0x162e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x162E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162E54u;
            // 0x162e58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e54) {
            ctx->pc = 0x162E60u;
            goto label_162e60;
        }
    }
    ctx->pc = 0x162E5Cu;
    // 0x162e5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x162e5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162e60:
    // 0x162e60: 0x3e00008  jr          $ra
    ctx->pc = 0x162E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162E68u;
}
