#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8A30
// Address: 0x1c8a30 - 0x1c8e48
void sub_001C8A30_0x1c8a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8A30_0x1c8a30");
#endif

    switch (ctx->pc) {
        case 0x1c8a40u: goto label_1c8a40;
        case 0x1c8a70u: goto label_1c8a70;
        case 0x1c8ad8u: goto label_1c8ad8;
        case 0x1c8b40u: goto label_1c8b40;
        case 0x1c8ba8u: goto label_1c8ba8;
        case 0x1c8c10u: goto label_1c8c10;
        case 0x1c8c78u: goto label_1c8c78;
        case 0x1c8ce0u: goto label_1c8ce0;
        case 0x1c8d48u: goto label_1c8d48;
        case 0x1c8db0u: goto label_1c8db0;
        case 0x1c8e18u: goto label_1c8e18;
        case 0x1c8e30u: goto label_1c8e30;
        default: break;
    }

    ctx->pc = 0x1c8a30u;

    // 0x1c8a30: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C8A30u;
    {
        const bool branch_taken_0x1c8a30 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1C8A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A30u;
            // 0x1c8a34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a30) {
            ctx->pc = 0x1C8A64u;
            goto label_1c8a64;
        }
    }
    ctx->pc = 0x1C8A38u;
    // 0x1c8a38: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x1c8a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c8a3c: 0x0  nop
    ctx->pc = 0x1c8a3cu;
    // NOP
label_1c8a40:
    // 0x1c8a40: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1c8a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1c8a44: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1c8a44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8a48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c8a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a4c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8A4Cu;
    {
        const bool branch_taken_0x1c8a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A4Cu;
            // 0x1c8a50: 0xe5302a  slt         $a2, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a4c) {
            ctx->pc = 0x1C8A68u;
            goto label_1c8a68;
        }
    }
    ctx->pc = 0x1C8A54u;
    // 0x1c8a54: 0x0  nop
    ctx->pc = 0x1c8a54u;
    // NOP
    // 0x1c8a58: 0x0  nop
    ctx->pc = 0x1c8a58u;
    // NOP
    // 0x1c8a5c: 0x54c0fff8  bnel        $a2, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C8A5Cu;
    {
        const bool branch_taken_0x1c8a5c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8a5c) {
            ctx->pc = 0x1C8A60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A5Cu;
            // 0x1c8a60: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C8A40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8a40;
        }
    }
    ctx->pc = 0x1C8A64u;
label_1c8a64:
    // 0x1c8a64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c8a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8a68:
    // 0x1c8a68: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8A70u;
label_1c8a70:
    // 0x1c8a70: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1c8a70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c8a74: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x1c8a74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1c8a78: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c8a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1c8a7c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x1c8a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8a80: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1c8a80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8a84: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x1c8a84u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8a88: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1c8a88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1c8a8c: 0x90820007  lbu         $v0, 0x7($a0)
    ctx->pc = 0x1c8a8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x1c8a90: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c8a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1c8a94: 0xa0c20002  sb          $v0, 0x2($a2)
    ctx->pc = 0x1c8a94u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8a98: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x1c8a98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c8a9c: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x1c8a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8aa0: 0x90870001  lbu         $a3, 0x1($a0)
    ctx->pc = 0x1c8aa0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1c8aa4: 0xa0c70004  sb          $a3, 0x4($a2)
    ctx->pc = 0x1c8aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x1c8aa8: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1c8aa8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1c8aac: 0x90820006  lbu         $v0, 0x6($a0)
    ctx->pc = 0x1c8aacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1c8ab0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c8ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1c8ab4: 0xa0c20005  sb          $v0, 0x5($a2)
    ctx->pc = 0x1c8ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8ab8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c8ab8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c8abc: 0xa0c30006  sb          $v1, 0x6($a2)
    ctx->pc = 0x1c8abcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8ac0: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x1c8ac0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x1c8ac4: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1c8ac4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1c8ac8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c8ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1c8acc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8ACCu;
            // 0x1c8ad0: 0xa0c20007  sb          $v0, 0x7($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8AD4u;
    // 0x1c8ad4: 0x0  nop
    ctx->pc = 0x1c8ad4u;
    // NOP
