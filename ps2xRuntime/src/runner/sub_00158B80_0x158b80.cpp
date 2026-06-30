#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00158B80
// Address: 0x158b80 - 0x158d50
void sub_00158B80_0x158b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158B80_0x158b80");
#endif

    switch (ctx->pc) {
        case 0x158bc4u: goto label_158bc4;
        case 0x158c1cu: goto label_158c1c;
        case 0x158d00u: goto label_158d00;
        default: break;
    }

    ctx->pc = 0x158b80u;

    // 0x158b80: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158B80u;
    {
        const bool branch_taken_0x158b80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x158b80) {
            ctx->pc = 0x158B90u;
            goto label_158b90;
        }
    }
    ctx->pc = 0x158B88u;
    // 0x158b88: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x158B88u;
    {
        const bool branch_taken_0x158b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158B88u;
            // 0x158b8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b88) {
            ctx->pc = 0x158D3Cu;
            goto label_158d3c;
        }
    }
    ctx->pc = 0x158B90u;
label_158b90:
    // 0x158b90: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x158b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x158b94: 0x8c43cc38  lw          $v1, -0x33C8($v0)
    ctx->pc = 0x158b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954040)));
    // 0x158b98: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x158b98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x158b9c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x158B9Cu;
    {
        const bool branch_taken_0x158b9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x158b9c) {
            ctx->pc = 0x158BACu;
            goto label_158bac;
        }
    }
    ctx->pc = 0x158BA4u;
    // 0x158ba4: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x158BA4u;
    {
        const bool branch_taken_0x158ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158BA4u;
            // 0x158ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ba4) {
            ctx->pc = 0x158D3Cu;
            goto label_158d3c;
        }
    }
    ctx->pc = 0x158BACu;
label_158bac:
    // 0x158bac: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x158bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x158bb0: 0x8c47cc30  lw          $a3, -0x33D0($v0)
    ctx->pc = 0x158bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954032)));
    // 0x158bb4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x158bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x158bb8: 0x10a0002d  beqz        $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x158BB8u;
    {
        const bool branch_taken_0x158bb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x158bb8) {
            ctx->pc = 0x158C70u;
            goto label_158c70;
        }
    }
    ctx->pc = 0x158BC0u;
    // 0x158bc0: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x158bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_158bc4:
    // 0x158bc4: 0x54440027  bnel        $v0, $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x158BC4u;
    {
        const bool branch_taken_0x158bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x158bc4) {
            ctx->pc = 0x158BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158BC4u;
            // 0x158bc8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158C64u;
            goto label_158c64;
        }
    }
    ctx->pc = 0x158BCCu;
    // 0x158bcc: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x158bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x158bd0: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x158BD0u;
    {
        const bool branch_taken_0x158bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158bd0) {
            ctx->pc = 0x158C60u;
            goto label_158c60;
        }
    }
    ctx->pc = 0x158BD8u;
    // 0x158bd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158bdc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x158bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x158be0: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x158be0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x158be4: 0x8c42cc38  lw          $v0, -0x33C8($v0)
    ctx->pc = 0x158be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954040)));
    // 0x158be8: 0x1444001b  bne         $v0, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x158BE8u;
    {
        const bool branch_taken_0x158be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x158be8) {
            ctx->pc = 0x158C58u;
            goto label_158c58;
        }
    }
    ctx->pc = 0x158BF0u;
    // 0x158bf0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x158bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x158bf4: 0xaf8083ac  sw          $zero, -0x7C54($gp)
    ctx->pc = 0x158bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935468), GPR_U32(ctx, 0));
    // 0x158bf8: 0xac40cc38  sw          $zero, -0x33C8($v0)
    ctx->pc = 0x158bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954040), GPR_U32(ctx, 0));
    // 0x158bfc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x158bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x158c00: 0x8c46cc30  lw          $a2, -0x33D0($v0)
    ctx->pc = 0x158c00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954032)));
    // 0x158c04: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x158c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x158c08: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x158C08u;
    {
        const bool branch_taken_0x158c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c08) {
            ctx->pc = 0x158C58u;
            goto label_158c58;
        }
    }
    ctx->pc = 0x158C10u;
    // 0x158c10: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x158c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x158c14: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x158c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x158c18: 0x8c65cc38  lw          $a1, -0x33C8($v1)
    ctx->pc = 0x158c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954040)));
label_158c1c:
    // 0x158c1c: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x158c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x158c20: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x158c20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x158c24: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x158C24u;
    {
        const bool branch_taken_0x158c24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c24) {
            ctx->pc = 0x158C48u;
            goto label_158c48;
        }
    }
    ctx->pc = 0x158C2Cu;
    // 0x158c2c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x158c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x158c30: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x158C30u;
    {
        const bool branch_taken_0x158c30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x158c30) {
            ctx->pc = 0x158C48u;
            goto label_158c48;
        }
    }
    ctx->pc = 0x158C38u;
    // 0x158c38: 0xaf8683ac  sw          $a2, -0x7C54($gp)
    ctx->pc = 0x158c38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935468), GPR_U32(ctx, 6));
    // 0x158c3c: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x158c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x158c40: 0xac44cc38  sw          $a0, -0x33C8($v0)
    ctx->pc = 0x158c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954040), GPR_U32(ctx, 4));
    // 0x158c44: 0x0  nop
    ctx->pc = 0x158c44u;
    // NOP
label_158c48:
    // 0x158c48: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x158c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x158c4c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x158c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x158c50: 0x5480fff2  bnel        $a0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x158C50u;
    {
        const bool branch_taken_0x158c50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x158c50) {
            ctx->pc = 0x158C54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158C50u;
            // 0x158c54: 0x8c65cc38  lw          $a1, -0x33C8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954040)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158C1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_158c1c;
        }
    }
    ctx->pc = 0x158C58u;
