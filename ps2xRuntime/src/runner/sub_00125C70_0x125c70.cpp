#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125C70
// Address: 0x125c70 - 0x125d80
void sub_00125C70_0x125c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125C70_0x125c70");
#endif

    switch (ctx->pc) {
        case 0x125cd8u: goto label_125cd8;
        case 0x125cdcu: goto label_125cdc;
        case 0x125ce0u: goto label_125ce0;
        case 0x125d18u: goto label_125d18;
        default: break;
    }

    ctx->pc = 0x125c70u;

    // 0x125c70: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x125c70u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x125c74: 0x2dcf0002  sltiu       $t7, $t6, 0x2
    ctx->pc = 0x125c74u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x125c78: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x125C78u;
    {
        const bool branch_taken_0x125c78 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x125c78) {
            ctx->pc = 0x125C90u;
            goto label_125c90;
        }
    }
    ctx->pc = 0x125C80u;
    // 0x125c80: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x125c80u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x125c84: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x125c84u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x125c88: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x125C88u;
    {
        const bool branch_taken_0x125c88 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125C88u;
            // 0x125c8c: 0x39cf0004  xori        $t7, $t6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c88) {
            ctx->pc = 0x125C98u;
            goto label_125c98;
        }
    }
    ctx->pc = 0x125C90u;
label_125c90:
    // 0x125c90: 0x3e00008  jr          $ra
    ctx->pc = 0x125C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125C90u;
            // 0x125c94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125C98u;
label_125c98:
    // 0x125c98: 0x15e00009  bnez        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x125C98u;
    {
        const bool branch_taken_0x125c98 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125C98u;
            // 0x125c9c: 0x39cf0004  xori        $t7, $t6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c98) {
            ctx->pc = 0x125CC0u;
            goto label_125cc0;
        }
    }
    ctx->pc = 0x125CA0u;
    // 0x125ca0: 0x39af0004  xori        $t7, $t5, 0x4
    ctx->pc = 0x125ca0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)4);
    // 0x125ca4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x125CA4u;
    {
        const bool branch_taken_0x125ca4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125CA4u;
            // 0x125ca8: 0x39cf0004  xori        $t7, $t6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ca4) {
            ctx->pc = 0x125CC0u;
            goto label_125cc0;
        }
    }
    ctx->pc = 0x125CACu;
    // 0x125cac: 0x8cae0004  lw          $t6, 0x4($a1)
    ctx->pc = 0x125cacu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x125cb0: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x125cb0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x125cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x125CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125CB4u;
            // 0x125cb8: 0x1cf1023  subu        $v0, $t6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125CBCu;
    // 0x125cbc: 0x0  nop
    ctx->pc = 0x125cbcu;
    // NOP
label_125cc0:
    // 0x125cc0: 0x51e00014  beql        $t7, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x125CC0u;
    {
        const bool branch_taken_0x125cc0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x125cc0) {
            ctx->pc = 0x125CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125CC0u;
            // 0x125cc4: 0x8c8e0004  lw          $t6, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125D14u;
            goto label_125d14;
        }
    }
    ctx->pc = 0x125CC8u;
    // 0x125cc8: 0x39af0004  xori        $t7, $t5, 0x4
    ctx->pc = 0x125cc8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)4);
    // 0x125ccc: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x125CCCu;
    {
        const bool branch_taken_0x125ccc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125CCCu;
            // 0x125cd0: 0x39cf0002  xori        $t7, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ccc) {
            ctx->pc = 0x125CE8u;
            goto label_125ce8;
        }
    }
    ctx->pc = 0x125CD4u;
    // 0x125cd4: 0x8cae0004  lw          $t6, 0x4($a1)
    ctx->pc = 0x125cd4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_125cd8:
    // 0x125cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125cdc:
    // 0x125cdc: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x125cdcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_125ce0:
    // 0x125ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x125CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125CE0u;
            // 0x125ce4: 0x1ee100a  movz        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125CE8u;
label_125ce8:
    // 0x125ce8: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x125CE8u;
    {
        const bool branch_taken_0x125ce8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125CE8u;
            // 0x125cec: 0x39cf0002  xori        $t7, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ce8) {
            ctx->pc = 0x125D00u;
            goto label_125d00;
        }
    }
    ctx->pc = 0x125CF0u;
    // 0x125cf0: 0x39af0002  xori        $t7, $t5, 0x2
    ctx->pc = 0x125cf0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)2);
    // 0x125cf4: 0x11e00020  beqz        $t7, . + 4 + (0x20 << 2)
    ctx->pc = 0x125CF4u;
    {
        const bool branch_taken_0x125cf4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125CF4u;
            // 0x125cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125cf4) {
            ctx->pc = 0x125D78u;
            goto label_125d78;
        }
    }
    ctx->pc = 0x125CFCu;
    // 0x125cfc: 0x39cf0002  xori        $t7, $t6, 0x2
    ctx->pc = 0x125cfcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
