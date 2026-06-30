#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00154B10
// Address: 0x154b10 - 0x154de0
void sub_00154B10_0x154b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154B10_0x154b10");
#endif

    switch (ctx->pc) {
        case 0x154b98u: goto label_154b98;
        case 0x154bb0u: goto label_154bb0;
        case 0x154c4cu: goto label_154c4c;
        case 0x154c68u: goto label_154c68;
        case 0x154cf4u: goto label_154cf4;
        case 0x154d18u: goto label_154d18;
        case 0x154d9cu: goto label_154d9c;
        default: break;
    }

    ctx->pc = 0x154b10u;

    // 0x154b10: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x154b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x154b14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154B14u;
    {
        const bool branch_taken_0x154b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154B14u;
            // 0x154b18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b14) {
            ctx->pc = 0x154B30u;
            goto label_154b30;
        }
    }
    ctx->pc = 0x154B1Cu;
    // 0x154b1c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x154b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x154b20: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x154B20u;
    {
        const bool branch_taken_0x154b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154b20) {
            ctx->pc = 0x154B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x154B20u;
            // 0x154b24: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x154B4Cu;
            goto label_154b4c;
        }
    }
    ctx->pc = 0x154B28u;
    // 0x154b28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x154B28u;
    {
        const bool branch_taken_0x154b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154B28u;
            // 0x154b2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b28) {
            ctx->pc = 0x154B48u;
            goto label_154b48;
        }
    }
    ctx->pc = 0x154B30u;
label_154b30:
    // 0x154b30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x154b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154b34: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x154b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x154b38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x154b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x154b3c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154B3Cu;
    {
        const bool branch_taken_0x154b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154b3c) {
            ctx->pc = 0x154B48u;
            goto label_154b48;
        }
    }
    ctx->pc = 0x154B44u;
    // 0x154b44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x154b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154b48:
    // 0x154b48: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x154b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_154b4c:
    // 0x154b4c: 0x2408fff0  addiu       $t0, $zero, -0x10
    ctx->pc = 0x154b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x154b50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x154b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b54: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x154b54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x154b58: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x154b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x154b5c: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x154b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x154b60: 0x10c00089  beqz        $a2, . + 4 + (0x89 << 2)
    ctx->pc = 0x154B60u;
    {
        const bool branch_taken_0x154b60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154B60u;
            // 0x154b64: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b60) {
            ctx->pc = 0x154D88u;
            goto label_154d88;
        }
    }
    ctx->pc = 0x154B68u;
    // 0x154b68: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x154b68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x154b6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x154b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b70: 0x24a7000f  addiu       $a3, $a1, 0xF
    ctx->pc = 0x154b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x154b74: 0xe84024  and         $t0, $a3, $t0
    ctx->pc = 0x154b74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x154b78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x154b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x154b7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b80: 0x18600025  blez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x154B80u;
    {
        const bool branch_taken_0x154b80 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x154B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154B80u;
            // 0x154b84: 0x486021  addu        $t4, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b80) {
            ctx->pc = 0x154C18u;
            goto label_154c18;
        }
    }
    ctx->pc = 0x154B88u;
    // 0x154b88: 0x8c8d0014  lw          $t5, 0x14($a0)
    ctx->pc = 0x154b88u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x154b8c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x154b8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154b90: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x154b90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
    // 0x154b94: 0x1a0782d  daddu       $t7, $t5, $zero
    ctx->pc = 0x154b94u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_154b98:
    // 0x154b98: 0x8deb0004  lw          $t3, 0x4($t7)
    ctx->pc = 0x154b98u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x154b9c: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x154b9cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ba0: 0x8d6a0008  lw          $t2, 0x8($t3)
    ctx->pc = 0x154ba0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x154ba4: 0x18e0000c  blez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x154BA4u;
    {
        const bool branch_taken_0x154ba4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x154BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154BA4u;
            // 0x154ba8: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ba4) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x154BACu;
    // 0x154bac: 0x1a0702d  daddu       $t6, $t5, $zero
    ctx->pc = 0x154bacu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_154bb0:
    // 0x154bb0: 0x8dc20004  lw          $v0, 0x4($t6)
    ctx->pc = 0x154bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x154bb4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x154bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x154bb8: 0x15420003  bne         $t2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x154BB8u;
    {
        const bool branch_taken_0x154bb8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x154bb8) {
            ctx->pc = 0x154BC8u;
            goto label_154bc8;
        }
    }
    ctx->pc = 0x154BC0u;
    // 0x154bc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x154BC0u;
    {
        const bool branch_taken_0x154bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154BC0u;
            // 0x154bc4: 0x120c02d  daddu       $t8, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154bc0) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x154BC8u;
label_154bc8:
    // 0x154bc8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x154bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x154bcc: 0x327102a  slt         $v0, $t9, $a3
    ctx->pc = 0x154bccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x154bd0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x154BD0u;
    {
        const bool branch_taken_0x154bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154BD0u;
            // 0x154bd4: 0x25ce0008  addiu       $t6, $t6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154bd0) {
            ctx->pc = 0x154BB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154bb0;
        }
    }
    ctx->pc = 0x154BD8u;
