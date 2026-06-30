#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178AD0
// Address: 0x178ad0 - 0x178c18
void sub_00178AD0_0x178ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178AD0_0x178ad0");
#endif

    switch (ctx->pc) {
        case 0x178b10u: goto label_178b10;
        case 0x178b68u: goto label_178b68;
        case 0x178b78u: goto label_178b78;
        case 0x178bb8u: goto label_178bb8;
        default: break;
    }

    ctx->pc = 0x178ad0u;

    // 0x178ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178ad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178adc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178ae0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x178ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ae4: 0x10c00046  beqz        $a2, . + 4 + (0x46 << 2)
    ctx->pc = 0x178AE4u;
    {
        const bool branch_taken_0x178ae4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x178AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178AE4u;
            // 0x178ae8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ae4) {
            ctx->pc = 0x178C00u;
            goto label_178c00;
        }
    }
    ctx->pc = 0x178AECu;
    // 0x178aec: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x178aecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x178af0: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x178af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x178af4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x178AF4u;
    {
        const bool branch_taken_0x178af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x178AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178AF4u;
            // 0x178af8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178af4) {
            ctx->pc = 0x178B48u;
            goto label_178b48;
        }
    }
    ctx->pc = 0x178AFCu;
    // 0x178afc: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x178AFCu;
    {
        const bool branch_taken_0x178afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x178B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178AFCu;
            // 0x178b00: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178afc) {
            ctx->pc = 0x178B58u;
            goto label_178b58;
        }
    }
    ctx->pc = 0x178B04u;
    // 0x178b04: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x178b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x178b08: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x178b08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x178b0c: 0x0  nop
    ctx->pc = 0x178b0cu;
    // NOP
label_178b10:
    // 0x178b10: 0x2081821  addu        $v1, $s0, $t0
    ctx->pc = 0x178b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x178b14: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x178b14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x178b18: 0x29020129  slti        $v0, $t0, 0x129
    ctx->pc = 0x178b18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)297) ? 1 : 0);
    // 0x178b1c: 0xc82821  addu        $a1, $a2, $t0
    ctx->pc = 0x178b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x178b20: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x178B20u;
    {
        const bool branch_taken_0x178b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178B20u;
            // 0x178b24: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b20) {
            ctx->pc = 0x178B4Cu;
            goto label_178b4c;
        }
    }
    ctx->pc = 0x178B28u;
    // 0x178b28: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x178b28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x178b2c: 0x10470008  beq         $v0, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x178B2Cu;
    {
        const bool branch_taken_0x178b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x178b2c) {
            ctx->pc = 0x178B50u;
            goto label_178b50;
        }
    }
    ctx->pc = 0x178B34u;
    // 0x178b34: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x178B34u;
    {
        const bool branch_taken_0x178b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178b34) {
            ctx->pc = 0x178B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178B34u;
            // 0x178b38: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178B10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_178b10;
        }
    }
    ctx->pc = 0x178B3Cu;
    // 0x178b3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x178B3Cu;
    {
        const bool branch_taken_0x178b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178b3c) {
            ctx->pc = 0x178B50u;
            goto label_178b50;
        }
    }
    ctx->pc = 0x178B44u;
    // 0x178b44: 0x0  nop
    ctx->pc = 0x178b44u;
    // NOP
label_178b48:
    // 0x178b48: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x178b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_178b4c:
    // 0x178b4c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x178b4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_178b50:
    // 0x178b50: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x178B50u;
    {
        const bool branch_taken_0x178b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178B50u;
            // 0x178b54: 0x2081821  addu        $v1, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b50) {
            ctx->pc = 0x178B80u;
            goto label_178b80;
        }
    }
    ctx->pc = 0x178B58u;