label_1c8ad8:
    // 0x1c8ad8: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1c8ad8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1c8adc: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1c8adcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c8ae0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c8ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1c8ae4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x1c8ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8ae8: 0x90830007  lbu         $v1, 0x7($a0)
    ctx->pc = 0x1c8ae8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x1c8aec: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x1c8aecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8af0: 0x90870005  lbu         $a3, 0x5($a0)
    ctx->pc = 0x1c8af0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x1c8af4: 0xa0c70002  sb          $a3, 0x2($a2)
    ctx->pc = 0x1c8af4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x1c8af8: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1c8af8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1c8afc: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x1c8afcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1c8b00: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c8b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1c8b04: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x1c8b04u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8b08: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1c8b08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c8b0c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1c8b0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8b10: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x1c8b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1c8b14: 0xa0c30004  sb          $v1, 0x4($a2)
    ctx->pc = 0x1c8b14u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8b18: 0x90820006  lbu         $v0, 0x6($a0)
    ctx->pc = 0x1c8b18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1c8b1c: 0xa0c20005  sb          $v0, 0x5($a2)
    ctx->pc = 0x1c8b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8b20: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x1c8b20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c8b24: 0xa0c30006  sb          $v1, 0x6($a2)
    ctx->pc = 0x1c8b24u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8b28: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1c8b28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1c8b2c: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1c8b2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1c8b30: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c8b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1c8b34: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B34u;
            // 0x1c8b38: 0xa0c20007  sb          $v0, 0x7($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8B3Cu;
    // 0x1c8b3c: 0x0  nop
    ctx->pc = 0x1c8b3cu;
    // NOP
label_1c8b40:
    // 0x1c8b40: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x1c8b40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1c8b44: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1c8b44u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8b48: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1c8b48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1c8b4c: 0x90820007  lbu         $v0, 0x7($a0)
    ctx->pc = 0x1c8b4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x1c8b50: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c8b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1c8b54: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x1c8b54u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8b58: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x1c8b58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1c8b5c: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x1c8b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8b60: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1c8b60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1c8b64: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1c8b64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c8b68: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c8b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1c8b6c: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x1c8b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8b70: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x1c8b70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1c8b74: 0x90830005  lbu         $v1, 0x5($a0)
    ctx->pc = 0x1c8b74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x1c8b78: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x1c8b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1c8b7c: 0xa0c30004  sb          $v1, 0x4($a2)
    ctx->pc = 0x1c8b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8b80: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x1c8b80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1c8b84: 0xa0c20005  sb          $v0, 0x5($a2)
    ctx->pc = 0x1c8b84u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8b88: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1c8b88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c8b8c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1c8b8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8b90: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c8b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1c8b94: 0xa0c20006  sb          $v0, 0x6($a2)
    ctx->pc = 0x1c8b94u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8b98: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x1c8b98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c8b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B9Cu;
            // 0x1c8ba0: 0xa0c30007  sb          $v1, 0x7($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8BA4u;
    // 0x1c8ba4: 0x0  nop
    ctx->pc = 0x1c8ba4u;
    // NOP
label_1c8ba8:
    // 0x1c8ba8: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1c8ba8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1c8bac: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x1c8bacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1c8bb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8bb4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x1c8bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8bb8: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x1c8bb8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1c8bbc: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x1c8bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8bc0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1c8bc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8bc4: 0xa0c20002  sb          $v0, 0x2($a2)
    ctx->pc = 0x1c8bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8bc8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c8bc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c8bcc: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x1c8bccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8bd0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1c8bd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c8bd4: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x1c8bd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c8bd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8bdc: 0xa0c20004  sb          $v0, 0x4($a2)
    ctx->pc = 0x1c8bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8be0: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x1c8be0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1c8be4: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x1c8be4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1c8be8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c8be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c8bec: 0xa0c30005  sb          $v1, 0x5($a2)
    ctx->pc = 0x1c8becu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8bf0: 0x90870007  lbu         $a3, 0x7($a0)
    ctx->pc = 0x1c8bf0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x1c8bf4: 0xa0c70006  sb          $a3, 0x6($a2)
    ctx->pc = 0x1c8bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 7));
    // 0x1c8bf8: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x1c8bf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x1c8bfc: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1c8bfcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1c8c00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8c04: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8C04u;
            // 0x1c8c08: 0xa0c20007  sb          $v0, 0x7($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8C0Cu;
    // 0x1c8c0c: 0x0  nop
    ctx->pc = 0x1c8c0cu;
    // NOP