label_125d00:
    // 0x125d00: 0x51e0fff5  beql        $t7, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x125D00u;
    {
        const bool branch_taken_0x125d00 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x125d00) {
            ctx->pc = 0x125D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125D00u;
            // 0x125d04: 0x8cae0004  lw          $t6, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125CD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125cd8;
        }
    }
    ctx->pc = 0x125D08u;
    // 0x125d08: 0x39af0002  xori        $t7, $t5, 0x2
    ctx->pc = 0x125d08u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)2);
    // 0x125d0c: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x125D0Cu;
    {
        const bool branch_taken_0x125d0c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125D0Cu;
            // 0x125d10: 0x8c8e0004  lw          $t6, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d0c) {
            ctx->pc = 0x125D20u;
            goto label_125d20;
        }
    }
    ctx->pc = 0x125D14u;
label_125d14:
    // 0x125d14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x125d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_125d18:
    // 0x125d18: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x125D18u;
    {
        const bool branch_taken_0x125d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125D18u;
            // 0x125d1c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d18) {
            ctx->pc = 0x125CE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125ce0;
        }
    }
    ctx->pc = 0x125D20u;
label_125d20:
    // 0x125d20: 0x8caf0004  lw          $t7, 0x4($a1)
    ctx->pc = 0x125d20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x125d24: 0x15cffffc  bne         $t6, $t7, . + 4 + (-0x4 << 2)
    ctx->pc = 0x125D24u;
    {
        const bool branch_taken_0x125d24 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x125D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125D24u;
            // 0x125d28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d24) {
            ctx->pc = 0x125D18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125d18;
        }
    }
    ctx->pc = 0x125D2Cu;
    // 0x125d2c: 0x8c8c0008  lw          $t4, 0x8($a0)
    ctx->pc = 0x125d2cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x125d30: 0x8cad0008  lw          $t5, 0x8($a1)
    ctx->pc = 0x125d30u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x125d34: 0x1ac782a  slt         $t7, $t5, $t4
    ctx->pc = 0x125d34u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x125d38: 0x15e0ffe9  bnez        $t7, . + 4 + (-0x17 << 2)
    ctx->pc = 0x125D38u;
    {
        const bool branch_taken_0x125d38 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125D38u;
            // 0x125d3c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d38) {
            ctx->pc = 0x125CE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125ce0;
        }
    }
    ctx->pc = 0x125D40u;
    // 0x125d40: 0x18d782a  slt         $t7, $t4, $t5
    ctx->pc = 0x125d40u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x125d44: 0x55e0ffe5  bnel        $t7, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x125D44u;
    {
        const bool branch_taken_0x125d44 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x125d44) {
            ctx->pc = 0x125D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125D44u;
            // 0x125d48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125CDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125cdc;
        }
    }
    ctx->pc = 0x125D4Cu;
    // 0x125d4c: 0xdc8d0010  ld          $t5, 0x10($a0)
    ctx->pc = 0x125d4cu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x125d50: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x125d50u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x125d54: 0x8d782b  sltu        $t7, $a0, $t5
    ctx->pc = 0x125d54u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x125d58: 0x15e0ffe1  bnez        $t7, . + 4 + (-0x1F << 2)
    ctx->pc = 0x125D58u;
    {
        const bool branch_taken_0x125d58 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125D58u;
            // 0x125d5c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d58) {
            ctx->pc = 0x125CE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125ce0;
        }
    }
    ctx->pc = 0x125D60u;
    // 0x125d60: 0x1a4782b  sltu        $t7, $t5, $a0
    ctx->pc = 0x125d60u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x125d64: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x125D64u;
    {
        const bool branch_taken_0x125d64 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125D64u;
            // 0x125d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d64) {
            ctx->pc = 0x125D78u;
            goto label_125d78;
        }
    }
    ctx->pc = 0x125D6Cu;
    // 0x125d6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125d70: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x125d70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x125d74: 0x1ee100a  movz        $v0, $t7, $t6
    ctx->pc = 0x125d74u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
label_125d78:
    // 0x125d78: 0x3e00008  jr          $ra
    ctx->pc = 0x125D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125D80u;
}