label_178b58:
    // 0x178b58: 0x2081021  addu        $v0, $s0, $t0
    ctx->pc = 0x178b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x178b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b60: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x178B60u;
    SET_GPR_U32(ctx, 31, 0x178B68u);
    ctx->pc = 0x178B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178B60u;
            // 0x178b64: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B68u; }
        if (ctx->pc != 0x178B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B68u; }
        if (ctx->pc != 0x178B68u) { return; }
    }
    ctx->pc = 0x178B68u;
label_178b68:
    // 0x178b68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b70: 0xc04a508  jal         func_129420
    ctx->pc = 0x178B70u;
    SET_GPR_U32(ctx, 31, 0x178B78u);
    ctx->pc = 0x178B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178B70u;
            // 0x178b74: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B78u; }
        if (ctx->pc != 0x178B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B78u; }
        if (ctx->pc != 0x178B78u) { return; }
    }
    ctx->pc = 0x178B78u;
label_178b78:
    // 0x178b78: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x178B78u;
    {
        const bool branch_taken_0x178b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178B78u;
            // 0x178b7c: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b78) {
            ctx->pc = 0x178C00u;
            goto label_178c00;
        }
    }
    ctx->pc = 0x178B80u;
label_178b80:
    // 0x178b80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x178b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x178b84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x178b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178b88: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178B88u;
    {
        const bool branch_taken_0x178b88 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x178B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178B88u;
            // 0x178b8c: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b88) {
            ctx->pc = 0x178B98u;
            goto label_178b98;
        }
    }
    ctx->pc = 0x178B90u;
    // 0x178b90: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x178b90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x178b94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178b94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178b98:
    // 0x178b98: 0x29020129  slti        $v0, $t0, 0x129
    ctx->pc = 0x178b98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)297) ? 1 : 0);
    // 0x178b9c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x178B9Cu;
    {
        const bool branch_taken_0x178b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178B9Cu;
            // 0x178ba0: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b9c) {
            ctx->pc = 0x178BDCu;
            goto label_178bdc;
        }
    }
    ctx->pc = 0x178BA4u;
    // 0x178ba4: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x178ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x178ba8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x178ba8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178bac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x178BACu;
    {
        const bool branch_taken_0x178bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178BACu;
            // 0x178bb0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178bac) {
            ctx->pc = 0x178BDCu;
            goto label_178bdc;
        }
    }
    ctx->pc = 0x178BB4u;
    // 0x178bb4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x178bb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_178bb8:
    // 0x178bb8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x178bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x178bbc: 0x28a40129  slti        $a0, $a1, 0x129
    ctx->pc = 0x178bbcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)297) ? 1 : 0);
    // 0x178bc0: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x178bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x178bc4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x178bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x178bc8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x178BC8u;
    {
        const bool branch_taken_0x178bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x178BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178BC8u;
            // 0x178bcc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178bc8) {
            ctx->pc = 0x178BDCu;
            goto label_178bdc;
        }
    }
    ctx->pc = 0x178BD0u;
    // 0x178bd0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x178bd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178bd4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x178BD4u;
    {
        const bool branch_taken_0x178bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178bd4) {
            ctx->pc = 0x178BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178BD4u;
            // 0x178bd8: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178BB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_178bb8;
        }
    }
    ctx->pc = 0x178BDCu;
label_178bdc:
    // 0x178bdc: 0xa81023  subu        $v0, $a1, $t0
    ctx->pc = 0x178bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x178be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178be4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x178be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x178be8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178bec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178bf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178bf4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x178bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x178bf8: 0x805e17e  j           func_1785F8
    ctx->pc = 0x178BF8u;
    ctx->pc = 0x178BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178BF8u;
            // 0x178bfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1785F8u;
    if (runtime->hasFunction(0x1785F8u)) {
        auto targetFn = runtime->lookupFunction(0x1785F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001785F8_0x1785f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x178C00u;
label_178c00:
    // 0x178c00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178c04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178c08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x178C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178C0Cu;
            // 0x178c10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178C14u;
    // 0x178c14: 0x0  nop
    ctx->pc = 0x178c14u;
    // NOP
}
