#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5AF0
// Address: 0x1b5af0 - 0x1b5c40
void sub_001B5AF0_0x1b5af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5AF0_0x1b5af0");
#endif

    switch (ctx->pc) {
        case 0x1b5b0cu: goto label_1b5b0c;
        case 0x1b5b50u: goto label_1b5b50;
        case 0x1b5b80u: goto label_1b5b80;
        case 0x1b5bb8u: goto label_1b5bb8;
        default: break;
    }

    ctx->pc = 0x1b5af0u;

    // 0x1b5af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5af4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5af8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5afc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b5afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b5b00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5b04: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B5B04u;
    SET_GPR_U32(ctx, 31, 0x1B5B0Cu);
    ctx->pc = 0x1B5B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5B04u;
            // 0x1b5b08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5B0Cu; }
        if (ctx->pc != 0x1B5B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5B0Cu; }
        if (ctx->pc != 0x1B5B0Cu) { return; }
    }
    ctx->pc = 0x1B5B0Cu;
label_1b5b0c:
    // 0x1b5b0c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b5b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b5b10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5B10u;
    {
        const bool branch_taken_0x1b5b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5B10u;
            // 0x1b5b14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b10) {
            ctx->pc = 0x1B5B30u;
            goto label_1b5b30;
        }
    }
    ctx->pc = 0x1B5B18u;
    // 0x1b5b18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5b1c: 0x34a5015c  ori         $a1, $a1, 0x15C
    ctx->pc = 0x1b5b1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)348);
    // 0x1b5b20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5b24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5b28: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B5B28u;
    ctx->pc = 0x1B5B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5B28u;
            // 0x1b5b2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B5B30u;
label_1b5b30:
    // 0x1b5b30: 0x8e043720  lw          $a0, 0x3720($s0)
    ctx->pc = 0x1b5b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14112)));
    // 0x1b5b34: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B5B34u;
    {
        const bool branch_taken_0x1b5b34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5b34) {
            ctx->pc = 0x1B5B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5B34u;
            // 0x1b5b38: 0xac910dd4  sw          $s1, 0xDD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3540), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5B3Cu;
            goto label_1b5b3c;
        }
    }
    ctx->pc = 0x1B5B3Cu;
label_1b5b3c:
    // 0x1b5b3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5b3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5b40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5b40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5b44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5b48: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5B48u;
            // 0x1b5b4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5B50u;
label_1b5b50:
    // 0x1b5b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b5b54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b5b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b5b58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b5b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b5b5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b5b5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5b60: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b5b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b5b64: 0x26540e1c  addiu       $s4, $s2, 0xE1C
    ctx->pc = 0x1b5b64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 3612));
    // 0x1b5b68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5b6c: 0x26513724  addiu       $s1, $s2, 0x3724
    ctx->pc = 0x1b5b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 14116));
    // 0x1b5b70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b5b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b5b74: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b5b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b5b78: 0xc069a18  jal         func_1A6860
    ctx->pc = 0x1B5B78u;
    SET_GPR_U32(ctx, 31, 0x1B5B80u);
    ctx->pc = 0x1B5B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5B78u;
            // 0x1b5b7c: 0x8e503720  lw          $s0, 0x3720($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6860u;
    if (runtime->hasFunction(0x1A6860u)) {
        auto targetFn = runtime->lookupFunction(0x1A6860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5B80u; }
        if (ctx->pc != 0x1B5B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6860_0x1a6860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5B80u; }
        if (ctx->pc != 0x1B5B80u) { return; }
    }
    ctx->pc = 0x1B5B80u;
label_1b5b80:
    // 0x1b5b80: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1B5B80u;
    {
        const bool branch_taken_0x1b5b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5b80) {
            ctx->pc = 0x1B5B84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5B80u;
            // 0x1b5b84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5C24u;
            goto label_1b5c24;
        }
    }
    ctx->pc = 0x1B5B88u;
    // 0x1b5b88: 0x8e020dac  lw          $v0, 0xDAC($s0)
    ctx->pc = 0x1b5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3500)));
    // 0x1b5b8c: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B5B8Cu;
    {
        const bool branch_taken_0x1b5b8c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1B5B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5B8Cu;
            // 0x1b5b90: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b8c) {
            ctx->pc = 0x1B5BD0u;
            goto label_1b5bd0;
        }
    }
    ctx->pc = 0x1B5B94u;
    // 0x1b5b94: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1b5b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b5b98: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1b5b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1b5b9c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5B9Cu;
    {
        const bool branch_taken_0x1b5b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B5BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5B9Cu;
            // 0x1b5ba0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b9c) {
            ctx->pc = 0x1B5BA8u;
            goto label_1b5ba8;
        }
    }
    ctx->pc = 0x1B5BA4u;
    // 0x1b5ba4: 0x8e110dd4  lw          $s1, 0xDD4($s0)
    ctx->pc = 0x1b5ba4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3540)));
