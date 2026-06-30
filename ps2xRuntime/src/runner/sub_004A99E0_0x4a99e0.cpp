#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A99E0
// Address: 0x4a99e0 - 0x4a9af0
void sub_004A99E0_0x4a99e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A99E0_0x4a99e0");
#endif

    ctx->pc = 0x4a99e0u;

    // 0x4a99e0: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x4a99e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a99e4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x4a99e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4a99e8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4a99e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a99ec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4a99ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a99f0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A99F0u;
    {
        const bool branch_taken_0x4a99f0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4A99F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A99F0u;
            // 0x4a99f4: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a99f0) {
            ctx->pc = 0x4A9A00u;
            goto label_4a9a00;
        }
    }
    ctx->pc = 0x4A99F8u;
    // 0x4a99f8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x4a99f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x4a99fc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4a99fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4a9a00:
    // 0x4a9a00: 0xa24021  addu        $t0, $a1, $v0
    ctx->pc = 0x4a9a00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4a9a04: 0x5020008  bltzl       $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A9A04u;
    {
        const bool branch_taken_0x4a9a04 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x4a9a04) {
            ctx->pc = 0x4A9A08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9A04u;
            // 0x4a9a08: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9A28u;
            goto label_4a9a28;
        }
    }
    ctx->pc = 0x4A9A0Cu;
    // 0x4a9a0c: 0x501000c  bgez        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x4A9A0Cu;
    {
        const bool branch_taken_0x4a9a0c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x4A9A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9A0Cu;
            // 0x4a9a10: 0x839c3  sra         $a3, $t0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9a0c) {
            ctx->pc = 0x4A9A40u;
            goto label_4a9a40;
        }
    }
    ctx->pc = 0x4A9A14u;
    // 0x4a9a14: 0x2502007f  addiu       $v0, $t0, 0x7F
    ctx->pc = 0x4a9a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 127));
    // 0x4a9a18: 0x239c3  sra         $a3, $v0, 7
    ctx->pc = 0x4a9a18u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 7));
    // 0x4a9a1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4A9A1Cu;
    {
        const bool branch_taken_0x4a9a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9a1c) {
            ctx->pc = 0x4A9A40u;
            goto label_4a9a40;
        }
    }
    ctx->pc = 0x4A9A24u;
    // 0x4a9a24: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x4a9a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_4a9a28:
    // 0x4a9a28: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x4a9a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4a9a2c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4a9a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4a9a30: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9A30u;
    {
        const bool branch_taken_0x4a9a30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A9A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9A30u;
            // 0x4a9a34: 0x239c3  sra         $a3, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9a30) {
            ctx->pc = 0x4A9A40u;
            goto label_4a9a40;
        }
    }
    ctx->pc = 0x4A9A38u;
    // 0x4a9a38: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x4a9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x4a9a3c: 0x239c3  sra         $a3, $v0, 7
    ctx->pc = 0x4a9a3cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 7));
label_4a9a40:
    // 0x4a9a40: 0x50e00025  beql        $a3, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x4A9A40u;
    {
        const bool branch_taken_0x4a9a40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9a40) {
            ctx->pc = 0x4A9A44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9A40u;
            // 0x4a9a44: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9AD8u;
            goto label_4a9ad8;
        }
    }
    ctx->pc = 0x4A9A48u;
    // 0x4a9a48: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x4a9a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4a9a4c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4a9a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4a9a50: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4a9a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4a9a54: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9A54u;
    {
        const bool branch_taken_0x4a9a54 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A9A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9A54u;
            // 0x4a9a58: 0x22883  sra         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9a54) {
            ctx->pc = 0x4A9A64u;
            goto label_4a9a64;
        }
    }
    ctx->pc = 0x4A9A5Cu;
    // 0x4a9a5c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4a9a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4a9a60: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x4a9a60u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
label_4a9a64:
    // 0x4a9a64: 0x1261823  subu        $v1, $t1, $a2
    ctx->pc = 0x4a9a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x4a9a68: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9A68u;
    {
        const bool branch_taken_0x4a9a68 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4A9A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9A68u;
            // 0x4a9a6c: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9a68) {
            ctx->pc = 0x4A9A78u;
            goto label_4a9a78;
        }
    }
    ctx->pc = 0x4A9A70u;
    // 0x4a9a70: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x4a9a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x4a9a74: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4a9a74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4a9a78:
    // 0x4a9a78: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x4a9a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4a9a7c: 0x4630004  bgezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A9A7Cu;
    {
        const bool branch_taken_0x4a9a7c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x4a9a7c) {
            ctx->pc = 0x4A9A80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9A7Cu;
            // 0x4a9a80: 0x65102a  slt         $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9A90u;
            goto label_4a9a90;
        }
    }
    ctx->pc = 0x4A9A84u;
    // 0x4a9a84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A9A84u;
    {
        const bool branch_taken_0x4a9a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9A84u;
            // 0x4a9a88: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9a84) {
            ctx->pc = 0x4A9A9Cu;
            goto label_4a9a9c;
        }
    }
    ctx->pc = 0x4A9A8Cu;
    // 0x4a9a8c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x4a9a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_4a9a90:
    // 0x4a9a90: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9A90u;
    {
        const bool branch_taken_0x4a9a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a9a90) {
            ctx->pc = 0x4A9A94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9A90u;
            // 0x4a9a94: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9AA0u;
            goto label_4a9aa0;
        }
    }
    ctx->pc = 0x4A9A98u;
    // 0x4a9a98: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4a9a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4a9a9c:
    // 0x4a9a9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a9a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4a9aa0:
    // 0x4a9aa0: 0x711c0  sll         $v0, $a3, 7
    ctx->pc = 0x4a9aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x4a9aa4: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x4a9aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4a9aa8: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x4a9aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4a9aac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4a9aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4a9ab0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4a9ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x4a9ab4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a9ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a9ab8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x4a9ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x4a9abc: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x4a9abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x4a9ac0: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x4a9ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x4a9ac4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4a9ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4a9ac8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a9ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a9acc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A9ACCu;
    {
        const bool branch_taken_0x4a9acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9ACCu;
            // 0x4a9ad0: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9acc) {
            ctx->pc = 0x4A9AE4u;
            goto label_4a9ae4;
        }
    }
    ctx->pc = 0x4A9AD4u;
    // 0x4a9ad4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4a9ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4a9ad8:
    // 0x4a9ad8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4a9ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4a9adc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a9adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a9ae0: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x4a9ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_4a9ae4:
    // 0x4a9ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9AE4u;
            // 0x4a9ae8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A9AECu;
    // 0x4a9aec: 0x0  nop
    ctx->pc = 0x4a9aecu;
    // NOP
}
