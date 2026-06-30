#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D2B10
// Address: 0x1d2b10 - 0x1d2d40
void sub_001D2B10_0x1d2b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2B10_0x1d2b10");
#endif

    switch (ctx->pc) {
        case 0x1d2b6cu: goto label_1d2b6c;
        case 0x1d2bb8u: goto label_1d2bb8;
        case 0x1d2c98u: goto label_1d2c98;
        case 0x1d2cd8u: goto label_1d2cd8;
        default: break;
    }

    ctx->pc = 0x1d2b10u;

    // 0x1d2b10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d2b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d2b14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d2b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d2b18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d2b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d2b1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d2b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d2b20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d2b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2b24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d2b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d2b28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d2b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b2c: 0x1220007c  beqz        $s1, . + 4 + (0x7C << 2)
    ctx->pc = 0x1D2B2Cu;
    {
        const bool branch_taken_0x1d2b2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B2Cu;
            // 0x1d2b30: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b2c) {
            ctx->pc = 0x1D2D20u;
            goto label_1d2d20;
        }
    }
    ctx->pc = 0x1D2B34u;
    // 0x1d2b34: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d2b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1d2b38: 0x3c034649  lui         $v1, 0x4649
    ctx->pc = 0x1d2b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17993 << 16));
    // 0x1d2b3c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1d2b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d2b40: 0x3463534e  ori         $v1, $v1, 0x534E
    ctx->pc = 0x1d2b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21326);
    // 0x1d2b44: 0x54830077  bnel        $a0, $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x1D2B44u;
    {
        const bool branch_taken_0x1d2b44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d2b44) {
            ctx->pc = 0x1D2B48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B44u;
            // 0x1d2b48: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2D24u;
            goto label_1d2d24;
        }
    }
    ctx->pc = 0x1D2B4Cu;
    // 0x1d2b4c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1d2b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1d2b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b54: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x1d2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1d2b58: 0x8cd20008  lw          $s2, 0x8($a2)
    ctx->pc = 0x1d2b58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1d2b5c: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x1d2b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1d2b60: 0xc29821  addu        $s3, $a2, $v0
    ctx->pc = 0x1d2b60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d2b64: 0xc04a508  jal         func_129420
    ctx->pc = 0x1D2B64u;
    SET_GPR_U32(ctx, 31, 0x1D2B6Cu);
    ctx->pc = 0x1D2B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B64u;
            // 0x1d2b68: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B6Cu; }
        if (ctx->pc != 0x1D2B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2B6Cu; }
        if (ctx->pc != 0x1D2B6Cu) { return; }
    }
    ctx->pc = 0x1D2B6Cu;
label_1d2b6c:
    // 0x1d2b6c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1d2b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d2b70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d2b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b74: 0x26670010  addiu       $a3, $s3, 0x10
    ctx->pc = 0x1d2b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1d2b78: 0x18a00051  blez        $a1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1D2B78u;
    {
        const bool branch_taken_0x1d2b78 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1D2B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B78u;
            // 0x1d2b7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b78) {
            ctx->pc = 0x1D2CC0u;
            goto label_1d2cc0;
        }
    }
    ctx->pc = 0x1D2B80u;
    // 0x1d2b80: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x1d2b80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1d2b84: 0x14200040  bnez        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x1D2B84u;
    {
        const bool branch_taken_0x1d2b84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B84u;
            // 0x1d2b88: 0x24a4fff8  addiu       $a0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b84) {
            ctx->pc = 0x1D2C88u;
            goto label_1d2c88;
        }
    }
    ctx->pc = 0x1D2B8Cu;
    // 0x1d2b8c: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2B8Cu;
    {
        const bool branch_taken_0x1d2b8c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1D2B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B8Cu;
            // 0x1d2b90: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b8c) {
            ctx->pc = 0x1D2BACu;
            goto label_1d2bac;
        }
    }
    ctx->pc = 0x1D2B94u;
    // 0x1d2b94: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x1d2b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x1d2b98: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1d2b98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1d2b9c: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x1d2b9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1d2ba0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D2BA0u;
    {
        const bool branch_taken_0x1d2ba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2ba0) {
            ctx->pc = 0x1D2BACu;
            goto label_1d2bac;
        }
    }
    ctx->pc = 0x1D2BA8u;
    // 0x1d2ba8: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x1d2ba8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1d2bac:
    // 0x1d2bac: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1D2BACu;
    {
        const bool branch_taken_0x1d2bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2bac) {
            ctx->pc = 0x1D2C88u;
            goto label_1d2c88;
        }
    }
    ctx->pc = 0x1D2BB4u;
    // 0x1d2bb4: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1d2bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d2bb8:
    // 0x1d2bb8: 0x8cea0000  lw          $t2, 0x0($a3)
    ctx->pc = 0x1d2bb8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d2bbc: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1d2bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1d2bc0: 0x104482a  slt         $t1, $t0, $a0
    ctx->pc = 0x1d2bc0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1d2bc4: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d2bc4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d2bc8: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d2bc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d2bcc: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d2bccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d2bd0: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d2bd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d2bd4: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d2bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d2bd8: 0x8cea0004  lw          $t2, 0x4($a3)
    ctx->pc = 0x1d2bd8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1d2bdc: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d2bdcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d2be0: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d2be0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d2be4: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d2be4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d2be8: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d2be8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d2bec: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d2becu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d2bf0: 0x8cea0008  lw          $t2, 0x8($a3)
    ctx->pc = 0x1d2bf0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1d2bf4: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d2bf4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d2bf8: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d2bf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d2bfc: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d2bfcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d2c00: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d2c00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d2c04: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d2c04u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d2c08: 0x8cea000c  lw          $t2, 0xC($a3)
    ctx->pc = 0x1d2c08u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1d2c0c: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d2c0cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d2c10: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d2c10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d2c14: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d2c14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d2c18: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d2c18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d2c1c: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d2c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d2c20: 0x8cea0010  lw          $t2, 0x10($a3)
    ctx->pc = 0x1d2c20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1d2c24: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d2c24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d2c28: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d2c28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d2c2c: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d2c2cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d2c30: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d2c30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d2c34: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d2c34u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d2c38: 0x8cea0014  lw          $t2, 0x14($a3)
    ctx->pc = 0x1d2c38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d2c3c: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d2c3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d2c40: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d2c40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d2c44: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d2c44u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d2c48: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d2c48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d2c4c: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d2c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d2c50: 0x8cea0018  lw          $t2, 0x18($a3)
    ctx->pc = 0x1d2c50u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1d2c54: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d2c54u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d2c58: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d2c58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d2c5c: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d2c5cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d2c60: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d2c60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d2c64: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d2c64u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d2c68: 0x8cea001c  lw          $t2, 0x1C($a3)
    ctx->pc = 0x1d2c68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1d2c6c: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d2c6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d2c70: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1d2c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1d2c74: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d2c74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d2c78: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d2c78u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d2c7c: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d2c7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d2c80: 0x1520ffcd  bnez        $t1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1D2C80u;
    {
        const bool branch_taken_0x1d2c80 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C80u;
            // 0x1d2c84: 0xad6a0000  sw          $t2, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c80) {
            ctx->pc = 0x1D2BB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d2bb8;
        }
    }
    ctx->pc = 0x1D2C88u;