label_1b5ba8:
    // 0x1b5ba8: 0x622000a  bltzl       $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B5BA8u;
    {
        const bool branch_taken_0x1b5ba8 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1b5ba8) {
            ctx->pc = 0x1B5BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5BA8u;
            // 0x1b5bac: 0x8e020db0  lw          $v0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5BD4u;
            goto label_1b5bd4;
        }
    }
    ctx->pc = 0x1B5BB0u;
    // 0x1b5bb0: 0xc06d710  jal         func_1B5C40
    ctx->pc = 0x1B5BB0u;
    SET_GPR_U32(ctx, 31, 0x1B5BB8u);
    ctx->pc = 0x1B5BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5BB0u;
            // 0x1b5bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5C40u;
    if (runtime->hasFunction(0x1B5C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B5C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5BB8u; }
        if (ctx->pc != 0x1B5BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5C40_0x1b5c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5BB8u; }
        if (ctx->pc != 0x1B5BB8u) { return; }
    }
    ctx->pc = 0x1B5BB8u;
label_1b5bb8:
    // 0x1b5bb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b5bb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5bbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b5bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b5bc0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5BC0u;
    {
        const bool branch_taken_0x1b5bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B5BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5BC0u;
            // 0x1b5bc4: 0x2231021  addu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5bc0) {
            ctx->pc = 0x1B5BD0u;
            goto label_1b5bd0;
        }
    }
    ctx->pc = 0x1B5BC8u;
    // 0x1b5bc8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1b5bc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5bcc: 0xae020dac  sw          $v0, 0xDAC($s0)
    ctx->pc = 0x1b5bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3500), GPR_U32(ctx, 2));
label_1b5bd0:
    // 0x1b5bd0: 0x8e020db0  lw          $v0, 0xDB0($s0)
    ctx->pc = 0x1b5bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_1b5bd4:
    // 0x1b5bd4: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5BD4u;
    {
        const bool branch_taken_0x1b5bd4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1b5bd4) {
            ctx->pc = 0x1B5BF8u;
            goto label_1b5bf8;
        }
    }
    ctx->pc = 0x1B5BDCu;
    // 0x1b5bdc: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1b5bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1b5be0: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5BE0u;
    {
        const bool branch_taken_0x1b5be0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b5be0) {
            ctx->pc = 0x1B5BF8u;
            goto label_1b5bf8;
        }
    }
    ctx->pc = 0x1B5BE8u;
    // 0x1b5be8: 0xae020db0  sw          $v0, 0xDB0($s0)
    ctx->pc = 0x1b5be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3504), GPR_U32(ctx, 2));
    // 0x1b5bec: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1b5becu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5bf0: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x1b5bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1b5bf4: 0xae020db4  sw          $v0, 0xDB4($s0)
    ctx->pc = 0x1b5bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3508), GPR_U32(ctx, 2));
label_1b5bf8:
    // 0x1b5bf8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5BF8u;
    {
        const bool branch_taken_0x1b5bf8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5BF8u;
            // 0x1b5bfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5bf8) {
            ctx->pc = 0x1B5C20u;
            goto label_1b5c20;
        }
    }
    ctx->pc = 0x1B5C00u;
    // 0x1b5c00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b5c00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5c08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5c0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b5c0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b5c10: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b5c10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5c14: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b5c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b5c18: 0x806d722  j           func_1B5C88
    ctx->pc = 0x1B5C18u;
    ctx->pc = 0x1B5C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C18u;
            // 0x1b5c1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5C88u;
    if (runtime->hasFunction(0x1B5C88u)) {
        auto targetFn = runtime->lookupFunction(0x1B5C88u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5C88_0x1b5c88(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B5C20u;
label_1b5c20:
    // 0x1b5c20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5c24:
    // 0x1b5c24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5c24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5c28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b5c28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5c2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b5c2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b5c30: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b5c30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5c34: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b5c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b5c38: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C38u;
            // 0x1b5c3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5C40u;
}