label_154bd8:
    // 0x154bd8: 0x17000009  bnez        $t8, . + 4 + (0x9 << 2)
    ctx->pc = 0x154BD8u;
    {
        const bool branch_taken_0x154bd8 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        if (branch_taken_0x154bd8) {
            ctx->pc = 0x154C00u;
            goto label_154c00;
        }
    }
    ctx->pc = 0x154BE0u;
    // 0x154be0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x154be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x154be4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x154be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x154be8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x154BE8u;
    {
        const bool branch_taken_0x154be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154be8) {
            ctx->pc = 0x154BF8u;
            goto label_154bf8;
        }
    }
    ctx->pc = 0x154BF0u;
    // 0x154bf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x154BF0u;
    {
        const bool branch_taken_0x154bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154BF0u;
            // 0x154bf4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154bf0) {
            ctx->pc = 0x154C00u;
            goto label_154c00;
        }
    }
    ctx->pc = 0x154BF8u;
label_154bf8:
    // 0x154bf8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x154bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x154bfc: 0x0  nop
    ctx->pc = 0x154bfcu;
    // NOP
label_154c00:
    // 0x154c00: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x154c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x154c04: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x154c04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x154c08: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x154c08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x154c0c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x154C0Cu;
    {
        const bool branch_taken_0x154c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154C0Cu;
            // 0x154c10: 0x25ef0008  addiu       $t7, $t7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c0c) {
            ctx->pc = 0x154B98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154b98;
        }
    }
    ctx->pc = 0x154C14u;
    // 0x154c14: 0x0  nop
    ctx->pc = 0x154c14u;
    // NOP
label_154c18:
    // 0x154c18: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x154c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x154c1c: 0x1823021  addu        $a2, $t4, $v0
    ctx->pc = 0x154c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x154c20: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x154c20u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c24: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x154c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x154c28: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x154c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x154c2c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x154c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x154c30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x154c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c34: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x154C34u;
    {
        const bool branch_taken_0x154c34 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x154C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154C34u;
            // 0x154c38: 0xc55021  addu        $t2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c34) {
            ctx->pc = 0x154CD0u;
            goto label_154cd0;
        }
    }
    ctx->pc = 0x154C3Cu;
    // 0x154c3c: 0x8c8e0014  lw          $t6, 0x14($a0)
    ctx->pc = 0x154c3cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x154c40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x154c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154c44: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x154c44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x154c48: 0x1c0c02d  daddu       $t8, $t6, $zero
    ctx->pc = 0x154c48u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_154c4c:
    // 0x154c4c: 0x8f090004  lw          $t1, 0x4($t8)
    ctx->pc = 0x154c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x154c50: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x154c50u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c54: 0x8d28000c  lw          $t0, 0xC($t1)
    ctx->pc = 0x154c54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x154c58: 0x19a0000d  blez        $t5, . + 4 + (0xD << 2)
    ctx->pc = 0x154C58u;
    {
        const bool branch_taken_0x154c58 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x154C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154C58u;
            // 0x154c5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c58) {
            ctx->pc = 0x154C90u;
            goto label_154c90;
        }
    }
    ctx->pc = 0x154C60u;
    // 0x154c60: 0x1c0782d  daddu       $t7, $t6, $zero
    ctx->pc = 0x154c60u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c64: 0x0  nop
    ctx->pc = 0x154c64u;
    // NOP
label_154c68:
    // 0x154c68: 0x8de50004  lw          $a1, 0x4($t7)
    ctx->pc = 0x154c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x154c6c: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x154c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x154c70: 0x15050003  bne         $t0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x154C70u;
    {
        const bool branch_taken_0x154c70 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x154c70) {
            ctx->pc = 0x154C80u;
            goto label_154c80;
        }
    }
    ctx->pc = 0x154C78u;
    // 0x154c78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x154C78u;
    {
        const bool branch_taken_0x154c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154C78u;
            // 0x154c7c: 0xe0602d  daddu       $t4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c78) {
            ctx->pc = 0x154C90u;
            goto label_154c90;
        }
    }
    ctx->pc = 0x154C80u;
