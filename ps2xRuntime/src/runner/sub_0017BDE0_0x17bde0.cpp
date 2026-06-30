#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017BDE0
// Address: 0x17bde0 - 0x17bed0
void sub_0017BDE0_0x17bde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BDE0_0x17bde0");
#endif

    switch (ctx->pc) {
        case 0x17be04u: goto label_17be04;
        case 0x17be20u: goto label_17be20;
        case 0x17be64u: goto label_17be64;
        case 0x17be80u: goto label_17be80;
        case 0x17beacu: goto label_17beac;
        default: break;
    }

    ctx->pc = 0x17bde0u;

    // 0x17bde0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17bde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17bde4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17bde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17bde8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17bde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17bdec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17bdecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bdf0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17bdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17bdf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17bdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17bdf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17bdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17bdfc: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x17BDFCu;
    SET_GPR_U32(ctx, 31, 0x17BE04u);
    ctx->pc = 0x17BE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BDFCu;
            // 0x17be00: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE04u; }
        if (ctx->pc != 0x17BE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE04u; }
        if (ctx->pc != 0x17BE04u) { return; }
    }
    ctx->pc = 0x17BE04u;
label_17be04:
    // 0x17be04: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17be04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17be08: 0x24514420  addiu       $s1, $v0, 0x4420
    ctx->pc = 0x17be08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 17440));
    // 0x17be0c: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x17be0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17be10: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x17BE10u;
    {
        const bool branch_taken_0x17be10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BE10u;
            // 0x17be14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be10) {
            ctx->pc = 0x17BE44u;
            goto label_17be44;
        }
    }
    ctx->pc = 0x17BE18u;
    // 0x17be18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17be18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17be1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17be20:
    // 0x17be20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17be20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17be24: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x17be24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x17be28: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x17be28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x17be2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17BE2Cu;
    {
        const bool branch_taken_0x17be2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BE2Cu;
            // 0x17be30: 0x51980  sll         $v1, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be2c) {
            ctx->pc = 0x17BE44u;
            goto label_17be44;
        }
    }
    ctx->pc = 0x17BE34u;
    // 0x17be34: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x17be34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17be38: 0x0  nop
    ctx->pc = 0x17be38u;
    // NOP
    // 0x17be3c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17BE3Cu;
    {
        const bool branch_taken_0x17be3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BE3Cu;
            // 0x17be40: 0x668821  addu        $s1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be3c) {
            ctx->pc = 0x17BE20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17be20;
        }
    }
    ctx->pc = 0x17BE44u;
label_17be44:
    // 0x17be44: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x17be44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17be48: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17BE48u;
    {
        const bool branch_taken_0x17be48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x17BE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BE48u;
            // 0x17be4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be48) {
            ctx->pc = 0x17BE70u;
            goto label_17be70;
        }
    }
    ctx->pc = 0x17BE50u;
    // 0x17be50: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17be50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17be54: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x17be54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17be58: 0x24845cb0  addiu       $a0, $a0, 0x5CB0
    ctx->pc = 0x17be58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23728));
    // 0x17be5c: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x17BE5Cu;
    SET_GPR_U32(ctx, 31, 0x17BE64u);
    ctx->pc = 0x17BE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BE5Cu;
            // 0x17be60: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE64u; }
        if (ctx->pc != 0x17BE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE64u; }
        if (ctx->pc != 0x17BE64u) { return; }
    }
    ctx->pc = 0x17BE64u;
label_17be64:
    // 0x17be64: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17BE64u;
    {
        const bool branch_taken_0x17be64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BE64u;
            // 0x17be68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be64) {
            ctx->pc = 0x17BEA4u;
            goto label_17bea4;
        }
    }
    ctx->pc = 0x17BE6Cu;
    // 0x17be6c: 0x0  nop
    ctx->pc = 0x17be6cu;
    // NOP
label_17be70:
    // 0x17be70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17be70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be74: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x17be74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17be78: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x17BE78u;
    SET_GPR_U32(ctx, 31, 0x17BE80u);
    ctx->pc = 0x17BE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BE78u;
            // 0x17be7c: 0x24100040  addiu       $s0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE80u; }
        if (ctx->pc != 0x17BE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE80u; }
        if (ctx->pc != 0x17BE80u) { return; }
    }
    ctx->pc = 0x17BE80u;
label_17be80:
    // 0x17be80: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x17be80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x17be84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17be84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17be88: 0xae300038  sw          $s0, 0x38($s1)
    ctx->pc = 0x17be88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
    // 0x17be8c: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x17be8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x17be90: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x17be90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x17be94: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x17be94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x17be98: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x17be98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17be9c: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x17be9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x17bea0: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x17bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_17bea4:
    // 0x17bea4: 0xc061282  jal         func_184A08
    ctx->pc = 0x17BEA4u;
    SET_GPR_U32(ctx, 31, 0x17BEACu);
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BEACu; }
        if (ctx->pc != 0x17BEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A08_0x184a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BEACu; }
        if (ctx->pc != 0x17BEACu) { return; }
    }
    ctx->pc = 0x17BEACu;
label_17beac:
    // 0x17beac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17beacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17beb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17beb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17beb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17beb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17beb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17beb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bebc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17bebcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bec0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17bec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bec4: 0x3e00008  jr          $ra
    ctx->pc = 0x17BEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BEC4u;
            // 0x17bec8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BECCu;
    // 0x17becc: 0x0  nop
    ctx->pc = 0x17beccu;
    // NOP
}