label_1c8c10:
    // 0x1c8c10: 0x90830007  lbu         $v1, 0x7($a0)
    ctx->pc = 0x1c8c10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x1c8c14: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1c8c14u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8c18: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1c8c18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1c8c1c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1c8c1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8c20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8c24: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x1c8c24u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8c28: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1c8c28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c8c2c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c8c2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c8c30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c8c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c8c34: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x1c8c34u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8c38: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1c8c38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1c8c3c: 0x90820006  lbu         $v0, 0x6($a0)
    ctx->pc = 0x1c8c3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1c8c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8c44: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x1c8c44u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8c48: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x1c8c48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c8c4c: 0xa0c30004  sb          $v1, 0x4($a2)
    ctx->pc = 0x1c8c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8c50: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x1c8c50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1c8c54: 0xa0c20005  sb          $v0, 0x5($a2)
    ctx->pc = 0x1c8c54u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8c58: 0x90830005  lbu         $v1, 0x5($a0)
    ctx->pc = 0x1c8c58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x1c8c5c: 0xa0c30006  sb          $v1, 0x6($a2)
    ctx->pc = 0x1c8c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8c60: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1c8c60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1c8c64: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1c8c64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1c8c68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8C6Cu;
            // 0x1c8c70: 0xa0c20007  sb          $v0, 0x7($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8C74u;
    // 0x1c8c74: 0x0  nop
    ctx->pc = 0x1c8c74u;
    // NOP
label_1c8c78:
    // 0x1c8c78: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c8c78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c8c7c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1c8c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8c80: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1c8c80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1c8c84: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x1c8c84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1c8c88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8c8c: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x1c8c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8c90: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x1c8c90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1c8c94: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x1c8c94u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8c98: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1c8c98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c8c9c: 0x90820007  lbu         $v0, 0x7($a0)
    ctx->pc = 0x1c8c9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x1c8ca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8ca4: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x1c8ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8ca8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1c8ca8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8cac: 0xa0c30004  sb          $v1, 0x4($a2)
    ctx->pc = 0x1c8cacu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8cb0: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1c8cb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1c8cb4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1c8cb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1c8cb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8cbc: 0xa0c20005  sb          $v0, 0x5($a2)
    ctx->pc = 0x1c8cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8cc0: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x1c8cc0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c8cc4: 0xa0c30006  sb          $v1, 0x6($a2)
    ctx->pc = 0x1c8cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8cc8: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x1c8cc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x1c8ccc: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1c8cccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1c8cd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8CD4u;
            // 0x1c8cd8: 0xa0c20007  sb          $v0, 0x7($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8CDCu;
    // 0x1c8cdc: 0x0  nop
    ctx->pc = 0x1c8cdcu;
    // NOP
label_1c8ce0:
    // 0x1c8ce0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1c8ce0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c8ce4: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x1c8ce4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1c8ce8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8cec: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x1c8cecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8cf0: 0x90830007  lbu         $v1, 0x7($a0)
    ctx->pc = 0x1c8cf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x1c8cf4: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x1c8cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8cf8: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1c8cf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1c8cfc: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1c8cfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c8d00: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c8d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1c8d04: 0xa0c20002  sb          $v0, 0x2($a2)
    ctx->pc = 0x1c8d04u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8d08: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x1c8d08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1c8d0c: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x1c8d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8d10: 0x90870001  lbu         $a3, 0x1($a0)
    ctx->pc = 0x1c8d10u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1c8d14: 0xa0c70004  sb          $a3, 0x4($a2)
    ctx->pc = 0x1c8d14u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x1c8d18: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1c8d18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1c8d1c: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x1c8d1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x1c8d20: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c8d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1c8d24: 0xa0c20005  sb          $v0, 0x5($a2)
    ctx->pc = 0x1c8d24u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8d28: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1c8d28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8d2c: 0xa0c30006  sb          $v1, 0x6($a2)
    ctx->pc = 0x1c8d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8d30: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x1c8d30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c8d34: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1c8d34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1c8d38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8D3Cu;
            // 0x1c8d40: 0xa0c20007  sb          $v0, 0x7($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8D44u;
    // 0x1c8d44: 0x0  nop
    ctx->pc = 0x1c8d44u;
    // NOP