label_154c80:
    // 0x154c80: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x154c80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x154c84: 0x16d282a  slt         $a1, $t3, $t5
    ctx->pc = 0x154c84u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x154c88: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x154C88u;
    {
        const bool branch_taken_0x154c88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x154C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154C88u;
            // 0x154c8c: 0x25ef0008  addiu       $t7, $t7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c88) {
            ctx->pc = 0x154C68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154c68;
        }
    }
    ctx->pc = 0x154C90u;
label_154c90:
    // 0x154c90: 0x15800009  bnez        $t4, . + 4 + (0x9 << 2)
    ctx->pc = 0x154C90u;
    {
        const bool branch_taken_0x154c90 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x154c90) {
            ctx->pc = 0x154CB8u;
            goto label_154cb8;
        }
    }
    ctx->pc = 0x154C98u;
    // 0x154c98: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x154c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x154c9c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x154c9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x154ca0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x154CA0u;
    {
        const bool branch_taken_0x154ca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x154ca0) {
            ctx->pc = 0x154CB0u;
            goto label_154cb0;
        }
    }
    ctx->pc = 0x154CA8u;
    // 0x154ca8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x154ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x154cac: 0x0  nop
    ctx->pc = 0x154cacu;
    // NOP
label_154cb0:
    // 0x154cb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x154cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x154cb4: 0x0  nop
    ctx->pc = 0x154cb4u;
    // NOP
label_154cb8:
    // 0x154cb8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x154cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x154cbc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x154cbcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x154cc0: 0x1a5282a  slt         $a1, $t5, $a1
    ctx->pc = 0x154cc0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x154cc4: 0x14a0ffe1  bnez        $a1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x154CC4u;
    {
        const bool branch_taken_0x154cc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x154CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154CC4u;
            // 0x154cc8: 0x27180008  addiu       $t8, $t8, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154cc4) {
            ctx->pc = 0x154C4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154c4c;
        }
    }
    ctx->pc = 0x154CCCu;
    // 0x154ccc: 0x0  nop
    ctx->pc = 0x154cccu;
    // NOP
label_154cd0:
    // 0x154cd0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x154cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x154cd4: 0x1424021  addu        $t0, $t2, $v0
    ctx->pc = 0x154cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x154cd8: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x154cd8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154cdc: 0x18600024  blez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x154CDCu;
    {
        const bool branch_taken_0x154cdc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x154CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154CDCu;
            // 0x154ce0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154cdc) {
            ctx->pc = 0x154D70u;
            goto label_154d70;
        }
    }
    ctx->pc = 0x154CE4u;
    // 0x154ce4: 0x8c8c0014  lw          $t4, 0x14($a0)
    ctx->pc = 0x154ce4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x154ce8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x154ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154cec: 0x3c030c00  lui         $v1, 0xC00
    ctx->pc = 0x154cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3072 << 16));
    // 0x154cf0: 0x180702d  daddu       $t6, $t4, $zero
    ctx->pc = 0x154cf0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_154cf4:
    // 0x154cf4: 0x8dc70004  lw          $a3, 0x4($t6)
    ctx->pc = 0x154cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x154cf8: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x154cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x154cfc: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x154CFCu;
    {
        const bool branch_taken_0x154cfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x154cfc) {
            ctx->pc = 0x154D58u;
            goto label_154d58;
        }
    }
    ctx->pc = 0x154D04u;
    // 0x154d04: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x154d04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d08: 0x1960000d  blez        $t3, . + 4 + (0xD << 2)
    ctx->pc = 0x154D08u;
    {
        const bool branch_taken_0x154d08 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x154D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154D08u;
            // 0x154d0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d08) {
            ctx->pc = 0x154D40u;
            goto label_154d40;
        }
    }
    ctx->pc = 0x154D10u;
    // 0x154d10: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x154d10u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d14: 0x0  nop
    ctx->pc = 0x154d14u;
    // NOP
label_154d18:
    // 0x154d18: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x154d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x154d1c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x154d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x154d20: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x154D20u;
    {
        const bool branch_taken_0x154d20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x154d20) {
            ctx->pc = 0x154D30u;
            goto label_154d30;
        }
    }
    ctx->pc = 0x154D28u;
    // 0x154d28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x154D28u;
    {
        const bool branch_taken_0x154d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154D28u;
            // 0x154d2c: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d28) {
            ctx->pc = 0x154D40u;
            goto label_154d40;
        }
    }
    ctx->pc = 0x154D30u;