label_158c58:
    // 0x158c58: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x158C58u;
    {
        const bool branch_taken_0x158c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158C58u;
            // 0x158c5c: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c58) {
            ctx->pc = 0x158D3Cu;
            goto label_158d3c;
        }
    }
    ctx->pc = 0x158C60u;
label_158c60:
    // 0x158c60: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x158c60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_158c64:
    // 0x158c64: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x158c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x158c68: 0x54a0ffd6  bnel        $a1, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x158C68u;
    {
        const bool branch_taken_0x158c68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x158c68) {
            ctx->pc = 0x158C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158C68u;
            // 0x158c6c: 0x8ce20010  lw          $v0, 0x10($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158BC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_158bc4;
        }
    }
    ctx->pc = 0x158C70u;
label_158c70:
    // 0x158c70: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x158c70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x158c74: 0x50200031  beql        $at, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x158C74u;
    {
        const bool branch_taken_0x158c74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c74) {
            ctx->pc = 0x158C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158C74u;
            // 0x158c78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158D3Cu;
            goto label_158d3c;
        }
    }
    ctx->pc = 0x158C7Cu;
    // 0x158c7c: 0x8f8883a8  lw          $t0, -0x7C58($gp)
    ctx->pc = 0x158c7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x158c80: 0x55000003  bnel        $t0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x158C80u;
    {
        const bool branch_taken_0x158c80 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x158c80) {
            ctx->pc = 0x158C84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158C80u;
            // 0x158c84: 0x8d060000  lw          $a2, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158C90u;
            goto label_158c90;
        }
    }
    ctx->pc = 0x158C88u;
    // 0x158c88: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x158C88u;
    {
        const bool branch_taken_0x158c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158C88u;
            // 0x158c8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c88) {
            ctx->pc = 0x158D3Cu;
            goto label_158d3c;
        }
    }
    ctx->pc = 0x158C90u;
label_158c90:
    // 0x158c90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x158c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158c94: 0x8f8783ac  lw          $a3, -0x7C54($gp)
    ctx->pc = 0x158c94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935468)));
    // 0x158c98: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x158c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x158c9c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x158c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x158ca0: 0xaf8683a8  sw          $a2, -0x7C58($gp)
    ctx->pc = 0x158ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935464), GPR_U32(ctx, 6));
    // 0x158ca4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x158ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x158ca8: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x158ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x158cac: 0xad070004  sw          $a3, 0x4($t0)
    ctx->pc = 0x158cacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
    // 0x158cb0: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x158cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x158cb4: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x158cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x158cb8: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x158cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x158cbc: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x158cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x158cc0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x158cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x158cc4: 0xad06000c  sw          $a2, 0xC($t0)
    ctx->pc = 0x158cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
    // 0x158cc8: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x158cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x158ccc: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x158cccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x158cd0: 0xad060010  sw          $a2, 0x10($t0)
    ctx->pc = 0x158cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
    // 0x158cd4: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x158cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x158cd8: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x158cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
    // 0x158cdc: 0xace40010  sw          $a0, 0x10($a3)
    ctx->pc = 0x158cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 4));
    // 0x158ce0: 0x8c46cc30  lw          $a2, -0x33D0($v0)
    ctx->pc = 0x158ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954032)));
    // 0x158ce4: 0xac60cc38  sw          $zero, -0x33C8($v1)
    ctx->pc = 0x158ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954040), GPR_U32(ctx, 0));
    // 0x158ce8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x158ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x158cec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x158CECu;
    {
        const bool branch_taken_0x158cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158cec) {
            ctx->pc = 0x158D38u;
            goto label_158d38;
        }
    }
    ctx->pc = 0x158CF4u;
    // 0x158cf4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x158cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x158cf8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x158cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x158cfc: 0x8c65cc38  lw          $a1, -0x33C8($v1)
    ctx->pc = 0x158cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954040)));
label_158d00:
    // 0x158d00: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x158d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x158d04: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x158d04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x158d08: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x158D08u;
    {
        const bool branch_taken_0x158d08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x158d08) {
            ctx->pc = 0x158D28u;
            goto label_158d28;
        }
    }
    ctx->pc = 0x158D10u;
    // 0x158d10: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x158d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x158d14: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158D14u;
    {
        const bool branch_taken_0x158d14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x158d14) {
            ctx->pc = 0x158D28u;
            goto label_158d28;
        }
    }
    ctx->pc = 0x158D1Cu;
    // 0x158d1c: 0xaf8683ac  sw          $a2, -0x7C54($gp)
    ctx->pc = 0x158d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935468), GPR_U32(ctx, 6));
    // 0x158d20: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x158d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x158d24: 0xac44cc38  sw          $a0, -0x33C8($v0)
    ctx->pc = 0x158d24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954040), GPR_U32(ctx, 4));
label_158d28:
    // 0x158d28: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x158d28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x158d2c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x158d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x158d30: 0x5480fff3  bnel        $a0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x158D30u;
    {
        const bool branch_taken_0x158d30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x158d30) {
            ctx->pc = 0x158D34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158D30u;
            // 0x158d34: 0x8c65cc38  lw          $a1, -0x33C8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954040)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158D00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_158d00;
        }
    }
    ctx->pc = 0x158D38u;
label_158d38:
    // 0x158d38: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x158d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_158d3c:
    // 0x158d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x158D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x158D44u;
    // 0x158d44: 0x0  nop
    ctx->pc = 0x158d44u;
    // NOP
    // 0x158d48: 0x0  nop
    ctx->pc = 0x158d48u;
    // NOP
    // 0x158d4c: 0x0  nop
    ctx->pc = 0x158d4cu;
    // NOP
}
