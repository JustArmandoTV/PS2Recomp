#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E8D90
// Address: 0x2e8d90 - 0x2e8e60
void sub_002E8D90_0x2e8d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8D90_0x2e8d90");
#endif

    ctx->pc = 0x2e8d90u;

    // 0x2e8d90: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2e8d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2e8d94: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2e8d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2e8d98: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x2e8d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x2e8d9c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x2e8d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x2e8da0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8DA0u;
    {
        const bool branch_taken_0x2e8da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E8DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8DA0u;
            // 0x2e8da4: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8da0) {
            ctx->pc = 0x2E8DB0u;
            goto label_2e8db0;
        }
    }
    ctx->pc = 0x2E8DA8u;
    // 0x2e8da8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8DA8u;
    {
        const bool branch_taken_0x2e8da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8DA8u;
            // 0x2e8dac: 0x3c0200af  lui         $v0, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8da8) {
            ctx->pc = 0x2E8DB8u;
            goto label_2e8db8;
        }
    }
    ctx->pc = 0x2E8DB0u;
label_2e8db0:
    // 0x2e8db0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2E8DB0u;
    {
        const bool branch_taken_0x2e8db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8DB0u;
            // 0x2e8db4: 0x2405004a  addiu       $a1, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8db0) {
            ctx->pc = 0x2E8E54u;
            goto label_2e8e54;
        }
    }
    ctx->pc = 0x2E8DB8u;
label_2e8db8:
    // 0x2e8db8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2e8db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2e8dbc: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x2e8dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x2e8dc0: 0x2c410011  sltiu       $at, $v0, 0x11
    ctx->pc = 0x2e8dc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x2e8dc4: 0x50200024  beql        $at, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E8DC4u;
    {
        const bool branch_taken_0x2e8dc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8dc4) {
            ctx->pc = 0x2E8DC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8DC4u;
            // 0x2e8dc8: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8E58u;
            goto label_2e8e58;
        }
    }
    ctx->pc = 0x2E8DCCu;
    // 0x2e8dcc: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2e8dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x2e8dd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e8dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e8dd4: 0x24631f20  addiu       $v1, $v1, 0x1F20
    ctx->pc = 0x2e8dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7968));
    // 0x2e8dd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e8dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e8ddc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e8de0: 0x400008  jr          $v0
    ctx->pc = 0x2E8DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E8DE8u: goto label_2e8de8;
            case 0x2E8DF0u: goto label_2e8df0;
            case 0x2E8DF8u: goto label_2e8df8;
            case 0x2E8E00u: goto label_2e8e00;
            case 0x2E8E08u: goto label_2e8e08;
            case 0x2E8E10u: goto label_2e8e10;
            case 0x2E8E18u: goto label_2e8e18;
            case 0x2E8E20u: goto label_2e8e20;
            case 0x2E8E28u: goto label_2e8e28;
            case 0x2E8E30u: goto label_2e8e30;
            case 0x2E8E38u: goto label_2e8e38;
            case 0x2E8E40u: goto label_2e8e40;
            case 0x2E8E48u: goto label_2e8e48;
            case 0x2E8E50u: goto label_2e8e50;
            case 0x2E8E54u: goto label_2e8e54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E8DE8u;
label_2e8de8:
    // 0x2e8de8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E8DE8u;
    {
        const bool branch_taken_0x2e8de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8de8) {
            ctx->pc = 0x2E8E54u;
            goto label_2e8e54;
        }
    }
    ctx->pc = 0x2E8DF0u;
label_2e8df0:
    // 0x2e8df0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E8DF0u;
    {
        const bool branch_taken_0x2e8df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8DF0u;
            // 0x2e8df4: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8df0) {
            ctx->pc = 0x2E8E54u;
            goto label_2e8e54;
        }
    }
    ctx->pc = 0x2E8DF8u;
label_2e8df8:
    // 0x2e8df8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E8DF8u;
    {
        const bool branch_taken_0x2e8df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8DF8u;
            // 0x2e8dfc: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8df8) {
            ctx->pc = 0x2E8E54u;
            goto label_2e8e54;
        }
    }
    ctx->pc = 0x2E8E00u;
label_2e8e00:
    // 0x2e8e00: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E8E00u;
    {
        const bool branch_taken_0x2e8e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8E00u;
            // 0x2e8e04: 0x2405004e  addiu       $a1, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e00) {
            ctx->pc = 0x2E8E54u;
            goto label_2e8e54;
        }
    }
    ctx->pc = 0x2E8E08u;
label_2e8e08:
    // 0x2e8e08: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2E8E08u;
    {
        const bool branch_taken_0x2e8e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8E08u;
            // 0x2e8e0c: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e08) {
            ctx->pc = 0x2E8E54u;
            goto label_2e8e54;
        }
    }
    ctx->pc = 0x2E8E10u;
label_2e8e10:
    // 0x2e8e10: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E8E10u;
    {
        const bool branch_taken_0x2e8e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8E10u;
            // 0x2e8e14: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e10) {
            ctx->pc = 0x2E8E54u;
            goto label_2e8e54;
        }
    }
    ctx->pc = 0x2E8E18u;
label_2e8e18:
    // 0x2e8e18: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E8E18u;
    {
        const bool branch_taken_0x2e8e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8E18u;
            // 0x2e8e1c: 0x2405004a  addiu       $a1, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e18) {
            ctx->pc = 0x2E8E54u;
            goto label_2e8e54;
        }
    }
    ctx->pc = 0x2E8E20u;
label_2e8e20:
    // 0x2e8e20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E8E20u;
    {
        const bool branch_taken_0x2e8e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8E20u;
            // 0x2e8e24: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e20) {
            ctx->pc = 0x2E8E54u;
            goto label_2e8e54;
        }
    }
    ctx->pc = 0x2E8E28u;
label_2e8e28:
    // 0x2e8e28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E8E28u;
    {
        const bool branch_taken_0x2e8e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8E28u;
            // 0x2e8e2c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e28) {
            ctx->pc = 0x2E8E54u;
            goto label_2e8e54;
        }
    }
    ctx->pc = 0x2E8E30u;
label_2e8e30:
    // 0x2e8e30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E8E30u;
    {
        const bool branch_taken_0x2e8e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8E30u;
            // 0x2e8e34: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e30) {
            ctx->pc = 0x2E8E54u;
            goto label_2e8e54;
        }
    }
    ctx->pc = 0x2E8E38u;
label_2e8e38:
    // 0x2e8e38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8E38u;
    {
        const bool branch_taken_0x2e8e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8E38u;
            // 0x2e8e3c: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e38) {
            ctx->pc = 0x2E8E54u;
            goto label_2e8e54;
        }
    }
    ctx->pc = 0x2E8E40u;
label_2e8e40:
    // 0x2e8e40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8E40u;
    {
        const bool branch_taken_0x2e8e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8E40u;
            // 0x2e8e44: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e40) {
            ctx->pc = 0x2E8E54u;
            goto label_2e8e54;
        }
    }
    ctx->pc = 0x2E8E48u;
label_2e8e48:
    // 0x2e8e48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E8E48u;
    {
        const bool branch_taken_0x2e8e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8E48u;
            // 0x2e8e4c: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e48) {
            ctx->pc = 0x2E8E54u;
            goto label_2e8e54;
        }
    }
    ctx->pc = 0x2E8E50u;
label_2e8e50:
    // 0x2e8e50: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x2e8e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_2e8e54:
    // 0x2e8e54: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2e8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2e8e58:
    // 0x2e8e58: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8E60u;
}