label_1d2c88:
    // 0x1d2c88: 0x105082a  slt         $at, $t0, $a1
    ctx->pc = 0x1d2c88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d2c8c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1D2C8Cu;
    {
        const bool branch_taken_0x1d2c8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2c8c) {
            ctx->pc = 0x1D2CC0u;
            goto label_1d2cc0;
        }
    }
    ctx->pc = 0x1D2C94u;
    // 0x1d2c94: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x1d2c94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d2c98:
    // 0x1d2c98: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1d2c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d2c9c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d2c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d2ca0: 0x105182a  slt         $v1, $t0, $a1
    ctx->pc = 0x1d2ca0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d2ca4: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x1d2ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x1d2ca8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1d2ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1d2cac: 0x2044821  addu        $t1, $s0, $a0
    ctx->pc = 0x1d2cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1d2cb0: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x1d2cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d2cb4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1d2cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1d2cb8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D2CB8u;
    {
        const bool branch_taken_0x1d2cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CB8u;
            // 0x1d2cbc: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2cb8) {
            ctx->pc = 0x1D2C98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d2c98;
        }
    }
    ctx->pc = 0x1D2CC0u;
label_1d2cc0:
    // 0x1d2cc0: 0x1a400017  blez        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D2CC0u;
    {
        const bool branch_taken_0x1d2cc0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1D2CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CC0u;
            // 0x1d2cc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2cc0) {
            ctx->pc = 0x1D2D20u;
            goto label_1d2d20;
        }
    }
    ctx->pc = 0x1D2CC8u;
    // 0x1d2cc8: 0x3c03444e  lui         $v1, 0x444E
    ctx->pc = 0x1d2cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17486 << 16));
    // 0x1d2ccc: 0x3c04544d  lui         $a0, 0x544D
    ctx->pc = 0x1d2cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21581 << 16));
    // 0x1d2cd0: 0x3465454e  ori         $a1, $v1, 0x454E
    ctx->pc = 0x1d2cd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17742);
    // 0x1d2cd4: 0x3487534e  ori         $a3, $a0, 0x534E
    ctx->pc = 0x1d2cd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21326);
label_1d2cd8:
    // 0x1d2cd8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1d2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d2cdc: 0x14670008  bne         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2CDCu;
    {
        const bool branch_taken_0x1d2cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1d2cdc) {
            ctx->pc = 0x1D2D00u;
            goto label_1d2d00;
        }
    }
    ctx->pc = 0x1D2CE4u;
    // 0x1d2ce4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D2CE4u;
    {
        const bool branch_taken_0x1d2ce4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2ce4) {
            ctx->pc = 0x1D2D20u;
            goto label_1d2d20;
        }
    }
    ctx->pc = 0x1D2CECu;
    // 0x1d2cec: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1d2cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1d2cf0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1d2cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d2cf4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d2cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1d2cf8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2CF8u;
    {
        const bool branch_taken_0x1d2cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2cf8) {
            ctx->pc = 0x1D2D20u;
            goto label_1d2d20;
        }
    }
    ctx->pc = 0x1D2D00u;
label_1d2d00:
    // 0x1d2d00: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2D00u;
    {
        const bool branch_taken_0x1d2d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d2d00) {
            ctx->pc = 0x1D2D20u;
            goto label_1d2d20;
        }
    }
    ctx->pc = 0x1D2D08u;
    // 0x1d2d08: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1d2d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1d2d0c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d2d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d2d10: 0x112182a  slt         $v1, $t0, $s2
    ctx->pc = 0x1d2d10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d2d14: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1d2d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1d2d18: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D2D18u;
    {
        const bool branch_taken_0x1d2d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D18u;
            // 0x1d2d1c: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d18) {
            ctx->pc = 0x1D2CD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d2cd8;
        }
    }
    ctx->pc = 0x1D2D20u;
label_1d2d20:
    // 0x1d2d20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d2d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d2d24:
    // 0x1d2d24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d2d24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2d28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d2d28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2d2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d2d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2d30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d2d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2d34: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D34u;
            // 0x1d2d38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D2D3Cu;
    // 0x1d2d3c: 0x0  nop
    ctx->pc = 0x1d2d3cu;
    // NOP
}