label_1c8d48:
    // 0x1c8d48: 0x90830007  lbu         $v1, 0x7($a0)
    ctx->pc = 0x1c8d48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x1c8d4c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1c8d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8d50: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1c8d50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1c8d54: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x1c8d54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c8d58: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c8d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1c8d5c: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x1c8d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8d60: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1c8d60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1c8d64: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x1c8d64u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8d68: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1c8d68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1c8d6c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1c8d6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1c8d70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8d74: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x1c8d74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8d78: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1c8d78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8d7c: 0xa0c30004  sb          $v1, 0x4($a2)
    ctx->pc = 0x1c8d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8d80: 0x90870002  lbu         $a3, 0x2($a0)
    ctx->pc = 0x1c8d80u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c8d84: 0xa0c70005  sb          $a3, 0x5($a2)
    ctx->pc = 0x1c8d84u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 7));
    // 0x1c8d88: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1c8d88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1c8d8c: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x1c8d8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x1c8d90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8d94: 0xa0c20006  sb          $v0, 0x6($a2)
    ctx->pc = 0x1c8d94u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8d98: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x1c8d98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1c8d9c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1c8d9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c8da0: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x1c8da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1c8da4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8DA4u;
            // 0x1c8da8: 0xa0c30007  sb          $v1, 0x7($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8DACu;
    // 0x1c8dac: 0x0  nop
    ctx->pc = 0x1c8dacu;
    // NOP
label_1c8db0:
    // 0x1c8db0: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1c8db0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1c8db4: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1c8db4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8db8: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1c8db8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1c8dbc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1c8dbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8dc0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c8dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1c8dc4: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x1c8dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8dc8: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x1c8dc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1c8dcc: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x1c8dccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8dd0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1c8dd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c8dd4: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x1c8dd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c8dd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8ddc: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x1c8ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8de0: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x1c8de0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1c8de4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c8de4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c8de8: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x1c8de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1c8dec: 0xa0c30004  sb          $v1, 0x4($a2)
    ctx->pc = 0x1c8decu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8df0: 0x90820007  lbu         $v0, 0x7($a0)
    ctx->pc = 0x1c8df0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x1c8df4: 0xa0c20005  sb          $v0, 0x5($a2)
    ctx->pc = 0x1c8df4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8df8: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x1c8df8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1c8dfc: 0xa0c30006  sb          $v1, 0x6($a2)
    ctx->pc = 0x1c8dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8e00: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x1c8e00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x1c8e04: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1c8e04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1c8e08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8E0Cu;
            // 0x1c8e10: 0xa0c20007  sb          $v0, 0x7($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8E14u;
    // 0x1c8e14: 0x0  nop
    ctx->pc = 0x1c8e14u;
    // NOP
label_1c8e18:
    // 0x1c8e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8e1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8e24: 0x8061f74  j           func_187DD0
    ctx->pc = 0x1C8E24u;
    ctx->pc = 0x1C8E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8E24u;
            // 0x1c8e28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DD0u;
    if (runtime->hasFunction(0x187DD0u)) {
        auto targetFn = runtime->lookupFunction(0x187DD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187DD0_0x187dd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C8E2Cu;
    // 0x1c8e2c: 0x0  nop
    ctx->pc = 0x1c8e2cu;
    // NOP
label_1c8e30:
    // 0x1c8e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8e3c: 0x8061f7a  j           func_187DE8
    ctx->pc = 0x1C8E3Cu;
    ctx->pc = 0x1C8E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8E3Cu;
            // 0x1c8e40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DE8u;
    if (runtime->hasFunction(0x187DE8u)) {
        auto targetFn = runtime->lookupFunction(0x187DE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187DE8_0x187de8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C8E44u;
    // 0x1c8e44: 0x0  nop
    ctx->pc = 0x1c8e44u;
    // NOP
}
