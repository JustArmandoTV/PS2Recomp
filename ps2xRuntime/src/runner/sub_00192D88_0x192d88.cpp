#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192D88
// Address: 0x192d88 - 0x192e20
void sub_00192D88_0x192d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192D88_0x192d88");
#endif

    ctx->pc = 0x192d88u;

    // 0x192d88: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x192d88u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x192d8c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x192d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x192d90: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x192d90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x192d94: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x192d94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x192d98: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x192d98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x192d9c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x192d9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x192da0: 0x90850003  lbu         $a1, 0x3($a0)
    ctx->pc = 0x192da0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x192da4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x192da4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x192da8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x192da8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x192dac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x192dacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x192db0: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x192db0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x192db4: 0x10e60017  beq         $a3, $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x192DB4u;
    {
        const bool branch_taken_0x192db4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x192DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192DB4u;
            // 0x192db8: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192db4) {
            ctx->pc = 0x192E14u;
            goto label_192e14;
        }
    }
    ctx->pc = 0x192DBCu;
    // 0x192dbc: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x192dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x192dc0: 0x10e20014  beq         $a3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x192DC0u;
    {
        const bool branch_taken_0x192dc0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x192DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192DC0u;
            // 0x192dc4: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192dc0) {
            ctx->pc = 0x192E14u;
            goto label_192e14;
        }
    }
    ctx->pc = 0x192DC8u;
    // 0x192dc8: 0x24e2fefe  addiu       $v0, $a3, -0x102
    ctx->pc = 0x192dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967038));
    // 0x192dcc: 0x2c4200ae  sltiu       $v0, $v0, 0xAE
    ctx->pc = 0x192dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)174) ? 1 : 0);
    // 0x192dd0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x192DD0u;
    {
        const bool branch_taken_0x192dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192DD0u;
            // 0x192dd4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192dd0) {
            ctx->pc = 0x192E14u;
            goto label_192e14;
        }
    }
    ctx->pc = 0x192DD8u;
    // 0x192dd8: 0x240201b2  addiu       $v0, $zero, 0x1B2
    ctx->pc = 0x192dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
    // 0x192ddc: 0x10e2000d  beq         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x192DDCu;
    {
        const bool branch_taken_0x192ddc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x192DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192DDCu;
            // 0x192de0: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ddc) {
            ctx->pc = 0x192E14u;
            goto label_192e14;
        }
    }
    ctx->pc = 0x192DE4u;
    // 0x192de4: 0x240201b3  addiu       $v0, $zero, 0x1B3
    ctx->pc = 0x192de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
    // 0x192de8: 0x10e2000a  beq         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x192DE8u;
    {
        const bool branch_taken_0x192de8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x192DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192DE8u;
            // 0x192dec: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192de8) {
            ctx->pc = 0x192E14u;
            goto label_192e14;
        }
    }
    ctx->pc = 0x192DF0u;
    // 0x192df0: 0x240201b5  addiu       $v0, $zero, 0x1B5
    ctx->pc = 0x192df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
    // 0x192df4: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x192DF4u;
    {
        const bool branch_taken_0x192df4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x192DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192DF4u;
            // 0x192df8: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192df4) {
            ctx->pc = 0x192E14u;
            goto label_192e14;
        }
    }
    ctx->pc = 0x192DFCu;
    // 0x192dfc: 0x240201b7  addiu       $v0, $zero, 0x1B7
    ctx->pc = 0x192dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x192e00: 0x10e20004  beq         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192E00u;
    {
        const bool branch_taken_0x192e00 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x192E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192E00u;
            // 0x192e04: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e00) {
            ctx->pc = 0x192E14u;
            goto label_192e14;
        }
    }
    ctx->pc = 0x192E08u;
    // 0x192e08: 0x38e201b8  xori        $v0, $a3, 0x1B8
    ctx->pc = 0x192e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)440);
    // 0x192e0c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x192e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x192e10: 0x2400b  movn        $t0, $zero, $v0
    ctx->pc = 0x192e10u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_192e14:
    // 0x192e14: 0x3e00008  jr          $ra
    ctx->pc = 0x192E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192E14u;
            // 0x192e18: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192E1Cu;
    // 0x192e1c: 0x0  nop
    ctx->pc = 0x192e1cu;
    // NOP
}