label_154d30:
    // 0x154d30: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x154d30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x154d34: 0x12b102a  slt         $v0, $t1, $t3
    ctx->pc = 0x154d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x154d38: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x154D38u;
    {
        const bool branch_taken_0x154d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154D38u;
            // 0x154d3c: 0x25ad0008  addiu       $t5, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d38) {
            ctx->pc = 0x154D18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154d18;
        }
    }
    ctx->pc = 0x154D40u;
label_154d40:
    // 0x154d40: 0x15400005  bnez        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x154D40u;
    {
        const bool branch_taken_0x154d40 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x154d40) {
            ctx->pc = 0x154D58u;
            goto label_154d58;
        }
    }
    ctx->pc = 0x154D48u;
    // 0x154d48: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x154d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154d4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x154d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x154d50: 0x21642  srl         $v0, $v0, 25
    ctx->pc = 0x154d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 25));
    // 0x154d54: 0x1e27821  addu        $t7, $t7, $v0
    ctx->pc = 0x154d54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
label_154d58:
    // 0x154d58: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x154d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x154d5c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x154d5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x154d60: 0x162102a  slt         $v0, $t3, $v0
    ctx->pc = 0x154d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x154d64: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x154D64u;
    {
        const bool branch_taken_0x154d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154D64u;
            // 0x154d68: 0x25ce0008  addiu       $t6, $t6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d64) {
            ctx->pc = 0x154CF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154cf4;
        }
    }
    ctx->pc = 0x154D6Cu;
    // 0x154d6c: 0x0  nop
    ctx->pc = 0x154d6cu;
    // NOP
label_154d70:
    // 0x154d70: 0xf1180  sll         $v0, $t7, 6
    ctx->pc = 0x154d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 6));
    // 0x154d74: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x154d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x154d78: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x154d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x154d7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x154d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x154d80: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x154D80u;
    {
        const bool branch_taken_0x154d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154D80u;
            // 0x154d84: 0x1021021  addu        $v0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d80) {
            ctx->pc = 0x154DD8u;
            goto label_154dd8;
        }
    }
    ctx->pc = 0x154D88u;
label_154d88:
    // 0x154d88: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x154d88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x154d8c: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x154D8Cu;
    {
        const bool branch_taken_0x154d8c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x154D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154D8Cu;
            // 0x154d90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d8c) {
            ctx->pc = 0x154DD8u;
            goto label_154dd8;
        }
    }
    ctx->pc = 0x154D94u;
    // 0x154d94: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x154d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x154d98: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x154d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_154d9c:
    // 0x154d9c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x154d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x154da0: 0x10860007  beq         $a0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x154DA0u;
    {
        const bool branch_taken_0x154da0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x154da0) {
            ctx->pc = 0x154DC0u;
            goto label_154dc0;
        }
    }
    ctx->pc = 0x154DA8u;
    // 0x154da8: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x154DA8u;
    {
        const bool branch_taken_0x154da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x154da8) {
            ctx->pc = 0x154DB8u;
            goto label_154db8;
        }
    }
    ctx->pc = 0x154DB0u;
    // 0x154db0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x154DB0u;
    {
        const bool branch_taken_0x154db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154db0) {
            ctx->pc = 0x154DC8u;
            goto label_154dc8;
        }
    }
    ctx->pc = 0x154DB8u;
label_154db8:
    // 0x154db8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x154DB8u;
    {
        const bool branch_taken_0x154db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154DB8u;
            // 0x154dbc: 0x24420070  addiu       $v0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154db8) {
            ctx->pc = 0x154DC8u;
            goto label_154dc8;
        }
    }
    ctx->pc = 0x154DC0u;
label_154dc0:
    // 0x154dc0: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x154dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x154dc4: 0x0  nop
    ctx->pc = 0x154dc4u;
    // NOP
label_154dc8:
    // 0x154dc8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x154dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x154dcc: 0xe3202a  slt         $a0, $a3, $v1
    ctx->pc = 0x154dccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x154dd0: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x154DD0u;
    {
        const bool branch_taken_0x154dd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x154DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154DD0u;
            // 0x154dd4: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154dd0) {
            ctx->pc = 0x154D9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154d9c;
        }
    }
    ctx->pc = 0x154DD8u;
label_154dd8:
    // 0x154dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x154DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154DE0u;
}
